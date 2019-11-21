/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: hikari
 */
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"
	//create with appropriate phrases
	Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT,iPerson){
		populatePhrases();
	}
	Smalltalk_Brit::~Smalltalk_Brit(void){
		//returns void, nothing to include here... maybe delet vectors?
	}
	void Smalltalk_Brit::populatePhrases(){
		mySmallTalk.push_back(BRIT_1);
		mySmallTalk.push_back(BRIT_2);
		mySmallTalk.push_back(BRIT_3);
		mySmallTalk.push_back(BRIT_4);
		mySmallTalk.push_back(BRIT_5);
	}



