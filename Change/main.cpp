//
//  main.cpp
//  Assignment 2
//
//  Created by Visalbotr Chan on 3/24/17.
//  Copyright © 2017 Visalbotr Chan. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])

{
    double amountofPurchase, receivedAmount;
    char answer;
    int twenty, ten, five, one, quarter, dime, nickle, cent,change;
    do
    {
        cout<<"Please enter the amount of purchase"<<endl;
        cin>>amountofPurchase;
        cout<<"Please enter the amount of money received"<<endl;
        cin>>receivedAmount;



        while(receivedAmount<amountofPurchase)
        {
            cout<<"The customer doesn't pay enough. Please retype the money received again"<<endl;
            cin>>receivedAmount;
        }

        if(receivedAmount==amountofPurchase)
        {
            cout<<"The customer receives 0 dime";

        }
        if(receivedAmount>amountofPurchase)
        {
            change=(receivedAmount-amountofPurchase)*100;
            twenty=change/2000;
            change=change%2000;
            ten=change/1000;
            change=change%1000;
            five=change/500;
            change=change%500;
            one=change/100;
            change=change%100;
            quarter=change/25;
            change=change%25;
            dime=change/10;
            change=change%10;
            nickle=change/5;
            change=change%5;
            cent=change/1;
            change=change%1;
            cout<<"Twenty: "<<twenty<<endl<<"Ten: "<<ten<<endl<<"Five: "<<five<<endl<<"One:"<<one<<endl<<"Quarter:"<<quarter
            <<endl<<"Dime: "<<dime<<endl<<"Nickle: "<<nickle<<endl<<"Penny: "<<cent<<endl;
        }
        {
            cout<<"Do you want to redo? If so, type Y"<<endl;
            cin>>answer;
        }

    }while(answer == 'y'|| answer == 'Y'); return 0;}
