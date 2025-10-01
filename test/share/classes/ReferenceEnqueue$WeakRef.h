#ifndef _ReferenceEnqueue$WeakRef_h_
#define _ReferenceEnqueue$WeakRef_h_
//$ class ReferenceEnqueue$WeakRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
		}
	}
}

class $export ReferenceEnqueue$WeakRef : public ::java::lang::Object {
	$class(ReferenceEnqueue$WeakRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReferenceEnqueue$WeakRef();
	void init$();
	virtual void run();
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	::java::lang::ref::Reference* ref = nullptr;
	static const int32_t iterations = 1000;
};

#endif // _ReferenceEnqueue$WeakRef_h_