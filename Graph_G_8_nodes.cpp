include<iostream>
#define v 8

using namespace std;

void print_Mtarix (int graph[v][v])
{
    cout << "Adjacency matrix for the graph is given below :" <<endl;

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

    cout << "Node " << highest_degree << " has the highest out degree which is " << max;
    return;
}

int main()
{
    int graph[v][v];

    cout << "Enter manually edge from i vertex to j vertex: " <<endl;

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
