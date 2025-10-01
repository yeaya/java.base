#ifndef _java_lang_ApplicationShutdownHooks_h_
#define _java_lang_ApplicationShutdownHooks_h_
//$ class java.lang.ApplicationShutdownHooks
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class IdentityHashMap;
	}
}

namespace java {
	namespace lang {

class ApplicationShutdownHooks : public ::java::lang::Object {
	$class(ApplicationShutdownHooks, 0, ::java::lang::Object)
public:
	ApplicationShutdownHooks();
	void init$();
	static void add($Thread* hook);
	static bool remove($Thread* hook);
	static void runHooks();
	static ::java::util::IdentityHashMap* hooks;
};

	} // lang
} // java

#endif // _java_lang_ApplicationShutdownHooks_h_