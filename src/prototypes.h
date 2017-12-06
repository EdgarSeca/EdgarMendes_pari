/*File generated automatically in edgar-GL702VM by edgar on Qua Dez  6 11:04:33 WET 2017*/
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
gboolean pari_UpdateImageAreas(gpointer data);
#ifdef __cplusplus
}
#endif
