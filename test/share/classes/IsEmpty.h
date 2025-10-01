#ifndef _IsEmpty_h_
#define _IsEmpty_h_
//$ class IsEmpty
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IsEmpty : public ::java::lang::Object {
	$class(IsEmpty, 0, ::java::lang::Object)
public:
	IsEmpty();
	void init$();
	static void main($StringArray* args);
	static $StringArray* tests;
};

#endif // _IsEmpty_h_