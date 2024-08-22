#include <iostream>
#include <cstring>
using namespace std;

class Vehicle {     //base class
public:
    float milage;
    int price;
};

class Car : public Vehicle
 {
public:
    char model_type[20];
    int warranty;
    int seating_capacity;
    char fuel_type[20];
};

class Audi : public Car {
public:
    void model1() 
    {
        strcpy(model_type, "Audi A4");  //initialize data meembers
        warranty = 2;
        seating_capacity = 5;
        strcpy(fuel_type, "Petrol");
        milage = 17.4;
        price = 4381000;
        
        
        cout << "Model type: " << model_type << endl;  //display
        cout << "Warranty: " << warranty<<endl;
        cout << "Seating Capacity: "<< seating_capacity<< endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Milage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }

    void model2()
     {
        strcpy(model_type, "Audi Q3 Sportback");    //initialize
        warranty = 3;
        seating_capacity = 5;
        strcpy(fuel_type, "Petrol");
        milage = 17.4;
        price = 5143000;
        
        cout << "Model type: " << model_type << endl;  //display
        cout << "Warranty: " << warranty<< endl;
        cout << "Seating Capacity: " << seating_capacity<< endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Milage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }
};

class Ford : public Car 
{
public:
    void model() 
    {
        strcpy(model_type, "Ford Mustang");  //initialize
        warranty = 2;
        seating_capacity = 4;
        strcpy(fuel_type, "Petrol");
        milage = 13.5;
        price = 4500000;
        
        cout << "Model type: " << model_type << endl;   //display
        cout << "Warranty: " << warranty<< endl;
        cout << "Seating Capacity: " << seating_capacity<< endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Milage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }
};

class bike :public Vehicle
{
    public:
    char model_name[20];
    char make_type[20];               /*declare the data members */
    int no_of_cylinder;
    int no_of_gear;
    char cooling_type[20];   //air,liquid or oil
    char wheel_type[20];  //alloys or spokes
    float fuel_tank_size;  //in inches
};

class Bajaj : public bike 
{
    public:
    void Bajaj_model1()
     {
        strcpy(model_name, "Bajaj Platina 110");
        strcpy(make_type, "Commuter Bike");
        no_of_cylinder = 1;
        no_of_gear = 4;
        strcpy(cooling_type, "Air");
        strcpy(wheel_type, "Alloy");
        fuel_tank_size = 8.6211;
        milage = 70;
        price = 79800;

        cout << "Model name: " << model_name << endl;
        cout << "Make Type: " << make_type << endl;
        cout << "No of Cylinder: " << no_of_cylinder << endl;
        cout << "No of Gear: " << no_of_gear << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel type: " << wheel_type << endl;
        cout << "Fuel tank size: " << fuel_tank_size<< endl;
        cout << "Milage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }

    void Bajaj_model2() {
        strcpy(model_name, "Bajaj Dominar");
        strcpy(make_type, "Sport Bike");
        no_of_cylinder = 1;
        no_of_gear = 6;
        strcpy(cooling_type, "Liquid");
        strcpy(wheel_type, "Alloy");
        fuel_tank_size = 9.2572;
        milage = 27;
        price = 230000;

        cout << "Model name: " << model_name << endl;
        cout << "Make Type: " << make_type << endl;
        cout << "No of Cylinder: " << no_of_cylinder << endl;
        cout << "No of Gear: " << no_of_gear << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel type: " << wheel_type << endl;
        cout << "Fuel tank size: " << fuel_tank_size<< endl;
        cout << "Mileage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }
};

class Tvs : public bike {
public:
    void Tvs_model() {
        strcpy(model_name, "TVS Apache RTR 160");
        strcpy(make_type, "Sport Bike");
        no_of_cylinder = 1;
        no_of_gear = 5;
        strcpy(cooling_type, "Air");
        strcpy(wheel_type, "Alloy");
        fuel_tank_size = 12.0;
        milage = 50;
        price = 100000;

        cout << "Model name: " << model_name << endl;
        cout << "Make Type: " << make_type << endl;
        cout << "No of Cylinder: " << no_of_cylinder << endl;
        cout << "No of Gear: " << no_of_gear << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel type: " << wheel_type << endl;
        cout << "Fuel tank size: " << fuel_tank_size<< endl;
        cout << "Milage: " << milage<< endl;
        cout << "Price: " << price<< endl;
    }
};

int main() 
{
    Audi a;
    Ford f;
    Bajaj b;
    Tvs t;
    int choice;

    cout << "Welcome to our showroom!" << endl;
    cout << "1. Audi" << endl;
    cout << "2. Ford" << endl;
    cout << "3. Bajaj" << endl;
    cout << "4. TVS" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Audi models available:" << endl;
        cout << "1. Audi A4" << endl;
        cout << "2. Audi Q3 Sportback" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            a.model1();
        } else if (choice == 2) {
            a.model2();
        } else {
            cout << "Invalid choice!" << endl;
        }
    } else if (choice == 2) {
        f.model();
    } else if (choice == 3) {
        cout << "Bajaj models available:" << endl;
        cout << "1. Bajaj Platina 110" << endl;
        cout << "2. Bajaj Dominar" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            b.Bajaj_model1();
        } else if (choice == 2) {
            b.Bajaj_model2();
        } else {
            cout << "Invalid choice!" << endl;
        }
    } else if (choice == 4) {
        t.Tvs_model();
    } else {
        cout << "Invalid choice!" << endl;
    }
       return 0;
}
