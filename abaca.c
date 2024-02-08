#include "graphics.h"
#include "pour_images.c"

void affichemap()
{
	POINT pa;
	IMAGE image_8;
	image_8=charge_image("mapabaca.bmp");
	pa.x=0;pa.y=170;
	dessine_image(image_8,pa);
	libere_image(image_8);
}



void affichemap1()
{
	POINT pa;
	IMAGE image_8;
	image_8=charge_image("mapabaca.bmp");
	pa.x=0;pa.y=170;
	dessine_image(image_8,pa);
	libere_image(image_8);
}


/* Apparition des ABACA + Apparition des questions */


// ________________________________________

	void affiche_ABACA1()
{
/*déclaration des variables*/

POINT p;
IMAGE image_1;

image_1=charge_image("ABACA1.bmp"); // changer avec l'image d'abaca
   SDL_SetColorKey(image_1, SDL_SRCCOLORKEY,SDL_MapRGB( image_1->format, 0,0, 0));
p.x=530; p.y=340;
dessine_image(image_1,p);
libere_image(image_1);
}



// _____________________________________________________________




     /* apparition des questions de cours pour vaincre les ABACA*/

void affiche_Questions1()
{
	POINT p, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9;
	
	p.x=200; p.y=850;
    aff_pol("Pour vaincre l'ABACA, repondez a la question suivante", 20, p, blanc);


                         // * QUESTION 1 *

    p0.x=300; p0.y=800;
    aff_pol("Quel est la primitive de ln (x) ", 20, p0, blanc);


               //-------------------------------------
               
               

                            // * Q C M *


/* afficher les réponses simultanément*/

p2.x=160;p2.y=700;
p3.x=310;p3.y=750;
draw_fill_rectangle(p2,p3,blanc); // faire draw_rectangle
p1.x=200; p1.y=740;
aff_pol("1/ln(x)", 20, p1, bleu);

p5.x=400;p5.y=700;
p6.x=510;p6.y=750;
draw_fill_rectangle(p5,p6,blanc); //faire draw-rectangle
p4.x=440; p4.y=740;
aff_pol("1/x", 20, p4, magenta);

p8.x=710;p8.y=700;
p9.x=580;p9.y=750;
draw_fill_rectangle(p8,p9,blanc); //faire draw rectangle
p7.x=600; p7.y=740;
aff_pol("xln(x)-x", 20, p7, jaune);

// ____________________________________



                /* Boucle IF pour délimité les carrés*/
                
                /* p=wait_clic pour que l'utilisateur réponde à la question*/           
                
        p=wait_clic();
       if((p.x>=160)&&(p.x<=310)&&(p.y>=700)&&(p.y<=750))
       {          
          p5.x=160;p5.y=700;
          p0.x=310;p0.y=750;
          draw_rectangle(p5,p0,rouge);
          p6.x=200; p6.y=400;
          aff_pol("Vous devez reviser !",60, p6, rouge);
	  }

       else if((p.x<=710)&&(p.x>=580)&&(p.y>=700)&&(p.y<=750)) // boucle IF GAGNANTE
       {
			p8.x=710;p8.y=700;
			p9.x=580;p9.y=750;
			draw_rectangle(p8,p9,vert);
		p6.x=250,p6.y=400;
			aff_pol("Tres Bien",60,p6,orange); 
		}                          
                           
       else if((p.x<=510)&&(p.x>=400)&&(p.y>=700)&&(p.y<=750))// si l'utilisateur perd, alors
       {
          p5.x=400;p5.y=700;
          p6.x=510;p6.y=750;
          draw_rectangle(p5,p6,rouge); //faire draw-rectangle

          p6.x=300; p6.y=400;          
          aff_pol("PERDU ! ",50, p6, rouge);
	  
		}
   
}
          


//______________________________________________________________

