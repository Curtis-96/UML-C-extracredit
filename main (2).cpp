#include <string>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    vector<string> b(5);
    b[0]="sa";
    b[1]="df";
    b[2]="fd";
    b[3]="as";
    b[4]="dd";
}

void factorial(vector<string> b)
{
    int i=0;
    int j=1;
    int duplicates = 0;
    int count=0;
    
    vector<string> c(5);
    
    
    //use is duplicates function from computing 1
    for(i=0; i<b.size(); i++)
    {
        for(j=1; j<b.size(); j++)
        {
            if(b[i]==b[j])
            {
                duplicates=1;
            }
            
            while(duplicates!=1)
            {
                c[count]=b[i];
                count++;
            }
        }
    }
    
    do
    {
        std::cout << " " <<&b << std::endl;
    }
    while(next_permutation(b.begin(), b.end()));
    
}
