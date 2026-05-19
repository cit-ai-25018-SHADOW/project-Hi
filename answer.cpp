#include <iostream>
#include <string>

using namespace std;
struct Car {
    string brand;    
    string model;   
    int year;      
    double price;   
    bool isGerman;   
};

int main() {
    Car showroom[3];
    
    showroom[0] = {"Mercedes-Benz", "G-Class", 2025, 150000, true};
    showroom[1] = {"BMW", "M4 Coupe", 2024, 85000, true};
    showroom[2] = {"Toyota", "Land Cruiser", 2023, 75000, false};

    int choice;
    
    cout << "======================================\n";
    cout << "   German & Global Car Showroom       \n";
    cout << "======================================\n";

    do {
        cout << "\n1. View All Cars\n";
        cout << "2. View German Cars Only\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        cout << "\n--------------------------------------\n";

        switch (choice) {
            case 1:
         
                cout << "--- All Cars in Showroom ---\n";
                for (int i = 0; i < 3; i++) {
                    cout << showroom[i].brand << " " << showroom[i].model 
                         << " (" << showroom[i].year << ") - Price: $" << showroom[i].price;
                    
                    if (showroom[i].isGerman) cout << " [🇩🇪 German]";
                    cout << endl;
                }
                break;

            case 2:
                cout << "--- 🇩🇪 German Cars Only 🇩🇪 ---\n";
                for (int i = 0; i < 3; i++) {
                    if (showroom[i].isGerman) {
                        cout << showroom[i].brand << " " << showroom[i].model 
                             << " (" << showroom[i].year << ") - $" << showroom[i].price << endl;
                    }
                }
                break;

            case 3:
                cout << "Thank you for using our system!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
        cout << "--------------------------------------\n";
        
    } while (choice != 3);

    return 0;
}
