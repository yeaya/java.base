#ifndef _java_lang_Thread$Caches_h_
#define _java_lang_Thread$Caches_h_
//$ class java.lang.Thread$Caches
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
	namespace lang {

class Thread$Caches : public ::java::lang::Object {
	$class(Thread$Caches, 0, ::java::lang::Object)
public:
	Thread$Caches();
	void init$();
	static ::java::util::concurrent::ConcurrentMap* subclassAudits;
	static ::java::lang::ref::ReferenceQueue* subclassAuditsQueue;
};

	} // lang
} // java

#endif // _java_lang_Thread$Caches_h_