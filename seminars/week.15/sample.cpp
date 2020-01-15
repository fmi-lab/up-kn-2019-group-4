#include<iostream>
#include<fstream>
// stream >> obj; stream << obj;

// int readInt(){
// }

int main(){
    // int a = readInt();
    std::ifstream in("sample");
    std::ofstream out("sample_out.exe");
    int temp;
    int size;
    in >> size;
    int* arr = new int[size];
    for(int i = 0;i< size && in >> temp;i++){
        arr[i] = temp;
        out << "---" << arr[i];
    }
    delete [] arr;
    in.close();
    out.close();
    std::fstream mix; // mix >> temp; mix << temp;
    return 0;
}