#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>sample_list;

    sample_list.push_back(10);
    sample_list.push_back(20);
    sample_list.push_back(30);

    cout << "Size: " << sample_list.size() <<endl;
    cout <<endl;

    if (sample_list.empty() == false)
    {
        cout << "List is not empty " <<endl;
    }

    for (int i = 0; i < sample_list.size(); i++)
    {
        cout << sample_list[i] <<endl;
    }
}
