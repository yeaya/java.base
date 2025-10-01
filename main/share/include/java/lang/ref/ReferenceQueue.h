#ifndef _java_lang_ref_ReferenceQueue_h_
#define _java_lang_ref_ReferenceQueue_h_
//$ class java.lang.ref.ReferenceQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ENQUEUED")
#undef ENQUEUED
#pragma push_macro("NULL")
#undef NULL

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue$Lock;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class $import ReferenceQueue : public ::java::lang::Object {
	$class(ReferenceQueue, $PRELOAD, ::java::lang::Object)
public:
	ReferenceQueue();
	void init$();
	virtual bool enqueue(::java::lang::ref::Reference* r);
	virtual void forEach(::java::util::function::Consumer* action);
	virtual ::java::lang::ref::Reference* poll();
	::java::lang::ref::Reference* reallyPoll();
	virtual ::java::lang::ref::Reference* remove(int64_t timeout);
	virtual ::java::lang::ref::Reference* remove();
	static bool $assertionsDisabled;
	static ::java::lang::ref::ReferenceQueue* NULL;
	static ::java::lang::ref::ReferenceQueue* ENQUEUED;
	::java::lang::ref::ReferenceQueue$Lock* lock = nullptr;
	$volatile(::java::lang::ref::Reference*) head = nullptr;
	int64_t queueLength = 0;
};

		} // ref
	} // lang
} // java

#pragma pop_macro("ENQUEUED")
#pragma pop_macro("NULL")

#endif // _java_lang_ref_ReferenceQueue_h_