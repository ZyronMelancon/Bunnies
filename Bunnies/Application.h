#pragma once

struct GLFWwindow;

class Application
{
private:
	bool run();
	//GLFWwindow m_window;
	bool m_gameover;
protected:
	virtual bool startup();
	virtual bool shutdown() = 0;
	virtual bool draw() = 0;
	virtual bool update(float) = 0;
public:
	Application() {};
};