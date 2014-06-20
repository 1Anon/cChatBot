#ifndef __BOTANUS_NETWORK_HPP__
#define __BOTANUS_NETWORK_HPP__

#include <string>
#include <iostream>

/******************* PLEASE NOTE *****************

	This part will be processed and fully
	implemented later, after core functionality
	is done. This header may expand as well as
	shrink. Don't judge me.

*************************************************/


// Something that will be required
// by, well, everything to keep user
// updated
class NetworkStatus
{
private:

protected:

public:

};


// This one will be used to process requests
// And to "stack" all received and queud
// to post, so that 1 request won't interrupt
// another
class NetworkOperator
{
private:

protected:

public:
	virtual ~NetworkOperator() {};
	virtual void placeholder() = 0;
};


class NetworkRequestOut: public NetworkOperator
{
private:

protected:

public:
	~NetworkRequestOut() {};
	void placeholder() = 0;
};


class NetworkRequestIn: public NetworkOperator
{
private:

protected:

public:
	~NetworkRequestIn() {};
	void placeholder() = 0;
};

// Something to keep the connection
// up and manage requests.
class NetworkConnector
{
private:

protected:

public:

};


// Main network controller
class NetworkManager
{
private:

protected:

public:

};

#endif