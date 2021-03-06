#ifndef _PALMAPI_H_
#define _PALMAPI_H_

void PrepareLabelPalm(int wid, int hei);
void PrepareEnhence(int wid, int hei);
void PrepareMarkLines(int wid, int hei);

int LabelCentralArea(unsigned char *nv21_frame, int wid, int hei, int scale);
int LabelPalmArea(unsigned char *dst_frame);

void EnhencePalm(unsigned char *palmMap, unsigned char *gray_frame, int scale);

int MarkLines(unsigned char *gray_frame);

#endif