// réinitialiser le jeux si on continue dans le main

          
  /* apparition des questions de cours pour vaincre les ABACA2*/
  
  void affiche_ABACA2()
  {
	  POINT p1;
IMAGE image_6;
image_6=charge_image("ABACA1.bmp");
   SDL_SetColorKey(image_6, SDL_SRCCOLORKEY,SDL_MapRGB( image_6->format, 0,0, 0));
p1.x=60; p1.y=200;
dessine_image(image_6, p1);
libere_image(image_6);
}

void affiche_Questions2()
{
	
POINT p,p1;
p.x=200; p.y=850;
aff_pol("Pour vaincre l'ABACA, repondez a la question suivante", 20, p, blanc);

// ==============================================================================




                         // * QUESTION 2 *

p1.x=300;p1.y=800;
aff_pol("Lorsqu'un gene n'est pas lie, on parle de :", 20, p1, blanc);
               //-------------------------------------

                            // * Q C M *


/* afficher les réponses simultanément*/

POINT p0, p2, p3, p4, p5, p6, p7, p8, p9;


p4.x=80; p4.y=700;
p5.x=500; p5.y=670;
draw_fill_rectangle(p4,p5,blanc); // faire draw rectangle
p0.x=100; p0.y=700;
aff_pol("Brassage Inter Chromosomique", 20, p0, violet);

p6.x=80; p6.y=620;
p7.x=500; p7.y=590;
draw_fill_rectangle(p6,p7,blanc); //faire draw rectangle
p2.x=100; p2.y=620;
aff_pol("Brassage Intra Chromosomique", 20, p2, bleu);

p8.x=80; p8.y=530;
p9.x=500; p9.y=500;
draw_fill_rectangle(p8,p9,blanc); //faire draw rectangle
p3.x=100; p3.y=530;
aff_pol("Brassage Inverse des Chromosique", 20, p3, noir);


                
     /* user=wait_clic pour que l'utilisateur réponde à la question*/           
                
          p=wait_clic();       
       if ((p.x>=80)&&(p.x<=500)&&(p.y>=590)&&(p.y<=650))    // boucle IF GAGNANT
       {
          p6.x=80; p6.y=620;
          p7.x=500; p7.y=590;
          draw_rectangle(p6,p7,vert);
          p2.x=200; p2.y=420;
	   aff_pol("Tu vas avoir ton BAC !",50, p2, orange);
   }
                 
       else if((p.x>=80)&&(p.x<=500)&&(p.y>=500)&&(p.y<=530))    // si l'utilisateur perd, alors
          {
				p4.x=80; p4.y=530;
                p5.x=500; p5.y=500;
                draw_rectangle(p4,p5,rouge); // faire draw rectangle
                p0.x=70; p0.y=300;
             aff_pol("Il serait temps d'ouvrir ses cahiers !", 40, p0, rouge);
         
          }
          
               
       else if ((p.x>=80)&&(p.x<=500)&&(p.y>=670)&&(p.y<=700)) // si tu perds alors...
       {
				p4.x=80;p4.y=700;
				p5.x=500;p5.y=670;
				draw_rectangle(p4,p5,rouge);
				p6.x=300; p6.y=300;
				aff_pol("NON !",60, p6, rouge);
			}


}


// _____________________________________________________________



 /* apparition des questions de cours pour vaincre les ABACA*/
 void affiche_ABACA3()
 {
	 POINT p1;
IMAGE image_8;
image_8=charge_image("ABACA1.bmp");
   SDL_SetColorKey(image_8, SDL_SRCCOLORKEY,SDL_MapRGB( image_8->format, 0,0, 0));
p1.x=300; p1.y=700;
dessine_image(image_8, p1);
libere_image(image_8);
	 

 }

