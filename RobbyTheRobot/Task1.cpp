//#include <iostream>
//#include "GraphicsManager.h"	
//using namespace std;
//
////Ignore this!!
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
////
//
//int main()
//{
//	//declare the room, robby and picture objects here
//	room = new Room(7);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//
//	robby->right();
//	picture->draw();
//
//	while (true) {
//		if(robby->ahead_is_colour(room, "white")) {
//			robby->move();
//			picture->draw();
//			if (robby->ahead_is_colour(room, "blue")) {
//				robby->left();
//				picture->draw();
//				for (int i = 0; i < 5; i++) {
//					robby->move();
//					picture->draw();
//				}
//				robby->right();
//				picture->draw();
//				for (int i = 0; i < 2; i++) {
//					robby->move();
//					picture->draw();
//				}
//				robby->right();
//				for (int i = 0; i < 5; i++) {
//					robby->move();
//					picture->draw();
//				}
//				robby->left();
//				picture->draw();
//			}
//			if (robby->ahead_is_colour(room, "black"))
//			{
//				robby->left();
//				picture->draw();
//			}
//		}
//	}
//
//
//	//we need system pause so that we can see where robby ends up
//	system("Pause");
//}