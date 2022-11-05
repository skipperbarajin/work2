//crated by amirreza javadi in(1/11/2022)
#include<iostream>
using namespace std;
void drawcircle();
void drawtriangle();
void drawrectangle();
int main()
{
	drawcircle();
	drawtriangle();
	drawrectangle();
	return 0;
}
void drawcircle()
{
	cout<<"\n ***** ";
	cout<<"\n**   **";
	cout<<"\n**   **";
	cout<<"\n ***** ";
	return;
}
void drawtriangle()
{
	cout<<"\n   /\\ ";
	cout<<"\n  /  \\";
	cout<<"\n /    \\";
	cout<<"\n/______\\";
	return;
}
void drawrectangle()
{
	cout<<"\n _________";
	cout<<"\n |        |";
	cout<<"\n |        |";
	cout<<"\n |________| ";
	return;
}