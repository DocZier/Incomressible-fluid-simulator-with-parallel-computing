#pragma once

class Field
{
public:
	double* values;
	friend class Fluid;
	void set(int N, int M);
};