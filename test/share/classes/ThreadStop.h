#ifndef _ThreadStop_h_
#define _ThreadStop_h_
//$ class ThreadStop
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ThreadStop : public ::java::lang::Object {
	$class(ThreadStop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThreadStop();
	void init$();
	static void main($StringArray* args);
};

#endif // _ThreadStop_h_