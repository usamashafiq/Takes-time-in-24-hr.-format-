#include<iostream>
using namespace std;
class time{
	private:
		int hr,min,sec;
	public:
		void tk_time(int,int,int);
		void prnt_tlve();
		void prnt_twnt_hr();
		void add_time();
		time();
};
	void time::tk_time(int h,int m,int s){
		if(h>24||m>60||s>60){
		cout<<"Error ! Invalid Time";
		}
		else{
		hr=h;
		min=m;
		sec=s;
		}
	}
	void time::prnt_tlve(){
		cout<<endl<<"Time in Twelve Hour Format :"<<endl;
		if(hr<=12){
			cout<<hr<<":"<<min<<":"<<sec<<" am";
		}
		else if(hr>12&&hr<=24){
			cout<<hr-12<<":"<<min<<":"<<sec<<" pm";
		}
	}
	void time::prnt_twnt_hr(){
		if(hr<24){
			cout<<endl<<"Time in TwentyFour Hour Format :"<<endl;
			cout<<hr<<":"<<min<<":"<<sec;
		}
	}
	time::time(){
		hr=0;
		min=0;
		sec=0;
	}
	void time::add_time(){
		sec=sec+1;
	}
int main(){
	int h,m,s;
	time t;
	cout<<"----------------------------------------------"<<endl<<"----------------------------------------------"<<endl<<"Enter Time in 24 hr format to Display in both Formats : "<<endl;
	cin>>h>>m>>s;
	t.tk_time(h,m,s);
	t.add_time();
	t.prnt_tlve();
	t.prnt_twnt_hr();
	return 0;
	}
