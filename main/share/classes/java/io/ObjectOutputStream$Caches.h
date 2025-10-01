#ifndef _java_io_ObjectOutputStream$Caches_h_
#define _java_io_ObjectOutputStream$Caches_h_
//$ class java.io.ObjectOutputStream$Caches
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace io {

class ObjectOutputStream$Caches : public ::java::lang::Object {
	$class(ObjectOutputStream$Caches, 0, ::java::lang::Object)
public:
	ObjectOutputStream$Caches();
	void init$();
	static ::java::util::concurrent::ConcurrentMap* subclassAudits;
	static ::java::lang::ref::ReferenceQueue* subclassAuditsQueue;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$Caches_h_