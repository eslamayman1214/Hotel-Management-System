#include <iostream>
#include "Hotel.h"
#include <vector>
#include"Room.h"
vector<Hotel>Hotels;
vector<vector<Room>>Rooms;
Hotel h;
using namespace std;
Hotel ho[];
static int choice = 0;
static int back_option = 1;
bool Back_Option(int back_option);
int Login();
int main()
{
    do
    {
        back_option = 1;     //To Enter the (Do --> While) LOOP

        cout << ("\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t@@@@ -------> WELCOME TO : <------- @@@@\n\t\t"
            "\t\t\t@@@@@@@@@@@@-> TrivaGO <-@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");

        ////////////////////--> Options <--////////////////////
        cout << "\n"
            "\t° Enter >-[1]-> to:-> Add Hotels\t\t\t"
            "\t° Enter >-[2]-> to:-> Update Hotel/s Info.\n\n"
            "\t° Enter >-[3]-> to:-> Filter Hotels With Rate Or NO. of Stars\t"
            "° Enter >-[4]-> to:-> Delete Hotel/s\n\n"
            "\t° Enter >-[5]-> to:-> Search For Hotels In Specific Time\t"
            "\t° Enter >-[6]-> to:-> Display Hotels \n\n"
            "\t° Enter >-[7]-> to:-> Feedback\t"
            "\t\t° Enter >-[8]-> to:-> Search For Hotels With Specific Query \n\n"
            "\t° Enter >-[0]-> to:-> EXIT\n"
            "\n\n\t\t\t****************************\n\n"
            "\t° -> Your Choice is:-> ";
        cin >> choice;

        switch (choice)
        {
        case 1:     //Add Hotels
            system("cls");
            if (Login() == 1)
            {
                h.Add_Hotels(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you aren't Allowed to do This Operation\n\n");
            }

            Back_Option(back_option);     //Returns to Menu
            continue;
            //////////////////////////////////////////////////

        case 2:     //Update Hotel/s Info.
            system("cls");

            if (Login() == 1)
            {
                h.Update_Info(Hotels, Rooms);
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////

        case 3:     //Filter Hotels With Rate Or NO. of Stars
            system("cls");

            if (Login() != 0)
            {

                h.filter_Hotels(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you aren't Allowed to do This Operation\n\n");
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////

        case 4:     //Delete Hotel/s
            system("cls");
            if (Login() == 1)
            {

                h.Del_Hotel(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you aren't Allowed to do This Operation\n\n");
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////

        case 5:     //Search For Hotels In Specific Time
            system("cls");
            if (Login() != 0)
            {
                h.time(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you mistaked the input\n\n");
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////

        case 6:     //Display Hotels
            system("cls");
            if (Login() != 0)
            {
                cout << ("\n\t-> Hotels will be Printed Now : ") << endl;
                h.display(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you aren't Allowed to do This Operation\n\n");
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////

        case 7:     //Feedback
            system("cls");
            if (Login() != 0)
            {
                h.feedback(Hotels);
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////


        case 8:     //Search For Hotels With Specific Query
            system("cls");
            if (Login() != 0)
            {

                h.Search(Hotels, Rooms);
            }
            else
            {
                cout << ("\n\n\tSorry you mistaked the input\n\n");
            }

            Back_Option(back_option);
            continue;
            //////////////////////////////////////////////////


        case 0:     //EXIT
            system("cls");
            cout << ("\n\n\t\t*-> Program  Ended <-*\n\n"
                "\t\t       -> Thanks<-\n\n\n\n\n\n\n\n\n");
            back_option = 0;
            //////////////////////////////////////////////////
        }

    } while (back_option != 0);       //LOOPs --> During Back_fn is true

} //////////////////////////////////////////////--> End >< Of >< Program <--//////////////////////////////////////////////

int Login()
{
    int Id;
    string Password;

    {
        //Input Part
        cout << ("\t\t\t-> Please Login First <-\t\t\n\n");

        cout << ("\n\n\tEnter User ID: ");
        cin >> Id;

        cout << ("\n\n\tEnter Password: ");
        cin >> Password;
    }

    {
        //Check Part
        if (Password == "Admin" || Password == "admin" && Id == 123)
        {
            //Admin Role
            system("cls");
            return 1;
        }
        else if (Password == "User" || Password == "user" && Id == 123)
        {
            //User role
            system("cls");
            return 2;
        }
        else
        {
            //Invalid and try again
            system("cls");
            cout << ("\n\n\tInvalid Login\n\n");
        }
    }
    return 0;
}
bool Back_Option(int back_option)
{
    cout << ("\n"
        "\n\t° --> To Return Menu, Enter [0] --> ");
    cin >> back_option;

    if (back_option == 0)
    {
        return true;     //Back Successed,, Returning to Menu
    }

    while (back_option != 0)   //Invalid input & Try again
    {
        cout << ("\t\tInvalid "
            "\n\t° --> To Return Menu, Enter [0] --> ");
        cin >> back_option;
        if (back_option == 0)
        {
            return true;
        }
    }
    system("cls");
    return false;
}