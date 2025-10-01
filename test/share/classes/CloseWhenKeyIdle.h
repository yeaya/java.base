#ifndef _CloseWhenKeyIdle_h_
#define _CloseWhenKeyIdle_h_
//$ class CloseWhenKeyIdle
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CloseWhenKeyIdle : public ::java::lang::Object {
	$class(CloseWhenKeyIdle, 0, ::java::lang::Object)
public:
	CloseWhenKeyIdle();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) wakeupDone;
};

#endif // _CloseWhenKeyIdle_h_