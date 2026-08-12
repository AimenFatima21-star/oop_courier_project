#ifndef TRACKABLE_H
#define TRACKABLE_H

class Trackable {
public:
    virtual void track() const = 0;
    virtual ~Trackable() {}
};

#endif

