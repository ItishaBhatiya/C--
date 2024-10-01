#include<iostream>
#include<string>

using namespace std;

class FastFoodCafe{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		string cafe_rating;
		string cafe_location;
		int cafe_est_year;
		int staff_quantity;
	public:
		FastFoodCafe()
		{
			cafe_id = 0;
			cafe_name = "";
			cafe_type = "";
			cafe_rating = "";
			cafe_location = "";
			cafe_est_year = "";
			staff_quantity = 0;
		}

void input()
{
	cout<<"Enter cafe id :";
	cin>>cafe_id;
	
	cout<<"Enter cafe_name :";
	cin>>cafe_name;
	
	cout<<"Enter cafe_type :";
	cin>>cafe_type;
	
	cout<<"Enter cafe_rating :";
	cin>>cafe_rating;
	
	cout<<"Enter cafe_location :";
	cin>>cafe_location;
	
	cout<<"Enter cafe_est_year :";
	cin>>cafe_est_year;
	
	cout<<"Enter staff_quantity :";
	cin>>staff_quantity;
	
}

void display()
{
	cout<<"-----------------------------"<<endl;
	cout<<"cafe_id : "<<cafe_id<<endl;
	
	cout<<"cafe_name : "<<cafe_name<<endl;
	
	cout<<"cafe_type : "<<cafe_type<<endl;
	
	cout<<"cafe_rating : "<<cafe_rating<<endl;
	
	cout<<"cafe_location : "<<cafe_location<<endl;
	
	cout<<"cafe_est_year : "<<cafe_est_year<<endl;
	
	cout<<"staff_quantity : "<<staff_quantity<<endl;
	
}

};


int main()
{
	const int max_cafes = 10 ;
	
	FastFoodCafe cafes[max_cafes];
	
	int n;
	
	cout<<"Enter the value of N :";
	cin>>n;
	
	for(i=0; i<n; i++){
		cafes[i].input();
	}
	
	for(int i=0;i<n;i++){
		cafes[i].display();
	}
	
	return 0;
	
}












