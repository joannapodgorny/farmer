#include <iostream>
#include <map>

using namespace std;

map < string, int > calculateArea(int fenceLengh)
{
    map < string, int > fence;
    int a = 1;
    int b = fenceLengh - 2 * a;
    int area =0;
    for (int i = 1; i < fenceLengh/2; i++) {
        area = i * (fenceLengh - 2 * i);
        if (area > a * b) {
            fence["a"] = i;
            fence["b"] = fenceLengh - 2 * i;
        }
    }
    
    return fence;
}

int main()
{
    int fenceLenght;
    cout<<"Enter fence lenght :";
    cin>>fenceLenght;
    map < string, int > out = calculateArea(fenceLenght);
    cout<<"a="<<out["a"];
    cout<<"b="<<out["b"];

    return 0;
}
