#ifndef _jdk_internal_module_ModuleBootstrap$Counters_h_
#define _jdk_internal_module_ModuleBootstrap$Counters_h_
//$ class jdk.internal.module.ModuleBootstrap$Counters
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRINT_COUNTERS")
#undef PRINT_COUNTERS
#pragma push_macro("PUBLISH_COUNTERS")
#undef PUBLISH_COUNTERS

namespace java {
	namespace util {
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleBootstrap$Counters : public ::java::lang::Object {
	$class(ModuleBootstrap$Counters, $PRELOAD, ::java::lang::Object)
public:
	ModuleBootstrap$Counters();
	void init$();
	static void add($String* name);
	static void publish($String* totalTimeName);
	static void start();
	static bool PUBLISH_COUNTERS;
	static bool PRINT_COUNTERS;
	static ::java::util::Map* counters;
	static int64_t startTime;
	static int64_t previousTime;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("PRINT_COUNTERS")
#pragma pop_macro("PUBLISH_COUNTERS")

#endif // _jdk_internal_module_ModuleBootstrap$Counters_h_