#pragma once
#include <iostream>
#include "utils.h"

using namespace std;
using namespace utils;

class Window
{
protected:
    string name;
    int width, height;

public:
    Window(string n, int w, int h) : name(n), width(w), height(h) { cout << "Window(string, int, int) constructor run.." << endl; }
    void showMember();
    int getArea();
};

void Window::showMember() { cout << "name: " << name << ", width: " << width << ", height: " << height << ", area()= " << getArea() << endl; }

int Window::getArea() { return width * height; }