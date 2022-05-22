#include "Box.h"

// Implement setters and getters
      void Box::setLength(int len){
        length=len;
      }
       int Box::getLength(){
         return length;
       }
       void Box::setWidth(int wid){
         width=wid;
       }
       int Box::getWidth(){
         return width;
       }
       void Box::setHeight(int hei){
         height=hei;
       }
       int Box::getHeight(){
         return height;
       }
       
// Implemenet the calcVolume() function
       int Box::calcVolume() {
         return length*width*height;
       }
