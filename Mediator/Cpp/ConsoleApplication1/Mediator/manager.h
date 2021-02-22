#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "job.h"
#include "employee.h"

struct Job;
class employee;

class manager
{
public:
	manager();
	~manager();
	void transfer_job(Job completed_job, employee* worker);
protected:
	
};

#endif