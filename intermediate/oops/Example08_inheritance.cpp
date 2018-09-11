#include <iostream>

using std::endl;
using std::cout;
using std::cin;

/*Base class*/
class Shape{
	public:
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
	protected:
		int width;
		int height;
};
/*Another Base class */
class PaintCost{
	public:
		int getCost(int area){
			return area * 70;
		}
};
/*Derived class*/
class Rectangle: public Shape, public PaintCost{
	public:
		int getArea(){
			return (width * height);
		}
};

/*main function*/
int main(){
	
	Rectangle rect;
	int area;
	
	rect.setWidth(10);
	rect.setHeight(20);
	
	area = rect.getArea();
	
	cout << "Total Area = " <<rect.getArea() ;
	cout << endl;
	
	cout << "Total Cost = " << rect.getCost(area);
	cout << endl;
	
	return 0;
}
