#include <iostream>
#include <sstream>
#include <string>
#include "dfs.h"
using namespace std;

int main()
{
    G::Graph p(13);
    p.addEdge (0,1);
    p.addEdge (0,2);
    p.addEdge (0,6);
    p.addEdge (0,5);
    p.addEdge (5,3);
    p.addEdge (5,4);
    p.addEdge (3,4);
    p.addEdge (4,6);

    p.addEdge (7,8);

    p.addEdge (9,10);
    p.addEdge (9,11);
    p.addEdge (9,12);
    p.addEdge (11,12);

    G::Graph p0(p);
    p0.addEdge (12, 0);

    cout << p0.toString () << endl;
    cout << p.toString();
    return 0;
}
