#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"

class SpeechManager {
public:
	SpeechManager();

	void show_menu();

	void exit_system();

	void init();

	~SpeechManager();

	//�μӱ�����ѡ��
	vector<int> v1;
	//��һ�ֽ�����ѡ��
	vector<int> v2;
	//ʤ����ѡ��
	vector<int> vVictory;
	//ѡ�����Ŷ�Ӧ�Ĺ�ϵ
	map<int, Speaker> m_Speaker;
	//��������
	int m_Index;
};
