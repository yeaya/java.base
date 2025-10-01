#ifndef _Security$Command_h_
#define _Security$Command_h_
//$ interface Security$Command
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Security$Command : public ::java::lang::Object {
	$interface(Security$Command, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void run() {}
};

#endif // _Security$Command_h_