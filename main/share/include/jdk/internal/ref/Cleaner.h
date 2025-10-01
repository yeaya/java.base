#ifndef _jdk_internal_ref_Cleaner_h_
#define _jdk_internal_ref_Cleaner_h_
//$ class jdk.internal.ref.Cleaner
//$ extends java.lang.ref.PhantomReference

#include <java/lang/ref/PhantomReference.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class $import Cleaner : public ::java::lang::ref::PhantomReference {
	$class(Cleaner, $PRELOAD, ::java::lang::ref::PhantomReference)
public:
	Cleaner();
	void init$(Object$* referent, ::java::lang::Runnable* thunk);
	static ::jdk::internal::ref::Cleaner* add(::jdk::internal::ref::Cleaner* cl);
	virtual void clean();
	static ::jdk::internal::ref::Cleaner* create(Object$* ob, ::java::lang::Runnable* thunk);
	static bool remove(::jdk::internal::ref::Cleaner* cl);
	static ::java::lang::ref::ReferenceQueue* dummyQueue;
	static ::jdk::internal::ref::Cleaner* first;
	::jdk::internal::ref::Cleaner* next = nullptr;
	::jdk::internal::ref::Cleaner* prev = nullptr;
	::java::lang::Runnable* thunk = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_Cleaner_h_