#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
	// Add new to do list
    void addTask(const std::string& description) 
	{
        tasks.push_back({description,false});
        std::cout<<"\nTask added successfully!\n";
    }
    
    // View Task in to do list
    void viewTasks()const 
	{
        if(tasks.empty()) 
		{
            std::cout<<"\nNo tasks found.\n";
        } 
		else 
		{
            std::cout<<"\nTo-Do List:\n";
            for(size_t i=0;i<tasks.size();++i) 
			{
                const Task&task=tasks[i];
                std::cout<<i+1<<". "<<task.description;
                if(task.completed) 
				{
                    std::cout<<" (Completed)";
                } 
				else 
				{
                    std::cout<<" (Pending)";
                }
                std::cout<<"\n";
            }
        }
    }
    
    // Mark as complete the pending task
    void markCompleted(int index)
	{
        if(index>=1&&index<=static_cast<int>(tasks.size())) 
		{
            tasks[index - 1].completed=true;
            std::cout<<"\nTask marked as completed!\n";
        } 
		else
		{
            std::cout<<"\nInvalid task index.\n";
        }
    }
    
    // Remove Task from to do list
    void removeTask(int index) 
	{
        if(index>=1&&index<=static_cast<int>(tasks.size()))
		{
            tasks.erase(tasks.begin()+index-1);
            std::cout<<"\nTask removed successfully!\n";
        }
		else
		{
            std::cout<<"\nInvalid task index.\n";
        }
    }
};

int main() 
{
    ToDoList todoList;
    int choice, index;
    std::string taskDescription;

    while(true)
	{
        std::cout<<"\n\t====== To-Do List Manager ======\n";
        std::cout<<"\t1. Add Task\n";
        std::cout<<"\t2. View Tasks\n";
        std::cout<<"\t3. Mark Task as Completed\n";
        std::cout<<"\t4. Remove Task\n";
        std::cout<<"\t5. Exit\n";
        std::cout<<"\tEnter your choice (1-5): ";
        std::cin>>choice;
        
        // Switch condition to select the main menu
        switch(choice)
		{
        case 1:
            std::cout<<"\nEnter the task description: ";
            std::cin.ignore();
            std::getline(std::cin,taskDescription);
            todoList.addTask(taskDescription);
            break;
        case 2:
            todoList.viewTasks();
            break;
        case 3:
            std::cout<<"\nEnter the task index(1 to 100) to mark as completed: ";
            std::cin>>index;
            todoList.markCompleted(index);
            break;
        case 4:
            std::cout<<"\nEnter the task(1 to 100) index to remove: ";
            std::cin>>index;
            todoList.removeTask(index);
            break;
        case 5:
            std::cout<<"\nExiting the program.\n";
            return 0;
        default:
            std::cout<<"\nInvalid choice. Please try again.\n";
            break;
        }

        std::cout<<"\n";
    }

    return 0;
}

