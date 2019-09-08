#version 150

// these are for the programmable pipeline system
uniform mat4 modelViewProjectionMatrix;
in vec4 position;

uniform float mouseRange;
uniform vec2 mousePos;
uniform vec4 mouseColor;
in vec2 texcoord;

out vec2 texCoordVarying;

void main()
{
	
    texCoordVarying = texcoord;
    // copy position so we can work with it.
    vec4 pos = position;

	// finally set the pos to be that actual position rendered
	gl_Position = modelViewProjectionMatrix * pos;
}