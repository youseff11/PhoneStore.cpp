#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // For setw
using namespace std;

double readUserMoney(const string& fileName) {
    double userMoney = 0.0;
    ifstream file(fileName);

    if (file.is_open()) {
        file >> userMoney;
        file.close();
    } else {
        cout << "Error: Unable to open file " << fileName << endl;
    }

    return userMoney;
}


class Phone {
public:
    virtual void displayDetails() const = 0;
    virtual double getPrice() const {
        return 0.0; // Default cost for the base class
    }

    virtual string getPhoneName() const {
        return "Unknown Phone";
    }
};


// Concrete phone classes
class IPhone12 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for iPhone 12:\n"
             << "Storage: 128GB\n"
             << "RAM: 4GB\n"
             << "Processor: A14 Bionic\n"
             << "Battery: 2815 mAh\n"
             << "Camera: Dual 12MP\n"
             << "Price: $799\n";
    }

    double getPrice() const override {
        return 799.0; // Specific cost for iPhone 12
    }
    string getPhoneName() const override {
        return "iPhone 12";
    }
};

class SamsungGalaxyS21 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Samsung Galaxy S21:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Exynos 2100\n"
             << "Battery: 4000 mAh\n"
             << "Camera: Triple 12MP\n"
             << "Price: $999\n";
    }

    double getPrice() const override {
        return 999.0; // Specific cost for Samsung Galaxy S21
    }
    string getPhoneName() const override {
        return "SamsungGalaxyS21";
    }
};
class GooglePixel6 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Google Pixel 6:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Tensor\n"
             << "Battery: 4600 mAh\n"
             << "Camera: Dual 50MP\n"
             << "Price: $899\n";
    }
    double getPrice() const override {
        return 899.0; // Specific cost for iPhone 12
    }
    string getPhoneName() const override {
        return "GooglePixel6";
    }
};

class HuaweiMate40Pro : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Huawei Mate 40 Pro:\n"
             << "Storage: 256GB\n"
             << "RAM: 8GB\n"
             << "Processor: Kirin 9000\n"
             << "Battery: 4400 mAh\n"
             << "Camera: Quad 50MP\n"
             << "Price: $1299\n";
    }
    double getPrice() const override {
        return 1299;}
    string getPhoneName() const override {
        return "HuaweiMate40Pro";
    }
};

class SonyXperia1III : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Sony Xperia 1 III:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4500 mAh\n"
             << "Camera: Triple 12MP\n"
             << "Price: $1299\n";
    }
    double getPrice() const override {
        return 1299;}
    string getPhoneName() const override {
        return "SonyXperia1III";
    }
};

class Nokia9PureView : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Nokia 9 PureView:\n"
             << "Storage: 128GB\n"
             << "RAM: 6GB\n"
             << "Processor: Snapdragon 845\n"
             << "Battery: 3320 mAh\n"
             << "Camera: Penta 12MP\n"
             << "Price: $699\n";
    }
    double getPrice() const override {
        return 699;}
    string getPhoneName() const override {
        return "Nokia9PureView";
    }
};
class OnePlus9 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for OnePlus 9:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4500 mAh\n"
             << "Camera: Triple 48MP\n"
             << "Price: $699\n";
    }
    double getPrice() const override {
        return 699;}
    string getPhoneName() const override {
        return "OnePlus9";
    }
};

class XiaomiMi11 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Xiaomi Mi 11:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4600 mAh\n"
             << "Camera: Triple 108MP\n"
             << "Price: $799\n";
    }
    double getPrice() const override {
        return 799;}
    string getPhoneName() const override {
        return "XiaomiMi11";
    }
};

class OppoFindX3Pro : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Oppo Find X3 Pro:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4500 mAh\n"
             << "Camera: Quad 50MP\n"
             << "Price: $1099\n";
    }
    double getPrice() const override {
        return 1099;}
    string getPhoneName() const override {
        return "OppoFindX3Pro";
    }
};

