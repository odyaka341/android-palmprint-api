# Android Palmprint API Released #

  * [Introduction](#Introduction.md)
  * [Demos and source](#Demos_and_source.md)
  * [Algorithm](#Algorithm.md)
    * [Palm area marking](#Palm_area_marking.md)
    * [Palmprint image enhance](#Palmprint_image_enhance.md)
    * [Palm lines labeling](#Palm_lines_labeling.md)
  * [About this project](#About_this_project.md)

# Introduction #
I provide a palmprint processing API using Android phone's camera.
This API can be used in Android apps:

  * Palm-print reader and analyzer
  * Screen locker
  * Private data protection

# Demos and source #
> There are two demo applications is provided.
  * [Preprocess demo APK file](http://android-palmprint-api.googlecode.com/files/PalmDemo-preprocess.apk)
  * [Lines detecting demo APK file](http://android-palmprint-api.googlecode.com/files/PalmDemo-lines.apk)

The source is **total** under the SVN, I also provide a very-simple computer vision based Android application source framework. [Check out](http://code.google.com/p/android-palmprint-api/source/checkout)

# Algorithm #
> The algorithm used in this API includes:
  1. Palm area marking
  1. Palmprint image enhancing
  1. The mains lines labeling

## Palm area marking ##
> The palm area marking is based on gray image segmentation. First we get the gray image distribution from a fixed rectangle area, then we apply this Gaussian distribution to mark the whole area  with 5\*sigma. Now we can get a hand image segmentation, then we sharp this segmentation with a edge distance based distance image algorithm.
  * The palm area screen shot
![http://android-palmprint-api.googlecode.com/files/palm_area_mark.png](http://android-palmprint-api.googlecode.com/files/palm_area_mark.png)

## Palmprint image enhance ##
> The palmprint should be enhanced for lines, here, a Hessian based Frangi filter was applied. This filter will enhance the vessel-like objects. To fast the algorithm, I have apply a box filter from SURF algorithm to replace Hessian matrix and it works well.
  * The palmprint enhance screen short
![http://android-palmprint-api.googlecode.com/files/palmprint_enhance.png](http://android-palmprint-api.googlecode.com/files/palmprint_enhance.png)

## Palm lines labeling ##
> For some application such as palmprint recognizer, the enhanced image is enough but it is not enough for some application like palmprint reader. So here I provide a palm lines labeling algorithm. This algorithm including left/right detection and "Life","Heart","Head" lines detecting. The basic detecting is based on the enhanced gray image with adaptive threshold to extract the most long lines.
  * The palmprint lines labeling
![http://android-palmprint-api.googlecode.com/files/palm_lines_labeling.png](http://android-palmprint-api.googlecode.com/files/palm_lines_labeling.png)

# About this project #
> Any help are welcome for this project, the algorithm improvement is very important for me. If you apply my source code please follow GPL v2 license.
> I'm also finding a suitable business partner help me to develop and finally Android application.
  * Contact me by mail achang.zhou'@'gmail.com
  * SNS site is http://weibo.com/teaonly
