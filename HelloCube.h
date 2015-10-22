/*
 * HelloCube.h
 * 
 * Copyright (c) 2014 by Universitaet Stuttgart (VISUS).
 * All rights reserved.
 * 
 * Created by Thomas Mueller  <Thomas.Mueller@vis.uni-stuttgart.de>
 * 
 * Description:
 *    Practical Course in Visual Computing
 *    First assignment
 * 
 * This file is part of OGL4Core.
 */

#include "RenderPlugin.h"
#include "glm.hpp"
#include "GL/gl3w.h"


class OGL4COREPLUGIN_API HelloCube : public RenderPlugin {
public:
    HelloCube(COGL4CoreAPI *Api);
    ~HelloCube(void);

    virtual bool Activate(void);
    virtual bool Deactivate(void);
    virtual bool Init(void);
    virtual bool Keyboard(unsigned char key, int x, int y);
    virtual bool Motion(int x, int y);   
    virtual bool Mouse(int button, int state, int x, int y);      
    virtual bool Render(void);      
    virtual bool Resize(int w, int h);

protected:
    // Enter methods to create shader program
    bool   setShaderProgram();
    
    // Write callback functions for the API variables

    
    // Set view matrix depending on camera pitch and yaw
    void   setCameraView();
    
    // Set projection matrix 
    void   setProjMatrix();
    

private:
    // API variables
    
    GLuint va, vbo, ibo;
    GLuint shaderProg, vertexShader, fragmentShader;
    
    glm::mat4 projectionMatrix;
    glm::mat4 viewMatrix;
    glm::mat4 modelMatrix;
    glm::mat4 objectTranslateMatrix;
    glm::mat4 objectRotateMatrix;
    glm::mat4 objectScaleMatrix;
    
    float aspectRatio;
};

extern "C" OGL4COREPLUGIN_API RenderPlugin* OGL4COREPLUGIN_CALL CreateInstance(COGL4CoreAPI *Api) {
    return new HelloCube(Api);
}
