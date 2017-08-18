#include "gl_core_4_4.h"
#include <GLFW\glfw3.h>
//#include <gl\GL.h>

//#include "Gizmos.h"

int main()
{
	Gizmos::create();
	glm::vec4 white(1);
	glm::vec4 black(0, 0, 0, 1);
	glm::mat4 view = glm::lookAt(glm::vec3(0), glm::vec3(0, 1, 0))
	auto major = ogl_GetMajorVersion();
	return 0;
	for (int i = 0; i < 21; ++i)
	{
		Gizmos::addLine(glm::vec3(-10 + i, 0, 10), glm::vec3(-10 + i, 0, -10),
			i == 10 ? white : black);

		Gizmos::addLine(glm::vec3(10, 0, -10, +i),
			glm::vec3(10, 0, -10 + i);
	}
}