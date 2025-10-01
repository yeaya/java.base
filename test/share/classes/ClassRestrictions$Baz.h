#ifndef _ClassRestrictions$Baz_h_
#define _ClassRestrictions$Baz_h_
//$ interface ClassRestrictions$Baz
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ClassRestrictions$Baz : public ::java::lang::Object {
	$interface(ClassRestrictions$Baz, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t foo() {return 0;}
};

#endif // _ClassRestrictions$Baz_h_