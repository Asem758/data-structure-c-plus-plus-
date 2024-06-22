#include<iostream>
using namespace std;

//function prototype
float* getAddressOfMaxElement(float*, int);

int main()
{
   int n;
   //prompt and read the size of the array
   cout << "Enter the length of the array: ";
   cin >> n;

   float fArray[n];
   //prompt to enter the elements into the array
   cout << "Enter the elements into the array: ";
   //read the elements into the array
   for(int i = 0; i < n; i++)
       cin >> fArray[i];

   // declare a pointer to the array
   float *ptr;
   ptr = fArray;

   //print the array elements and their address
   cout << endl << "Value\tAddress" << endl;
   for(int i = 0; i < n; i++)
       cout << *(ptr + i) << "\t" << ptr + i << "\n";

   //print the address of maximum value using getAddressOfMaxElement function
   cout << endl << "The address of the maximum value in array is: " << getAddressOfMaxElement(ptr, n);
   return 0;
}

//function that returns the address of the maximum value in the array
float* getAddressOfMaxElement(float *ptr, int n)
{
   //assume the first element to be the maximum
   float *max = ptr;
   //iterate through the array
   for(int i = 0; i < n; i++)
   {
       //compare and find the maximum element
       if(*(ptr + i) > *max)
           max = (ptr + i);
   }
   //return the address of the maximum element
   return max;
}
