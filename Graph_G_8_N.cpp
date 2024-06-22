#include<iostream>
using namespace std;

int arr[8][8];
int count = 0;
void print_Mtarix(int v)
{
   int i, j;
   for(i = 0; i < v; i++)
    {
      for(j = 0; j < v; j++)
       {
         cout << arr[i][j] << " ";
       }
         cout << endl;
   }
}

void Sink_nodes_arr(int arr[][8], int v)
{
	for(int i=0;i<v;i++)
    {
		int count=0;

		for(int j=0;j<v;j++)
        {
			if(arr[i][j])
			{
			  count++;
            }
		}

        if(count == 0)
        {
           cout<<"Sink node of graph: " << i <<endl;
        }
	}
}

void highest_outdegree(int arr[][8],int v)
{
	int maximum=0, maximum_degree = 0;

	for(int i=0; i < v; i++)
    {
		int count=0;

		for(int j=0; j < v; j++)
        {
           if(arr[i][j])
           count++;
        }

		if(count> maximum)
		{
			maximum = count;
			maximum_degree = i;
		}
	}

	cout << "Node " << maximum_degree << " has the highest out degree which is " << maximum;

}

void edges(int a, int b)
{
   arr[a][b] = 1;
   arr[b][a] = 0;
}

int main()
{
   int g = 8;

   edges(0, 1);
   edges(0, 5);
   edges(1, 2);
   edges(2, 3);
   edges(4, 3);
   edges(4, 2);
   edges(5, 1);
   edges(6, 0);
   edges(6, 5);
   edges(6, 1);
   edges(6, 7);
   edges(7, 0);

   print_Mtarix(g);
   Sink_nodes_arr(arr,g);
   highest_outdegree(arr,g);
}
