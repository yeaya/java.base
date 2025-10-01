#ifndef _EnqueueNullRef_h_
#define _EnqueueNullRef_h_
//$ class EnqueueNullRef
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

class $export EnqueueNullRef : public ::java::lang::Object {
	$class(EnqueueNullRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EnqueueNullRef();
	void init$();
	static void main($StringArray* args);
	static void test(::java::lang::ref::ReferenceQueue* q, ::java::lang::ref::Reference* r);
};

#endif // _EnqueueNullRef_h_