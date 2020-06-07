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
    cyan = 1,
    blue = 2,
    white = 3,
    yellow = 4,
    green = 5,
    magenta = 6,
    red = 7
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
void drawTetromino (const tetromino &drawnTetromino);
int main()
{
    tetromino currentTetromino = shapeI;
    initscr();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_CYAN, COLOR_CYAN);
    init_pair(colors(blue), COLOR_BLUE, COLOR_BLUE);
    init_pair(colors(white), COLOR_WHITE, COLOR_WHITE);
    init_pair(colors(yellow), COLOR_YELLOW, COLOR_YELLOW);
    init_pair(colors(green), COLOR_GREEN, COLOR_GREEN);
    init_pair(colors(magenta), COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(colors(red), COLOR_RED, COLOR_RED);
    drawTetromino(currentTetromino);
    getch();
    endwin();
}
void drawTetromino(const tetromino &drawnTetromino){
    attron(COLOR_PAIR(drawnTetromino.color));
    for(int i = 0; i < drawnTetromino.blocks.size(); i++){
        mvprintw(drawnTetromino.blocks[i].y, drawnTetromino.blocks[i].x, "*");
    }
    attroff(COLOR_PAIR(drawnTetromino.color));
    refresh();
}