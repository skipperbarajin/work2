//crated by amirreza javadi in(2/11/2022)
#include<iostream>
using namespace std;
double dastor(double);
double mohasebe(double);
int main()
{
	float i,a,t ;
	cout<<"\n Enter initialhouse cost and annualfuel cost and taxrate :";
	cin>>i>>a>>t;
	cout<<"\n dastorat is:"<<dastor(i);
	cout<<"\n mohasebat is:"<<mohasebe(i)<<a+i-(t*(a*5));
	return 0;
}
double dastor(double )
{
 cout<<"\n taxrate*(5*annual fuel cost+)+annual fuel cost+initial house cost=coshts your house after 5 year";
}
double mohasebe(double)
{
float i,a,t;
    return a+i-(t*(5*a));
  
}