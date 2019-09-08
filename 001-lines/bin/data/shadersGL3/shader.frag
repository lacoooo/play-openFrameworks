#version 150

out vec4 outputColor;

uniform vec4 mouseColor;

in vec2 texCoordVarying;
 
float rand(vec2 n) { 
	return fract(sin( dot(n, vec2(12.9898, 4.1414)) ) * 43758.5453);
}

void main()
{
    vec2 uv = texCoordVarying;
    float c = rand(uv * 1.5);
    vec4 t = vec4(c, c, c, uv.y);
	if (uv.y * rand(uv * 1.5) > 0.3) {
		c = 0.0;
	}
	t = vec4(c, c, c, uv.y);
    outputColor = t;
}