//week08-5-pacman-part1
void setup(){
  size(400,500);
}
int x=200,y=250;//座標
float m=0,dm=0.03;//嘴巴大小 改變量
void draw(){
  background(0);
  fill(255,255,0);//黃色的
  arc(x,y,30,30,0,PI*2-m);//小精靈
  m+=dm;
  if(m>1 || m<0)dm= -dm;
}
