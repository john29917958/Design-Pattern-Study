#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include "job.h"
#include "manager.h"

struct Job;
class manager;

enum Moods { thrilled, good, normal, bad, angry };

class employee
{
public:
	employee(std::string name, manager* manager);
	virtual ~employee() = default;
	std::string get_name() const;
	int get_health() const;
	Moods get_mood() const;
	//get set jobs
	virtual bool take_job(Job job, bool is_force_mode = false);
	virtual void do_job();
protected:
	std::string name_;
	int health_;
	Moods mood_;
	std::vector<Job> jobs_;
	manager* manager_;
};

class customer_service : public employee
{
public:
	customer_service(std::string name, manager* manager);
	~customer_service() = default;
	void negotiate(Job job);
	void deliver(Job job);
	bool take_job(Job job, bool is_force_mode) override;
};

class ui_ux_designer : public employee
{
public:
	ui_ux_designer(std::string name, manager* manager);
	~ui_ux_designer() = default;
};

class programmer: public employee
{
public:
	programmer(std::string name, manager* manager);
	~programmer() = default;
};

class lazy_programmer : public employee
{
public:
	lazy_programmer(std::string name, manager* manager);
	~lazy_programmer() = default;
	void do_job() override;
};

#endif
