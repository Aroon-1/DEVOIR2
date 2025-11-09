#include "point.h"
#include <cmath>
#include "vector.h"
#include "utils.h" 

Point2f MakeP2f(float x, float y) // ici on affecte simplement des valeurs a p.x et p.y pour en faire un point
{
    Point2f P = {x, y};
    return P;
}

Point2f Translate(const Point2f& p, float dx, float dy)// les composantes de p sont augmenter de dx et dy respectivement
{
    Point2f a;
    a.x =p.x+dx;
    a.y =p.y+dy;
    return a;
}

Point2f Translate(const Point2f& p, const Vector2f& v) // ici la translation se fait grace a un vecteur v, donc p est deplace de v coordonner
{
    Point2f b;
    b.x = p.x+v.x;
    b.y = p.y+v.y;
    return b;
}

Point2f Scale(const Point2f& p, float sx, float sy) // multiplicacation d'un point par un reel, on multiplie l'abscisse et l'ordonner par le reel
{
    Point2f u;
    u.x =p.x*sx;
    u.y =p.y*sy;
    return u;
}

Point2f Scale(const Point2f& p, const Vector2f& s) // mutilication d'un point par un vecteur
{
    Point2f v;
    v.x =p.x*s.x;
    v.y =p.y*s.y;
    return v;
}

Point2f Rotate(const Point2f& p, float angleDegree) // rotation d'un point d'un angle 'angleDegree'
{
    Point2f w;
    float dr; // degre radian
    const float pi=3.14f;
    dr = (pi*angleDegree)/180; // je converti l'angle en radian pour pouvoir utiliser convenablement sin() et cos()
    w.x = (p.x*cos(dr))-(p.y*sin(dr)); // calcule du nouvel abscissex'
    w.y = (p.x*sin(dr))-(p.y*cos(dr)); // calcule du nouvel ordonner y'
    return w;
}
std::string ToString(const Point2f& p) // affichage en concatenation de caracteres
{
    return "(" + std::to_string(p.x) + "," + std::to_string(p.y) + ")";
}