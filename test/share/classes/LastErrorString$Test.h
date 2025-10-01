#ifndef _LastErrorString$Test_h_
#define _LastErrorString$Test_h_
//$ class LastErrorString$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export LastErrorString$Test : public ::java::lang::Object {
	$class(LastErrorString$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LastErrorString$Test();
	void init$($String* name);
	virtual void go();
	virtual void run() {}
	$String* name = nullptr;
};

#endif // _LastErrorString$Test_h_