class LGVelvet : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for LG Velvet:\n"
             << "Storage: 128GB\n"
             << "RAM: 6GB\n"
             << "Processor: Snapdragon 845\n"
             << "Battery: 4300 mAh\n"
             << "Camera: Triple 48MP\n"
             << "Price: $599\n";
    }
    double getPrice() const override {
        return 599;}
    string getPhoneName() const override {
        return "LGVelvet";
    }
};

class MotorolaEdgePlus : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Motorola Edge Plus:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Snapdragon 865\n"
             << "Battery: 5000 mAh\n"
             << "Camera: Triple 108MP\n"
             << "Price: $999\n";
    }
    double getPrice() const override {
        return 999;}
    string getPhoneName() const override {
        return "MotorolaEdgePlus";
    }
};

class AsusROGPhone5 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Asus ROG Phone 5:\n"
             << "Storage: 512GB\n"
             << "RAM: 16GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 6000 mAh\n"
             << "Camera: Triple 64MP\n"
             << "Price: $1299\n";
    }
    double getPrice() const override {
        return 1299;}
    string getPhoneName() const override {
        return "AsusROGPhone5";
    }
};
class VivoX60Pro : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Vivo X60 Pro:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Exynos 1080\n"
             << "Battery: 4200 mAh\n"
             << "Camera: Quad 48MP\n"
             << "Price: $899\n";
    }
    double getPrice() const override {
        return 899.0;}
    string getPhoneName() const override {
        return "VivoX60Pro";
    }
};

class RealmeGT : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Realme GT:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Snapdragon 870\n"
             << "Battery: 4500 mAh\n"
             << "Camera: Triple 64MP\n"
             << "Price: $699\n";
    }
    double getPrice() const override {
        return 699.0;}
    string getPhoneName() const override {
        return "RealmeGT";
    }
};

class LenovoLegionPhoneDuel2 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Lenovo Legion Phone Duel 2:\n"
             << "Storage: 512GB\n"
             << "RAM: 16GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 5500 mAh\n"
             << "Camera: Dual 64MP\n"
             << "Price: $1199\n";
    }
    double getPrice() const override {
        return 1199.0;}
    string getPhoneName() const override {
        return "LenovoLegionPhoneDuel2";
    }
};
class GooglePixel5 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Google Pixel 5:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Snapdragon 765G\n"
             << "Battery: 4080 mAh\n"
             << "Camera: Dual 12.2MP + 16MP\n"
             << "Price: $699\n";
    }

    double getPrice() const override {
        return 699.0; // Specific cost for Google Pixel 5
    }
    string getPhoneName() const override {
        return "GooglePixel5";
    }
};

class OnePlus8 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for OnePlus 9:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4500 mAh\n"
             << "Camera: Triple 48MP + 50MP + 2MP\n"
             << "Price: $799\n";
    }

    double getPrice() const override {
        return 799.0; // Specific cost for OnePlus 9
    }
    string getPhoneName() const override {
        return "OnePlus8";
    }
};

class iPhone13 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for iPhone 13:\n"
             << "Storage: 256GB\n"
             << "RAM: 6GB\n"
             << "Processor: A15 Bionic\n"
             << "Battery: 3095 mAh\n"
             << "Camera: Dual 12MP + 12MP\n"
             << "Price: $999\n";
    }

    double getPrice() const override {
        return 999.0; // Specific cost for iPhone 13
    }
    string getPhoneName() const override {
        return "iPhone13";
    }
};

class SamsungGalaxyZFold3 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Samsung Galaxy Z Fold 3:\n"
             << "Storage: 256GB\n"
             << "RAM: 12GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4400 mAh\n"
             << "Camera: Triple 12MP + 12MP + 12MP\n"
             << "Price: $1799\n";
    }

    double getPrice() const override {
        return 1799.0; // Specific cost for Samsung Galaxy Z Fold 3
    }
    string getPhoneName() const override {
        return "SamsungGalaxyZFold3";
    }
};

