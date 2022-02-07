#include<iostream>

#include<graphics.h>

#include<math.h>

#define pi 3.14

using namespace std;


void rectangleshape(int x,int y );

void circleshape(int r);

void triangle();

void sqaureshape(int x);


void rectangleshape(int x,int y){
	int gd = DETECT, gm;
  
    int left = x, top = y;
    int right = x+100, bottom = y+200;

    initgraph(&gd, &gm, NULL);
  
    rectangle(left, top, right, bottom);
  
    getch();
    closegraph();
}

void circleshape(int r){
	int gd = DETECT, gm;
  
    int axisx = r+100, axisy = r+100;
    int radius=r;

    initgraph(&gd, &gm, NULL);
  
    circle(axisx,axisy,radius);
  
    getch();
    closegraph();
	
}

void triangle(){
	int gd = DETECT, gm;


    initgraph(&gd, &gm, NULL);
    line(150, 150, 450, 150);
  
    line(150, 150, 300, 300);
  
    line(450, 150, 300, 300);
  
    getch();
    closegraph();
	
}


void sqaureshape(int x){
	int gd = DETECT, gm;
  
    int left = x, top = x;
    int right = x+100, bottom = x+100;

    initgraph(&gd, &gm, NULL);

    rectangle(left, top, right, bottom);
  
    getch();

    closegraph();
}




class shapedefination{
	public:
		void areaofcircle(int r);
		
		void areaofrectangle(int l,int b);
		
		void areaofsqaure(int l);
		
		void areaoftriangle(int l,int b);
};


void shapedefination::areaofcircle(int r){
	
	cout<<"Radius ="<<r<<endl;
	
	cout<<"\n";
	cout<<"area of the circle = 2*pi*r^2"<<endl;
	cout<<"perimeter = 2*pi*r"<<endl;
	
	cout<<"\n";
	cout<<"perimeter: "<<2*pi*r<<endl;
	cout<<"AREA: "<<2*pi*pow(r,2)<<endl;
	
	cout<<"\n";
	cout<<"reprentation of the circle:"<<endl;
	circleshape(r);
	return ;
}


void shapedefination::areaofrectangle(int l,int b){
	
	cout<<"length="<<l<<endl;
	cout<<"breadth="<<b<<endl;
	
	cout<<"\n";
	cout<<"area of the rectangle =length*breath "<<endl;
	cout<<"perimeter of the rectangle = 2(length+breath)"<<endl;
	
	cout<<"\n";
	cout<<"AREA = "<<l*b<<endl;
	cout<<"PERIMETER = "<<2*(l*b)<<endl;
	
	cout<<"\n";
	
	cout<<"reprentation of the rectangle:"<<endl;
	rectangleshape(l,b);
	return ;
}


void shapedefination::areaofsqaure(int l){
	
    cout<<"side length ="<<l<<endl;
    
	cout<<"\n";
	cout<<"area of the sqaure = side length*side length"<<endl;
	cout<<"perimeter = 4*side lenth"<<endl;
	
	cout<<"\n";
	cout<<"perimeter: "<<4*l<<endl;
	cout<<"AREA: "<<l*l<<endl;
	 
	cout<<"\n";
	
	cout<<"representation of the square:"<<endl;
	sqaureshape(l);
	return ;	  	
}



void shapedefination::areaoftriangle(int l,int b){
	
	cout<<"length of the first siden = "<<l<<endl;
	cout<<"length of the second side = "<<b<<endl;
	
	cout<<"\n";
	cout<<"area of the triangle = "<<(l*b)/2<<endl;
	
	cout<<"\n";
	
	cout<<"representation of the triangle:"<<endl;
	triangle();
	return ;
	
}



int main(){
	shapedefination s;
	int select;int i;
    do {
    	cout<<"1. circle information"<<endl;
    	cout<<"2. rectangle information"<<endl;
    	cout<<"3. triangle information"<<endl;
    	cout<<"4. sqaure information"<<endl;
    	cout<<"5. exit"<<endl;
    	
    	cout<<"enter your option: ";
    	cin>>select;
    	
    	switch(select){
    		case 1:
    			int radius;
    			cout<<"Enter the value to represent the circle => ";
    			cin>>radius;
    			s.areaofcircle(radius);
    			break;
    		case 2:
			    int length,breadth;
				cout<<"Enter the value to represent the rectangle => ";
				cin>>length>>breadth;
				s.areaofrectangle(length,breadth);
				break;
			case 3:
				int length1,breadth2;
				cout<<"Enter the value to represent the triangle => ";
				cin>>length1>>breadth;
				s.areaoftriangle(length1,breadth2);
				break;
			case 4:
				int lcircle;
				cout<<"Enter the value to represent the triangle => ";
				cin>>lcircle;
				s.areaofsqaure(lcircle);
				break;
			case 5:
			    cout<<"Exiting the program."<<endl;
				cout<<"THANK YOU!"<<endl;
				exit(0);
				break;		    		
		}	
	}while(select<5);
	
return 0;
	
}

