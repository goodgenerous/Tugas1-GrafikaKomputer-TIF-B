#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	float position = -1;
	float position2 = -2;
	float initpos = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredCube2();
	void BuildColoredCube3();
	void BuildColoredCube4();
	void BuildColoredCube5();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredCube5();
	void DrawColoredPlane();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

};
