#ifndef _Correctness_h_
#define _Correctness_h_
//$ class Correctness
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export Correctness : public ::java::lang::Object {
	$class(Correctness, 0, ::java::lang::Object)
public:
	Correctness();
	void init$();
	static void check($String* s1, $String* s2, bool expected);
	static void check($String* s1, $String* s2);
	static void check0($String* s1, $String* s2, bool expected);
	static void checkNo($String* s1, $String* s2);
	static void contains($String* s1, $String* s2, int32_t expected);
	static void contains0($String* s1, $String* s2, int32_t expected);
	static void main($StringArray* args);
	static bool err;
	static ::java::lang::reflect::Method* containsMethod;
	static bool isWindows;
};

#endif // _Correctness_h_