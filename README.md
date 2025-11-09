# DEVOIR2
ATSOBOLO ELONG AROON AN-ING1 25P924
Implémentation des structures points et vecteurs dans des fonctions qui permettent de reproduire les opérations sur les points et structures en géométrie.
Commençons par les points, dans notre programme, nous avons eu a coder des fonctions qui permettent :
•	la creation d’un point, ici il suffit juste de declaree une fonction de type point(prenant un point en paramettre ), en son sein, on affecte des valeurs aux composantes du parametre qui seront passees par reference  a une variable par plutard.
•	La translation d’un point, on declare toujours une fonction de type point,(prenant un point en paramettre et deux variables flottantes) a l’interieur de {}, on ajoute les dx et dy (variables flottantes en parametres) aux composantes du point de manière a le deplacer.
Puis on retourne le resultats 
•	Translation avec un vecteur, ici les memes operations sont faites, on ajute aux composantes du point, ceux du vecteur respectivement puis on retourne le resultat.
•	multiplicacation d'un point par un reel, on multiplie l'abscisse et l'ordonner du point par le reel declare en paramttre puis on retourne le resultat.
•	mutilication d'un point par un vecteur, on cree une fonction de type point(prenant un point et un vecteur en paramettre) puis a l’interieur de la fonction, on multilipli les composantes du point par ceux du vecteur respectivement, puis on retourne le resultat.
•	rotation d'un point d'un angle 'angleDegree', on cree une fonction de type point (prenant un point et un angle en type flottant comme paramettre.), a l’interieur de la fonction, j’ai d’abord commencer par convertir l’angle en radian : dr = (pi*angleDegree)/180,
puis j’ai calculer les nouvelles coordonner du point avec les formules : w.x = (p.x*cos(dr))-(p.y*sin(dr)); // calcule du nouvel abscissex'
    w.y = (p.x*sin(dr))-(p.y*cos(dr)); // calcule du nouvel ordonner y' 
ici il faut se rassurer d’avoir mis <cmath> au dessus pour pouvoir utiliser sin() et cos().

J’enchaine avec les vecteurs :
•	dans Vector2f MakeV2f(float x, float y), il suffit juste d’initialiser le vecteurs, je retourne donc  les valeur v.x  et v.y.
•	dans Vector2f MakeV2f(const Point2f& a, const Point2f& b) // creation d'un vecteur par 2 point, il suffit juste d’implementer la formulle mathetematique  v.x =(b.x-a.x);
    v.y =(b.y-a.y); et retourner le resultat.
•	Dans Vector2f Add(const Vector2f& a, const Vector2f& b) // addition de 2 vecteurs,
On additionne les composantes de chaque vecteur respectivement.
•	Dans Vector2f Sub(const Vector2f& a, const Vector2f& b) // soustraction de deux vecteurs
On fait pareil, juste qu’ici c’est la soustraction
•	Dans Vector2f Scale(const Vector2f& v, float scalar)// multiplication d'un vecteur par un reel,
On multiplie chaque vecteur par un reel declare en paramettre.
•	Dans float Dot(const Vector2f& a, const Vector2f& b) // produit scalaire de 2 vecteurs, on implemente avec la formule mathematique, honnetement, j’ai encore du mal a explique cette partie.
•	Dans float Length(const Vector2f& v) // calcule de la norme du vecteur, on utilise la fonction sqrt de <cmath> pour applique la formule sqrt((v.x*v.x)+(v.y*v.y)); et on retourne le resultat.
•	Dans Vector2f Normalize(const Vector2f& v) // creation d'un vecteur unitaire, on divise chaque composante par la norme du vecteur en utlisant Lenght().
•	Dans float Determinant(const Vector2f& a, const Vector2f& b) // retourne le determinant d'un vecteur on utilise simplement la formule  (a.x*b.y)-(a.y*b.x); et on retourne le resultat.
•	Dans Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) // interpolation lineaire d'un vecteur, on fait pareil, il faut implementer la formule de lerp : v.x =((1-t)*a.x)+(t*b.x);
    v.y = ((1-t)*b.x)+(t*b.y); et retourner le resultats.
 Merci de m’avoir lu jusqu’ici.

