class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int len);
       int getLength();
       void setWidth(int wid);
       int getWidth();
       void setHeight(int hei);
       int getHeight(); 
       int calcVolume();
};
