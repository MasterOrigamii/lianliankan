/*
* Name: QinKuai
* Status: Unfinised
*/

#ifndef USER_H
#define USER_H
#include <string>
#include "common.h"

class User {
public:
	User();
	User(std::string, std::string);

	std::string getUserName();
	void setUserName(std::string);
	std::string getPassword();
	void setPassword(std::string);
	int getScore();
	void setScore(int);
	int getCoins();
	void setCoins(int);
	int getTimePauseItemAmount();
	void setTimePauseItemAmount(int);
	int getTimeDelayItemAmount();
	void setTimeDelayItemAmount(int);
private:
	//�û���
	std::string userName;
	//�û�����
	std::string password;
	//�ܵ÷�
	int score;
	//�������
	//�����
	int coins;
	//��ͣ���߳�����
	int timePauseItemAmount;
	//��ʱ���߳�����
	int timeDelayItemAmount;

	//�ڴ˻����Ͽ��Լ���
	//�־ֻ���
	//int score_game1;
	//�û���ǰ�ѵ���ľ�����ǰ����������Ϸӵ�ж����Ϸ
	//int finished;
};

#endif // !USER_H

