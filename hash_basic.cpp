#include <iostream>
using namespace std;

int table_size = 10;

int hash_function (int k)
{
    return (k % table_size);
}

int main()
{
    int hash_table [table_size] = {0};

    int index = hash_function(67);
    hash_table[index] = 67;

    hash_table[hash_function(24)] = 24;
    hash_table[hash_function(52)] = 52;
    hash_table[hash_function(36)] = 36;
    hash_table[hash_function(44)] = 44;

    for (int i = 0; i < table_size; i++)
    {
        cout << hash_table[i] <<endl;
    }
}
