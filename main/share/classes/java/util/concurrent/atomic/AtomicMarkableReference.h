#ifndef _java_util_concurrent_atomic_AtomicMarkableReference_h_
#define _java_util_concurrent_atomic_AtomicMarkableReference_h_
//$ class java.util.concurrent.atomic.AtomicMarkableReference
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PAIR")
#undef PAIR

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicMarkableReference$Pair;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $export AtomicMarkableReference : public ::java::lang::Object {
	$class(AtomicMarkableReference, 0, ::java::lang::Object)
public:
	AtomicMarkableReference();
	void init$(Object$* initialRef, bool initialMark);
	virtual bool attemptMark(Object$* expectedReference, bool newMark);
	bool casPair(::java::util::concurrent::atomic::AtomicMarkableReference$Pair* cmp, ::java::util::concurrent::atomic::AtomicMarkableReference$Pair* val);
	virtual bool compareAndSet(Object$* expectedReference, Object$* newReference, bool expectedMark, bool newMark);
	virtual $Object* get($booleans* markHolder);
	virtual $Object* getReference();
	virtual bool isMarked();
	virtual void set(Object$* newReference, bool newMark);
	virtual bool weakCompareAndSet(Object$* expectedReference, Object$* newReference, bool expectedMark, bool newMark);
	$volatile(::java::util::concurrent::atomic::AtomicMarkableReference$Pair*) pair = nullptr;
	static ::java::lang::invoke::VarHandle* PAIR;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("PAIR")

#endif // _java_util_concurrent_atomic_AtomicMarkableReference_h_