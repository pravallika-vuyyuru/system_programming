#include<iostream>
using namespace std;
class cal
{
	private: 
		int x,y;
	public:
		cal(){
			x=0;
			y=0;
		}
		int add(int,int);
		int sub(int,int);
		int mul(int,int);
		int div(int,int);
};
int cal::add(int x,int y){
	return x+y;
}
int cal::sub(int x,int y){
        return x-y;
}
int cal::mul(int x,int y){
        return x*y;
}
int cal::div(int x,int y){
        if(y>0)
	return x/y;
	else
		return 0;
}
int main()
{
	cal obj;
	cout<<"add is"<<obj.add(4,3)<<endl;
	cout<<"sub is"<<obj.sub(4,3)<<endl;
	cout<<"mul is"<<obj.mul(4,3)<<endl;
	cout<<"div is"<<obj.div(4,2)<<endl;
	return 0;
}




