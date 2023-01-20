
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class crickter{
	protected:
	string name;
	int shirtno;
	int odirating;
	int testrating;
	int t20rating;
	int startyear;
	string dob;
public:
	crickter()
	{
		cout<<"The cricker's default constructor" <<endl;
	}
	crickter(string nam,int shirt,int odir,int t20r,int startye,string birth)
	{
	} 
	void set_data(){
		cout<<"\n\n\n\t\t\tDETAILS OF A CRICKTER <3"<<endl;
			cout<<"Name of player is : " ;
			cin>>name;
			cout<<"Enter shirt number : ";
			cin>>shirtno;
			cout<<"Enter ODI rating : ";
			cin>>odirating;
			cout<<"Enter T20 rating : ";
			cin>>t20rating;
			cout<<"Enter Test match rating : ";
			cin>>testrating;
			cout<<"Enter starting year of cricket : ";
			cin>>startyear;
			cout<<"Enter date of birth";
			cin>>dob;
		
	}
	int calculateage()
	
	{
		cout<<"\n\n\n\t\t\tCALCULATING AGE OF PLAYER"<<endl;
  
    int yearnow,yearthen,monthnow,monththen,age1,age2;
    
    cout<<"Enter current year  : ";
    
	cin>>yearnow;
	cout<<"Enter current Month : " ;
    cin>>monthnow;
    cout<<"Enter your birth year :";
    cin>>yearthen;
    cout<<"Enter birth month : ";
    cin>>monththen;
    if(monththen >12 || monththen<1)
        return 1;
    if(monththen > monthnow){
         age1=yearnow-yearthen-1;
         age2=(12-monththen) + monthnow;
    }else{
         age1=yearnow-yearthen;
         age2=12-monththen;
    }
    cout<<"\n\n\t\t\tYou are "<<age1<<" year and "<<age2<<" month old"<<endl;
   

}
int calculate_experience()

{
	cout<<"\n\n\n\t\t\tCALCULATING EXPERIENCE OF PLAYER"<<endl;
	int ex,cyear;
	cout<<"enter your cricket starting year is : ";
	cin>>startyear;
	cout<<"Enter current year : ";
	cin>>cyear;
	cout<<"EXPERIENCE OF PLAYER IS : ";
	ex=cyear-startyear;
	cout<<ex<<" years"<<endl;
}

void change_odirating()
{
	cout<<" \n\n\n\t\t\tODI RATING OF PLAYER"<<endl;
	int old_rating;
	cout<<"Enter the old rating : ";
	cin>>old_rating;
	cout<<"Enter the present rating : ";
	cin>>odirating;
	int odi_rating=(old_rating+odirating)/2;
	cout<<"The odi rating is : " ;
	cout<< odi_rating<<endl;
}
void changetestrating(){
cout<<"\n\n\n\t\t\tTEST RATING OF PLAYER"<<endl;
	int test_rating;
	cout<<"Enter the old test rating : ";
	cin>>testrating;
	cout<<"Enter the present test rating : ";
	cin>>test_rating;
	int testtrating=(test_rating+testrating)/2;
	cout<<"The average of test rating is : " ;
    cout<<testtrating<<endl;
}

};
class bowler: public crickter{
	protected:
		string type;
		int totalwickets;
		int matchplayed;
		public:
			bowler(){
				cout<<"\n\n\n\t\t\tDefault constructor of bowler <3 "<<endl;
			}
			bowler(string nam,int shirtn,int odirting,int t20ra,int styear,string db, string tye,int totalwic,int matchply){
				
			}
	void set_data(){
					cout<<"Name of player is : " ;
			cin>>name;
			cout<<"Enter shirt number : ";
			cin>>shirtno;
			cout<<"Enter ODI rating : ";
			cin>>odirating;
			cout<<"Enter T20 rating : ";
			cin>>t20rating;
			cout<<"Enter Test match rating : ";
			cin>>testrating;
			cout<<"Enter starting year of cricket : ";
			cin>>startyear;
			cout<<"Enter date of birth";
			cin>>dob;
			cout<<"Enter total wickets : ";
			cin>>totalwickets;
			cout<<"Enter matches played : ";
			cin>>matchplayed;
			cout<<"Type of bowler : ";
			cin>>type;
			
	}
			int calculate_bowleraverage(){
				cout<<"Average of bowler is : ";
				cout<<totalwickets/matchplayed<<endl;
			}
			void updatematches(){
			cout<<"Updated matches are : ";
			cout<<matchplayed++;	
			}
			void updatewickets(int w=3){
				cout<<"Updated wickets are : ";
				cout<<totalwickets+w<<endl;
			}
			
};
class batsman:public crickter{
	protected:
	string type;
	int totalruns;
	int  matchplayed;
	int bestscore;
	public:
		batsman()
		{
			cout<<"\n\n\n\t\t\tDefault constructor of batsman <3" <<endl;
		}

		void set_data()
		{
			cout<<"Name of player is : " ;
			cin>>name;
			cout<<"Type of player is : ";
			cin>>type;
			cout<<"Total runs of player is : "; 
		    cin>>totalruns;
			cout<<"Total matches played is :  ";
			cin>>matchplayed;
			cout<<"The best score is : ";
			cin>>bestscore;
			cout<<"Enter shirt number : ";
			cin>>shirtno;
			cout<<"Enter ODI rating : ";
			cin>>odirating;
			cout<<"Enter T20 rating : ";
			cin>>t20rating;
			cout<<"Enter Test match rating : ";
			cin>>testrating;
			cout<<"Enter starting year of cricket : ";
			cin>>startyear;
			
		}
		
		int calculatebataverage(){
			cout<<"The bat average of "<<name<<" is : ";
			cout<<totalruns/matchplayed<<endl;
		}
		void updatematches(){
		
			cout<<"Updated matches : ";
			cout<<matchplayed++<<endl;
		}
		void updateruns (int r=67)
		{
			cout<<"Updated runs : ";
			
			cout<<totalruns+r<<endl;
		}
};
class allrounder:public bowler,public batsman{
	
	protected:
	
	public:
		
	allrounder()
		{
		cout<<"This player is allrounder";
		
	}
	
};

int main() 

{
crickter a;
a.set_data();
a.calculateage();
a.calculate_experience();
a.change_odirating();
a.changetestrating();

bowler b;
b.set_data();
b.updatematches();
b.updatewickets();
b.calculate_bowleraverage();
batsman c;

c.set_data();
c.calculatebataverage();
c.updatematches();
c.updateruns();
allrounder x;


return 0;
}

