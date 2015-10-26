/*
 * HelloCube.cpp
 * 
 * Copyright (c) 2014 by Universitaet Stuttgart (VISUS).
 * All rights reserved.
 * 
 * This file is part of OGL4Core. test
 */
 
#include "stdafx.h"
#include "HelloCube.h"
#include "gtc/matrix_transform.hpp"

const static float  INIT_CAMERA_DOLLY = 5.0f;
const static float  INIT_CAMERA_FOVY  = 45.0f;

const static float  MIN_CAMERA_PITCH = -89.99f;
const static float  MAX_CAMERA_PITCH = 89.99f;


// Vertex and Fragment shader code

// --------------------------------------------------
//  These are only dummy shaders and have to be 
//  replaced by your own written shaders.
// --------------------------------------------------
const static std::string minimalVertexShaderCode = 
    "#version 330 \n" \
    "void main() { \n" \
    "}";
    
const static std::string minimalFragmentShaderCode = 
    "#version 330 \n" \
    "out vec4 fragColor; \n" \
    "void main() { \n" \
    "    fragColor = vec4(1,1,1,1); \n" \
    "}";    
    

// --------------------------------------------------    
//  Number of cube vertices: numCubeVertices
//  Vertex data for cube:    cubeVertices
//
//  To render the cube faces use vertex indices!
// --------------------------------------------------
const static int numCubeVertices = 8;

const static float cubeVertices[] = { 
    -0.5f,-0.5f,-0.5f,1.0f,
     0.5f,-0.5f,-0.5f,1.0f,
     0.5f, 0.5f,-0.5f,1.0f,
    -0.5f, 0.5f,-0.5f,1.0f,
    -0.5f,-0.5f, 0.5f,1.0f,
     0.5f,-0.5f, 0.5f,1.0f,
     0.5f, 0.5f, 0.5f,1.0f,
    -0.5f, 0.5f, 0.5f,1.0f,    
};

// --------------------------------------------------
//  Number of cube triangles:  numCubeFaceTriangles
//  Indices for cube faces:    cubeFaces
// --------------------------------------------------
    
/**
 * @brief HelloCube constructor
 */
HelloCube::HelloCube(COGL4CoreAPI *Api) : RenderPlugin(Api),
    shaderProg(0),
    aspectRatio(1.0f)  {
    this->myName = "PCVC/HelloCube";
    this->myDescription = "First assignment of PCVC";
        
}

/**
 * @brief HelloCube destructor
 */
HelloCube::~HelloCube() {
}

/**
 * @brief HelloCube activate method
 */
bool HelloCube::Activate(void) {
    // --------------------------------------------------
    //  Initialize API variables here
    // --------------------------------------------------
    
    // --------------------------------------------------
    //  Generate vertex array and vertex buffer objects
    //  for the cube rendering.
    // --------------------------------------------------
    
    // --------------------------------------------------
    //  Initialize shader program
    // --------------------------------------------------
        
    // --------------------------------------------------
    //  Set other stuff if necessary
    // --------------------------------------------------   
        
    glEnable(GL_DEPTH_TEST);  
    return true;
}

/**
 * @brief HelloCube deactive method
 */
bool HelloCube::Deactivate(void) {    
    glDisable(GL_DEPTH_TEST);
    
    // --------------------------------------------------
    // Do not forget to cleanup the plugin!
    // --------------------------------------------------
    return true;
}

/**
 * @brief HelloCube initialization method
 */
bool HelloCube::Init(void) {
    if (gl3wInit()) {
       fprintf(stderr,"Error: Failed to initialize gl3w.\n");
       return false;
    }     
    return true;
}

/**
 * @brief HelloCube keyboard callback function
 * @param key
 * @param x
 * @param y
 */
bool HelloCube::Keyboard(unsigned char key, int x, int y) {
    return false;
}

/**
 * @brief HellCube mouse motion callback function
 * @param x
 * @param y
 */
bool HelloCube::Motion(int x, int y) {    
    // --------------------------------------------------
    //  Camera and object control
    // --------------------------------------------------
    
    // --------------------------------------------------
    //  After a mouse interaction, the OpenGL window
    //  has to be updated.
    // --------------------------------------------------   
    PostRedisplay();
    return false;
}

/**
 * @brief HelloCube mouse callback function
 * @param button
 * @param state
 * @param x
 * @param y
 */
bool HelloCube::Mouse(int button, int state, int x, int y) {    
    return false;
}

/**
 * @brief HelloCube render method
 */
bool HelloCube::Render(void) {
    return false;
}

/**
 * @brief HelloCube resize method
 * @param width
 * @param height
 */
bool HelloCube::Resize(int width, int height) {
    return true;
}




















bool HelloCube::setShaderProgram() {
    return false;  
}

void HelloCube::setCameraView() {
}

void HelloCube::setProjMatrix() {  
    // Set the projection matrix using camera field-of-view,
    // the aspect ratio of the window, and the near- and far-
    // clipping distances.    
}


