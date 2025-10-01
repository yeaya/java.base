#ifndef _GetResource_h_
#define _GetResource_h_
//$ class GetResource
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CyclicBarrier;
		}
	}
}

class $export GetResource : public ::java::lang::Object {
	$class(GetResource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetResource();
	void init$();
	static void main($StringArray* args);
	virtual void run();
	::java::util::concurrent::CyclicBarrier* go = nullptr;
	::java::util::concurrent::CyclicBarrier* done = nullptr;
	$Thread* t1 = nullptr;
	$Thread* t2 = nullptr;
};

#endif // _GetResource_h_