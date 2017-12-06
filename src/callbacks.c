/**
 *       @file  callbacks.c
 *      @brief  Breve Descrição
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Edgar Mendes, EdgarSeca@ua.pt
 *
 *   @internal
 *     Created  06-Dez-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Edgar Mendes
 *
 * =====================================================================================
 */
 
#include "myf.h"
 
 
gboolean pari_UpdateImageAreas(gpointer data)
{
        //generate an expose event (draw event) on drawingarea1
        GtkWidget *da1 = GTK_WIDGET(gtk_builder_get_object(builderG, "drawingarea1"));
        gtk_widget_queue_draw(da1);
        return TRUE;
}


gboolean on_drawingarea1_expose_event(GtkWidget * widget, GdkEvent * event, gpointer user_data)
{
        pari_PerformImageAcquisition(captureG);             //acquire new image
        //pari_ProcessUserOperations(src_imageG, dst_imageG); // Perform here the openCV transformations

        //update the drawing area displays
        pari_RefreshDrawingArea("drawingarea1", src_imageG);
        pari_RefreshDrawingArea("drawingarea2", dst_imageG);
        return TRUE;
}


void pari_ProcessUserOperations(IplImage *src, IplImage *dst)
{
        /*If nothing is to be done at least the dst is the same as src*/
        cvCopy( src, dst, NULL);

        //Now operate all functions accumulated (one after one)
        pari_UserOperation1(dst, dst, builderG, (gpointer)"checkbutton1",(gpointer) 1);
        pari_UserOperation2(dst, dst, builderG, (gpointer)"checkbutton2",(gpointer) 2);
        pari_UserOperation3(dst, dst, builderG, (gpointer)"checkbutton3",(gpointer) 3);
        pari_UserOperation4(dst, dst, builderG, (gpointer)"checkbutton4",(gpointer) 4);
        pari_UserOperation5(dst, dst, builderG, (gpointer)"checkbutton5",(gpointer) 5);
        pari_UserOperation6(dst, dst, builderG, (gpointer)"checkbutton6",(gpointer) 6);
}

/**
 * @brief  Function to perform some specific operation.
 *
 * @param  src Source image to process
 * @param  dst Image to put the processed result
 * @param  gb  GtkBuilder pointer for the currently loaded GUI.
 * @param  udata1 gpointer for generic data for the operation. Normally the widget name. Return if NULL.
 * @param  udata2 gpointer for generic data for the operation. Normally the widget name for auxiliary parameter. May be ignored.
 */
 
void pari_UserOperation1(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}

void pari_UserOperation2(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}

void pari_UserOperation3(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}

void pari_UserOperation4(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}

void pari_UserOperation5(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}

void pari_UserOperation6(IplImage *src, IplImage *dst, GtkBuilder *gb, gpointer udata1, gpointer udata2)
{

}
