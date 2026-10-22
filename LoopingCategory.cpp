#include <iostream>
using namespace std;

int main() {
    int categoryChoice = 1;
    int roomType, foodType, spaType;
    int roomPrice = 0, foodPrice = 0, spaPrice = 0;
    int totalRoomPrice = 0, totalFoodPrice = 0, totalSpaPrice = 0;

    cout << "=====================================\n"
         << "          HOTEL RESERVATION\n"
         << "               SYSTEM\n"
         << "=====================================\n";

    while (categoryChoice != 0) {
        cout << "\n--------- Services Category ---------\n\n"
             << "1. Room and Accommodation Services\n2. Food and Beverages\n3. Spa and Wellness\n\n-------------- OTHERS ---------------\n\n" 
             << "0. Finish order\n\n=====================================\n\nEnter your choice(0-3): ";
        cin >> categoryChoice;

        if (categoryChoice == 0) {
            cout << "\nPlease come back again, Thank you!";
            break;
        }
        if (categoryChoice < 1 || categoryChoice > 3) {
            cout << "\nInvalid category. Please try again." << endl;
            continue;
        }
        if (categoryChoice == 1) {
            cout << "\n-- Room and Accommodation Services --\n\n"
                 << "1. Standard Room - P1000 per night\n2. Deluxe Room - P1500 per night\n3. Suite - P2000 per night\n\nEnter your choice(1-3): ";
            cin >> roomType;

            if (roomType == 1) roomPrice = 1000;
            else if (roomType == 2) roomPrice = 1500;
            else if (roomType == 3) roomPrice = 2000;
            else {
                cout << "\n Invalid room type. Please try again.\n";
                continue;
            }

            totalRoomPrice += roomPrice;
            cout << "\n You have selected a room with a price of $" << roomPrice << ".\n";
        } 
        else if (categoryChoice == 2) {
            cout << "\n--------- Food and Beverages --------\n\n"
                 << "1. Breakfast - P200\n2. Lunch - P300\n3. Dinner - P400\n\nEnter your choice(1-3): ";
            cin >> foodType;

            if (foodType == 1) foodPrice = 200;
            else if (foodType == 2) foodPrice = 300;
            else if (foodType == 3) foodPrice = 400;
            else {
                cout << "\n Invalid food type. Please try again.\n";
                continue;
            }

            totalFoodPrice += foodPrice;
            cout << "\n You have selected a meal with a price of P" << foodPrice << ".\n";
        } 
        else if (categoryChoice == 3) {
            cout << "\n--------- Spa and Wellness ---------\n\n"
                 << "1. Massage - P500\n2. Facial - P600\n3. Sauna - P700\n\nEnter your choice(1-3): ";
            cin >> spaType;

            if (spaType == 1) spaPrice = 500;
            else if (spaType == 2) spaPrice = 600;
            else if (spaType == 3) spaPrice = 700;
            else {
                cout << "\n Invalid spa type. Please try again.\n";
                continue;
            }

            totalSpaPrice += spaPrice;
            cout << "\n You have selected a spa service with a price of P" << spaPrice << ".\n";
        }
    }
    
    return 0;
}
