#include <iostream>
#include <list>

using namespace std;

list <int> students[13];
int table_size = 13;


int hash_function (int k)
{
    return (k % table_size);
}

void insert_student (int new_id)
{
    int index = hash_function(new_id);
    students[index].push_front(new_id);
}

void search_student (int id)
{
    int index = hash_function(id);

    for (auto i = students[index].begin(); i != students[index].end(); i++)
    {
        if (*i == id)
        {
            cout << "id: " << *i <<endl;
            return;
        }
    }
    cout << "Not Found " <<endl;
}

void delete_student (int id)
{
    int index = hash_function(id);

    for (auto i = students[index].begin(); i != students[index].end(); i++)
    {
        if (*i == id)
        {
            students[index].erase(i);
            return;
        }
    }
}

void print_student ()
{
   for (auto i = 0; i < table_size; i++)
   {
       for (auto j = students[i].begin(); j != students[i].end(); j++)
       {
           cout << *j << " ";
       }
       cout <<endl;
   }
}

int main()
{
    insert_student(100);
    insert_student(129);
    insert_student(109);
    insert_student(119);
    insert_student(189);
    insert_student(154);

    print_student();

    search_student(129);
    delete_student(129);
    search_student(129);
}
