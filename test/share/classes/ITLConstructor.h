#ifndef _ITLConstructor_h_
#define _ITLConstructor_h_
//$ class ITLConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHILD_THREAD_COUNT")
#undef CHILD_THREAD_COUNT

namespace java {
	namespace lang {
		class InheritableThreadLocal;
	}
}

class $export ITLConstructor : public ::java::lang::Object {
	$class(ITLConstructor, 0, ::java::lang::Object)
public:
	ITLConstructor();
	void init$();
	static void main($StringArray* args);
	static void test(bool inherit);
	static ::java::lang::InheritableThreadLocal* n;
	static const int32_t CHILD_THREAD_COUNT = 10;
};

#pragma pop_macro("CHILD_THREAD_COUNT")

#endif // _ITLConstructor_h_