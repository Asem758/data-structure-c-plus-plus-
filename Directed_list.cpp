#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int v = 5;
    vector<int>adges[v];

   adges[0].push_back(1);

   adges[0].push_back(2);

   adges[0].push_back(3);

   adges[1].push_back(2);

   for (int i = 0; i < v; i++)
   {
       cout << "Node " << i << ":";
       for (int j = 0; j < adges[i].size(); j++)
       {
           cout << adges[i][j] <<" ";
       }
       cout <<endl;
   }
   cout <<endl;

   for (int i = 0; i < v; i++)
   {
       cout << "Out Degree of " << i << ": " << adges[i].size() <<endl;
   }
}
