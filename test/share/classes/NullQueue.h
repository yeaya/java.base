#ifndef _NullQueue_h_
#define _NullQueue_h_
//$ class NullQueue
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}

class $export NullQueue : public ::java::lang::Object {
	$class(NullQueue, 0, ::java::lang::Object)
public:
	NullQueue();
	void init$();
	static $Thread* findThread($String* name);
	static void fork(::java::lang::Runnable* proc);
	static void main($StringArray* args);
	static ::java::lang::ref::Reference* r;
};

#endif // _NullQueue_h_