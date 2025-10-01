#ifndef _URLPermissionTest$Test_h_
#define _URLPermissionTest$Test_h_
//$ class URLPermissionTest$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export URLPermissionTest$Test : public ::java::lang::Object {
	$class(URLPermissionTest$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	URLPermissionTest$Test();
	void init$();
	virtual bool execute() {return false;}
	bool expected = false;
};

#endif // _URLPermissionTest$Test_h_