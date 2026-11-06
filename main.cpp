#include <iostream>
#include "TaskManager.cpp"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
    EditTask();

    return 0;
}
