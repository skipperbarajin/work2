//crated by amirreza javadi in(2/11/2022)
#include<iostream>
# include  <cmath>
using namespace std;
double sahih(double);
double ashar(double);
int main ()
{
	float m;
	cout<<"\n Enter your moadel:";
	cin>>m;
	cout<<"\n sahih:"<<sahih(m);
	cout<<"\n ashar:"<<ashar(m);
	return 0;
}
double sahih(double m)
{
	return (floor)(m);
}
double ashar(double m)
{

	return m-((floor)(m));
}
