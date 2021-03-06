#pragma once

#include "Solver.h"
#include "utils.h"


const bool USE_8_PATH = 1;


class SGM : public Solver
{
public:
	SGM();
	virtual ~SGM();

	virtual void process(Mat &img_l, Mat &img_r);

private:
	float *L1, *L2, *L3, *L4, *L5, *L6, *L7, *L8;
	float *min_L1, *min_L2, *min_L3, *min_L4, *min_L5, *min_L6, *min_L7, *min_L8;
	int P1, P2;
};

