#include <iostream>

using std::cout;
using std::endl;

//Area of a Rectangle A = LW , Whre l = length and w = width

class Area_Of_Rectangle{
	
	private :
		double length;
		double width;
		
	public:
		friend void showArea(Area_Of_Rectangle area);
		void setParameters(double , double );
};

void Area_Of_Rectangle::setParameters(double l , double w){
	
	length = l;
	width = w;
}

void showArea(Area_Of_Rectangle area){
	int result ;
	result = area.length*area.width;
	cout << result;
}

int main(){
	
	Area_Of_Rectangle area;
	
	area.setParameters(12.34,23.423);
	
	showArea(area);
	
	return 0;
}
