#include <stdio.h>

int gcf(int a, int b){
    int greater;
    int lesser;
    int gcf;
    int gcfFound = 0;
    int temp;

    if(a > b){
        greater = a;
        lesser = b;
    }
    else if(b > a){
        greater = b;
        lesser = a;
    }
    else{
        gcf = greater;
        gcfFound = 1;
    }

    while(!gcfFound){
        if(greater % lesser != 0) {
            temp = greater % lesser;
            greater = lesser;
            lesser = temp;
        }
        else if(greater % lesser == 0){
            gcf = lesser;
            gcfFound = 1;
        }
    }
    return gcf;
}


int main() {
    int a = 10;
    int b = 5;
    printf("The greatest common factor of %i and %i is %i", a, b, gcf(a, b));
}