/**
 *       @file  main.c
 *      @brief  Breve Descrição
 *
 * 	main.c - ficheiro onde esta a função main, da qual todas as outras funções são chamadas
 *
 *     @author  Edgar Mendes, EdgarSeca@ua.pt
 *
 *   @internal
 *     Created  14-Out-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Edgar Mendes
 *
 * =====================================================================================
 */
 
#define _MAIN_C_


#include "myf.h"


int main(int argc, char *argv[])
{ 

#if 1
	gtk_init(&argc, &argv);
	
	/*carregar a interface de um ficheiro*/
	builderG=gtk_builder_new();
	gtk_builder_add_from_file(builderG,"mydr2.glade",NULL);
	
	/*ligar os sinais da interface*/
	gtk_builder_connect_signals(builderG,NULL);
	
	/*adquirir main window Widget ID e ligar sinais especiais*/
	GtkWidget *t=GTK_WIDGET(gtk_builder_get_object(builderG,"window1"));
	
	g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();
	
	gtk_main();	
	
	cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).
	
        return 0;
        
#endif
}
