#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

int test(){

	string str;
	bool flag = false;

	for(int i=1;i<=3;i++){
		cout << "开始第" << i << "次相亲" << endl;
		cout << "你喜欢打王者吗？" << endl;
		cin >> str;

		if(str != "yes"){
			continue;
		}
		cout << "加个微信吧..." << endl;

		cout << "我中意你，你中意我吗？" << endl;
		cin >> str;
		
		//代替goto的其他方案 1.函数 2.标记
		if(str == "yes"){
			//goto happy;
			flag = true;
			break;
		}
	}

//happy :
	if(flag){
		cout << "开启浪漫之旅..." << endl;
	}

	system("pause");
	return 0;
}