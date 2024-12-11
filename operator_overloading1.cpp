/*Class Test has an integer array which stores marks of various tests. For example, if the array is marks[] then marks[1] stores the marks of subject1, marks[2] stores the marks for subject2 and so on. Overload the subscript operator so that you can compare the marks of each subject for two objects of the test class.*/
#include<iostream>
using namespace std;
class Test{
    private:
        int marks[5];
    public:
    void setMarks(int m[]){
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }
    int operator[](int index)const{
        if(index>=0 && index<5){
            return marks[index];
        }
        else{
            cout<<"Index is out of bounds."<<endl;
            return -1;
        }
    }
    bool operator==(const Test& other)const{
        Test t=*this;
        for(int i=0;i<5;i++){
            if(t[i] != other[i]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Test t1,t2;
    int m1[5],m2[5];
    cout<<"Enter the marks for Student 1:"<<endl;
    for(int i=0;i<5;i++){
        cin>>m1[i];
    }
    cout<<"Enter the marks for Student 2:"<<endl;
    for(int i=0;i<5;i++){
        cin>>m2[i];
    }
    t1.setMarks(m1);
    t2.setMarks(m2);
    for(int i=0;i<5;i++){
        if(t1[i]==t2[i]){
            cout<<"Marks for subject "<<i+1<<" are the same."<<endl;
        }
        else{
            cout<<"Marks for subject "<<i+1<<" are not the same."<<endl;
        }
    }
    return 0;
}
