/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  class HSLAPixel {
      public:
          double h; // hue (between 0 and 360)
          double s; // saturation (between 0.0 and 1.0)
          double l; // luminance (between 0.0 and 1.0)
          double a; // alpha (between 0.0 and 1.0)
  };
}
