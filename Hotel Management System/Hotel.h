#pragma once
#pragma once
#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
#include "map"
#include"Room.h"
using namespace std;
extern int Hotel_size;
class Hotel : public Room
{
public:
    vector<Hotel>Hotels;
    vector<vector<Room>>Rooms;
    int Hotel_id;
    string name;
    int rooms;
    string country;
    float no_of_stars;
    int no_of_rooms;
    string location;
    bool gym;
    bool Pool;
    string Visitors_Comments;
    string free_meals;
    float rate;
public:
    Hotel(void);
    Hotel(string name, string country, string location, bool gym, bool Pool, float no_of_stars, float rate, string free_meals, int no_of_rooms)
    {
        this->name = name;
        this->country = country;
        this->rooms = rooms;
        this->no_of_stars = no_of_stars;
        this->no_of_rooms = no_of_rooms;
        this->location = location;
        this->gym = gym;
        this->Pool = Pool;
        this->Visitors_Comments = Visitors_Comments;
        this->free_meals = free_meals;
        this->rate = rate;
    }
    void Add_Hotels(vector<Hotel>&, vector<vector<Room>>&);
    void Update_Info(vector<Hotel>&, vector<vector<Room>>&);
    void Del_Hotel(vector<Hotel>&, vector<vector<Room>>&);
    void display(const vector<Hotel>&, const vector<vector<Room>>&);
    void Search(vector<Hotel>&, vector<vector<Room>>&);
    void feedback(vector<Hotel>&);
    void filter_Hotels(vector<Hotel>&, vector<vector<Room>>&);
    void time(vector<Hotel>&, vector<vector<Room>>&);
};