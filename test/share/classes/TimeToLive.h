#ifndef _TimeToLive_h_
#define _TimeToLive_h_
//$ class TimeToLive
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TimeToLive : public ::java::lang::Object {
	$class(TimeToLive, 0, ::java::lang::Object)
public:
	TimeToLive();
	void init$();
	static void main($StringArray* args);
	static $ints* new_ttls;
	static $ints* bad_ttls;
};

#endif // _TimeToLive_h_