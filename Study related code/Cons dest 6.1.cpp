#include<iostream>
using namespace std;

class Room{
	int length;
	int width;
	static int copyconscnt;
	public:
	 Room()
	 {
	 	length=7;
	 	width=2;
	 }
	 Room(Room& a)
	 {
	 	length=a.length;
	 	width=a.width;
	 	copyconscnt++;
	 }
	 void showcpy()
	 {
	 	cout << copyconscnt << endl;
	 }
};
int Room::copyconscnt=0;

int main()
{
	Room b;
	Room c=b;
	Room d(c);
	Room x;
	x=c;
	x.showcpy();
	return 0;
}
