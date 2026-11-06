#include <iostream>
#include "TaskManager.cpp"

using namespace std;

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
    DeleteTask();

    return 0;
}
