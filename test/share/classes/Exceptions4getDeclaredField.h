#ifndef _Exceptions4getDeclaredField_h_
#define _Exceptions4getDeclaredField_h_
//$ class Exceptions4getDeclaredField
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Exceptions4getDeclaredField : public ::java::lang::Object {
	$class(Exceptions4getDeclaredField, 0, ::java::lang::Object)
public:
	Exceptions4getDeclaredField();
	void init$();
	static void main($StringArray* args);
	void test($String* s, $Class* ex);
	int32_t f0 = 0;
	int32_t f1 = 0;
	int32_t f2 = 0;
	int32_t f4 = 0;
	static $StringArray* npe;
	static $StringArray* nsfe;
	static $StringArray* pass;
};

#endif // _Exceptions4getDeclaredField_h_