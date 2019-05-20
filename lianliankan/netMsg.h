/*
* Name: QinKuai
* Status: Finished
*/

#ifndef NETMSG_H
#define NETMSG_H
#include <list>
#include "stdafx.h"
#include "user.h"
#include "common.h"

class NetMsg {
public:
	NetMsg();
	NetMsg(std::list<User>&, int);
	~NetMsg();
	//���л�
	//������ָ����û�����
	//ת��Ϊ�ַ�����ʵ�����紫��
	int serialize(char*&);
	//�����л�
	//�����紫��������ַ���
	//ת��Ϊһ����������ָ����û�����Ķ���
	int deserialize(const char*);

	void addUserToList(User&);
	std::list<User>& getUsers();
	void setUsers(std::list<User>&);
	int getCommand();
	void setCommand(int);
private:
	//�ں���ĳһ�û�
	std::list<User> users;
	//�û��б��е��û���
	int list_size;
	//ָ���Ĳ�������
	int command;
};

#endif // !NETMSG_H

