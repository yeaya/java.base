#ifndef _ReferenceClone_h_
#define _ReferenceClone_h_
//$ class ReferenceClone
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("QUEUE")
#undef QUEUE

class ReferenceClone$CloneableRef;
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

class $export ReferenceClone : public ::java::lang::Object {
	$class(ReferenceClone, 0, ::java::lang::Object)
public:
	ReferenceClone();
	void init$();
	void assertCloneNotSupported(::ReferenceClone$CloneableRef* ref);
	static void main($StringArray* args);
	virtual void test();
	static ::java::lang::ref::ReferenceQueue* QUEUE;
};

#pragma pop_macro("QUEUE")

#endif // _ReferenceClone_h_