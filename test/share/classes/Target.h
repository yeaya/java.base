#ifndef _Target_h_
#define _Target_h_
//$ class Target
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Target : public ::java::lang::Object {
	$class(Target, 0, ::java::lang::Object)
public:
	Target();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
};

#endif // _Target_h_