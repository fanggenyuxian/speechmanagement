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

	//参加比赛的选手
	vector<int> v1;
	//第一轮晋级的选手
	vector<int> v2;
	//胜利的选手
	vector<int> vVictory;
	//选手与编号对应的关系
	map<int, Speaker> m_Speaker;
	//比赛轮数
	int m_Index;
};
