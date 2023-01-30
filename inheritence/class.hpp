
class Rectengle{
    int lenght;
    int breadth;
public:

    Rectengle(int l = 0, int b = 0) {lenght = l; breadth = b;}
    void setLen(int l) {lenght = l;}
    void setBrth(int b) {breadth = b;}
    int getLen(){return lenght;}
    int getBrth() {return breadth;}
    int area();
    int perimeter();

    ~Rectengle(){};
};

class Cuboid : public Rectengle
{
   int height;

public:
    Cuboid(int h = 1, int l = 1, int b = 1){
        height = h;
        setLen(l);
        setBrth(b);
    }
    int getHeight(){return height;}
    void setHeight(int h) {height = h;}
    int volume() {return height * getBrth() * getLen();}
};