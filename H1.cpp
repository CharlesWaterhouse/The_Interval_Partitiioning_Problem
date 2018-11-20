

#include<iostream>


#include"H1.h"

using namespace std;


////////////////////// body of functions


////////////////////// body of members of classes

// body of members of ClassTask
ClassTask::ClassTask() :Name('0'), StartTime(0), EndTime(0) { } 
ClassTask::ClassTask(char Name, int StartTime, int EndTime) : Name(Name), StartTime(StartTime), EndTime(EndTime) {}
void ClassTask:: Display() {
	cout << Name << "," << StartTime << "," << EndTime << endl;
}
void ClassTask::SetAll(char Name, int StartTime, int EndTime) {
	this->Name = Name;
	this->StartTime = StartTime;
	this->EndTime = EndTime;
}
void ClassTask::SetName(char Name) {
	this->Name = Name;
}




//body of members of ClassTaskNode
ClassTaskNode::ClassTaskNode() :Name('0'), StartTime(0), EndTime(0) {}
ClassTaskNode::ClassTaskNode(char Name, int StartTime, int EndTime) : Name(Name), StartTime(StartTime), EndTime(EndTime) {}
ClassTaskNode::~ClassTaskNode() {
	cout << "do distractor of ClassTaskNode" << endl;
}
void ClassTaskNode:: setAll(char setName, int setSTime, int setETime){
	Name = setName;
	StartTime = setSTime;
	EndTime = setETime;
}
void ClassTaskNode::setLeftChild(ClassTaskNode* setLC){
	LeftChild = setLC;
}
void ClassTaskNode::setRightChild(ClassTaskNode* setRC) {
	RightChild = setRC;
}
void ClassTaskNode::display() {
	cout << Name << "," << StartTime << "," << EndTime << endl;
}
char ClassTaskNode::getName() { return Name; }
int ClassTaskNode::getStartTime() { return StartTime; }
int ClassTaskNode::getEndTime() { return EndTime; }
ClassTaskNode* ClassTaskNode::getRightChild() { return RightChild; }
ClassTaskNode* ClassTaskNode::getLeftChild() { return LeftChild; }



//body of members of ClassTaskList
ClassTaskList::ClassTaskList() :RootNode(0) {}
ClassTaskList::ClassTaskList(ClassTaskNode* septrNode) : RootNode(septrNode) {}
ClassTaskList::~ClassTaskList() {
	cout << "do distractor of ClassTaskList" << endl;
	
}
void ClassTaskList::setrootNode(ClassTaskNode* septrNode) {
	RootNode = septrNode;
}
void ClassTaskList::insertNode(ClassTaskNode* insptrNode) {
	if (RootNode == 0) {
		RootNode = insptrNode;
		return;
	}
	
}
ClassTaskNode* ClassTaskList::getRootNode() { return RootNode; }




