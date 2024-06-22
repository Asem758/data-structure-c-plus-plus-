#include <iostream>
using namespace std;

void input_arr (int a[], int z)
{
    string st;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0 && z == 0)
        {
            st = "st";
        }

        else if (i == 1 && z == 0)
        {
            st = "nd";
        }

        else if (i == 2 && z == 0)
        {
            st = "rd";
        }

        else
        {
            st = "th";
        }

        cout << (i+ 1+z) << st << " Student Semister: ";
        cin >> a[i];
    }
}

void sort_arr (int a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void food_serve (int c[], int a[], int m, int f)
{
   int z = c[m];
   string st;

   for (int i = 0; i < 5; i++)
   {
       if (a[i] == z)
       {
         if (i == 0 && z == 0)
         {
           st = "st";
         }

         else if (i == 1 && z == 0)
         {
           st = "nd";
         }

         else if (i == 2 && z == 0)
         {
           st = "rd";
         }

         else
         {
           st = "th";
         }

         cout << (i+1+f) << st << " Student\n" <<endl;

         a[i] = -1;
       }
   }
}

int main()
{
    int a[5];
    int b[5];

    input_arr (a, 0);
    input_arr (b, 5);

    int c[5] , d[5];

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        d[i] = b[i];
    }

    sort_arr (c);
    sort_arr (d);

    cout <<endl << "Output : \n" <<endl;

    for (int i = 0; i < 5; i++)
    {
        food_serve (c,a,i,0);
    }

    cout << "Cafeteria on break \n" <<endl;

    for (int i = 0; i < 5; i++)
    {
        food_serve (d,b,i,5);
    }

    cout << "Cafeteria is Closed " <<endl;

    return 0;
}
