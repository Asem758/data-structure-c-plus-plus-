#include<iostream>
using namespace std;
int main(){
	int n = 3;

	int **arr = new int *[n];

	int el;
	int a[n];

	for(int i = 0; i<n; i++){
		cout<<"Elements num in row no "<<i+1<<":";
		cin>>el;//jehetu n=3,so 3ta row er jonno input nilo 2,3,5
		a[i] = el;
		arr[i] = new int[el];// 3 ta size er jaiga creat korse
	}
//row 1 er input er jonno ekbar kaj korbe
//row 2 er input er jonno ekbar kaj korbe
//row 3 er input er jonno ekbar kaj korbe
	for(int i = 0; i<n; i++){

	//cout<<"Enter "<<a[i]<<"elements in "<<i+1<< ": ";


for(int j = 0; j<a[i]; j++){
	//row 1 er jonno array size 2
	//20 no line er moddhe n=2
	//row 2 er jonno array size 3
	//20 no line er moddhe n=3
	//row 3 er jonno array size 5
	//20 no line er moddhe n=5
			cin>>arr[i][j];
		}
	}
//33 no line is just for output
	for(int i = 0; i<n; i++){
		for(int j = 0; j<a[i]; j++){
			cout<<arr[i][j]<<" ";
		}
	}
}
