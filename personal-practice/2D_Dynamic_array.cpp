#include <iostream>
using namespace std;

void input_elements(int mat[][20], int);
void display_elements(int mat[][20], int);
void upper_half(int mat[][20], int);

int main()
{
   int n,arr[20][20];
   cout << ("Enter the 4x4 matrix = ");
   cin >> n;

   input_elements(arr, n);
   cout << endl;

   display_elements(arr, n);
   cout << endl;

   upper_half(arr, n);
   return 0;
}
void input_elements(int mat[][20], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
  {
    cout << ("Enter data in [%d][%d] : ", i, j);
    cin >> mat[i][j];
  }
 }
}

void display_elements(int mat[][20], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << mat[i][j];
    }
      cout << endl;
  }
}

void upper_half(int mat[][20], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j <n; j++)
    {
      if (i <= j)
  {
     cout << (mat[i][j]);
  }
      else
      {
        continue;
      }
    }
     cout << endl;
  }
}
