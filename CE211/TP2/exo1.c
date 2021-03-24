
 
#include <stm8s.h>
#include <carte_accueil_tp.h>
#include <fonctions_tp_utiles.h>



main()
{
	u8 UIF;
	u8 seconde;
	
	init_Ports();
	GPIOE->DDR =0x00;
	GPIOE->CR1 =0x80;
	
	GPIOB->DDR =0xFF;
	GPIOB->CR1 =0xFF;
	
	//Initialisation du timer 3
	TIM3->ARRL =0x9;
	TIM3->ARRH =0xF;
	TIM3->PSCR =0x05;
	

	
	
	
	seconde = 0;
	TIM3->CR1 = TIM3->CR1 & !TIM3_CR1_CEN;

	while ((GPIOE->IDR & GPIO_PIN_7) == GPIO_PIN_7); 					// attente appui sur BP2 ext
	
	while (1)
		{
				TIM3->CR1 = TIM3->CR1 | TIM3_CR1_CEN;								//on met CEN � 1 pour d�marrer le timer
				
				do
				{
				UIF = TIM3->SR1 & TIM3_SR1_UIF;											//recup�rer UIF
		  	}
			  while (UIF==0);
				
				
						seconde++;																			//on ajoute 1 � la variable seconde
						seconde = seconde %10;
						afficher_TIL321(seconde);										
						TIM3->SR1 = TIM3->SR1 & !TIM3_SR1_UIF;					//on met UIF � 0
		}
	
}