#pragma once

#include <QOpenGLWindow>
#include <QOpenGLShaderProgram>
#include <QtGui/QOpenGLFunctions_4_3_Core>

class TriangleWindow : public QOpenGLWindow, protected QOpenGLFunctions_4_3_Core
{
public:
	TriangleWindow();
	~TriangleWindow();

	void initializeGL() override;
	void paintGL() override;
	
private:
	GLuint m_posAttr;
	GLuint m_colAttr;
	GLuint m_matrixUniform;

	QOpenGLShaderProgram *m_program;
	int m_frame;

	const QString readShaderFile(const QString& name) const;
};
