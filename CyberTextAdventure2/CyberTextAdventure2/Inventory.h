#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

//Class name
class Inventory {

	map<string, bool> Contents = {
		{"HasDawg", false},
		{"DogFriend", false},
	};

public:
	//Public content that can be directly accessed and edited by the main program.
	Inventory() {
		Contents["HasDawg"] = false;
		Contents["DogFriend"] = false;
		
	
	};

	void SetValue(string Key, int Value) {
		Contents[Key] = Value;
	}

	bool GetValue(string Key) {
		return Contents[Key];
	}

};