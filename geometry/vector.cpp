#include "vector.h"
#include <cmath>
#include "utils.h"

Vector2f MakeV2f(float x, float y) // initialisation des composantes du vecteur
{
    Vector2f v;
    v.x = x;
    v.y = y;
    return v;
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b) // creation d'un vecteur par 2 point
{
    Vector2f v;
    v.x =(b.x-a.x);
    v.y =(b.y-a.y);
    return v;
}

Vector2f Add(const Vector2f& a, const Vector2f& b) // addition de 2 vecteurs
{
 Vector2f v;
 v.x =a.x+b.x; // on addtionne les abscisses entre eux et les ordonnes entre eux
 v.y =a.y+b.y;
 return v;
}

Vector2f Sub(const Vector2f& a, const Vector2f& b) // soustraction de deux vecteurs
{
    Vector2f v;
    v.x =a.x-b.x; // on soustrait les abscisses entre eux et les ordonnees entre eux
    v.y =a.y-b.y;
    return v; 
}
Vector2f Scale(const Vector2f& v, float scalar)// multiplication d'un vecteur par un reel
{
    Vector2f u;
    u.x =v.x*scalar; // on multipli chaque composante par ce reel
    u.y =v.y*scalar;
    return u;
}

float Dot(const Vector2f& a, const Vector2f& b) // produit scalaire de 2 vecteurs
{
    Vector2f v;
    float d;
    v.x =a.x*b.x; // on multiplie les abscisses entre eux et les ordonnees entre eux
    v.y =a.y*b.y;
    d =v.x+v.y;
    return d;
}

float Length(const Vector2f& v) // calcule de la norme du vecteur
{
 return sqrt((v.x*v.x)+(v.y*v.y));
}

Vector2f Normalize(const Vector2f& v) // creation d'un vecteur unitaire, on divise chaque composante par la norme du vecteur
{
    Vector2f u;
    u.x =v.x/(Length(v)); // ici je me sert de lenght() comme norme du vecteur
    u.y =v.y/(Length(v));
    return u;
}

float Determinant(const Vector2f& a, const Vector2f& b) // retourne le determinant d'un vecteur
{
     return (a.x*b.y)-(a.y*b.x);
}

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) // interpolation lineaire d'un vecteur
{
    Vector2f v;
    v.x =((1-t)*a.x)+(t*b.x);
    v.y = ((1-t)*b.x)+(t*b.y);
    return v;
}

std::string ToString(const Vector2f& v); //puique la fonction est defini dans utils.h, je n'ai qu'a faire l'appel de fonction ici