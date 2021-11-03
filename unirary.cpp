#include <iostream.h>
#include <conio.h>
class integer
{
int x,y,z;
public:
void getdata(int a, int b, int c);
void disp(void);
void operator- (); // overload unary operator minus
};
void integer::getdata(int a, int b, int c)
{
x=a; y=b; z=c;
}
void integer::disp(void)
{
cout << x << “ “;
cout<< y<<“ “;
cout<< z<< “\n”;
}
void integer::operator- () // Defining operator- ()
{
x = -x; y = -y; z = -z;
}
void main ()
{
integer S;
S.getdata(11,-21,-31);
Cout<< “S: “;
S.disp();
-S;
cout<<“-S : “;
S.disp();
getch();
}
