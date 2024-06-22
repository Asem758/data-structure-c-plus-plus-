#include<iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> mystack;
    string str;

    cout << "Please enter a string: ";
    getline(cin, str);

    // Traverse the string
     for(int i=0;i<str.length();i++){

         //push open parenthesis
        if(str[i]=='('){
            mystack.push(str[i]);
        }
        //If we encounter closed parenthesis
        else if(str[i]==')'){
            //check weather we have elements in stack
            // And if top of stack is open parenthesis or not
            //if not balance was not perfect
            if(mystack.empty() or mystack.top()!='('){
                cout << "NOT Balanced" << endl;
                return 0;
            }
            // remove open parenthesis
            // so that our current closed parenthesis and top open parenthesis are balanced

            if(!mystack.empty() and mystack.top()=='('){
                mystack.pop();
            }

        }
        else {
            continue ;
        }
   }
   // when you reach End of the string stack should be empty else it was not balanced.

   if(mystack.empty()){
       cout << "Balanced" << endl;
   } else {
       cout << "NOT Balanced" << endl;
   }
}
