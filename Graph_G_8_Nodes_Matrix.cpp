#include <iostream>
#include <vector>

using namespace std;

void print_matrtix (int graph[v][v])
{
    cout << "Adjacency matrix for the graph is given below: " <<endl;

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << graph[i][j] <<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    return;
}

void sink_Nodes (int graph[v][v])
{
    for (int i = 0; i < v; i++)
    {
        int count = 0;

        for (int j = 0; j < v; j++)
        {
            if (graph[i][j])
            count++;
        }
        if (count == 0)
        cout << "One Sink node is: " << i <<endl;
    }
    return;
}

void highest_out_degree (int graph[v][v])
{
    int max = 0, highest_degree = 0;

    for (int i = 0; i < v; i++)
    {
        int count = 0;

        for (int j = 0; j < v; j++)
        {
            if (graph[i][j])
            count++;
        }
        if (count > max)
        {
            max = count;
            highest_degree = i;
        }
    }

    cout << "Vertex with highest Outdegree is " << highest_degree << " having degree " << max;
    return;
}

int main()
{
    int v = 8;
    vector <int> edges[v];

    edges[0].push_back[1];
    edges[0].push_back[5];

    edges[1].push_back[2];
    edges[2].push_back[3];

    edges[4].push_back[2];
    edges[4].push_back[3];
    edges[4].push_back[5];

    edges[5].push_back[1];

    edges[6].push_back[0];
    edges[6].push_back[1];
    edges[6].push_back[5];
    edges[6].push_back[7];

    edges[7].push_back[0];

    int graph[v][v];

    cout << "Enter manually to i vertex to j vertex: " <<endl;

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            int edge;
            cin >> edge;

            graph[i][j] = edge;
        }
    }

    cout <<endl<<endl;

    print_Mtarix(graph);
    sink_Nodes(graph);
    highest_out_degree(graph);

    return 0;

}
