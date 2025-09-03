//Name: Ly Tran Gia Khang
//ID: 24110098
//Generated with assistance from ChatGPT.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Lớp Vehicle mô tả một phương tiện với các thông tin cơ bản
class Vehicle{
private:
    string type;     // Loại phương tiện (ví dụ: "Car", "Truck")
    int maxSpeed;    // Tốc độ tối đa (km/h)
    string fuelType; // Loại nhiên liệu sử dụng (ví dụ: "Gasoline", "Diesel")
    string brand;
    double cost;

public:
    //Constructor: khởi tạo để gán giá trị ban đầu cho đối tượng
    Vehicle(string _type, int _maxSpeed, string _fuelType, string _brand, double _cost){
        type = _type;
        maxSpeed = _maxSpeed;
        fuelType = _fuelType;
        brand = _brand;
        cost = _cost;
    }

    //Getter: dùng để lấy giá trị của thuộc tính
    string getType(){return type;}
    int getMaxSpeed(){return maxSpeed;}
    string getFuelType(){return fuelType;}
    string getBrand(){return brand;}
    double getCost(){return cost;}

    //Setter: dùng để thay đổi giá trị của thuộc tính
    void setType(string _type){type = _type;}
    void setMaxSpeed(int _maxSpeed){maxSpeed = _maxSpeed;}
    void setFuelType(string _fuelType){fuelType = _fuelType;}
    void setBrand(string _brand){brand = _brand;}
    void setCost(double _cost){cost = _cost;}

    //Method hiển thị thông tin đầy đủ của phương tiện
    void displayInfo(){
        cout << "--- Vehicle Information ---" << endl;
        cout << "Type: " << getType() << endl;
        cout << "Max Speed: " << getMaxSpeed() << " km/h" << endl;
        cout << "Fuel Type: " << getFuelType() << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Cost: " << getCost() << " VNĐ" << endl;
        cout << "-------------------------" << endl;
    }

    //Method mô tả hành động tăng tốc của phương tiện
    void accelerate(){
        if(getMaxSpeed() > 0)
            cout << "The " << getType() << " is accelerating to " << getMaxSpeed() << " km/h." << endl;
        else 
            cout << "The " << getType() << " cannot accelerate because its maximum speed is 0 km/h. It is stationary." << endl;
    }

    void refuel(){
        cout << "The " << getType() << " has been refueled " << getFuelType() << " successfully!" << endl;
    }

    void honk(){
        cout << "The " << getType() << " says: BEEP BEEP!" << endl;
    }

    bool isEcoFriendly(){
        string ft = getFuelType();
        for(auto &c:ft) c = tolower(c);
        return (ft == "electric" || ft == "hybrid" || ft == "hydrogen" || ft == "biofuel" || ft == "cng" || ft == "lpg" || ft == "solar");
    }

    bool isCheaperThan (Vehicle other){
        return this->cost < other.cost;
    }
};

void menu(){
    cout << "=====Vehicle Manager=====" << endl;
    cout << "1. Add a vehicle" << endl;
    cout << "2. Show all vehicles" << endl;
    cout << "3. Accelerate the vehicle" << endl;
    cout << "4. Refuel the vehicle" << endl;
    cout << "5. Honk the vehicle" << endl;
    cout << "6. Check the Eco Friendly Fuel Type" << endl;
    cout << "7. Check vehicle is cheaper than others" << endl;
    cout << "0. Exit the menu" << endl;
    cout << "=========================" << endl;
    cout << "Choose your choices: " << endl;
}

