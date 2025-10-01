#ifndef _Args$Thunk_h_
#define _Args$Thunk_h_
//$ interface Args$Thunk
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Args$Thunk : public ::java::lang::Object {
	$interface(Args$Thunk, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void run() {}
};

#endif // _Args$Thunk_h_