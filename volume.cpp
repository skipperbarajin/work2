//crated by amirreza javadi in(3/11/2022)
#include <iostream>
using namespace std;
float volume(float);
float surfacearea(float);
int main()
{
	float x,y,z;
	cout<<"\n Enter thelength and width and height ";
	cin>>x>>y>>z;
	cout<<"\n volume is:"<<volume(x)<<x*y*z;
	cout<<"\n surface area is:"<<surfacearea(x)<<2*(x*z)+2*(x*y)+2*(z*y);
	return 0;
}
float volume(float)
{
	float x,y,z;
	return x*y*z;
}
float surfacearea(float)
{
	float x,y,z;
	return 2*(x*z)+2*(x*y)+2*(z*y);
}