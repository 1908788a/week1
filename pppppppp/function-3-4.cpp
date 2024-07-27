
#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            cout << "通过" << endl;
            break;
        case 'D':
        case 'E':
            cout << "失败" << endl;
            break;
        default:
            cout << "无效成绩" << endl;
    }
}
