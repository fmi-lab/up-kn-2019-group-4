#include<iostream>
// int global_var = 2;

bool f1() {
    std::cout <<"f1 ";
    int a = 0;
    int b = 2 / a;
    return true;
}

bool f2() {
    std::cout <<"f2 ";
    return true;
}

void Log(int data, int other_data) {
    std::cout << data << std::endl;
}
// return_type int/ double/ char/ int* f_name ([params]) {

//}
//if if...else switch ?
int main() {
    int test = 4;
    Log(f2(), 5);
    // int a;
    // std::cin >> a;
    // if (a % 2 == 0) {
    //     // a = a * 2;
    //     a *= 2;
    // } else  {
    //     // a = a + 1;
    //     a += 1;
    // }
    // std::cout << a << std::endl;
    int b = 1;
    // bool expr = b > 0 && f1() && b < 10 && f2();
    // std::cout << expr << std::endl;
    // switch(b) {
    //     case 1: {
    //         std::cout << "one\n";break;
    //     }
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5: {
    //         std::cout <<"found\n";break;
    //     }
    //     default: {
    //         std::cout << "def\n";
    //     }
    // }
    // bool temp = true;
    // int b_res = b % 2 == 0 ? b*2 : b+1;
    // std::cout<<b_res<<std::endl;
    // (bool expr) ? true_ops : false_ops
    return 0; 
}

