#ifndef MOTIONMODEL_H
#define MOTIONMODEL_H

#include "utils/macro_params.h"
#include "utils/point.h"
#include "utils/stat.h"

namespace GMapping {

struct MotionModel {
  OrientedPoint drawFromMotion(const OrientedPoint& p, double linearMove,
                               double angularMove) const;
  OrientedPoint drawFromMotion(const OrientedPoint& p,
                               const OrientedPoint& pnew,
                               const OrientedPoint& pold) const;
  Covariance3 gaussianApproximation(const OrientedPoint& pnew,
                                    const OrientedPoint& pold) const;
  double srr, str, srt, stt;
};

};  // namespace GMapping

#endif
