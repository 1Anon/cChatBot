#ifndef __BOTANUS_DISPLAY_HPP__
#define __BOTANUS_DISPLAY_HPP__

#include <ncurses>

/******************* PLEASE NOTE *****************

	This part will be processed and fully
	implemented A LOT LATER, if ever. This
	is a placeholder that may dissapear
	later into the abyss. Especially the
	GTK one. Don't judge.

*************************************************/

// A proper GUI. May never be done.
class GTKDisplay
{
private:

protected:

public:

};

// Something to output it into Terminal.
// NCurses ahead
class NCDisplay
{
private:

protected:

public:

};

// Another virtual class, for all my
// windowing purposes
class NCWindow
{
private:
	WINDOW* screen;

protected:

public:
	virtual ~NCWindow();
	virtual void placeholder() = 0;
};

class NCStatus: public NCWindow
{
private:
	WINDOW* screen;

protected:

public:
	~NCStatus();
	void placeholder();
};
