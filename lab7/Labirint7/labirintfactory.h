#ifndef LABIRINTFACTORY_H
#define LABIRINTFACTORY_H
#include <labirint.h>
#include <wall.h>
#include <door.h>

class LabirintFactory
{
public:
    static LabirintFactory* instance();
    LabirintFactory(LabirintFactory &other) = delete;
    void operator=(const LabirintFactory &) = delete;

    virtual Labirint* makeLabirint() const;
    virtual Wall* makeWall() const;
    virtual Room* makeRoom(int n) const;
    virtual Door* makeDoor(Room* r1, Room* r2);
protected:
    LabirintFactory();
private:
    static LabirintFactory *_instance;
};

#endif // LABIRINTFACTORY_H
