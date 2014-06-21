#ifndef __BOTANUS_CORE_HPP__
#define __BOTANUS_CORE_HPP__

#include <iostream>
#include <ifstream>
#include <ofstream>

#define IN_MSG 1
#define OUT_MSG 2
#define ERR_MSG 3

/******************* PLEASE NOTE *****************

		--//--

*************************************************/

class Parser
{
private:

protected:

public:

};

class Message
{
private:
	std::string value;
	int type;
	bool error;

protected:

public:
	virtual ~Message();
	virtual std::string getString() const = 0;
	virtual char* getCString() const = 0;
	virtual void setValue() = 0;
	virtual void setType() = 0;
	virtual void print() const = 0;

	virtual Message &operator = (const std::string &) = 0;
	virtual Message &operator += (const std::string &) = 0;
	virtual Message operator + (const std::string &) const = 0;
	virtual Message &operator = (const char*) = 0;
	virtual Message &operator += (const char*) = 0;
	virtual Message operator + (const char*) const = 0;

};

class InMsg: public Message
{
private:
	std::string value;
	int type;
	bool error;

protected:

public:
	InMsg();
	InMsg(const std::string &);
	InMsg(const std::string &, int);
	InMsg(const char*);
	InMsg(const char*, int);
	~InMsg();

	std::string getString() const;
	char* getCString() const;
	void setValue();
	void setType();
	void print() const;

	InMsg &operator = (const std::string &);
	InMsg &operator += (const std::string &);
	InMsg operator + (const std::string &) const;
	InMsg &operator = (const char*);
	InMsg &operator += (const char*);
	InMsg operator + (const char*) const;

};

class OutMsg: public Message
{
private:
	std::string value;
	int type;
	bool error;

protected:

public:
	OutMsg();
	OutMsg(const std::string &);
	OutMsg(const std::string &, int);
	OutMsg(const char*);
	OutMsg(const char*, int);
	~OutMsg();

	std::string getString() const;
	char* getCString() const;
	void setValue();
	void setType();
	void print() const;

	OutMsg &operator = (const std::string &);
	OutMsg &operator += (const std::string &);
	OutMsg operator + (const std::string &) const;
	OutMsg &operator = (const char*);
	OutMsg &operator += (const char*);
	OutMsg operator + (const char*) const;

};

//Main class
class Engine
{
private:

protected:

public:

};

// Something that will communitcate
// With network connector
class NetworkManager
{
private:

protected:

public:

};

// To be implemented later
// Like - much later
class AddonLoader
{
private:

protected:

public:

};

void init();

#endif