//
//  main.cpp
//  tesk.cpp6
//
//  Created by s20181105306 on 2019/7/3.
//  Copyright © 2019 s20181105306. All rights reserved.
//

//#include <iostream>

//int main(int argc, const char * argv[]) {
    // insert code here...
   // std::cout << "Hello, World!\n";
    //return 0;
//}
//  Copyright © 2019 s20181105306. All rights reserved.
//

//#include <iostream>
//#include <iostream>

//int main(int argc, const char * argv[]) {
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //td::cout << "Hello, World!\n";
    //return 0;
    //std::cout << "Hello, World!\n";
    //return 0;
    //}
    //#include <iostream>
    
    //int main(int argc, const char * argv[]) {
    //int main(int argc, const char * argv[]) {
    //int main(int argc, const char * argv[]) {
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    // return 0;
    //std::cout << "Hello, World!\n";
    // return 0;
    //#include <iostream>
    //#include <iostream>
    
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //eturn 0;
    //}
    //#include <fstream>
    //#include <fstream>
    
    //int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    //eturn 0;
    //}
    //#include<iostream>
    //#include<cstring>
    //#include<fstream>
    //#include<stdlib.h>
    //#include<iomanip>
    //#include"string.h"
    //include"stdlib.h"
    //using namespace std;
    //struct student
    //int main(){
    //ofstream count(/Users/s20181105306/Desktop/test.cpp);
    //ifstream int(/Users/s20181105306/Desktop/选手信息的副本.txt)
    //using namespace std;
#include<iostream>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include"string.h"
#include"stdlib.h"
using namespace std;
struct student
{
    string school;
    tring number;
    string name;
    string core;
    float avescore;
}
student[20];
struct judgments
{
    string name;
    float f_point[20];
}judge[7];
    //int main();
    
int main()
{
    static int add=0;
    string point;
    ifstream fp1("/Users/s20181105306/Desktop/选手比赛得分信息.txt");
}
static int Add=0;
do{
        //ifstream fp1 ("/Users/s20181105306/Desktop/选手信息.txt");
        
        
int ad=0;
do{
        getline(fp1,student[add].school,' ');
        getline(fp1,student[add].number,' ');
        getline(fp1,student[add].name,'\n');add++;
        }while(!fp1.eof());
        getline(fp1,student[add].name,'\n');
        add++;
}while(1)
fp1.close();
ifstream fp1("/Users/s20181105306/Desktop/评委信息.txt ");
do{
    getline(fp2,jude[add2].name,' ');
    int j=0;
    peo_number=add;
    for(;peo_number>1;peo_number--)
    {
        getline(fp2,point,'\n');
        jude[add2].f_point[j]=atoi(point.c_str());
        add2++;
    }
    }while(add2!=7);
getline(fp2,core[i]=atoi(core).D_str());
jude[add2].f_core[i]=atoi(core.c_str());
i++;
}
getline(fp2,core,'\n');
jude[add2].f_core[i]=atoi(core.c_str());
jude[add2].f_core[i]=atoi(core.c_str());
add2++;
}
fp2.close();

float G_point[7];
for(int k=0;k<add;k++)
{
    if(int.is_open()){
        if(int.is_open())
        {
            char num[10];
            char sex[5];
            char age[2];
            int remark;
            struct student*prior;
            struct student*next;}l;
        struct student*next;
    }
    l;
    struct student*start*,*last;
    void enter(),list(),save(),
    load(),delet_();
    @@ -123,10 +133,12 @@ int main(int argc, const char * argv[]) {
        G_point[i]=substitute;
    }
}
student[k].point=(G_point[1]+G_point[2]+G_point+G_point[3]+G_point[4]+G_point[5]);

}
stu[i].avepoint=(G_point[1]+G_point[2]+G_point+G_point[3]+G_point[4]+G_point[5])
}
ofstream fp3("/Users/s20181105306/Desktop/选手比赛得分信息.txt“)
             if(!fp3)
             {
                 break;
                 fp3<<"学校     编号    名字    分数" ;
                 @@ -138,6 +150,7 @@ int main(int argc, const char * argv[]) {
                     float Max=stu[0].avepoint;int Max_j=0;
                     for(int j=0;j<add;j++)
                     {
                         
                         for(int i=0;i<add;i++)
                         {
                             if(stu[i].avepoint>=Max)
                                 @@ -147,10 +160,18 @@ int main(int argc, const char * argv[]) {
                                 }
                         }
                         fp3<<setw(10)<<setiosflags(ios::left)<<stu[Max_j].name;
                         fp3<<setw(9)<<setiosflags(ios::left)<<stu[Max_j].collage;   }
                     //fp3<<setw(9)<<setiosflags(ios::left)<<stu[Max_j].collage;
                     
                 }
                 fp3<<setw(8)<<setiosflags(ios::left)<<stu[Max_j].Num;
                 fp3<<setw(7)<<setiosflags(ios::left)<<stu[Max_j].avepoint;
                 for(int k=0;k<7;k++)
                 {
                     fp3<<setw(8)<<setiosflags(ios::left)<<jud[s].f_point[Max_i];
                     fp3<<endl;
                     stu[Max_j].avepoint==0;
                     Max=stu[0].avepoint;
                     
                 }
                 return 0;
                 }
