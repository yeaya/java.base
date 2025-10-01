#ifndef _RepetitiveLambdaSerialization_h_
#define _RepetitiveLambdaSerialization_h_
//$ class RepetitiveLambdaSerialization
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REPS")
#undef REPS

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}

class $export RepetitiveLambdaSerialization : public ::java::lang::Object {
	$class(RepetitiveLambdaSerialization, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RepetitiveLambdaSerialization();
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	void init$();
	static $String* lambda$main$4db77a28$1($String* z);
	static void main($StringArray* args);
	static const int32_t REPS = 20;
};

#pragma pop_macro("REPS")

#endif // _RepetitiveLambdaSerialization_h_