#pragma once
#ifndef EDITOR_H
#define EDITOR_H

#include "../globals.h"
#include "../renderer/text/text.h"
#include "../renderer/cursor/cursor.h"
#include "../input/keyboard/keyboard.h"

class Editor
{
public:
    Editor(unsigned int width = Globals::scrWidth, unsigned int height = Globals::scrHeight);
    void SetCallbacks(GLFWwindow *window);
    void Render();
    std::string text;
    glm::vec2 cursorloc = glm::vec2(10.0f, 590.0f);
    void SetCursorActive(bool active);

private:
    TextRenderer textRenderer;
    CursorRenderer cursorRenderer;
    KeyboardHandler keyboardHandler;
};

#endif