#ifndef _Exceptions4getField_h_
#define _Exceptions4getField_h_
//$ class Exceptions4getField
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Exceptions4getField : public ::java::lang::Object {
	$class(Exceptions4getField, 0, ::java::lang::Object)
public:
	Exceptions4getField();
	void init$();
	static void main($StringArray* args);
	void test($String* s, $Class* ex);
	static bool ok;
	int32_t f0 = 0;
	int32_t f1 = 0;
	int32_t f2 = 0;
	int32_t f4 = 0;
	static $StringArray* npe;
	static $StringArray* nsfe;
	static $StringArray* pass;
};

#endif // _Exceptions4getField_h_