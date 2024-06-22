#include <iostream>
using namespace std;

struct patient
{
    int id;
    string name;
    string contact_number;

    void patient_info()
    {
        cout << "Patient ID: " << id <<endl;
        cout << "Patient Name: " << name <<endl;
        cout << "Patient Contact Number: " << contact_number <<endl;
    }
};

int main()
{
    int id[5];

    cout << "Enter the patient ID number: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> id[i];
    }

    cout <<endl;

    patient p1;

    p1.id = 707;
    p1.name = "Shakib";
    p1.contact_number = "01627764567";

    p1.patient_info();

    cout <<endl;

    patient p2;

    p2.id = 708;
    p2.name = "Rahim";
    p2.contact_number = "01745637687";

    p2.patient_info();

    cout <<endl;

    patient p3;

    p3.id = 709;
    p3.name = "Karim";
    p3.contact_number = "01654787565";

    p3.patient_info();

    cout <<endl;

    patient p4;

    p4.id = 7010;
    p4.name = "Jalil";
    p4.contact_number = "01854768987";

    p4.patient_info();

    cout <<endl;

    patient p5;

    p5.id = 7011;
    p5.name = "Abdul";
    p5.contact_number = "01964568734";

    p5.patient_info();

}
