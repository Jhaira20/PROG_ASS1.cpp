#include<iostream>
using namespace std;

int main()
{
	int  l,w,h,a;
	float fahrenheit,celsius,mode;
	double c,d,r ;
	char op;
    const double PI=3.1416;
    bool isnormal,ishypothermia,ishyperthermia,ishyperpyrexia;
	
	cout << "Enter mode" <<"\n\n" <<"1-Body Temperature as fahrenheit to celsius"<<"\n\n"<< "2-Area of rectangle"<<"\n\n" << "3- Circumference of circle in diameter :";
	cin>>mode;
	
	
	if (mode==1){
		
	//Fahrenheit to celsius
	    cout << "Enter temperature in fahrenheit:";
	    cin >> fahrenheit;
	    cout << endl;
	
	    celsius= ((.55)* (fahrenheit-32));
	    
	    if(celsius<=35.0)
	    	cout << "Your body temperature  is  " << celsius << " class  " << " ishypothermia" ;
	   
		
		 else if(36.5<=celsius<=37.5)
		 	cout << "Your body temperature is  "<< celsius << " class " << " isnormal" ;
			
		
		else if (37.6<=celsius<=38.3)
			cout << "Your body temperature is  "<< celsius << " class " << " ishyperthermia/fever" ;
		
		else if (celsius>=40.0)
			cout << "Your body temperature is  "<< celsius << " class " << " ishyperpyrexia" << endl;
			
			
		
	
}
	else if(mode==2){
		//Area of a rectangle
		cout << "Enter the lenght:";
		cin >> l;
		cout << "Enter the width :";
		cin >> w;
		cout << "Enter the height :";
		cin >> h;
		
	    a=l*w*h;
	    cout << "\n\n" << "the area is :" << a;
	    }
	
	 else if(mode==3){
	 
	// Circumference of  circle in diameter
	
		cout << "Enter the diameter :";
	    cin >> d;
	 
	    c=PI*d ;
	    cout << "The circumference is :" << c;
        }
	
	 
	 return 0;
}

