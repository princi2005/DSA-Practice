/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

#include<iostream>
using namespace std;
int main(){
int n=4;
for (int i = 0; i < n; i++)
{
    int num=1;
    for (int j = 0; j < n; j++)
    {
        cout<<num;
        num++;
    }
    cout<<endl;
}
return 0;
}
 */

/*
987
654
321
 
#include<iostream>
using namespace std;

int main(){
int n=3;
int num=n*n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<num;
        num--;
    }
    cout<<endl;
}
return 0;
}
*/


/*
1
22
333
4444
 */
/*
#include<iostream>
using namespace std;

int main(){

int n=4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout<<(i+1);
    }
    cout<<endl;
}
return 0;
}

*/
/*
1
12
123
1234
 */
#include<iostream>
using namespace std;

int main(){

int n=4;
for (int i = 0; i<n; i++)              
{
    for (int j = i+1; j > 0; j--)
    {
        cout<<j;
    }
    cout<<endl;
}

return 0;
}

