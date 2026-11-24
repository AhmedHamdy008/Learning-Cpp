#include <iostream>
using namespace std;

void printmax(int a, int b , int c);

int main(){

    int n1,n2,n3;
    cout<<"Enter 3 Numbers: ";
    cin>>n1>>n2>>n3;

    printmax(n1 , n2, n3);

    return 0;
}

void printmax(int a , int b , int c){

    int biggest= a;

    if(b>biggest){
        biggest=b;
    }
   
    if(c>biggest){
        biggest=c;
    }

    cout<<"The biggest number is: "<<biggest<<'\n';

}