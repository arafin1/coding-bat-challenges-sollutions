//Karatsuba Mutiplication
//Arafin Saad
//arafinsaad@gmail.com

#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;



int km(int x, int y, int n){
    if (n = 1){
        return x*y;
    }

    else{
        int xl = x/2;
        int yl = y/2;
        int xh = x /2;
        int yh = y/2;
        int a = km(xl,yl,n);
        int b = km(xh,yh,n);
        int c = km(xl+xh, yl+yh,n);
        int d = c - a -b;
        return (b * pow(2,n)+d * pow(2,n/2)+a);
    }


}

int main(){
cout<<km(500,500,2);
return  0;
}

//Karatsuba Mutiplication
//Arafin Saad
//arafinsaad@gmail.com

#include<iostream>
#include<math.h>

using namespace std;

long long int karatsuba(long long int x, long long int y)
    {

        int N =max(to_string(x).length(), to_string(y).length());

        if (N < 10)
            return x * y;

        N = (N / 2) + (N % 2);
        cout<<N<<endl;
        long long int m = (long long int) pow(10, N);

        long long int b = x / m;
        long long int a = x - (b * m);
        long long int d = y / m;
        long long int c = y - (d * N);

        long long int z0 = karatsuba(a, c);
        long long int z1 = karatsuba(a + b, c + d);
        long long int z2 = karatsuba(b, d);

        return z0 + ((z1 - z0 - z2) * m) + (z2 * (long long int)(pow(10, 2 * N)));
    }



int main(){
int x,y;
cin>>x;
cin>>y;
cout<<karatsuba(x,y)<<endl;
return 0;
}

//Karatsuba Mutiplication
//Arafin Saad
//arafinsaad@gmail.com

#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;



int km(int x, int y, int n){
    if (n = 1){
        return x*y;
    }

    else{
        int x1 = n/2;
        int y1 = n/2;
        int x2 = n /2;
        int y2 = n/2;
        x = pow(10,n/2) * x1 + x2;
        y = pow(10,n/2) * y1 + y2;

        int u = km(x1,y1,n);
        int v = km(x2,y2,n);
        int w = km(x1-x2, y1-y2,n);
        int z = u+v-w;
        return (pow(10,n) * u)+ (pow(10, n/2) * z) + v;
    }


}

int main(){
cout<<km(12345,12345,5);
return  0;
}

