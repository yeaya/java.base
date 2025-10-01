#ifndef _Bug4404588_h_
#define _Bug4404588_h_
//$ class Bug4404588
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Bug4404588 : public ::java::lang::Object {
	$class(Bug4404588, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bug4404588();
	void init$();
	static void main($StringArray* args);
	virtual void run();
	$Array<::java::lang::Object, 2>* charData = nullptr;
};

#endif // _Bug4404588_h_