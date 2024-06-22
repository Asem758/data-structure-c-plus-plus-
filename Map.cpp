#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int>my_map = {{"Nafis", 50}, {"Akash", 60}};

    my_map["Rahim"] = 30;
    my_map["Karim"] = 40;

    for (auto x = my_map.begin(); x != my_map.end(); x++)
    {
        cout << x->first << " " << x->second <<endl;
    }
}
