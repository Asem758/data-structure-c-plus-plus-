#include <iostream>
using namespace std;

int main()
{
    string email = "@iub.edu.bd", password = "48479";
    string given_email, given_password;

    cout << "Enter email and Password: ";
    cin >> given_email >>  given_password;

    for (int i = 0; i < 5; i++)
    {
            if (email == given_email)
      {
               if (password == given_password)
             {
                 cout << "Login Successfully " <<endl;
                 break;
             }

                 else
                     {
                       cout << "Invalid Password " <<endl;
                     }
      }

      else
          {
            cout << "Email does not exist " <<endl;
          }
    }


    return 0;
}
