/*File generated automatically in edgar-GL702VM by edgar on Qua Dez  6 11:59:04 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* main.c */
int main(int argc, char *argv[]);
/* myf.c */
GdkPixbuf *pari_ConvertOpenCv2Gtk(IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition(CvCapture * capt);
void pari_RefreshDrawingArea(char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition();
/* callbacks.c */
gboolean on_drawingarea1_expose_event(GtkWidget * widget, GdkEvent * event, gpointer user_data);
void pari_ProcessUserOperations(IplImage * src, IplImage * dst);
gboolean pari_UpdateImageAreas(gpointer data);
void pari_UserOperation1(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
void pari_UserOperation2(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
void pari_UserOperation3(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
void pari_UserOperation4(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
void pari_UserOperation5(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
void pari_UserOperation6(IplImage * src, IplImage * dst, GtkBuilder * gb, gpointer udata1, gpointer udata2);
#ifdef __cplusplus
}
#endif
