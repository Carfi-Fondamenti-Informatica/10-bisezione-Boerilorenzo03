#include <iostream>
#include <math.h>
using namespace std;

void print (float y){
    cout << int (y*10000)/10000.0;
}

float f(float a){
    return (a*a*cos(a))+1;
}

bool verifica(float a, float b){
    if(f(a)*f(b)>=0) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    float a,b;
    do{
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;
    }while(verifica(a,b));
    float y;
    float err;
    do{
        x=(a+b)/2;
        if(f(y)==0){
            break;
        } else if (!verifica(a, y)){
            b = y;
        }else{
            a = y;
        }
        err = abs((b - a) / 2);
    }while(err>=1e-6);
    print (y);
    return 0;
}
