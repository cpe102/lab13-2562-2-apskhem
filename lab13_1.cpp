#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
    for (unsigned i=1; i<N; i++) {
        for (int j = 0; j<N; j++) {
            if (j == i) cout << "[" << d[j]  << "] ";
            else cout << d[j] << " ";
        }
        cout << "=> ";
        
        int swapPos = i;
        for (int j=i-1; j>=0; j--) {
            if (d[j] < d[j+1]) {
                swap(d,j,j+1);
                swapPos = j;
            }
            else break;
        }
        
        for (int j=0; j<N; j++) {
            if (j == swapPos) cout << "[" << d[j] << "] ";
            else cout << d[j] << " ";
        }
        cout << endl;
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array: ";
	for (int i = 0; i < 10; i++)
	    cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array: ";
	for(int i = 0; i < 10; i++)
	    cout << a[i] << " ";
	    
    return 0;
}
