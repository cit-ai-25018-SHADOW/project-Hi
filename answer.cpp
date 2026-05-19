#include <iostream>
#include <string>

using namespace std;

// 1. تعريف هيكل السيارة (Struct) لجمع بيانات كل سيارة
struct Car {
    string brand;    
    string model;   
    int year;      
    double price;   
    bool isGerman;   
};

int main() {
    // 2. إنشاء مصفوفة (Array) تحتوي على 3 سيارات كبيانات جاهزة للعرض فوراً
    Car showroom[3];
    
    showroom[0] = {"Mercedes-Benz", "G-Class", 2025, 150000, true};
    showroom[1] = {"BMW", "M4 Coupe", 2024, 85000, true};
    showroom[2] = {"Toyota", "Land Cruiser", 2023, 75000, false};

    int choice;
    
    cout << "======================================\n";
    cout << "   German & Global Car Showroom       \n";
    cout << "======================================\n";

    // 3. القائمة الرئيسية (Menu) باستخدام Loop و Switch Case
    do {
        cout << "\n1. View All Cars (عرض جميع السيارات)\n";
        cout << "2. View German Cars Only (السيارات الألمانية فقط)\n";
        cout << "3. Exit (خروج)\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        cout << "\n--------------------------------------\n";

        switch (choice) {
            case 1:
                // خيار 1: الدوران على المصفوفة وطباعة كل السيارات
                cout << "--- All Cars in Showroom ---\n";
                for (int i = 0; i < 3; i++) {
                    cout << showroom[i].brand << " " << showroom[i].model 
                         << " (" << showroom[i].year << ") - Price: $" << showroom[i].price;
                    
                    if (showroom[i].isGerman) cout << " [🇩🇪 German]";
                    cout << endl;
                }
                break;

            case 2:
                // خيار 2: استخدام شرط (If) لطباعة السيارات الألمانية فقط
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
        
    } while (choice != 3); // يستمر البرنامج بالعمل طالما لم يقرر المستخدم الخروج

    return 0;
}
