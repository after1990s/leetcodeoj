#include "graph.h"
namespace G {


Graph::Graph(int V) : m_V(V), m_E(0) {

    for (int i=0; i < m_V; i++) {
        m_adj.push_back (std::vector<int>());
    }
}

int Graph::V() const {
    return this->m_V;
}

int Graph::E() const {
    return this->m_E;
}

void Graph::addEdge(int v, int w) {
    this->adj(v).push_back(w);
    this->adj(w).push_back(v);
    m_E++;
}

std::vector<int> &Graph::adj(int v) {
    return m_adj[v];
}

int Graph::degree(Graph &G, int v) {
    int degree = 0;
    for (int w: G.adj(v)) degree++;
    return degree;
}

int Graph::maxDegree(Graph &G) {
    int max = 0;
    for (int v = 0; v < G.V(); v++) {
        if (degree(G, v) > max) {
            max = degree(G, v);
        }
    }
    return max;
}

double Graph::aveDegree(Graph &G) {
    return 2.0 * G.E() / G.V();
}


}
