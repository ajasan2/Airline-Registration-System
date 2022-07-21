
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{

public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int phone_number;
    int age;
    string address;
    static int passnum;
    char arr[100];

    void information()
    {
        cout << "Enter Passenger Number: ";
        cin >> passnum;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Gender: ";
        cin >> gender;
    };
};

int Details::passnum;
string Details::name;
string Details::gender;

class registration
{

public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "India"};

        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << ". Flight to " << flightN[i] << endl;
        }

        cout << "\nChoose flight destination: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "__________Dubai__________\n"
                 << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "1. DUB - 498" << endl;
            cout << "   August 8, 2022    \t 08:00 \t\t 10.00 HRS \t Price: 800 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "2. DUB - 423" << endl;
            cout << "   August 12, 2022   \t 16:00 \t\t 14.00 HRS \t Price: 720 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "3. DUB - 442" << endl;
            cout << "   September 1, 2022 \t 09:00 \t\t 12.00 HRS \t Price: 600 USD" << endl;

            cout << "\nSelect flight: ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 800;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 720;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 600;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else
            {
                cout << "Invalid input. Returning to the previous menu" << endl;
                flights();
            }

            cout << "\nEnter any number to return to the Main menu: ";
            cin >> back;
            mainMenu();
        }

        case 2:
        {
            cout << "__________Canada__________\n"
                 << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "1. CA - 258" << endl;
            cout << "   July 10, 2022   \t 12:00 \t\t 03.50 HRS \t Price: 380 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "2. CA - 287" << endl;
            cout << "   August 2, 2022  \t 17:00 \t\t 02.80 HRS \t Price: 340 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "3. CA - 249" << endl;
            cout << "   August 28, 2022 \t 20:00 \t\t 04.00 HRS \t Price: 310 USD" << endl;

            cout << "\nSelect flight: ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 380;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 340;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 310;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else
            {
                cout << "Invalid input. Returning to the previous menu" << endl;
                flights();
            }

            cout << "\nEnter any number to return to the Main menu: ";
            cin >> back;
            mainMenu();
        }

        case 3:
        {
            cout << "__________UK__________\n"
                 << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "1. UK - 744" << endl;
            cout << "   August 1, 2022    \t 08:30 \t\t 07.00 HRS \t Price: 1450 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "2. UK - 767" << endl;
            cout << "   August 19, 2022   \t 14:00 \t\t 08.00 HRS \t Price: 1370 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "3. UK - 712" << endl;
            cout << "   September 2, 2022 \t 11:00 \t\t 06.80 HRS \t Price: 1200 USD" << endl;

            cout << "\nSelect flight: ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 1450;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 1370;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 1200;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else
            {
                cout << "Invalid input. Returning to the previous menu" << endl;
                flights();
            }

            cout << "\nEnter any number to return to the Main menu: ";
            cin >> back;
            mainMenu();
        }

        case 4:
        {
            cout << "__________India__________\n"
                 << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "1. IND - 888" << endl;
            cout << "   August 23, 2022   \t 13:00 \t\t 15.50 HRS \t Price: 1000 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "2. IND - 851" << endl;
            cout << "   August 31, 2022   \t 15:00 \t\t 17.00 HRS \t Price:  930 USD" << endl;

            cout << "Available flights \n"
                 << endl;
            cout << "3. IND - 802" << endl;
            cout << "   September 4, 2022 \t 18:30 \t\t 16.50 HRS \t Price:  880 USD" << endl;

            cout << "\n\nSelect flight: ";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 1000;
                cout << "\nFLIGHT SUCCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 930;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 880;
                cout << "\nFLIGHT SUCESSFULLY BOOKED" << endl;
                cout << "Your comfort aboard the flight is our top priorirty. Thanks for choosing XYZ Airlines. Happy journey!" << endl;
            }

            else
            {
                cout << "Invalid input. Returning to the previous menu" << endl;
                flights();
            }

            cout << "\nEnter any number to return to the Main menu: ";
            cin >> back;
            mainMenu();
        }

        default:
        {
            cout << "Invalid input. Returning to the Main menu." << endl;
            mainMenu();
            break;
        }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = " ";
        ofstream outf("records.txt");
        {
            outf << "___________XYZ Airlines___________" << endl;
            outf << "__________________________________" << endl;

            outf << "Passenger Number:\t" << Details::passnum << endl;
            outf << "Passenger Name:\t\t" << Details::name << endl;
            outf << "Passenger Gender:\t" << Details::gender << endl;
            outf << "\n\t   Description" << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (registration::choice == 3)
            {
                destination = "UK";
            }
            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "India";
            }

            outf << "Destination:\t\t" << destination << endl;
            outf << "Flight cost:\t\t" << registration::charges << endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File Error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\n\t\t\t\t  XYZ Airlines \n"
         << endl;
    cout << "\t___________________________Main Menu___________________________" << endl;
    cout << "\t_______________________________________________________________" << endl;
    cout << "\t|                                                             |" << endl;

    cout << "\t|\t Press 1 to add Passenger Details                     |" << endl;
    cout << "\t|\t Press 2 for Flight Registration                      |" << endl;
    cout << "\t|\t Press 3 to View Tickets and Billing Information      |" << endl;
    cout << "\t|\t Press 4 to Exit                                      |" << endl;

    cout << "\t|_____________________________________________________________|" << endl;

    cout << "\nEnter the choice : ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {

    case 1:
    {
        cout << "\n________________Customers________________\n"
             << endl;
        d.information();
        cout << "Enter any number to return to the Main menu: ";
        cin >> back;
        mainMenu();
        break;
    }

    case 2:
    {
        cout << "\n________________Book a Flight________________\n"
             << endl;
        r.flights();
        break;
    }

    case 3:
    {
        cout << "\n______________Tickets_____________\n"
             << endl;
        t.Bill();
        t.dispBill();

        cout << "\nEnter any number to return to the Main menu: ";
        cin >> back;
        mainMenu();
        break;
    }

    case 4:
    {
        cout << "\n\t--------------  THANK YOU  --------------\n"
             << endl;
        break;
    }

    default:
    {
        cout << "Invalid input. Please try again.\n"
             << endl;
        mainMenu();
        break;
    }
    }
};

int main()
{
    Management M;
    return 0;
}