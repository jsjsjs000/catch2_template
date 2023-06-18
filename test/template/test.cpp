#include <catch.hpp>

SCENARIO("Initial failing test")
{
	GIVEN("given1")
	{
		WHEN("when1")
		{
			THEN("test 1")
			{
				REQUIRE(true);
			}

			THEN("test 2")
			{
				REQUIRE(false);
			}
		}
	}
}
