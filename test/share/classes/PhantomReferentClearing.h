#ifndef _PhantomReferentClearing_h_
#define _PhantomReferentClearing_h_
//$ class PhantomReferentClearing
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENQUEUE_TIMEOUT")
#undef ENQUEUE_TIMEOUT

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

#pragma pop_macro("ENQUEUE_TIMEOUT")

#endif // _PhantomReferentClearing_h_