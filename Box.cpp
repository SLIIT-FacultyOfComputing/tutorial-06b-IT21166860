#include "Box.h"

// Implement setters and getters
void setter(int l,int w,int h){
  length=l;
  width=w;
  height=h;
}
int getLength(){
  return length;
}
int getWidth(){
  return width;
}
int getHeight(){
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}

