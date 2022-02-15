#pragma once
#pragma once
#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
#include "map"
using namespace std;
class Room
{
public:
	int Number_of_room;
	bool state_of_room;
	bool AVAILABLE_TV;
	bool AVAILABLE_WIFI;
	int price;
	int Resrvation_Duration;
	int avaliable_day;
	int avaliable_month;
public:
	Room(void);
	Room(int Number_of_room, bool state_of_room, bool AVALIABLE_TV, bool AVALIABLE_WIFI, int price, int Resrvation_Duration, int avaliable_day, int avaliable_month)
	{
		this->Number_of_room = Number_of_room;
		this->state_of_room = state_of_room;
		this->AVAILABLE_TV = AVALIABLE_TV;
		this->AVAILABLE_WIFI = AVALIABLE_WIFI;
		this->price = price;
		this->Resrvation_Duration = Resrvation_Duration;
		this->avaliable_day = avaliable_day;
		this->avaliable_month = avaliable_month;
	};
};