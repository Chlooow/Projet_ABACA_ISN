#include "graphics.h"
#include "pour_images.c"

void affichemap1()
{
	POINT pa;
	IMAGE image_8;
	image_8=charge_image("mapabaca.bmp");
	pa.x=0;pa.y=0;
	dessine_image(image_8,pa);
	libere_image(image_8);
}

void affiche_abaca()
{
    POINT p1;

    IMAGE  image_6;
    image_6=charge_image("ABACA1.bmp");
    p1.x=0;p1.y=160;
    dessine_image(image_6,p1);
    libere_image(image_6);
}


// affichage de la question 1

// si tu as gagner continuer et afficher une autre map

void affiche_abaca2()
{
    POINT p1;

    IMAGE  image_6;
    image_6=charge_image("ABACA1.bmp");
    p1.x=100;p1.y=260;
    dessine_image(image_6,p1);
    libere_image(image_6);
}

// affichage de la question 2

// si tu as gagner continuer et afficher une autre map






int main()
{  
	
	init_graphics(840,648);
	POINT p;
	affichemap1();
	affiche_abaca();
	p=wait_clic();
	affichemap1();
	affiche_abaca2();
	wait_escape();
	exit(0);
}
