#DEFINE NOMINMAX // This allows me to use windows.h in this program
#include <iostream>
#include "definefunction.h"
#include <windows.h>
int main()
{
	const char* Stuff = "Hello";
	if (Stuff)
	{
		text("Injected!");
	}
	else if (!Stuff)
	{
		text("Game updated, Please wait for update.");
	}
	
	Stuff = nullptr;
	if (Stuff)
	{
		textel("Injected!");
		std::cin.get();
	}
	else if (!Stuff)
	{
		text("Game updated, Please wait for update.");
	}

	
	while (true)
	{

		int x = 0;
		textel("Hello! Welcome to the program! Please enter the number 90 to get started.");
		std::cin >> x;
		bool CompRes = x == 90;



	




		//if (CompRes = true) DOES NOT WORK! We are making compres true in this case instead of CHECKING if it is true in memory!
		if (std::cin.fail()) // if (user input is not what we are asking for (an integer))
		{
			std::cin.clear(); // Clears error
			textel("Nice try dork! You cant break me!");
			textel("This program will restart in 2 seconds. Please dont be silly next time!"); 
			// Does not print when lower then numeric limits due to windows.h
			// For some reason they collide and all that is printed is the memory address to the function.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			// This line of code does not work with #include <windows.h> Unless you define NOMINMAXING.
			// This is because windows applies an A and B to min and max (max in this sense would be max(a,b) Which doesnt make sense.)
			// Defining NOMINMAX Takes away these params and if i am not mistaken comments out or does not use min and max(a,b) in the code

		

			Sleep(2000); // Works due to windows.h

			system("cls"); // clears console.
			

		}
		if (CompRes)
		{
			textel("Thank you!");
			break;
		}
		if (!CompRes)
		{
			textel("WRONG! Try again!");
		}

	

	}
	
}
