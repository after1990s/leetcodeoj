#ifndef SEARCH_H
#define SEARCH_H
#include "graph.h"
namespace G {
class Search
{
public:
    Search(Graph & G, int s);
    bool marked(int v);//is v connected s?
    int count();
};


}
#endif // SEARCH_H
