/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: hikari
 */
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
	//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
	Smalltalk::Smalltalk(std::string myNationality,int iPerson):nationality(myNationality), iPerson(iPerson){
		current_phrase = 0;
		pWatch = NULL;
	}

	Smalltalk::~Smalltalk(){
		pWatch = NULL;
	}


	std::string Smalltalk::saySomething(){
		return "";
	}

	std::string Smalltalk::getTime(){
		return "";
	}

	//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
	// This transaction simulates giving away a watch
	std::unique_ptr<Watch> Smalltalk::takeWatch(){
		return NULL;
	}

	//if already have a watch then return false and dont change pWatch pointer
	//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
	bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch){
		return true;
	}


