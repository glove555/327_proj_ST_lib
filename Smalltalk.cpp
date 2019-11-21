/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: hikari
 */
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

using namespace std;

	//derived class will set Nationality, iPerson.
	//iPerson is just a counter used to distinguish between objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson):
	nationality(myNationality), iPerson(iPerson){
		//NOTE THAT MYSMALLTALK does NOT have to to be included in this but can be use
		//for vector things in SaySomething!
		current_phrase = 0;
		pWatch = NULL;
	}

	Smalltalk::~Smalltalk(){
		pWatch = NULL;
	}

	//cycles through phrases added in populatePhrases.
	//Returns them 1 by 1 starting with the first and ending
	//with the last and then it starts over
	//takes the form Nationality iPerson: phrase
	std::string Smalltalk::saySomething(){
		std::string say(nationality + " " + std::to_string(iPerson)+ " : ");
		current_phrase = 0;
		if (current_phrase == 0){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 1){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 2){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 3){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 4){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 5){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (current_phrase == 6){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (nationality == AMERICAN_DE && current_phrase == 7){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (nationality == AMERICAN_DE && current_phrase == 8){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if (nationality == AMERICAN_DE && current_phrase == 9){
			say += mySmallTalk[current_phrase];
			current_phrase++;
		}
		if ((signed)current_phrase > (signed)(mySmallTalk.size()+1)){
			current_phrase = 0;
		}

		return say;
	}
	//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS:
	//(from the actual watch object itself) and then the time
	//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
	std::string Smalltalk::getTime(){
		//CURRENT_TIME_IS form
		std::string time;
		if (pWatch == NULL){
			time += I_DO_NOT_HAVE_A_WATCH;
			return time;
		}
		else{
			//POINT TO WATCH OBJECT
			time += pWatch->getTime();
		}
		return time;
	}

	std::unique_ptr<Watch> Smalltalk::takeWatch(){
		//create object
		std::unique_ptr<Watch> watch;
		//if object has watch, take away
		if(watch == NULL){
			watch = NULL;
		}
		watch = std::move(pWatch);
		//return object
		return watch;
		watch.get_deleter();
	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
	bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
		if (this->pWatch != NULL) {
		return false;
		}
		else {
		this->pWatch =std::move(pWatch);
		return true;
		}
		pWatch.get_deleter();
	}


