#include "graphics.h"
#include "pour_images.c"

// Anissa + Clément


/* Apparition des ABACA + Apparition des questions */

// coordonnés

void affiche_ABACA1();
{

	//declarations des variables
	
	POINT p;
	IMAGE image_1;
	
	init_graphics(900,900);
	
	image_1=charge_image("ABACA1.bmp");
	p=wait_clic();
	dessine_image(image_1,p);
	
	
	libere_image(image_1);
	
}

// _______________________________________________________________


                          // QUESTION 1

void question1()
{
	
void affiche_Questions();  /* apparition des questions de cours pour vaincre les ABACA*/
{
	POINT p,p1,p2,p3,p4;
	
      aff_pol("Pour vaincre l'ABACA, répondez à la question suivante",29,p,blanc)
      
      
      aff_pol("quel est la primitive de ln (x)",20,p,noir)
      p1.x=100;p1.y=100;
      p2.x=100;p2.y=100;
      draw_fill_rectangle(p1,p2,blanc);
      
      
void affiche_réponse();   

      aff_pol_("1/x",15,p,noir)
      p1.x=100;p1.y=100;
      p2.x=100;p2.y=100;
      draw_fill_rectangle(p1,p2,blanc);
      
       aff_pol_("ln 1/x",15,p,noir)
      p1.x=100;p1.y=100;
      p2.x=100;p2.y=100;
      draw_fill_rectangle(p1,p2,blanc);
      
       aff_pol_("xln(x)-x",15,p,noir)
      p1.x=100;p1.y=100;
      p2.x=100;p2.y=100;
      draw_fill_rectangle(p1,p2,blanc)
      
                 
                 /* Boucle IF pour délimité les carrés*/
                 
      if (0)
      {
		  
      
 {
  }

