#ifndef _Transform_h_
#define _Transform_h_
//$ class Transform
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

class $export Transform : public ::java::lang::Object {
	$class(Transform, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Transform();
	void init$();
	static void check($String* test, Object$* output, Object$* expected);
	static $String* lambda$test1$0($String* s);
	static $String* lambda$test1$1($String* s);
	static $String* lambda$test1$2($String* s);
	static $String* lambda$test1$3($String* t);
	static $String* lambda$test1$4($String* s);
	static $String* lambda$test1$5($String* string);
	static void main($StringArray* args);
	static void simpleTransform($String* test, $String* s, ::java::util::function::Function* f);
	static void test1();
};

#endif // _Transform_h_