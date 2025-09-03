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
    string brand;    // Thương hiệu
    double cost;     // Giá thành

public:
    // Constructor: khởi tạo để gán giá trị ban đầu cho đối tượng
    Vehicle(string _type, int _maxSpeed, string _fuelType, string _brand, double _cost){
        type = _type;
        maxSpeed = _maxSpeed;
        fuelType = _fuelType;
        brand = _brand;
        cost = _cost;
    }

    // Getter: dùng để lấy giá trị của thuộc tính
    string getType(){return type;}
    int getMaxSpeed(){return maxSpeed;}
    string getFuelType(){return fuelType;}
    string getBrand(){return brand;}
    double getCost(){return cost;}

    // Setter: dùng để thay đổi giá trị của thuộc tính
    void setType(string _type){type = _type;}
    void setMaxSpeed(int _maxSpeed){maxSpeed = _maxSpeed;}
    void setFuelType(string _fuelType){fuelType = _fuelType;}
    void setBrand(string _brand){brand = _brand;}
    void setCost(double _cost){cost = _cost;}

    // Method hiển thị thông tin đầy đủ của phương tiện
    void displayInfo(){
        cout << "--- Vehicle Information ---" << endl;
        cout << "Type: " << getType() << endl;
        cout << "Max Speed: " << getMaxSpeed() << " km/h" << endl;
        cout << "Fuel Type: " << getFuelType() << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Cost: " << getCost() << " VNĐ" << endl;
        cout << "-------------------------" << endl;
    }

    // Method mô tả hành động tăng tốc của phương tiện
    void accelerate(){
        if(getMaxSpeed() > 0)
            cout << "The " << getType() << " is accelerating to " << getMaxSpeed() << " km/h." << endl;
        else 
            cout << "The " << getType() << " cannot accelerate because its maximum speed is 0 km/h. It is stationary." << endl;
    }

    // Method mô tả hành động nạp nhiên liệu
    void refuel(){
        cout << "The " << getType() << " has been refueled " << getFuelType() << " successfully!" << endl;
    }

    // Method mô tả hành động bấm còi
    void honk(){
        cout << "The " << getType() << " says: BEEP BEEP!" << endl;
    }

    // Method kiểm tra xem phương tiện có thân thiện môi trường không
    bool isEcoFriendly(){
        string ft = getFuelType();
        for(auto &c:ft) c = tolower(c); // chuyển toàn bộ ký tự về chữ thường
        return (ft == "electric" || ft == "hybrid" || ft == "hydrogen" || ft == "biofuel" || ft == "cng" || ft == "lpg" || ft == "solar");
    }

    // Method so sánh chi phí giữa 2 phương tiện
    bool isCheaperThan (Vehicle other){
        return this->cost < other.cost;
    }
};

int main(){
    // Khởi tạo sẵn 4 phương tiện với các thông tin khác nhau
    Vehicle v1("Car",180,"Electric","VinFast",500000000);
    Vehicle v2("Motorbike",140,"Gasoline","Honda",35000000);
    Vehicle v3("Truck",250,"Diesel","Suzuki",1500000000);
    Vehicle v4("Bike",60,"Solar","Tesla",30000000);

    // Khai báo biến để nhập dữ liệu cho phương tiện mới
    string t, ft, b;
    int ms;
    double c;

    // Nhập loại phương tiện
    cout << "Enter type of vehicle: "; getline(cin, t);

    // Nhập tốc độ tối đa (có kiểm tra dữ liệu hợp lệ)
    cout << "Enter max speed of vehicle: ";
    while (!(cin >> ms) || ms < 0){
        cout << "Invalid input...!!! Please enter a non-negative number: ";
        cin.clear();
        cin.ignore(10000,'\n');
    }
    cin.ignore();

    // Nhập loại nhiên liệu
    cout << "Enter fuel type of vehicle: "; getline(cin, ft);

    // Nhập thương hiệu
    cout << "Enter brand of vehicle: "; getline(cin, b);

    // Nhập chi phí (có kiểm tra dữ liệu hợp lệ)
    cout << "Enter cost of vehicle: ";
    while (!(cin >> c) || c < 0){
        cout << "Invalid input...!!! Please enter a non-negative number: ";
        cin.clear();
        cin.ignore(10000,'\n');
    }
    cin.ignore();

    // Tạo đối tượng Vehicle mới từ thông tin nhập vào
    Vehicle* v5 = new Vehicle(t,ms,ft,b,c);

    // Hiển thị thông tin của tất cả các phương tiện
    v1.displayInfo();
    v2.displayInfo();
    v3.displayInfo();
    v4.displayInfo();
    v5->displayInfo();

    // Thử gọi các hành động: tăng tốc, nạp nhiên liệu, bấm còi
    v1.accelerate();
    v5->accelerate();
    v2.refuel();
    v3.honk();

    // Kiểm tra tính thân thiện môi trường của phương tiện
    if(v1.isEcoFriendly()) cout << "This " << v1.getType() << " is Eco-Friendly !!!" << endl;
    else cout << "This " << v1.getType() << " is not Eco-Friendly !!!" << endl;

    if(v2.isEcoFriendly()) cout << "This " << v2.getType() << " is Eco-Friendly !!!" << endl;
    else cout << "This " << v2.getType() << " is not Eco-Friendly !!!" << endl;

    // So sánh chi phí giữa các phương tiện
    if(v1.isCheaperThan(v2)) cout << v1.getType() << " is cheaper than " << v2.getType() << endl;
    else cout << v1.getType() << " is more expensive or equal to " << v2.getType() << endl;

    if(v4.isCheaperThan(v3)) cout << v4.getType() << " is cheaper than " << v3.getType() << endl;
    else cout << v4.getType() << " is more expensive or equal to " << v3.getType() << endl;

    // Giải phóng bộ nhớ cấp phát động cho v5
    delete v5;
    return 0;
}
