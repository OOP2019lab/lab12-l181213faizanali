#include"circle_l181213.h"
#include"rectangle_l181213.h"
#include"Shape_l181213.h"
#include"triangle_l181213.h"
#include<conio.h>
int sumArea(shape &Shape1,shape &Shape2)
{
	float a=Shape1.area();
	float b=Shape2.area();
	int sum=a+b;
	return sum;
}
int main()
{
	
int count= 5;
shape** shapesArray=new shape*[count];
string clr;
for(int i=0; i<count;)
{
  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  	switch (getch())
  	{
        	case '1':

              	//get base from user as input
              	float bs;
				cout<<"enter the base";
				cin>>bs;
				//get height from user as input
              	float hei;
				cout<<"enter the height";
				cin>>hei;

				//get color from user as input
              	
				cout<<"enter the color";
				cin>>clr;
			   
				// create new triangle object and add to shapesArray[i]
				shapesArray[i]=new triangle(bs, hei,clr);
				cout<<"area of triangle"<<shapesArray[i]->area();
                                	i++;
              	break;
        	case '2':
              	//get length from user as input
              	float length;
				cout<<"enter the length";
				cin>>length;
				//get width from user as input
              	float height;
				cout<<"enter the height";
				cin>>height;
				//get color from user as input
        	cout<<"enter the color";
				cin>>clr;
				// create new rectangle object and add to shapesArray[i]
                shapesArray[i]=new rectangle(length,height,clr);                	
				cout<<"area of rectangle"<<shapesArray[i]->area();
				i++;
              	break;
 
        	case '3':
              	
              	//get radius from user as input
              	float radius;
				cout<<"enter radius";
		cin>>radius;
				// create new circle object and add to shapesArray[i]
        shapesArray[i]=new circle(radius,clr);                        
		cout<<"area of circle"<<shapesArray[i]->area();
		i++;
              	break;
 
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
}
}

/*triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
shape s1("Purple");
 
cout<<sumArea(t1,c1)<<endl;
cout<<sumArea(s1,r1)<<endl;
cout<<sumArea(s1,t1)<<endl;
 
 
 
 
 */
for (int i = 0; i < count; i++)
{
	if (shapesArray[i] != nullptr)
		cout << shapesArray[i]->area() << endl;
}
//delete all object you have create using new.    
for (int i = 0; i < count; i++)
{
	if (shapesArray[i] != nullptr)
		delete shapesArray[i];
}
delete[]shapesArray;

shape *s2 = new triangle(1.0, 9.0, "Red");// constructor of triangle invoked
delete s2; //identify which destructor in invoked
system("pause");
return 0;
 

}
