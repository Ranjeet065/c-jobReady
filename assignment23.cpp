#include <iostream>
using namespace std;
/*
// Question number 1
int main()
{
    cout<<"Hello MySirG"<<endl;
    return 0;
}
*/

/*
// Question number 2
int main()
{
    cout<<"Hello"<<endl<<"MySirG"<<endl;
    return 0;
}
*/
/*
// Question number 3
int main()
{
    int num1, num2;
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    return 0;
}
*/

/*
// Question number 4
int main()
{
    float radius;
    cout << "Enter radius of the circle : " << endl;
    cin >> radius;
    cout << "Area = " << 3.14 * radius * radius << endl;
    return 0;
}
*/

/*
// Question number5
int main()
{
    float l, w, h, v;
    cout << "Enter length , width and height : " << endl;
    cin >> l >> w >> h;
    v = l * w * h;
    cout << "Volume of cuboid = " << v << endl;
    return 0;
}
*/

/*
// Question number 6
int main()
{
    float num1, num2, num3, avg;
    cout << "Enter three numbers : " << endl;
    cin >> num1 >> num2 >> num3;
    avg = (num1 + num2 + num3) / 3;
    cout << "Average = " << avg << endl;
    return 0;
}
*/
/*
// Question number 7
int main()
{
    int number;
    cout << "Enter a number " << endl;
    cin >> number;
    cout << "Suare of " << number << " is " << number * number << endl;
    return 0;
}
*/
/*
// Question number 8
int main()
{
    int a, b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "A= " << a << endl
         << "B= " << b << endl;
    return 0;
}
*/
/*
// Question number 9
int main()
{
    int number1,number2;
    cout<<"Enter two numbers :"<<endl;
    cin>>number1>>number2;
    if(number1>number2)
        cout<<"Max number = "<<number1<<endl;
    else
        cout<<"Min number = "<<number2<<endl;
    return 0;
}
*/
// Question number 10
int main()
{
    int a[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter " << i + 1 << " number : " << endl;
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of all number = " << sum << endl;
    return 0;
}
 