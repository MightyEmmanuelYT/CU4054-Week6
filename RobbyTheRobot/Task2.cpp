#include <iostream>
#include "GraphicsManager.h"	
using namespace std;

//Ignore this!!
Room* room;
Robot* robby;
GraphicsManager* picture;
//

int main()
{
	//declare the room, robby and picture objects here
	room = new Room(8);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);


	robby->right();
	picture->draw();

	while (true) {
		if (robby->ahead_is_colour(room, "white")) {

			cout << "No Walls/Obstacles YEEET\n";
			robby->move();
			picture->draw();
			if (robby->ahead_is_colour(room, "blue")) {

				cout << "Blue Wall Ahead Turning Left\n";
				
				robby->left();
				picture->draw();

				while (true)
				{
					robby->right();
					if (robby->ahead_is_colour(room, "blue")) {

						cout << "Blue Wall Check\n";
						robby->left();
						robby->move();
						picture->draw();
					}
					else
					{

						cout << "Turn Right \n";
						break;
					}
				}
				robby->move();
				picture->draw();
				
				robby->move();
				picture->draw();
				
				robby->right();
				picture->draw();


			}
			if (robby->ahead_is_colour(room, "black"))
			{
				robby->left();
				picture->draw();
			}
		}
	}


	//we need system pause so that we can see where robby ends up
	system("Pause");
}