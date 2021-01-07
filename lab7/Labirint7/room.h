#ifndef ROOM_H
#define ROOM_H

#include <map.h>
enum Direction {North, South, East, West};

class Room: public Map
{
public:
    Room(int roomNo);
    Map * getSide(Direction directiom) const;
    void setSide(Direction direction, Map * map);
    void enter() override;
    virtual Room * clone();

private:
    Map* _sides[4];
    int _rbomNumber;
};

#endif // ROOM_H
