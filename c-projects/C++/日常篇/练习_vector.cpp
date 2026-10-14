#include <bits/stdc++.h>
#include <vector>//用到

//连续的顺序的储存结构（和数组一样的
//类别），但是有长度可变的特性。

using namespace std;

int main()
{
    //1.构造
    //一维
    vector<int> dp(100/*长度*/,1/*初值*/);
    vector<double> dpd;

    vector<int> dph();//未声明默认全为0，可以只声明其中一个，不要加括号，这不会报错，但属于错误命名

    //二维
    vector<vector<int>> dp2(100/*行*/,vector<int> (221/*列*/,1/*初值*/));
    //还可以
    vector<vector<int>> dph2(100,vector<int> ());

    //三维，稍长
    vector<vector<vector<int>>> dp3(5,vector<vector<int>> (6,vector<int> (4,1)));
    //声明了一个5，6，4的三维数组，初值全为一

    //用起来等价于（但实际不一样）
    int dph3[5][6][4];


    //kkk
    //   奇怪的写法
    //zzz         START
    vector<int> arr[100];
    //语法正确，构造初始100行，不指定列数的二维数组，不推荐。
    //但可用于链式前向星存图。（这啥东西）

    //vector<int> arr[100]{100,1};//语法错误
    //vector<int> arr(100, 1)[100];//语法错误

    vector<int> arr[100] {{100, 1},/*这里省略98个*/{100, 1}}; 
    //正确但奇葩，使用列表初始化。 (神了)

    //zzz        AND
    //  
    //kkk

    //2.尾接 & 尾删  时间复杂度：均摊 O(1)
    //.push_back(元素)：在vector 尾接一个元素，数组长度+1
    vector<int> cm;
    cm.push_back(1);//像这样在cm的最后推入一个数
    cm.push_back(2);
    cm.push_back(3);

    for(auto &cmd:cm){
        cout << cmd << '\n';
    }
    //输出1，2，3

    //.pop_back()：删除vector尾部的一个元素，数组长度−1
    cm.pop_back();
    //after: arr = [1,2]
    cm.pop_back();
    //after: arr = [1]

    //3.获取长度  时间复杂度：O(1)
    //通过.size()获取当前vector的长度
    for (int i = 0; i < cm.size(); i++){
        cout << cm[i] << '\n';
    }

    //4.清空  时间复杂度：O(n)
    //清空vector
    cm.clear();

    //5.清空  时间复杂度：O(1)
    //如果是空返回true(1) 反之返回false(0)  
    cm.empty();
    //一般那么用
    if(cm.empty()){
        //执行想要的程序
    }

    //6.改变长度  时间复杂度：O(n)
    //如果是缩短，则直接删除多余的值
    //如果是扩大，且指定了默认值，则新元素均为默认值（旧元素不变）,未指定则为0

    vector<int> fm(3,1);//假设有一个长度为3，初值为1的数组
    fm.resize(4);//将数组数量扩展到4个
    //输出1,1,1,0
    fm.resize(2);
    //输出1，1

    return 0;
}

int main(){
    //注意事项

    //1.提前指定长度
    //如果长度已经确定，那么应当直接在构造函数指定长度，而不是一个一个.push_back()
    //因为vector额外内存耗尽后的重分配是有时间开销的，直接指定长度就不会出现重分配了。
    //优化前: 522ms
    vector<int> a;
    for(int i = 0; i < 1e8; i++)
        a.push_back(i);
    //优化后: 259ms
    vector<int> a(1e8);
    for(int i = 0; i < a.size(); i++)
        a[i] = i;

    //2.当心 size_t 溢出
    //vector获取长度的方法.size()返回值类型为size_t，通常OJ平台使用的是 32 位编译器（有
    //些平台例如cf可选 64 位），那么该类型范围为[0, 2³²)
    vector<int> a(65536);
    long long sz = a.size() * a.size(); // 直接溢出变成0了

    return 0;
} 