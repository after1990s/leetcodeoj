#include <list>
#include <memory>
#include <vector>
#include <exception>
#pragma once
template<typename T>
class Blob
{
public:
    typedef typename std::vector<T>::value_type value_type;
    typedef typename std::vector<T>::size_type size_type;
    
    
    Blob(){}
    Blob(std::initializer_list<T> il) :
        data(std::make_shared<std::vector<T>>(il)){};
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const T &t) { data->push_back(t); }
    void push_back(T &&t) { data->push_pack(t); }
    void pop_back(){ data->pop_back(); }
    T & back()
    {
        check(0, "back on empty blob");
        return data->back();
    }
    T & operator[](size_type i)
    {
        check(i, "subscript out of range");
        return (*data)[i];
    }
    ~Blob()
    {
        data.reset();
    }

    private:
    std::shared_ptr<std::vector<T>> data;
    void check(size_t i, const std::string &msg) const
    {
        if (i >= data->size())
        {
            throw std::out_of_range(msg);
        }
    }
};

