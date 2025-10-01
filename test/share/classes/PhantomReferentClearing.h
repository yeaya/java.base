#ifndef _PhantomReferentClearing_h_
#define _PhantomReferentClearing_h_
//$ class PhantomReferentClearing
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("Q1")
#undef Q1
#pragma push_macro("ENQUEUE_TIMEOUT")
#undef ENQUEUE_TIMEOUT
#pragma push_macro("Q2")
#undef Q2
#pragma push_macro("P1")
#undef P1
#pragma push_macro("O1")
#undef O1
#pragma push_macro("P2")
#undef P2
#pragma push_macro("O2")
#undef O2

namespace java {
	namespace lang {
		namespace ref {
			class PhantomReference;
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export PhantomReferentClearing : public ::java::lang::Object {
	$class(PhantomReferentClearing, 0, ::java::lang::Object)
public:
	PhantomReferentClearing();
	void init$();
	static void main($StringArray* args);
	static const int64_t ENQUEUE_TIMEOUT = 1000;
	static ::java::lang::ref::ReferenceQueue* Q1;
	static ::java::lang::ref::ReferenceQueue* Q2;
	static $volatile($Object*) O2;
	static $volatile(::java::util::List*) O1;
	static ::java::lang::ref::PhantomReference* P1;
	static ::java::lang::ref::PhantomReference* P2;
};

#pragma pop_macro("Q1")
#pragma pop_macro("ENQUEUE_TIMEOUT")
#pragma pop_macro("Q2")
#pragma pop_macro("P1")
#pragma pop_macro("O1")
#pragma pop_macro("P2")
#pragma pop_macro("O2")

#endif // _PhantomReferentClearing_h_