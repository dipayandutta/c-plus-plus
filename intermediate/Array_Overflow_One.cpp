#include <iostream>
#include <process.h>

using std::cout;
using std::endl;

const int LIMIT = 100;

class SafeArray{
	private:
		int arr[LIMIT];
	public:
		void putel(int n,int elvalue){
			if(n<0 || n>=LIMIT){
				cout << "Index Out of Range";
				cout << endl;
				exit(1);
			}
			arr[n] = elvalue;
		}
		int getel(int n) const{
			if(n<0 || n>=LIMIT){
				cout << "Index out of range";
				cout << endl;
			}
			return arr[n];
		}
};

int main(){
	SafeArray safe_array;
	
	for(int j=0;j<LIMIT;j++){
		safe_array.putel(j,j*10);
	}
	
	for(int j=0;j<LIMIT;j++){
		int temp = safe_array.getel(j);
		cout <<"Element "<<j <<"is" <<temp;
		cout << endl;
	}
	
	return 0;
}

