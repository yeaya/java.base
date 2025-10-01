#ifndef _ClassRestrictions$Bar_h_
#define _ClassRestrictions$Bar_h_
//$ interface ClassRestrictions$Bar
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ClassRestrictions$Bar : public ::java::lang::Object {
	$interface(ClassRestrictions$Bar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t foo() {return 0;}
};

#endif // _ClassRestrictions$Bar_h_