class XiaomiMi12 : public Phone {
public:
    void displayDetails() const override {
        cout << "Specifications for Xiaomi Mi 11:\n"
             << "Storage: 128GB\n"
             << "RAM: 8GB\n"
             << "Processor: Snapdragon 888\n"
             << "Battery: 4600 mAh\n"
             << "Camera: Triple 108MP + 13MP + 5MP\n"
             << "Price: $799\n";
    }

    double getPrice() const override {
        return 799.0; // Specific cost for Xiaomi Mi 11
    }
    string getPhoneName() const override {
        return "XiaomiMi12";
    }
};
// Declare an array of pointers to Phone
const int numPhones = 20;
Phone* phoneArray[numPhones];

void initializePhoneArray() {
    phoneArray[0] = new IPhone12();
    phoneArray[1] = new SamsungGalaxyS21();
    phoneArray[2] = new GooglePixel6();
    phoneArray[3] = new HuaweiMate40Pro();
    phoneArray[4] = new SonyXperia1III();
    phoneArray[5] = new Nokia9PureView();
    phoneArray[6] = new OnePlus9();
    phoneArray[7] = new XiaomiMi11();
    phoneArray[8] = new OppoFindX3Pro();
    phoneArray[9] = new LGVelvet();
    phoneArray[10] = new MotorolaEdgePlus();
    phoneArray[11] = new AsusROGPhone5();
    phoneArray[12] = new VivoX60Pro();
    phoneArray[13] = new RealmeGT();
    phoneArray[14] = new LenovoLegionPhoneDuel2();
    phoneArray[15] = new GooglePixel5();
    phoneArray[16] = new OnePlus8();
    phoneArray[17] = new iPhone13();
    phoneArray[18] = new SamsungGalaxyZFold3();
    phoneArray[19] = new XiaomiMi12();
}

void cleanupPhoneArray() {
    for (int i = 0; i < numPhones; ++i) {
        delete phoneArray[i];
    }
}


void displayWelcomeMessage() {
    cout << "------------------------------------------------------------------\n";
    cout << "|             Welcome to Joo Phones Store                        |\n";
    cout << "|                                                                |\n";
    cout << "| If you have a discount code , you will get a 10% discount      |\n";
    cout << "|                                                                |\n";
    cout << "------------------------------------------------------------------\n";
}

void displayPhoneList() {
    cout << "\nChoose a phone (1-20) or enter 0 to finish shopping:\n";

    const int numColumns = 4;
    const int phonesPerColumn = 5;

    cout << "+---------------------------------------------+\n";
    for (int i = 0; i < phonesPerColumn; ++i) {
        cout << "|";
        for (int j = 0; j < numColumns; ++j) {
            int phoneNumber = i + j * phonesPerColumn + 1;
            if (phoneNumber <= 20) {
                cout << setw(3) << left << phoneNumber << ". " << setw(25) << left;
                switch (phoneNumber) {
                    case 1: cout << "iPhone 12"; break;
                    case 2: cout << "Samsung Galaxy S21"; break;
                    case 3: cout << "Google Pixel 6"; break;
                    case 4: cout << "Huawei Mate 40 Pro"; break;
                    case 5: cout << "Sony Xperia 1 III"; break;
                    case 6: cout << "Nokia 9 PureView"; break;
                    case 7: cout << "OnePlus 9"; break;
                    case 8: cout << "Xiaomi Mi 11"; break;
                    case 9: cout << "Oppo Find X3 Pro"; break;
                    case 10: cout << "LG Velvet"; break;
                    case 11: cout << "Motorola Edge Plus"; break;
                    case 12: cout << "Asus ROG Phone 5"; break;
                    case 13: cout << "Vivo X60 Pro"; break;
                    case 14: cout << "Realme GT"; break;
                    case 15: cout << "Lenovo Legion Phone Duel "; break;
                    case 16: cout << "Google Pixel 5"; break;
                    case 17: cout << "OnePlus 8"; break;
                    case 18: cout << "iPhone 13"; break;
                    case 19: cout << "Samsung Galaxy Z Fold 3"; break;
                    case 20: cout << "Xiaomi Mi 12"; break;
                    default: break;
                }
            }
        }
        cout << "|\n";
    }
    cout << "+---------------------------------------------+\n";
}
void displayPurchasedPhones(const vector<string>& purchasedPhones) {
    cout << "\n+---------------------------------------------+\n";
    cout << "|         You have purchased the following phones:       |\n";
    cout << "+---------------------------------------------+\n";

    for (int i=0;i<purchasedPhones.size();i+=2) {
        cout << purchasedPhones[i]<<endl<<"Quantity: "<<purchasedPhones[i+1]<<endl;


    }


        cout << "+---------------------------------------------+\n";

}
// Function to reset the shopping process
// Function to reset the shopping process and display the phone list
void reset(vector<string>& purchasedPhones, double& totalCost) {
    // Clear the purchased phones and reset total cost
    purchasedPhones.clear();
    totalCost = 0.0;

    // Display a message indicating the reset
    cout << "\nShopping has been reset.\n";

    // Display the phone list again
    displayPhoneList();
}

