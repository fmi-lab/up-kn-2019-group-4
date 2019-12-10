#include<iostream>
#include "../helpers/helpers.h"

#define MAZE_SIZE 5

int maze[MAZE_SIZE][MAZE_SIZE] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,0,1},
    {1,0,1,0,1},
    {1,0,1,1,1},
};

bool checkCoordinates(const int& x, const int& min_value = 0, const int& max_value = MAZE_SIZE) {
    return min_value <= x && x <= max_value;
}

bool hasPath(const int& x_start, const int& y_start, const int& x_end, const int& y_end) {
    bool is_start_correct = (checkCoordinates(x_start) && checkCoordinates(y_start));
    bool is_end_correct = (checkCoordinates(x_end) && checkCoordinates(y_end));
    if (!is_start_correct || !is_end_correct) { return false; }
    if (maze[x_start][y_start] == 0) { return false; }
    if (maze[x_end][y_end] == 0) { return false; }
    if (x_start == x_end && y_start == y_end) { return true; }

    maze[x_start][y_start] = 0;
    bool has_path_from_sibling = hasPath(x_start + 1, y_start, x_end, y_end) ||
                                 hasPath(x_start - 1, y_start, x_end, y_end) ||
                                 hasPath(x_start, y_start + 1, x_end, y_end) ||
                                 hasPath(x_start, y_start - 1, x_end, y_end);
    maze[x_start][y_start] = 1;
    return has_path_from_sibling;
}

int main() {
    std::cout << std::boolalpha << hasPath(0,0,4,4);
    return 0;
}