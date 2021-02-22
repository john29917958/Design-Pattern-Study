#pragma once
#ifndef JOB_H
#define JOB_H
#include <string>

enum Phases { initial, ui_ux, code };

struct Job
{
	int id;
	std::string name;
	Phases phase;
};

#endif

