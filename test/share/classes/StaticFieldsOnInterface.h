#ifndef _StaticFieldsOnInterface_h_
#define _StaticFieldsOnInterface_h_
//$ class StaticFieldsOnInterface
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export StaticFieldsOnInterface : public ::java::lang::Object {
	$class(StaticFieldsOnInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StaticFieldsOnInterface();
	void init$();
	static void assertOneField($Class* c);
	static void main($StringArray* args);
};

#endif // _StaticFieldsOnInterface_h_