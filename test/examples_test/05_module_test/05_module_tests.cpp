#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Question 1: Die class 1 to 6 range checking")
{
	Die dice;

	for (int i = 0 ; i < 10 ; i++)
	{
		dice.roll();

		REQUIRE(true == ((dice.rolled_value() >= 1) && (dice.rolled_value() <= 6)));
	}
}

TEST_CASE("Question 2: Roll class 2 to 12 range checking")
{
	Die die01;
	Die die02;
	Roll rollObj(die01, die02);

	for (int i = 0 ; i < 10 ; i++)
	{
		rollObj.roll_die();
		REQUIRE( true == ( (rollObj.roll_value()) >= 2 && (rollObj.roll_value() <= 12) ));
	}
}

TEST_CASE("Question 3: Test that shooter returns a roll & roll result between 2-12")
{
	for (int i = 0; i < 10; i++)
	{
		Shooter shootObj;
		Die die1; die1.roll();
		Die die2; die2.roll();
		Roll* rollPtr;

		rollPtr = shootObj.throw_die(die1, die2);

		REQUIRE( true == (  (rollPtr->roll_value() >= 2) && (rollPtr->roll_value() <= 12)  ) );
	}
}