#include <bits/stdc++.h>
#include <vector>
#include <string>
class task {
public:
    task(const std::string& description) : description(description), completed(false) {}

    std::string description;
    bool completed;
};

class ToDoList {
public:
    void add_task(const std::string& description) {
        tasks.push_back(task(description));
        std::cout << "task '" << description << "' added to the list." << std::endl;
    }

    void view_tasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
        } else {
            std::cout << "Tasks:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                const std::string status = tasks[i].completed ? "Completed" : "Pending";
                std::cout << i + 1 << ". " << tasks[i].description << " - " << status << std::endl;
            }
        }
    }

    void mark_completed(size_t task_number) {
        if (task_number >= 1 && task_number <= tasks.size()) {
            task& task = tasks[task_number - 1];
            if (!task.completed) {
                task.completed = true;
                std::cout << "task '" << task.description << "' marked as completed." << std::endl;
            } else {
                std::cout << "task is already completed." << std::endl;
            }
        } else {
            std::cout << "Invalid task number." << std::endl;
        }
    }

    void remove_task(size_t task_number) {
        if (task_number >= 1 && task_number <= tasks.size()) {
            task removed_task = tasks[task_number - 1];
            tasks.erase(tasks.begin() + task_number - 1);
            std::cout << "task '" << removed_task.description << "' removed from the list." << std::endl;
        } else {
            std::cout << "Invalid task number." << std::endl;
        }
    }

private:
    std::vector<task> tasks;
};

int main() {
    ToDoList todo_list;

    while (true) {
        std::cout << "\nOptions:" << std::endl;
        std::cout << "1. Add task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark task as Completed" << std::endl;
        std::cout << "4. Remove task" << std::endl;
        std::cout << "5. Exit" << std::endl;

        int CHOICE;
        std::cout << "Enter your CHOICE: ";
        std::cin >> CHOICE;

        switch (CHOICE) {
            case 1: {
                std::string description;
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Clear the newline character
                std::getline(std::cin, description);
                todo_list.add_task(description);
                break;
            }
            case 2:
                todo_list.view_tasks();
                break;
            case 3: {
                size_t task_number;
                std::cout << "Enter task number to mark as completed: ";
                std::cin >> task_number;
                todo_list.mark_completed(task_number);
                break;
            }
            case 4: {
                size_t task_number;
                std::cout << "Enter task number to remove: ";
                std::cin >> task_number;
                todo_list.remove_task(task_number);
                break;
            }
            case 5:
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid CHOICE. Please choose again." << std::endl;
                break;
        }
    }

    return 0;
}