void affiche_Questions3()
{
	
POINT p,p1;
p.x=200; p.y=850;
aff_pol("Pour vaincre l'ABACA, repondez a la question suivante", 20, p, blanc);

       // _______________________________________________________


                         // * QUESTION 3 *
                         
                         
                         p1.x=300;p1.y=800;
aff_pol("Qu'est-ce qu'un acide selon Bronsted ?", 20, p1, blanc);


               //-------------------------------------

                            // * Q C M *


/* afficher les réponses simultanément*/

POINT p0, p2, p3, p4, p5, p6, p7, p8, p9;

p4.x=80; p4.y=700;
p5.x=650; p5.y=670;
draw_fill_rectangle(p4,p5,blanc); // faire draw rectangle
p0.x=100; p0.y=700;
aff_pol("C'est une espece chimique qui a perdu un proton H+", 20, p0, magenta);


p8.x=80; p8.y=530;
p9.x=650; p9.y=500;
draw_fill_rectangle(p8,p9,blanc); //faire draw rectangle
p2.x=100; p2.y=530;
aff_pol("C'est une espece chimique qui a gagner un proton H+", 20, p2, cyan);


p6.x=80; p6.y=620;
p7.x=650; p7.y=590;
draw_fill_rectangle(p6,p7,blanc); //faire draw rectangle
p3.x=100; p3.y=620;
aff_pol("C'est une espece chimique qui a perdu un proton H-", 20, p3, vert);




                /* Boucle IF pour délimité les carrés*/
                
                
     /* P=wait_clic pour que l'utilisateur réponde à la question*/           
                
       
       p=wait_clic();
       if((p.x>=80)&&(p.x<=650)&&(p.y>=670)&&(p.y<=700)) // boucle réponse fausse
       {          
          p5.x=80;p5.y=700;
          p0.x=650;p0.y=670;
          draw_rectangle(p5,p0,rouge);
          p6.x=200; p6.y=400;
          aff_pol("BRUH !",60, p6, rouge);
	  }

       else if((p.x>=80)&&(p.x<=650)&&(p.y>=500)&&(p.y<=530)) // boucle IF GAGNANTE
       {
			p8.x=80;p8.y=530;
			p9.x=650;p9.y=500;
			draw_rectangle(p8,p9,vert);
		p6.x=250,p6.y=400;
			aff_pol("OK",60,p6,orange); 
		}                          
                           
       else if((p.x>=80)&&(p.x<=650)&&(p.y>=590)&&(p.y<=620)) // boucle question fausse
       {
          p5.x=80;p5.y=620;
          p6.x=650;p6.y=590;
          draw_rectangle(p5,p6,rouge); //faire draw_rectangle
          p6.x=70; p6.y=400;          
          aff_pol("Les connaissances sont a revoir ! ",50, p6, rouge);
	  
		}
   
}


void fin_de_quete()
{

    POINT pa, pb, pc;
    pc=wait_clic();
    pa.x=0;pa.y=900;
    pb.x=900;pb.y=0;
    draw_fill_rectangle(pa,pb, blanc);
	

// ==============================================================================


{
           // si l'utilisateur à gagné tout ses essais confetti* + message
                  POINT p, pu;
                  p=wait_clic();
                  p.x=100;p.y=600;
                  aff_pol("Tu as finis la quete",70,p, orange);
                  
                  p=wait_clic();
                 IMAGE image_0;
                 image_0=charge_image("bac.bmp");
                 pu.x=100; pu.y=200;
                 dessine_image(image_0, pu);
                 libere_image(image_0);
     
     
                  
                  p.x=20;p.y=500;
                  aff_pol("Tu es pret a avoir ton BAC",62,p,orange);
                 

// revenir au menu si l'utilisateur souhaite encore jouer


}
}

int main()
{
	
	init_graphics(900,900);
	
	// 1er ETAPE
	POINT p;
	affichemap();
	affichemap1();
	p=wait_clic();
	affiche_ABACA1();
	affiche_Questions1();
	
	// 2er ETAPE
	p=wait_clic();
	affichemap1();
	p=wait_clic();
	affiche_ABACA2();
	affiche_Questions2();
	
	// 3er ETAPE
	p=wait_clic();
	affichemap1();
	p=wait_clic();
	affiche_ABACA3();
	affiche_Questions3();
	
	fin_de_quete();// terminer
	
	
wait_escape();
 
 exit(0);

}

// fin de code pour CHLOE
