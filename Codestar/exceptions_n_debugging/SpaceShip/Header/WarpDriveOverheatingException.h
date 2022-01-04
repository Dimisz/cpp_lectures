#ifndef WARP_DRIVE_OVERHEATING_EXCEPTION_H
#define WARP_DRIVE_OVERHEATING_EXCEPTION_H
#include <stdexcept>
using namespace std;

class WarpDriveOverheatingException : public overflow_error
{
public:
  WarpDriveOverheatingException() : overflow_error("Warp drive has exceeded the safe temperature tolerance"){}
};
#endif
