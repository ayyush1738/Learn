#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char auxilary, char destination)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<source<<"to "<<destination<<endl;
        return;
    }

    towerOfHanoi(n-1, source, destination, auxilary);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1, auxilary, source, destination);
}

int main()
{
    return 0;
}