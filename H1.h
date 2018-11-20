#pragma once

#include<iostream>

using namespace std;

//////////////// define names of classes

class ClassTask;     //the class includes the name, start time, end time of task.
class ClassTaskNode; //it is the node of task, includes names, start time, end time of task and the printer of next task node.
class ClassTaskList; //it is the start of list for task nodes.

//////////////// define names of functions


//////////////// define members of classes

class ClassTask 
{
public :
	ClassTask();
	ClassTask(char, int, int);
	void Display();
	void SetAll(char,int,int);
	void SetName(char);
	

protected:

private:
	char Name;
	int StartTime;
	int EndTime;


};


class ClassTaskNode
{
public:
	friend class ClassTaskList;

	ClassTaskNode();
	ClassTaskNode(char, int, int);
	~ClassTaskNode();

	void setAll(char, int, int);
	void setRightChild(ClassTaskNode*);
	void setLeftChild(ClassTaskNode*);

	void display();

	char getName();
	int getStartTime();
	int getEndTime();
	ClassTaskNode* getRightChild();
	ClassTaskNode* getLeftChild();

protected:

private:
	
	char Name;
	int StartTime;
	int EndTime;

	ClassTaskNode* RightChild;
	ClassTaskNode* LeftChild;

};


class ClassTaskList
{
public:
	
	ClassTaskList();
	ClassTaskList(ClassTaskNode*);
	~ClassTaskList();
	void setrootNode(ClassTaskNode*);
	void insertNode(ClassTaskNode*);

	ClassTaskNode* getRootNode();
	

protected:

private:
	ClassTaskNode * RootNode = 0;
};






