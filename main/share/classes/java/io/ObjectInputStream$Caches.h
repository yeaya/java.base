#ifndef _java_io_ObjectInputStream$Caches_h_
#define _java_io_ObjectInputStream$Caches_h_
//$ class java.io.ObjectInputStream$Caches
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SET_FILTER_AFTER_READ")
#undef SET_FILTER_AFTER_READ
#pragma push_macro("PROXY_INTERFACE_LIMIT")
#undef PROXY_INTERFACE_LIMIT

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

class ObjectInputStream$Caches : public ::java::lang::Object {
	$class(ObjectInputStream$Caches, 0, ::java::lang::Object)
public:
	ObjectInputStream$Caches();
	void init$();
	static ::java::util::concurrent::ConcurrentMap* subclassAudits;
	static ::java::lang::ref::ReferenceQueue* subclassAuditsQueue;
	static bool SET_FILTER_AFTER_READ;
	static int32_t PROXY_INTERFACE_LIMIT;
};

	} // io
} // java

#pragma pop_macro("SET_FILTER_AFTER_READ")
#pragma pop_macro("PROXY_INTERFACE_LIMIT")

#endif // _java_io_ObjectInputStream$Caches_h_