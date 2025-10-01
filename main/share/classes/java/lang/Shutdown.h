#ifndef _java_lang_Shutdown_h_
#define _java_lang_Shutdown_h_
//$ class java.lang.Shutdown
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_SYSTEM_HOOKS")
#undef MAX_SYSTEM_HOOKS

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace lang {

class Shutdown : public ::java::lang::Object {
	$class(Shutdown, 0, ::java::lang::Object)
public:
	Shutdown();
	void init$();
	static void add(int32_t slot, bool registerShutdownInProgress, ::java::lang::Runnable* hook);
	static void beforeHalt();
	static void exit(int32_t status);
	static void halt(int32_t status);
	static void halt0(int32_t status);
	static void runHooks();
	static void shutdown();
	static const int32_t MAX_SYSTEM_HOOKS = 10;
	static $Array<::java::lang::Runnable>* hooks;
	static int32_t currentRunningHook;
	static $Object* lock;
	static $Object* haltLock;
};

	} // lang
} // java

#pragma pop_macro("MAX_SYSTEM_HOOKS")

#endif // _java_lang_Shutdown_h_