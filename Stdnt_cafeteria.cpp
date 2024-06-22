#include<iostream>
using namespace std;

//get input and store it in array
//here v denotes which 5 parts like 1 to 5 or 6 to 10
void get_input(int a[],int v)
{
  string st ;
  for(int i=0;i<5;i++)
  {
    if(i==0 && v==0)
    {
      st = "st";
    }
    else if(i==1 && v==0)
    {
      st = "nd";
    }
    else if(i==2 && v==0)
    {
      st = "rd";
    }
    else
    {
      st = "th";
    }

    //ask user to inout and get semester
    //v = 0 means prints 1 to 5, else if v = 5 prints 6 to 10
    cout<<(i+1+v)<<st<<" Student Semester: ";
    cin>>a[i];
  }
}

//function to sort the array
void sort(int a[])
{
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(a[i]>a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

//to print the student to ve served
void serve(int c[],int a[],int p,int s)
{
  //Curreent student to be served
  int v = c[p];
  string st;
  {}
  //find his position in array(a or b)
  for(int i=0;i<5;i++)
  {
    //if position to be found
    if(a[i] == v)
    {
      if(i==0 && v==0)
      {
        st = "st";
      }
      else if(i==1 && v==0)
      {
        st = "nd";
      }
      else if(i==2 && v==0)
      {
        st = "rd";
      }
      else
      {
        st = "th";
      }

      cout<<(i+1+s)<<st<<" Student\n"<<endl;

      //update his position orelse the same position might be printed again and again
      a[i] = -1;
    }
  }
}

int main()
{
  //array to store 10 student details
  //a for first 5 students
  //b for next 5 students
  int a[5];
  int b[5];

  //get input for a
  get_input(a,0);

  //get input for b
  get_input(b,5);

  int c[5],d[5];

  //copy elements of a to c
  for(int i=0;i<5;i++)
  {
    c[i] = a[i];
  }

  //copy elements of b to d
  for(int i=0;i<5;i++)
  {
    d[i] = b[i];
  }

  //sort c and d
  sort(d);
  sort(c);

  //print output
  cout<<endl<<"Output:\n"<<endl;

  //print first 5 students
  for(int i=0;i<5;i++)
  {
    serve(c,a,i,0);
  }

  cout<<"Cafeteria on break\n"<<endl;

  //print next 5 students
  for(int i=0;i<5;i++)
  {
    serve(d,b,i,5);
  }

  cout<<"Cafeteria closed"<<endl;

  return 0;
}
