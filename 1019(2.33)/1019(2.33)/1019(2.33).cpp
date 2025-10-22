#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance;        
    double pricePerLiter;   
    double kmPerLiter;      
    double parkingFee;      
    double tollFee;        

    cout << "請輸入一天的總里程數（公里）：";
    cin >> distance;
    cout << "請輸入汽油每公升的價格（元）：";
    cin >> pricePerLiter;
    cout << "請輸入每公升可行駛的公里數：";
    cin >> kmPerLiter;
    cout << "請輸入一天的停車費（元）：";
    cin >> parkingFee;
    cout << "請輸入一天的通行費（元）：";
    cin >> tollFee;
    double fuelCost = (distance / kmPerLiter) * pricePerLiter;
    double totalCost = fuelCost + parkingFee + tollFee;
    cout << fixed << setprecision(2);
    cout << "\n一天開車的油費為：" << fuelCost << " 元" << endl;
    cout << "一天開車的總花費為：" << totalCost << " 元" << endl;

    return 0;
}