int main() {
// Display the welcome message
    displayWelcomeMessage();
    const string userMoneyFileName = "user_money.txt";

    // Read user's total money from the file
    double userMoney = readUserMoney(userMoneyFileName);

    // Display the user's total money
    cout << "Your total money: $" << userMoney << endl;
    initializePhoneArray();


    // Ask the user if they have a code
    char hasAccount;
    cout << "Do you have a code (y/n): ";
    cin >> hasAccount;

    // Check if the user has a code and apply a discount
    double discount = 0.0;
    if (hasAccount == 'y' || hasAccount == 'Y') {
        string acc ;
        cout << "Enter the code: ";
        cin >> acc;

        discount = 0.1;
        cout<<"==============================\n";
        cout << "You have a 10% discount.\n";
    } else {
        cout << "No discount applied.\n";
    }

    double totalCost = 0.0; // Declare totalCost

    vector<string> purchasedPhones; // To store names of purchased phones

    // Display the phone list only once
    displayPhoneList();

    do {
        int choice;
        cin >> choice;

        if (choice == 0) {
            break; // Exit the loop if the user wants to finish shopping
        }

        Phone* selectedPhone = nullptr;

        switch (choice) {
            case 1:
                selectedPhone = new IPhone12();
                purchasedPhones.push_back("iPhone 12");
                break;
            case 2:
                selectedPhone = new SamsungGalaxyS21();
                purchasedPhones.push_back("Samsung Galaxy S21");
                break;
            case 3:
                selectedPhone = new GooglePixel6();
                purchasedPhones.push_back("Google Pixel 6");
                break;
            case 4:
                selectedPhone = new HuaweiMate40Pro();
                purchasedPhones.push_back("Huawei Mate 40 Pro");
                break;
            case 5:
                selectedPhone = new SonyXperia1III();
                purchasedPhones.push_back("Sony Xperia 1 III");
                break;
            case 6:
                selectedPhone = new Nokia9PureView();
                purchasedPhones.push_back("Nokia 9 PureView");
                break;
            case 7:
                selectedPhone = new OnePlus9();
                purchasedPhones.push_back("OnePlus 9");
                break;
            case 8:
                selectedPhone = new XiaomiMi11();
                purchasedPhones.push_back("Xiaomi Mi 11");
                break;
            case 9:
                selectedPhone = new OppoFindX3Pro();
                purchasedPhones.push_back("Oppo Find X3 Pro");
                break;
            case 10:
                selectedPhone = new LGVelvet();
                purchasedPhones.push_back("LG Velvet");
                break;
            case 11:
                selectedPhone = new MotorolaEdgePlus();
                purchasedPhones.push_back("Motorola Edge Plus");
                break;
            case 12:
                selectedPhone = new AsusROGPhone5();
                purchasedPhones.push_back("Asus ROG Phone 5");
                break;
            case 13:
                selectedPhone = new VivoX60Pro();
                purchasedPhones.push_back("Vivo X60 Pro");
                break;
            case 14:
                selectedPhone = new RealmeGT();
                purchasedPhones.push_back("Realme GT");
                break;
            case 15:
                selectedPhone = new LenovoLegionPhoneDuel2();
                purchasedPhones.push_back("Lenovo Legion Phone Duel 2");
                break;
            case 16:
                selectedPhone = new GooglePixel5();
                purchasedPhones.push_back("Google Pixel 5");
                break;
            case 17:
                selectedPhone = new OnePlus8();
                purchasedPhones.push_back("OnePlus 8");
                break;
            case 18:
                selectedPhone = new iPhone13();
                purchasedPhones.push_back("iPhone 13");
                break;
            case 19:
                selectedPhone = new SamsungGalaxyZFold3();
                purchasedPhones.push_back("Samsung Galaxy Z Fold 3");
                break;
            case 20:
                selectedPhone = new XiaomiMi12();
                purchasedPhones.push_back("Xiaomi Mi 12");
                break;
            default:
                cout << "Invalid choice\n";
                return 1;
        }
        // Display phone details
        cout << "\nPhone details\n";
        cout << "=====================================\n";
        selectedPhone->displayDetails();

// Ask the user about the quantity
        int quantity;
        cout << "\nEnter the quantity you want to buy (1 or more):or 0 to exit ";
        cin >> quantity;
        purchasedPhones.push_back(to_string(quantity));
        if (quantity >= 1) {
            // Calculate the discounted price for a single phone
            double discountedPrice = selectedPhone->getPrice() - (selectedPhone->getPrice() * discount);

            // Calculate the total cost for the specified quantity
            double totalCostForPhone = discountedPrice * quantity;

            // Add the total cost for this phone to the overall total cost
            totalCost += totalCostForPhone;

            cout << "Added " << quantity << " " << selectedPhone->getPhoneName()
                 << "(s) to your cart. Total Cost: $" << totalCostForPhone << "\n";
        } else {
            cout << "Invalid quantity. Phone not added to your cart.\n";
        }

// Clean up dynamically allocated memory
        delete selectedPhone;
        // Ask the user if they want to buy another phone
        char buyAnother;
        cout << "\nDo you want to buy another phone? (y/n): ";
        cin >> buyAnother;

        // Validate user input
        while (buyAnother != 'y' && buyAnother != 'Y' && buyAnother != 'n' && buyAnother != 'N') {
            cout << "Invalid character. Please enter 'y' or 'n': ";
            cin >> buyAnother;
        }


        if (buyAnother == 'n' || buyAnother == 'N') {
            if (totalCost > 0.0) {
                displayPurchasedPhones(purchasedPhones);

                // Calculate the discounted total cost
                double discountedTotalCost = totalCost - (totalCost * discount);

                cout << "\nTotal Cost before discount: $" << totalCost << endl;
                cout << "Total Cost after discount: $" << discountedTotalCost << endl;
            } else {
                cout << "\nNo phones purchased.\n";
            }
            char resetShopping;
            cout << "\nDo you want to reset your shopping? (y/n): ";
            cin >> resetShopping;

            if (resetShopping == 'y' || resetShopping == 'Y') {

                reset(purchasedPhones, totalCost);
            } else {
                break; // Exit the loop if the user doesn't want to buy another phone or reset
            }
        } else {
            // Display the phone list again
            displayPhoneList();

            // Prompt the user to choose a phone
            cout << "\nChoose a phone (1-20) or 0 to exit: ";
        }

    } while (true);

    // Display the purchased phones and total cost
    if (totalCost > 0.0) {
        displayPurchasedPhones(purchasedPhones);

        // Calculate the discounted total cost
        double discountedTotalCost = totalCost - (totalCost * discount);

        cout << "\nTotal Cost before discount: $" << totalCost << endl;
        cout << "Total Cost after discount: $" << discountedTotalCost << endl;

    } else {
        cout << "\nNo phones purchased.\n";
    }
// Clean up dynamically allocated memory
    cleanupPhoneArray();
    return 0;
}
