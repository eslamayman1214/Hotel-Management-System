#include "Hotel.h"
#include <iostream>
#include <vector>;
#include"Room.h"

using namespace std;
int input;
int num;
int Room_size = 0;
int Num_of_rooms;
int no_of_rooms = 0;
int Hotels_size;

Hotel::Hotel(void)
{
    /*Hotel_id = 1;
    name = "samiarmice";
    rooms = 5;;
    country = "egypt";
    no_of_stars = 3;
    no_of_rooms = 5;
    location = "cairo";
    gym = 1;;
    Pool = 1;
    Visitors_Comments = "goooood";
    free_meals = "meat";
    rate = 9;*/
}

void Hotel::Add_Hotels(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{
    cout << "Enter No. OF Hotel/s U Want To Add : " << endl;
    cin >> num;
    int i = 0;
    int j = 0;
    system("cls");
    for (int i = 0; i < num; i++)
    {
        vector<Room>temp;
        cout << "Enter Name OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> name;
        cout << "Enter Country OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> country;
        cout << "Enter Location OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> location;
        cout << "Enter 1 if there Available GYM * OR * Enter 0 if NOT FOR Hotel NO.  :  " << (Hotels_size + 1) << endl;
        cin >> gym;
        cout << "Enter 1 if there Available Pool * OR * Enter 0 if NOT FOR Hotel NO.  :  " << (Hotels_size + 1) << endl;
        cin >> Pool;
        cout << "Enter No. OF Stars OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> no_of_stars;
        cout << "Enter Rate OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> rate;
        cout << "Enter Free Meal/s OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> free_meals;
        cout << "Enter Number OF Rooms OF Hotel NO. : " << (Hotels_size + 1) << endl;
        cin >> no_of_rooms;
        Hotel Hotel1(name, country, location, gym, Pool, no_of_stars, rate, free_meals, no_of_rooms);
        newHotels.push_back(Hotel1);
        temp.push_back(Hotel1);

        for (int j = 1; j <= newHotels[Hotels_size].no_of_rooms; j++)
        {
            cout << "\n\t\t\t********************\n" << endl;
            cout << "Enter Number OF Room NO. : " << (j) << endl;
            cin >> Number_of_room;
            
            cout << "Enter State OF Room (Double will be : 0 || Single will be : 1) : " << (j) << endl;
            cin >> state_of_room;
            cout << "Enter 1 if there Available TV * OR * Enter 0 if NOT FOR Room NO.  :  " << (j) << endl;
            cin >> AVAILABLE_TV;
            cout << "Enter 1 if there Available WIFI * OR * Enter 0 if NOT FOR Room NO.  :  " << (j) << endl;
            cin >> AVAILABLE_WIFI;
            cout << "Enter Price OF Room NO. : " << (j) << endl;
            cin >> price;
            cout << "Enter Resrvation Duration OF Room NO. : " << (j) << endl;
            cin >> Resrvation_Duration;
            cout << "Enter Start Avaliable Day OF Room NO. : " << (j) << endl;
            cin >> avaliable_day;
            cout << "Enter Start Avaliable Month OF Room NO. : " << (j) << endl;
            cin >> avaliable_month;
            Room newRoom(Number_of_room, state_of_room, AVAILABLE_TV, AVAILABLE_WIFI, price, Resrvation_Duration, avaliable_day, avaliable_month);
            newRooms.push_back(temp);
            newRooms.at(Hotels_size).push_back(newRoom);

        }

        Hotels_size++;
        system("cls");
        cout << endl << " ------>>>\t\t Hotel Number : " << Hotels_size << " has been Added \t\t<<<-----\n" << endl;


    }
    cout << "\n\t\t\t********************\n" << endl;
}


void Hotel::display(const vector<Hotel>& newHotels, const vector<vector<Room>>& newRooms)
{
    int j;
    int size = newHotels.size();
    for (int i = 0; i < size; i++)
    {
        cout << "\n\t\t\t------------------------------------------------------------------\n" << endl;
        cout << "Hotel Name OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].name << endl;
        cout << "Hotel Country OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].country << endl;
        cout << "Hotel Location OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].location << endl;
        cout << "Hotel Gym Avalibility NO. " << (i + 1) << " :  " << endl << newHotels[i].gym << endl;
        cout << "Hotel Pool Avalibilty NO. " << (i + 1) << " :  " << endl << newHotels[i].Pool << endl;
        cout << "Hotel NO OF Stars OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].no_of_stars << endl;
        cout << "Hotel Rate OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].rate << endl;
        cout << "Hotel Meals OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].free_meals << endl;
        cout << "Hotel Feedback OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].Visitors_Comments << endl;


        for (int j = 1; j <= newHotels[i].no_of_rooms; j++)
        {
            cout << "\t\t\t********************\n" << endl;
            cout << "Room Details of Room No. : " << (j) << endl;
            cout << "Number of Room No. : " << (j) << endl;
            cout << newRooms[i][j].Number_of_room << endl;
            cout << "State OF Room (Double will be : 0 || Single will be :1 ) : " << (j) << endl;
            cout << newRooms[i][j].state_of_room << endl;
            cout << "TV Avaliabiilty OF Room No. :  " << (j) << endl;
            cout << newRooms[i][j].AVAILABLE_TV << endl;
            cout << "WIFI Avaliability OF Room No. :  " << (j) << endl;
            cout << newRooms[i][j].AVAILABLE_WIFI << endl;
            cout << "Price OF Room No. : " << (j) << endl;
            cout << newRooms[i][j].price << endl;
            cout << "Resrvation Duration OF Room No. : " << (j) << endl;
            cout << newRooms[i][j].Resrvation_Duration << endl;
            cout << "Start Avaliable Day OF Room No. : " << (j) << " Will be in : " << endl;
            cout << newRooms[i][j].avaliable_day << endl;
            cout << "Start Avaliable Month OF Room No. : " << (j) << " Will be in : " << endl;
            cout << newRooms[i][j].avaliable_month << endl;
        }
    }
    cout << "\n\t\t\t********************\n" << endl;
}

void Hotel::Update_Info(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{

    cout << " Enter Hotel Name U Want to Update its INFO. : " << endl;
    string hotel_name;
    cin >> hotel_name;
    for (int i = 0; i < Hotels_size; i++)
    {

        if (hotel_name == newHotels[i].name)
        {

            cout << "Enter Name OF Hotel NO.  : " << (i + 1) << endl;
            cin >> newHotels[i].name;
            cout << "Enter Country OF Hotel NO.  : " << (i + 1) << endl;
            cin >> newHotels[i].country;
            cout << "Enter Location OF Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].location;
            cout << "Enter 1 if there Available GYM * OR * Enter 0 if NOT FOR Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].gym;
            cout << "Enter 1 if there Available Pool * OR * Enter 0 if NOT FOR Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].Pool;
            cout << "Enter No. OF Stars  OF Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].no_of_stars;
            cout << "Enter Rate OF Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].rate;
            cout << "Enter Free Meal/s OF Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].free_meals;
            cout << "Enter NO. OF New Rooms OF Hotel NO.  :  " << (i + 1) << endl;
            cin >> newHotels[i].no_of_rooms;
            int new_size = newHotels[i].no_of_rooms + 1;
            newRooms[i].resize(new_size);

            for (int j = 1; j <= newHotels[i].no_of_rooms; j++)
            {
                cout << "\n\t\t\t********************\n" << endl;
                cout << "Enter Your Edit Details OF Room NO. " << (j) << endl;
                cout << "Enter Number OF Room NO. " << (j) << endl;
                cin >> newRooms[i][j].Number_of_room;
                cout << "Enter State OF Room (Double will be : 0 || Single will be : 1) : " << (j) << endl;
                cin >> newRooms[i][j].state_of_room;
                cout << "Enter 1 if there Available TV * OR * Enter 0 if NOT FOR Room NO.  :  " << (j) << endl;
                cin >> newRooms[i][j].AVAILABLE_TV;
                cout << "Enter 1 if there Available WIFI * OR * Enter 0 if NOT FOR Room NO.  :  " << (j) << endl;
                cin >> newRooms[i][j].AVAILABLE_WIFI;
                cout << "Enter Price OF Room NO. : " << (j) << endl;
                cin >> newRooms[i][j].price;
                cout << "Enter Resrvation Duration OF Room NO. : " << (j) << endl;
                cin >> newRooms[i][j].Resrvation_Duration;
                cout << "Start Avaliable Day OF Room NO. : " << (j) << endl;
                cin >> newRooms[i][j].avaliable_day;
                cout << "Start Avaliable Month OF Room NO. : " << (j) << endl;
                cin >> newRooms[i][j].avaliable_month;

            }
        }
    }
    cout << "\n\t\t\t ---> Everything has been Updated <--- \n\t\t\t " << endl;
    cout << "\n\t\t\t********************\n" << endl;
}
void Hotel::Del_Hotel(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{
    string hotel_name;

    cout << " Enter Hotel Name U Want To Delete it : " << endl;
    cin >> hotel_name;

    for (int i = 0; i < Hotels_size; i++)
    {
        if (hotel_name == newHotels[i].name)
        {
            Hotels_size--;
            newRooms.erase(newRooms.begin() + i);
            newHotels.erase(newHotels.begin() + i);
            cout << "Hotel has been Deleted " << endl;
            break;
        }
    }

    cout << "\n\t\t\t********************\n" << endl;

}

void::Hotel::filter_Hotels(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{
    int star, HORate;
    int z;
    int x = 0;
    int j = 0;
    cout << "Enter Your Choice : U Want To Filter by No.Star : * Press 1  * OR  In Rate : * Press 2 * : " << endl;
    cin >> z;

    do
    {
        if (z == 1)
        {
            cout << "Enter No. of Stars : " << endl;
            cin >> star;
            cout << "\n\n\t\t\t --> Your Results is --> :\n " << endl;
            for (int i = 0; i < Hotels_size; i++)
            {
                if (star == newHotels[i].no_of_stars)

                    for (int j = 0; Hotels_size > j; j++)
                    {
                        cout << "\n\t\t\t------------------------------------------------------------------\n" << endl;
                        cout << "Hotel Name OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].name << endl;
                        cout << "Hotel Country OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].country << endl;
                        cout << "Hotel Location OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].location << endl;
                        cout << "Hotel Gym Avalibility NO. " << (i + 1) << " :  " << endl << newHotels[i].gym << endl;
                        cout << "Hotel Pool Avalibilty NO. " << (i + 1) << " :  " << endl << newHotels[i].Pool << endl;
                        cout << "Hotel NO OF Stars OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].no_of_stars << endl;
                        cout << "Hotel Rate OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].rate << endl;
                        cout << "Hotel Meals OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].free_meals << endl;
                        cout << "Hotel Feedback OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].Visitors_Comments << endl;

                        for (int k = 1; newHotels[i].no_of_rooms >= k; k++)

                        {
                            cout << "\t\t\t********************\n" << endl;
                            cout << "Room Details of Room No. : " << k << endl;
                            cout << "Number OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].Number_of_room << endl;
                            cout << "State OF Room (Double will be : 0 || Single will be :1 ) : " << (k) << endl;
                            cout << newRooms[i][k].state_of_room << endl;
                            cout << "TV Avaliabiilty OF Room No. :  " << (k) << endl;
                            cout << newRooms[i][k].AVAILABLE_TV << endl;
                            cout << "WIFI Avaliability OF Room No. :  " << (k) << endl;
                            cout << newRooms[i][k].AVAILABLE_WIFI << endl;
                            cout << "Price OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].price << endl;
                            cout << "Resrvation Duration OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].Resrvation_Duration << endl;
                            cout << "Start Avaliable Day OF Room No. : " << (k) << " Will be in : " << endl;
                            cout << newRooms[i][k].avaliable_day << endl;
                            cout << "Start Avaliable Month OF Room No. : " << (k) << " Will be in : " << endl;
                            cout << newRooms[i][k].avaliable_month << endl;

                        }
                        x = 1;
                        break;
                    }
            }
        }
        else if (z == 2)
        {

            cout << "Enter Rate : " << endl;
            cin >> HORate;
            cout << "\n\n\t\t\t --> Your Results is --> :\n " << endl;
            for (int i = 0; i < Hotels_size; i++)
            {

                if (HORate == newHotels[i].rate)
                {
                    for (int j = 0; Hotels_size > j; j++)
                    {
                        cout << "\n\t\t\t------------------------------------------------------------------\n" << endl;
                        cout << "Hotel Name OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].name << endl;
                        cout << "Hotel Country OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].country << endl;
                        cout << "Hotel Location OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].location << endl;
                        cout << "Hotel Gym Avalibility NO. " << (i + 1) << " :  " << endl << newHotels[i].gym << endl;
                        cout << "Hotel Pool Avalibilty NO. " << (i + 1) << " :  " << endl << newHotels[i].Pool << endl;
                        cout << "Hotel NO OF Stars OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].no_of_stars << endl;
                        cout << "Hotel Rate OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].rate << endl;
                        cout << "Hotel Meals OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].free_meals << endl;
                        cout << "Hotel Feedback OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].Visitors_Comments << endl;

                        for (int k = 1; newHotels[i].no_of_rooms >= k; k++)
                        {
                            cout << "\t\t\t********************\n" << endl;
                            cout << "Room Details of Room No. : " << k << endl;
                            cout << "Number OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].Number_of_room << endl;
                            cout << "State OF Room (Double will be : 0 || Single will be :1 ) : " << (k) << endl;
                            cout << newRooms[i][k].state_of_room << endl;
                            cout << "TV Avaliabiilty OF Room No. :  " << (k) << endl;
                            cout << newRooms[i][k].AVAILABLE_TV << endl;
                            cout << "WIFI Avaliability OF Room No. :  " << (k) << endl;
                            cout << newRooms[i][k].AVAILABLE_WIFI << endl;
                            cout << "Price OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].price << endl;
                            cout << "Resrvation Duration OF Room No. : " << (k) << endl;
                            cout << newRooms[i][k].Resrvation_Duration << endl;
                            cout << "Start Avaliable Day OF Room No. : " << (k) << " Will be in : " << endl;
                            cout << newRooms[i][k].avaliable_day << endl;
                            cout << "Start Avaliable Month OF Room No. : " << (k) << " Will be in : " << endl;
                            cout << newRooms[i][k].avaliable_month << endl;

                        }
                        x = 1;
                        break;
                    }

                }

            }

        }
        else
        {

            cout << "Please , Enter Correct Number 1 or 2" << endl;
            cin >> z;
        }
    } while (x != 1);
    cout << "\n\t\t\t********************\n" << endl;
}
void Hotel::feedback(vector<Hotel>& newHotels)
{
    cout << " Enter Hotel Name U Want to Add Feedback  To it : " << endl;

    string hotel_name;
    cin >> hotel_name;
    for (int i = 0; i < Hotels_size; i++)
    {
        if (hotel_name == newHotels[i].name)
        {
            cout << "Enter your Feedback : " << endl;
            cin >> newHotels[i].Visitors_Comments;
            break;
        }
    }
    cout << "\n\t\t\t ---> Your Feedback has been Updated <--- \n\t\t\t " << endl;
    cout << "\n\t\t\t********************\n" << endl;
}
void Hotel::time(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{
    cout << "Enter Hotel Name U Want :) " << endl;
    string hotel_name;
    cin >> hotel_name;
    int s_day, s_month;
    cout << "Enter The Day U Want Search For : " << endl;
    cin >> s_day;
    cout << "Enter The Month U Want Search For : " << endl;
    cin >> s_month;

    for (unsigned int i = 0; i < Hotels_size; i++)
    {
        if (hotel_name == newHotels[i].name)
        {
            for (int j = 1; j <= newHotels[i].no_of_rooms; j++)
            {
                if (s_month >= newRooms[i][j].avaliable_month || (s_month == newRooms[i][j].avaliable_month && s_day >= newRooms[i][j].avaliable_day))
                {
                    cout << "\n\t\t\t********************\n" << endl;
                    cout << "Room Details OF Room Which Suit Your Search is : " << endl;
                    cout << "Number OF Room No. : " << (j) << endl;
                    cout << newRooms[i][j].Number_of_room << endl;
                    cout << "State OF Room (Double will be : 0 || Single will be :1 ) : " << (j) << endl;
                    cout << newRooms[i][j].state_of_room << endl;
                    cout << "TV Avaliabiilty OF Room No. :  " << (j) << endl;
                    cout << newRooms[i][j].AVAILABLE_TV << endl;
                    cout << "WIFI Avaliability OF Room No. :  " << (j) << endl;
                    cout << newRooms[i][j].AVAILABLE_WIFI << endl;
                    cout << "Price OF Room No. : " << (j) << endl;
                    cout << newRooms[i][j].price << endl;
                    cout << "Resrvation Duration OF Room No. : " << (j) << endl;
                    cout << newRooms[i][j].Resrvation_Duration << endl;
                    cout << "Start Avaliable Day OF Room No. : " << (j) << " Will be in : " << endl;
                    cout << newRooms[i][j].avaliable_day << endl;
                    cout << "Start Avaliable Month OF Room No. : " << (j) << " Will be in : " << endl;
                    cout << newRooms[i][j].avaliable_month << endl;
                   
                }

            }

        }
    }

    cout << "\n\t\t\t********************\n" << endl;
}
void Hotel::Search(vector<Hotel>& newHotels, vector<vector<Room>>& newRooms)
{
    bool s_Pool, s_wifi, s_TV;
    cout << endl << "We Will Help U To Find Your Desirable Room By a Specfic Query :  So , \n\n";
    cout << "Press * 1 * If U Want a Pool in it OR * 0 * For NOT : " << endl;
    cin >> s_Pool;
    cout << "Press * 1 * If U Want a WIFI in it OR * 0 * For NOT : " << endl;
    cin >> s_wifi;
    cout << "Press * 1 * If U Want a TV in it OR * 0 * For NOT : " << endl;
    cin >> s_TV;
    for (int i = 0; i < Hotels_size; i++)
    {
        for (int j = 1; j <= newHotels[i].no_of_rooms; j++)
        {

            if (s_Pool == newHotels[i].Pool && s_wifi == newRooms[i][j].AVAILABLE_WIFI && s_TV == newRooms[i][j].AVAILABLE_TV)
            {
                cout << "\n\t\t\t------------------------------------------------------------------\n" << endl;

                cout << "Hotel Name OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].name << endl;
                cout << "Hotel Country OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].country << endl;
                cout << "Hotel Location OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].location << endl;
                cout << "Hotel Gym Avalibility NO. " << (i + 1) << " :  " << endl << newHotels[i].gym << endl;
                cout << "Hotel Pool Avalibilty NO. " << (i + 1) << " :  " << endl << newHotels[i].Pool << endl;
                cout << "Hotel NO OF Stars OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].no_of_stars << endl;
                cout << "Hotel Rate OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].rate << endl;
                cout << "Hotel Meals OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].free_meals << endl;
                cout << "Hotel Feedback OF Hotel NO. " << (i + 1) << " :  " << endl << newHotels[i].Visitors_Comments << endl;
                cout << "\t\t\t********************\n" << endl;
                cout << "Details OF Room/s U Desire : " << endl;
                cout << "Number of Room No. : " << (i + 1) << endl;
                cout << newRooms[i][j].Number_of_room << endl;
                cout << "State OF Room (Double will be : 0 || Single will be :1 ) : " << (i + 1) << endl;
                cout << newRooms[i][j].state_of_room << endl;
                cout << "TV Avaliabiilty OF Room No. :  " << (i + 1) << endl;
                cout << newRooms[i][j].AVAILABLE_TV << endl;
                cout << "WIFI Avaliability OF Room No. :  " << (i + 1) << endl;
                cout << newRooms[i][j].AVAILABLE_WIFI << endl;
                cout << "Price OF Room No. : " << (i + 1) << endl;
                cout << newRooms[i][j].price << endl;
                cout << "Resrvation Duration OF Room No. : " << (i + 1) << endl;
                cout << newRooms[i][j].Resrvation_Duration << endl;
                cout << "Start Avaliable Day OF Room No. : " << (i + 1) << " Will be in : " << endl;
                cout << newRooms[i][j].avaliable_day << endl;
                cout << "Start Avaliable Month OF Room No. : " << (i + 1) << " Will be in : " << endl;
                cout << newRooms[i][j].avaliable_month << endl;
               
            }
        }
    }
    cout << "\n\t\t\t********************\n" << endl;
}