#ifndef _jdk_internal_misc_VM_h_
#define _jdk_internal_misc_VM_h_
//$ class jdk.internal.misc.VM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JAVA_LANG_SYSTEM_INITED")
#undef JAVA_LANG_SYSTEM_INITED
#pragma push_macro("JVMTI_THREAD_STATE_ALIVE")
#undef JVMTI_THREAD_STATE_ALIVE
#pragma push_macro("JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER")
#undef JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER
#pragma push_macro("JVMTI_THREAD_STATE_RUNNABLE")
#undef JVMTI_THREAD_STATE_RUNNABLE
#pragma push_macro("JVMTI_THREAD_STATE_TERMINATED")
#undef JVMTI_THREAD_STATE_TERMINATED
#pragma push_macro("JVMTI_THREAD_STATE_WAITING_INDEFINITELY")
#undef JVMTI_THREAD_STATE_WAITING_INDEFINITELY
#pragma push_macro("JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT")
#undef JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT
#pragma push_macro("MODULE_SYSTEM_INITED")
#undef MODULE_SYSTEM_INITED
#pragma push_macro("PREVIEW_MINOR_VERSION")
#undef PREVIEW_MINOR_VERSION
#pragma push_macro("SYSTEM_BOOTED")
#undef SYSTEM_BOOTED
#pragma push_macro("SYSTEM_LOADER_INITIALIZING")
#undef SYSTEM_LOADER_INITIALIZING
#pragma push_macro("SYSTEM_SHUTDOWN")
#undef SYSTEM_SHUTDOWN
#pragma push_macro("VM")
#undef VM

namespace java {
	namespace lang {
		class ClassLoader;
		class Thread$State;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $export VM : public ::java::lang::Object {
	$class(VM, $PRELOAD, ::java::lang::Object)
public:
	VM();
	void init$();
	static void addFinalRefCount(int32_t n);
	static void awaitInitLevel(int32_t value);
	static ::java::util::List* getBufferPools();
	static int32_t getFinalRefCount();
	static int64_t getNanoTimeAdjustment(int64_t offsetInSeconds);
	static int32_t getPeakFinalRefCount();
	static $StringArray* getRuntimeArguments();
	static ::java::util::Map* getSavedProperties();
	static $String* getSavedProperty($String* key);
	static int64_t getegid();
	static int64_t geteuid();
	static int64_t getgid();
	static int64_t getuid();
	static void initLevel(int32_t value);
	static int32_t initLevel();
	static void initialize();
	static void initializeOSEnvironment();
	static bool isBooted();
	static bool isDirectMemoryPageAligned();
	static bool isModuleSystemInited();
	static bool isSetUID();
	static bool isShutdown();
	static bool isSupportedClassFileVersion(int32_t major, int32_t minor);
	static bool isSupportedModuleDescriptorVersion(int32_t major, int32_t minor);
	static bool isSystemDomainLoader(::java::lang::ClassLoader* loader);
	static ::java::lang::ClassLoader* latestUserDefinedLoader();
	static ::java::lang::ClassLoader* latestUserDefinedLoader0();
	static int64_t maxDirectMemory();
	static void saveProperties(::java::util::Map* props);
	static void shutdown();
	static ::java::lang::Thread$State* toThreadState(int32_t threadStatus);
	static const int32_t JAVA_LANG_SYSTEM_INITED = 1;
	static const int32_t MODULE_SYSTEM_INITED = 2;
	static const int32_t SYSTEM_LOADER_INITIALIZING = 3;
	static const int32_t SYSTEM_BOOTED = 4;
	static const int32_t SYSTEM_SHUTDOWN = 5;
	static $volatile(int32_t) initLevel$;
	static $Object* lock;
	static int64_t directMemory;
	static bool pageAlignDirectMemory;
	static int32_t classFileMajorVersion;
	static int32_t classFileMinorVersion;
	static const int32_t PREVIEW_MINOR_VERSION = 0x0000FFFF;
	static ::java::util::Map* savedProps;
	static $volatile(int32_t) finalRefCount;
	static $volatile(int32_t) peakFinalRefCount;
	static const int32_t JVMTI_THREAD_STATE_ALIVE = 1;
	static const int32_t JVMTI_THREAD_STATE_TERMINATED = 2;
	static const int32_t JVMTI_THREAD_STATE_RUNNABLE = 4;
	static const int32_t JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER = 1024;
	static const int32_t JVMTI_THREAD_STATE_WAITING_INDEFINITELY = 16;
	static const int32_t JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT = 32;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("JAVA_LANG_SYSTEM_INITED")
#pragma pop_macro("JVMTI_THREAD_STATE_ALIVE")
#pragma pop_macro("JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER")
#pragma pop_macro("JVMTI_THREAD_STATE_RUNNABLE")
#pragma pop_macro("JVMTI_THREAD_STATE_TERMINATED")
#pragma pop_macro("JVMTI_THREAD_STATE_WAITING_INDEFINITELY")
#pragma pop_macro("JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT")
#pragma pop_macro("MODULE_SYSTEM_INITED")
#pragma pop_macro("PREVIEW_MINOR_VERSION")
#pragma pop_macro("SYSTEM_BOOTED")
#pragma pop_macro("SYSTEM_LOADER_INITIALIZING")
#pragma pop_macro("SYSTEM_SHUTDOWN")
#pragma pop_macro("VM")

#endif // _jdk_internal_misc_VM_h_