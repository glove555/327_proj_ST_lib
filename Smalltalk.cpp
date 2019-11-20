/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: hikari
 */
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

	//derived class will set Nationality, iPerson.
	//iPerson is just a counter used to distinguish between objects of the same type

	Smalltalk::Smalltalk(std::string myNationality,int iPerson):
	nationality(myNationality), iPerson(iPerson){
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
		return "";
	}
	//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS:
	//(from the actual watch object itself) and then the time
	//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
	std::string Smalltalk::getTime(){
		return "";
	}

	std::unique_ptr<Watch> Smalltalk::takeWatch(){
		//create object
		std::unique_ptr<Watch> watch;
		//if object has watch, take away
		if(watch != NULL){
			this->pWatch = NULL;
		}
		//return object
		return watch;
	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
	bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
		if (this->pWatch != NULL) {
		return false;
		}
		else {
		std::move(pWatch);
		return true;
		}
	}


