#ifndef _LambdaClassFinal_h_
#define _LambdaClassFinal_h_
//$ class LambdaClassFinal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}

class $export LambdaClassFinal : public ::java::lang::Object {
	$class(LambdaClassFinal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaClassFinal();
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	void init$();
	static void assertTrue(bool cond);
	static void lambda$test$0();
	static void lambda$test$e8a97009$1();
	static void main($StringArray* args);
	virtual void test();
};

#endif // _LambdaClassFinal_h_