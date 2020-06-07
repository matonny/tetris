#include <iostream>
#include <vector>
#include <ncurses.h>
struct block {
        int x;
        int y;
};
struct tetromino {
    std::vector <block> blocks;
    int color;
};
enum colors  {
    cyan = 0,
    blue = 1,
    white = 2,
    yellow = 3,
    green = 4,
    magenta = 5,
    red = 6
};
const tetromino shapeI = {
        {{0,0}, {0,1}, {0, 2}, {0,3}},
        colors(cyan)
};
const tetromino shapeJ = {
        {{0,0}, {0,1}, {1,1}, {1,2}},
        colors(blue)
};
const tetromino shapeL = {
        { {0, 1}, {1,1}, {2,1}, {2,0}},
        colors(white)
};
const tetromino shapeO = {
        { {0,0}, {0,1},{ 1,1}, {1, 0}},
        colors(yellow)
};
const tetromino shapeS = {
        {{0,1}, {1,1}, {1,0}, {2,0}},
        colors(green)
};
const tetromino shapeT = {
        { {0,0}, {1,1}, {1,0}, {2,0}},
        colors(magenta)
};
const tetromino shapeZ = {
        { {0,0}, {1,0}, {1,1}, {2,1}},
        colors(red)
};
using table = std::vector< tetromino >;

int main()
{

}
