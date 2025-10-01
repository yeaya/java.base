#ifndef _EnqueuePollRace$WeakRef_h_
#define _EnqueuePollRace$WeakRef_h_
//$ class EnqueuePollRace$WeakRef
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
		}
	}
}

class $export EnqueuePollRace$WeakRef : public ::java::lang::Object {
	$class(EnqueuePollRace$WeakRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EnqueuePollRace$WeakRef();
	void init$();
	virtual void run();
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	static const int32_t numReferences = 100;
	$Array<::java::lang::ref::Reference>* refs = nullptr;
	static const int32_t iterations = 1000;
};

#endif // _EnqueuePollRace$WeakRef_h_