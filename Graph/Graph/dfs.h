#ifndef DFS_H
#define DFS_H
#include <vector>
#include <string>
#include <sstream>
#include "graph.h"
namespace G {

class DFS
{
public:
    DFS(Graph &G, int s);

    void dfs(Graph &G, int v);
    bool marked(int w);
    int count() const;
    std::string route();
    std::vector<int> pathTo(int v) {
        if (!m_marked[v]) return std::vector<int>();
        std::vector<int> r;
        for (int x = v; x != m_s; x = m_edgeTo[x]) {
            r.push_back (x);
        }
        r.push_back (m_s);
        return r;
    }

private:
    std::vector<bool> m_marked;
    std::vector<int> m_edgeTo;
    int m_count;
    std::stringstream m_ss;
    int m_s;
};

}
#endif // DFS_H
