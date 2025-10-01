#ifndef _LambdaSerialization_h_
#define _LambdaSerialization_h_
//$ class LambdaSerialization
//$ extends java.lang.Object

#include <java/lang/Array.h>

class LSI;
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutput;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}

class $export LambdaSerialization : public ::java::lang::Object {
	$class(LambdaSerialization, 0, ::java::lang::Object)
public:
	LambdaSerialization();
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	void init$();
	static void assertTrue(bool cond);
	static $String* lambda$main$344202ae$1($String* z);
	static $String* lambda$main$344202ae$2($String* z);
	static $String* lambda$main$344202ae$3($String* z);
	static void main($StringArray* args);
	static void readAssert(::java::io::ObjectInputStream* in, $String* expected);
	static void write(::java::io::ObjectOutput* out, ::LSI* lamb);
	static int32_t assertionCount;
};

#endif // _LambdaSerialization_h_