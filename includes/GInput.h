/*
  Handle user input with GLFW poll events to update render.
*/

#ifndef _GINPUT_H
#define _GINPUT_H

#include "stdafx.h"
#include "DrawFrame.h"

namespace zLeafEngine
{
	class GInput : protected DrawFrame //-> App
	{
		public:
			static void inputKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
	};
}

#endif // !_GINPUT_H