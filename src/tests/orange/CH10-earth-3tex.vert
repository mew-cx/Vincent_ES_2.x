//
// Vertex shader for drawing the earth with three textures
//
// Author: Randi Rost
//
// Copyright (c) 2002-2006 3Dlabs Inc. Ltd. 
//
// See 3Dlabs-License.txt for license information
//

varying float Diffuse;
varying vec3  Specular;
varying vec2  TexCoord;

uniform vec3 LightPosition;

attribute vec4 gl_Vertex;
attribute vec3 gl_Normal;
attribute vec4 gl_MultiTexCoord0;

uniform mat4 gl_ModelViewProjectionMatrix;
uniform mat4 gl_ModelViewMatrix;
uniform mat3 gl_NormalMatrix;

vec4 ftransform()
{
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}

void main()
{
    vec3 ecPosition = vec3(gl_ModelViewMatrix * gl_Vertex);
    vec3 tnorm      = normalize(gl_NormalMatrix * gl_Normal);
    vec3 lightVec   = normalize(LightPosition - ecPosition);
    vec3 reflectVec = reflect(-lightVec, tnorm);
    vec3 viewVec    = normalize(-ecPosition);

    float spec      = clamp(dot(reflectVec, viewVec), 0.0, 1.0);
    spec            = pow(spec, 8.0);
    Specular        = vec3(spec) * vec3(1.0, 0.941, 0.898) * 0.3;

    Diffuse         = max(dot(lightVec, tnorm), 0.0);

    TexCoord        = gl_MultiTexCoord0.st;
    gl_Position     = ftransform();
}
