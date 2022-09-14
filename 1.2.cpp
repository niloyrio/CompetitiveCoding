/* Problem
Consider a permutation of numbers 
to  written on a paper. Let’s denote
the product of its element as  and the sum of its elements as . Given a positive integer , your task is to determine whether  is divisible by  or not. */


#include<iostream>

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)

{

    for(int i=2;i<=sqrt(n)+1;i++)

    {

        if(n%i==0)

            return false;

    }

    return true;

}

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

        long long n;

        cin>>n;

        if(n==1)

            cout<<"YES"<<"\n";

        else if(isPrime(n+1))

            cout<<"NO"<<"\n";

        else

            cout<<"YES"<<"\n";

    }

}

