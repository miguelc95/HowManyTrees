//
//  main.cpp
//  HowManyTrees
//
//  Created by Miguel Cuellar on 3/10/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    long long pos[31],acum=0;
   
    for (int ix=0; ix<31; ix++) {
        pos[ix]=0;
    }
    
    pos[0]=1;
    
    for (int ix=1; ix<=n; ix++) {
       int j=ix-1;
        
        for (int iy=0; iy<ix; iy++) {
            
            acum+=pos[iy]*pos[j];
            j--;
                }
        
        pos[ix]=acum;
        acum=0;
            }
    
    cout<<pos[n]<<" BTrees"<<endl;
    
    return 0;
}
