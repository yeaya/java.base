#ifndef _java_io_ObjectStreamClass$Caches_h_
#define _java_io_ObjectStreamClass$Caches_h_
//$ class java.io.ObjectStreamClass$Caches
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

class ObjectStreamClass$Caches : public ::java::lang::Object {
	$class(ObjectStreamClass$Caches, 0, ::java::lang::Object)
public:
	ObjectStreamClass$Caches();
	void init$();
	static ::java::util::concurrent::ConcurrentMap* localDescs;
	static ::java::util::concurrent::ConcurrentMap* reflectors;
	static ::java::lang::ref::ReferenceQueue* localDescsQueue;
	static ::java::lang::ref::ReferenceQueue* reflectorsQueue;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$Caches_h_