int main(){
    vector<Vehicle> vehicles;
    int choice;
    Vehicle v1("Car",180,"Electric","VinFast",500000000); vehicles.push_back(v1);
    Vehicle v2("Motorbike",140,"Gasoline","Honda",35000000); vehicles.push_back(v2);
    Vehicle v3("Truck",250,"Diesel","Suzuki",1500000000); vehicles.push_back(v3);
    Vehicle v4("Bike",60,"Solar","Tesla",30000000); vehicles.push_back(v4);

    while(true){
        menu();
        cin >> choice;
        cin.ignore();
        
        //OPTION 1
        if(choice == 1){
        string t, ft, b;
        int ms;
        double c;

        cout << "Enter type of vehicle: "; getline(cin, t);
        cout << "Enter max speed of vehicle: "; cin >> ms;
        cin.ignore();
        cout << "Enter fuel type of vehicle: "; getline(cin, ft);
        cout << "Enter brand of vehicle: "; getline(cin, b);
        cout << "Enter cost of vehicle: "; cin >> c;
        cin.ignore();
        vehicles.emplace_back(t, ms, ft, b, c);
        cout << "Add the vehicle successfully...!" << endl;
        } 

        //OPTION 2
        else if (choice == 2){
            if(vehicles.empty()){
                cout << "No vehicles has been added yet...!" << endl;
            } else{
                cout << "\n=====List of Vehicles=====" << endl;
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ":" << endl;
                    vehicles[i].displayInfo();
                }
            }
        }

        //OPTION 3
        else if(choice == 3){
            if(vehicles.empty()){
                cout << "No vehicles available to accelerate. Please add first!" << endl;
            } else{
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ": " << vehicles[i].getType() << endl;
                }
            cout << "Which one you want to accelerate ?: ";
            int a; cin >> a;

            if(a < 1 || a > vehicles.size()){
                cout << "Cannot accelerating that vehicle...!" << endl;
            } else {
                vehicles[a-1].accelerate();
            }
            }
        }

        //OPTION 4 
        else if(choice == 4){
            if(vehicles.empty()){
                cout << "No vehicles available to refuel. Please add first!" << endl;
            } else{
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ": " << vehicles[i].getType() << endl;
                }
            cout << "Which one you want to refuel ?: ";
            int x; cin >> x;

            if(x < 1 || x > vehicles.size()){
                cout << "Cannot refuel that vehicle...!" << endl;
            } else {
                vehicles[x-1].refuel();
            }
            }
        }

        //OPTION 5
        else if(choice == 5){
            if(vehicles.empty()){
                cout << "No vehicles available to honk. Please add first!" << endl;
            } else{
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ": " << vehicles[i].getType() << endl;
                }
            cout << "Which one you want to honk ?: ";
            int y; cin >> y;

            if(y < 1 || y > vehicles.size()){
                cout << "Cannot honk that vehicle...!" << endl;
            } else {
                vehicles[y-1].honk();
            }
            }
        }

        //OPTION 6
        else if(choice == 6){
            if(vehicles.empty()){
                cout << "No vehicles available to check. Please add first!" << endl;
            } else{
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ": " << vehicles[i].getType() << endl;
                }
            cout << "Which one you want to check ?: ";
            int z; cin >> z;

            if(z < 1 || z > vehicles.size()){
                cout << "Cannot check that vehicle...!" << endl;
            } else {
                if(vehicles[z-1].isEcoFriendly()){
                    cout << "This " << vehicles[z-1].getType() << " is Eco-Friendly !!!" << endl;
                } else{
                    cout << "This " << vehicles[z-1].getType() << " is not Eco-Friendly !!!" << endl;
                }
            }
            }
        }

        //OPTION 7
        else if(choice == 7){
            if(vehicles.empty()){
                cout << "No vehicles available to check. Please add first!" << endl;
            } else{
                for(int i=0; i<vehicles.size(); i++){
                    cout << "Vehicle #" << i+1 << ": " << vehicles[i].getType() << endl;
                }
            cout << "Which is the 1st vehicle you want to check ?: ";
            int x1; cin >> x1;
            cout << "Which is the 2nd vehicle you want to check ?: ";
            int y1; cin >> y1;

            if(x1 < 1 || x1 > vehicles.size() || y1 < 1 || y1 > vehicles.size()){
                cout << "Cannot check that vehicle...!" << endl;
            } else{
                if(vehicles[x1-1].isCheaperThan(vehicles[y1-1])){
                    cout << vehicles[x1-1].getType() << " is cheaper than " << vehicles[y1-1].getType() << endl;
                } else{
                    cout << vehicles[x1-1].getType() << " is more expensive or equal to " << vehicles[y1-1].getType() << endl;
                }
            }
            }
        }

        //OPTION 0 (exit)
        else if(choice == 0){
        cout << "Thanks for being enjoy my program <3...!" << endl;
        break;
        }
        else {
        cout << "Inappropriate choice, please try again!" << endl;
    }
    system("pause");
    system("cls");
    }
}