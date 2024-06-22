#include<iostream>
#include<map>

using namespace std;

int table_size = 10;
map<int, int>my_map;

int hash_function (int k)
{
    return (k % table_size);
}

void insert_element (int new_value)
{
    int index = hash_function(new_value);

    for (int i = 0; i < table_size; i++)
    {
         if (my_map[index] == 0)
         {
            my_map[index] = new_value;
            return;
         }
         else
         {
            index++;

         if (index >= table_size)
         {
            index = hash_function(index);
         }
       }
    }
}

void delete_element (int value)
{
    int index = hash_function(value);

    for (int i = 0; i < table_size; i++)
    {
         if (my_map[index] == value)
         {
            my_map.erase(index);
            return;
         }
         else
         {
            index++;

         if (index >= table_size)
         {
            index = hash_function(index);
         }
       }
    }
}

void print_table()
{
    for (auto x = my_map.begin(); x != my_map.end(); x++)
    {
        cout << x->first << " | " << x->second <<endl;
    }
}

int main()
{
    insert_element(43);
    insert_element(135);
    insert_element(72);
    insert_element(23);
    insert_element(99);
    insert_element(19);
    insert_element(82);

    print_table();
    delete_element(19);
    insert_element(29);
    cout <<endl;
    print_table();
}
