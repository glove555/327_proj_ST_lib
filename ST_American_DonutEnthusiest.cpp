/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: hikari
 */
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"
	//create with appropriate phrases
	ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American(AMERICAN_DE,i){

	}
	ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){

	}

	//base class populatePhrases() will be called first as part of its construction
	//before this class calls populate phrases as part of its construction
	//the end result is mySmallTalk will contain first the base class phrases and
	//then this classes phrases
	void ST_American_DonutEnthusiest::populatePhrases(){

	}
