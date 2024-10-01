#version 410

in vec3 color;
in vec2 vpos;

out vec4 fcolor;
void main()
{
  fcolor = vec4(color,1);
  //vec2 t = vpos/1.6+.5;
  //vec4 btmcols = vec4(1-t.x,t.x,0,1)*.5+.5;
  //vec4 topcols = vec4 (t.x,1-t.x,1,1)*.5+.5;
  //fcolor = (1-t.y)*btmcols+t.y*topcols;
//
  //vec2 v = 1.25*abs(vpos);
  //float t2 = .5*(v.x+v.y);
  //fcolor = (1-t2)*vec4(1,1,0,1)+(t2)*fcolor;
  //fcolor = pow(fcolor,vec4(5));
}
