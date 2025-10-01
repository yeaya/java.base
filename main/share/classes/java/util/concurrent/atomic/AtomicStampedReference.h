#ifndef _java_util_concurrent_atomic_AtomicStampedReference_h_
#define _java_util_concurrent_atomic_AtomicStampedReference_h_
//$ class java.util.concurrent.atomic.AtomicStampedReference
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
				class AtomicStampedReference$Pair;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $export AtomicStampedReference : public ::java::lang::Object {
	$class(AtomicStampedReference, 0, ::java::lang::Object)
public:
	AtomicStampedReference();
	void init$(Object$* initialRef, int32_t initialStamp);
	virtual bool attemptStamp(Object$* expectedReference, int32_t newStamp);
	bool casPair(::java::util::concurrent::atomic::AtomicStampedReference$Pair* cmp, ::java::util::concurrent::atomic::AtomicStampedReference$Pair* val);
	virtual bool compareAndSet(Object$* expectedReference, Object$* newReference, int32_t expectedStamp, int32_t newStamp);
	virtual $Object* get($ints* stampHolder);
	virtual $Object* getReference();
	virtual int32_t getStamp();
	virtual void set(Object$* newReference, int32_t newStamp);
	virtual bool weakCompareAndSet(Object$* expectedReference, Object$* newReference, int32_t expectedStamp, int32_t newStamp);
	$volatile(::java::util::concurrent::atomic::AtomicStampedReference$Pair*) pair = nullptr;
	static ::java::lang::invoke::VarHandle* PAIR;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("PAIR")

#endif // _java_util_concurrent_atomic_AtomicStampedReference_h_