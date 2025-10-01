#ifndef _FoundType_h_
#define _FoundType_h_
//$ class FoundType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TYPE")
#undef TYPE

class $export FoundType : public ::java::lang::Object {
	$class(FoundType, 0, ::java::lang::Object)
public:
	FoundType();
	void init$();
	static void main($StringArray* args);
	static $String* TYPE;
};

#pragma pop_macro("TYPE")

#endif // _FoundType_h_