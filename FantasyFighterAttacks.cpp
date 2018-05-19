void lightAerialAttack(Creature target, Creature attacker){//bool blockState, bool airState, float victim) {
	// check distance - would be good before end of LD, but not necessary
	
	//check block
	if(target.blocking) continue;

	//check jump
	if(!target.inAir) continue;

	int dmg = 2;
	target -= dmg;
}

void heavyAerialAttack(Creature attacker, Creature target) {
	// check distance - would be good before end of LD, but not necessary
	if (actionCounter==1){
		//check block
		if(target.blocking){
			attacker.stunned = 1;
		} continue;
		
		//check jump
		if(!target.inAir) continue;

		float dmg = 5;
		victim -= dmg;
		attacker.actionCounter = 0;	
	} else {
		turnCounter = 2; // do nothing while counter > 0; tick down when Keyboard::isKeyPressed(Keyboard::Space);
	}
}

void smashAerialAttack(Creature attacker, Creature target) {
	// check distance - would be good before end of LD, but not necessary
	
	// smash attacks go through blocks 
	if (attacker.actionCounter==2){
		//check jump
		if(!target.inAir) continue;

		int dmg = 10;
		victim -= dmg;
		attacker.actionCounter = 0;
	} else {
		attacker.turnCounter = 2;
	}
}

void lightGroundAttack(Creature attacker, Creature target){//bool blockState, bool airState, float victim) {
	// check distance - would be good before end of LD, but not necessary
	
	//check block
	if(target.blocking) continue;

	//check jump
	if(target.inAir) continue;

	int dmg = 2;
	target -= dmg;
}

void heavyGroundAttack(Creature attacker, Creature target) {
	// check distance - would be good before end of LD, but not necessary
	
	//check block
	if(blockState){
		// stunn
	} continue;
	
	//check jump
	if(!target.inAir) continue;

	float dmg = 5;
	victim -= dmg;

}

void smashGroundAttack(Creature attacker, Creature target) {
	// check distance - would be good before end of LD, but not necessary
	
	// smash attacks go through blocks 

	//check jump
	if(!target.inAir) continue;
	
	int dmg = 10;
	victim -= dmg;	
}