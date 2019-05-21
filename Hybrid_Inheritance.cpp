#include <iostream>

using std::endl;
using std::cout;

class student {

	protected:
		int roll_number;
	public:
		void get_number(int a){
			roll_number = a;
		}

		void put_number(void){
			cout << "Roll No." << roll_number;
			cout << endl;
		}
};

class test : public student{
	protected:
		float part1 , part2;

	public:
		void get_marks(float x , float y){
			part1 = x;
			part2 = y;
		}

		void put_marks(void){
			cout << "Marks Obtainer "<< endl;
			cout << "Part1 = "<< part1;
			cout << endl;
			cout << "Part2 = "<< part2;
			cout << endl;
		}
};

class sports{

	protected:
		float score;
	public:
		void get_score(float s){
			score = s;
		}
		void put_score(void){
			cout << "Score = "<< score;
			cout << endl;
		}
};

class result : public test , public sports {

	float total;

	public:
		void display(void);
};

void result :: display(void){
	total = part1 + part2 + score;

	put_number();
	put_marks();
	put_score();

	cout << "Total Score "<< total;
	cout << endl;
}

int main(){

	result student_james;

	student_james.get_number(1234);
	student_james.get_marks(25.3,23.5);
	student_james.get_score(5.5);

	student_james.display();
}
