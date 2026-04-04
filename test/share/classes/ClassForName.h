#ifndef _ClassForName_h_
#define _ClassForName_h_
//$ class ClassForName
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export ClassForName : public ::java::lang::Runnable {
	$class(ClassForName, 0, ::java::lang::Runnable)
public:
	ClassForName();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	virtual void run() override;
};

#endif // _ClassForName_h_