#include<iostream>
using namespace std;

class solar_system
{
	private:
		int n;
	public:
		string planet_name;
		float radius;
		float distance_from_sun;
		int avg_tem;

		void get_info();
		void print_info(int n);
};

void solar_system :: get_info()
{
	cout<<"Please provide the Planet information ......\n";
	cout<<"The Name of Planet: ";
	cin>>planet_name;
	cout<<"The radius (in KM): ";
	cin>>radius;
	cout<<"Distance from the Sun (in million KM): ";
	cin>>distance_from_sun;
	cout<<"Average temperature (in degree C): ";
	cin>>avg_tem;
}

void solar_system :: print_info(int n = 3)
{
	cout<<"\n\nThe Planet information given by you:\n";
	cout<<"Name: "<<planet_name;
	cout<<"\nRadius (in KM): "<<radius;
	cout<<"\nDistance from the Sun (in million KM): "<<distance_from_sun;
	cout<<"\nAverage temperature (in degree C):"<<avg_tem<<endl;
}


int main()
{
	solar_system p1;
	
	p1.get_info();
	p1.print_info();

	return 0;
}
