#ifndef GRAPH_H
#define GRAPH_H
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
namespace G {
class Graph
{
public:
    Graph(int V);
    Graph(Graph &p) : m_V(p.m_V) {

        m_E = p.m_E;
        m_adj = p.m_adj; //deep copy
    }
        ;
    int V() const;
    //count of edge
    int E() const;
    void addEdge(int v, int w);

    std::vector<int> & adj(int v);

    std::string toString() {
        std::stringstream s;
        s << m_V << " vertices, " << m_E << " edges.\n";
        for (int i=0; i<m_V; i++) {
            s << i << ": ";
            for (auto const & w: this->adj(i)) {
                s << w << " ";
            }
            s << "\n";
        }

        return s.str ();;
    }

private:
    const int m_V;
    int m_E;
    std::vector<std::vector<int>> m_adj;


public:
    //the count of edge that attached v.
    static int degree(Graph & G, int v);

    static int maxDegree(Graph & G);

    static double aveDegree(Graph & G);
};




}


#endif // GRAPH_H
