//
//  main.cpp
//  2_Help_Chelsea
//
//  Created by 세광 on 2021/06/21.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, p;
    int c[100];
    struct Chelsea { string str; };
    Chelsea name[100];
    int index;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p;
        int max = 0;
        for(int j = 0; j < p; j++) {
            cin >> c[j] >> name[j].str;
            if(max < c[j]) {
                max = c[j];
                index = j;
            }
        }
        cout << name[index].str << endl;
    }
}
