#include <iostream>

using namespace std;
int main()
{
int x, y;
std::cout <<"Enter value of x : ";
std::cin >> x;
std::cout <<"Enter value of y : ";
std::cin >> y;

int sum = x + y ;
int difference = x - y ;
int product = x * y;
int quotient = (y!= 0) ? (x/y) : 0;
int reminder = (y!=0) ? (x%y) : 0;

std::cout << x << std::endl;
std::cout<< y << std::endl;
std::cout << sum << std::endl;
std::cout<< difference << std::endl;
std::cout<< product<< std::endl;
std::cout<< quotient << std::endl;
std::cout<<reminder << std::endl;


return 0;
}
