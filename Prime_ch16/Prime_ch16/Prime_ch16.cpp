// Prime_ch16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ex16.2.h"
#include "Blob.h"
#include <string>
#include <vector>
#include <thread>
int _tmain(int argc, _TCHAR* argv[])
{
    //int a[] = {3,4,5,6,8};
    //std::string k[] = { "33", "44", "55", "66" };
    //std::vector<int> v = {3,4,5,6,7,8,9,10};
    //
    //std::cout << * PRIM::myfind(v.begin(), v.end(), 8);
    //PRIM::begin(a);
    //PRIM::end(k);
    //std::cout << PRIM::arysize(k);

    //std::vector<int> k = {1,2,3,4,5,6,7,8};
    std::shared_ptr<int> k = std::make_shared<int>(3);
    //std::cout << k.get() << std::endl;;
    //std::shared_ptr<int> k1(k);
    //std::cout << k1.get() << std::endl;
    //k1.reset();
    //std::cout << k1.get() << std::endl;
    //std::cout << k.get() << std::endl;;
    //k.reset();
    //std::cout << k.get() << std::endl;;
    std::weak_ptr<int> w(k);
    k.reset();
     std::cout << w.lock().get() << std::endl;;
    //print_all_itr(k);
	return 0;
}

