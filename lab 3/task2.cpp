// Student Name : Dania khan 
// student id 23k-0072


#include <iostream>
#include <string>
using namespace std;

class WaterBottle{
private:
    string company;
    string color;
    double waterCapacity;

public: 

    WaterBottle(string comp, string col, double capacity) {
        company = comp;
        color = col;
        waterCapacity = capacity;
    }


    string getCompany(){
        return company;
    }

    void setCompany(string comp){
        company = comp;
    }

    string getColor(){
        return color;
    }

    void setColor(string col){
        color = col;
    }

    double getWaterCapacity(){
        return waterCapacity;
    }

    void setWaterCapacity(double capacity){
        waterCapacity = capacity;
    }

    
    void updateWaterConsumption(double consumedml){
        double consumedliter = consumedml /1000.0; 
        waterCapacity -= consumedml;
        if (waterCapacity < 0) {
            waterCapacity = 0;
            cout <<"The water bottle is empty !!" << endl;
        }
    }
};

int main() {
    
    WaterBottle bottle("Company ", "Blue", 1.5);

    
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Water Capacity: " << bottle.getWaterCapacity() << " liters" << endl;

    
    double consumedml;
    cout <<"Enter the amount of water consumed (in milliliters): ";
    cin >>consumedml;

    // Update water consumption
    bottle.updateWaterConsumption(consumedml);

    cout << "Updated Water Capacity: " << bottle.getWaterCapacity() << " liters" << endl;

    return 0;
}
