#ifndef _ClassRestrictions_h_
#define _ClassRestrictions_h_
//$ class ClassRestrictions
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ClassRestrictions : public ::java::lang::Object {
	$class(ClassRestrictions, 0, ::java::lang::Object)
public:
	ClassRestrictions();
	void init$();
	static void main($StringArray* args);
	static $String* nonPublicIntrfaceName;
};

#endif // _ClassRestrictions_h_