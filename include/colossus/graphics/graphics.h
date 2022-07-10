#pragma once

#include "colossus/core/defs.h"

typedef struct Graphics Graphics;

extern Graphics *graphicsInit(I32 width, I32 height, const char *title, B8 resizable);
extern void graphicsTerminate(Graphics *graphics);

extern void graphicsLoop(Graphics *graphics, void (*user_function)(void *args), void *args);