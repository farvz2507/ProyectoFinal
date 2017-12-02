#include "linked_list.h"
#include <stdio.h>

main() 
{ 
   //Declarando Variables
   Lista *pedido= NULL;
   char opcion;
     
   //Repetir Programa.
   while(opcion!='s')   
   {  
     //Menu de opciones 

	  printf("\t\t\t     SISTEMA DE PEDIDOS");printf("\t\t\t      \n\n");

      printf("\t\t\t    A)  Nuevo pedido               \n");
      
      printf("\t\t\t    B)  Listar pedido                       \n");      
      
      printf("\t\t\t    C)  Eliminar pedido            \n");      
      
      printf("\t\t\t    D)  Modificar pedido            \n"); 
      
      printf("\t\t\t    S)  Salir                         \n");
      
      printf("\n\n");
      printf("\t\t      Digite una opcion del pedido: ");
      //Leyendo Opcion del pedido   
      fflush(stdin);
      opcion= getch(); 
      
      //pedido de opciones
      switch (opcion)
      {
         case 'A':   
         case 'a':   
              //Insertar pedido.
              fflush(stdin);
              system("cls");
              printf(" | ");printf("\t\t\t          NUEVO PEDIDO     ");printf("\t\t\t      |\n");
              pedido= insertar_pedido(pedido);
         getch();
         system("cls"); 
         break;
         
         case 'B':   
         case 'b':       
              //Listar pedido.
              system ("cls");
              printf("\t\t\t          LISTAR PEDIDO     ");printf("\t\t\t      |\n");
              listar_pedidos(pedido);
         getch();
         system("cls");
         break;
         
         case 'C':   
         case 'c':   
              //Excluyendo pedidos da lista.
              system ("cls");
              printf("\t\t\t        ELIMINAR PEDIDO");printf("\t\t\t      |\n");
              pedido= eliminar_pedido(pedido);
         getch();
         system("cls");
         break;

         case 'D':   
         case 'd':   
              //Modificar pedido. 
              system ("cls");
              printf(" ");printf("\t\t\t        MODIFICAR PEDIDO");printf("\t\t\t      \n");
              alterar_pedidos(pedido);
         getch();
         system("cls");
         break;
         
         case 'S':   
         case 's':       
              //Salir Programa.
              opcion='s';
         break;
         
         default:     
              //Digitar Opcion Diferente del pedido.
              system("cls");        
         break; 
      } 
   }  
}

