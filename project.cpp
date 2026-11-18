#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int room[5];
    string name[5];
    int days[5];
    int price;

public:
    Hotel()
    {
        price = 1000;

        for (int i = 0; i < 5; i++)
        {
            room[i] = 0;
            days[i] = 0;
            name[i] = "";
        }
    }

    void showRooms()
    {
        cout << "\n--- Room Availability ---\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Room " << i + 1 << " : ";

            if (room[i] == 0)
                cout << "Available\n";
            else
                cout << "Booked\n";
        }
    }

    void bookRoom()
    {
        int r;

        showRooms();

        cout << "\nEnter room number (1-5): ";
        cin >> r;

        if (r < 1 || r > 5)
        {
            cout << "Invalid room number!\n";
            return;
        }

        if (room[r - 1] == 1)
        {
            cout << "Room already booked!\n";
            return;
        }

        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name[r - 1]);

        cout << "Enter number of days: ";
        cin >> days[r - 1];

        room[r - 1] = 1;

        cout << "\nRoom booked successfully!\n";
        cout << "Room Number: " << r << endl;
    }

    void cancelBooking()
    {
        int r;

        cout << "\nEnter room number to cancel: ";
        cin >> r;

        if (r < 1 || r > 5)
        {
            cout << "Invalid room number!\n";
            return;
        }

        if (room[r - 1] == 0)
        {
            cout << "Room is not booked!\n";
            return;
        }

        room[r - 1] = 0;
        days[r - 1] = 0;
        name[r - 1] = "";

        cout << "Booking cancelled successfully!\n";
    }

    void showBookings()
    {
        cout << "\n--- Booking Details ---\n";

        bool found = false;

        for (int i = 0; i < 5; i++)
        {
            if (room[i] == 1)
            {
                found = true;

                cout << "\nRoom Number: " << i + 1;
                cout << "\nCustomer Name: " << name[i];
                cout << "\nNumber of Days: " << days[i];
                cout << "\nTotal Bill: Rs. " << days[i] * price;
                cout << "\n----------------------\n";
            }
        }

        if (!found)
            cout << "No bookings available.\n";
    }
};

int main()
{
    Hotel h;
    int choice;

    do
    {
        cout << "\n===== HOTEL BOOKING MANAGEMENT SYSTEM =====\n";
        cout << "1. Show Room Availability\n";
        cout << "2. Book Room\n";
        cout << "3. Cancel Booking\n";
        cout << "4. View Booking Details\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                h.showRooms();
                break;

            case 2:
                h.bookRoom();
                break;

            case 3:
                h.cancelBooking();
                break;

            case 4:
                h.showBookings();
                break;

            case 5:
                cout << "\nThank you for using Hotel Booking Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}