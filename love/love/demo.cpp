#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

int test(){

	string str;
	bool flag = false;

	for(int i=1;i<=3;i++){
		cout << "��ʼ��" << i << "������" << endl;
		cout << "��ϲ����������" << endl;
		cin >> str;

		if(str != "yes"){
			continue;
		}
		cout << "�Ӹ�΢�Ű�..." << endl;

		cout << "�������㣬����������" << endl;
		cin >> str;
		
		//����goto���������� 1.���� 2.���
		if(str == "yes"){
			//goto happy;
			flag = true;
			break;
		}
	}

//happy :
	if(flag){
		cout << "��������֮��..." << endl;
	}

	system("pause");
	return 0;
}