/*
 < 18,5 – niedowaga

 [18,5; 25) – wartość prawidłowa

 ≥ 25,0 – nadwaga
 BMI=masa[kg]/(wzrost)^2[m^2]
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m,w,i;
    double p;
    string s;
    vector<string> v1,v2,v3;// v1 - niedowaga, v2 - wartosc prawidłowa, v3 - nadwaga
    cin >> n;
    while(n != 0)
    {
        cin >> s >> m >> w;
        p = m /(double)(w * w);
        p *= 10000;
//        cout << s << " " << p << endl;
        if(p < 18.5)
            v1.push_back(s);
        else if(p < 25)
            v2.push_back(s);
        else
            v3.push_back(s);
        n--;
    }
//    if(v1.size() > 0){   z tym nie wchodzi na spoj'a
    cout << "niedowaga\n";
    for(i = 0;i < v1.size();i++)
        cout << v1[i] << endl;
//}
//    if(v2.size() > 0){
    cout << "\nwartosc prawidlowa\n";
    for(i = 0;i < v2.size();i++)
        cout << v2[i] << endl;
//}
//    if(v3.size() > 0){
    cout << "\nnadwaga" << endl;
    for(i = 0;i < v3.size();i++)
        cout << v3[i] << endl;
//}
    return 0;
}
