#ifndef _java_lang_ProcessEnvironment_h_
#define _java_lang_ProcessEnvironment_h_
//$ class java.lang.ProcessEnvironment
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MIN_NAME_LENGTH")
#undef MIN_NAME_LENGTH

namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment : public ::java::lang::Object {
	$class(ProcessEnvironment, 0, ::java::lang::Object)
public:
	ProcessEnvironment();
	void init$();
	static int32_t arrayCompare($bytes* x, $bytes* y);
	static bool arrayEquals($bytes* x, $bytes* y);
	static int32_t arrayHash($bytes* x);
	static ::java::util::Map* emptyEnvironment(int32_t capacity);
	static $Array<int8_t, 2>* environ();
	static ::java::util::Map* environment();
	static $String* getenv($String* name);
	static ::java::util::Map* getenv();
	static $bytes* toEnvironmentBlock(::java::util::Map* map, $ints* envc);
	static void validateValue($String* value);
	static void validateVariable($String* name);
	static ::java::util::HashMap* theEnvironment;
	static ::java::util::Map* theUnmodifiableEnvironment;
	static const int32_t MIN_NAME_LENGTH = 0;
};

	} // lang
} // java

#pragma pop_macro("MIN_NAME_LENGTH")

#endif // _java_lang_ProcessEnvironment_h_