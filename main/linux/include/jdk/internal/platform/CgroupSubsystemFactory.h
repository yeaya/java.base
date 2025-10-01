#ifndef _jdk_internal_platform_CgroupSubsystemFactory_h_
#define _jdk_internal_platform_CgroupSubsystemFactory_h_
//$ class jdk.internal.platform.CgroupSubsystemFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CPU_CTRL")
#undef CPU_CTRL
#pragma push_macro("CPUACCT_CTRL")
#undef CPUACCT_CTRL
#pragma push_macro("CPUSET_CTRL")
#undef CPUSET_CTRL
#pragma push_macro("MEMORY_CTRL")
#undef MEMORY_CTRL
#pragma push_macro("BLKIO_CTRL")
#undef BLKIO_CTRL
#pragma push_macro("MOUNTINFO_PATTERN")
#undef MOUNTINFO_PATTERN

namespace java {
	namespace util {
		class Map;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace platform {
			class CgroupMetrics;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupSubsystemFactory : public ::java::lang::Object {
	$class(CgroupSubsystemFactory, 0, ::java::lang::Object)
public:
	CgroupSubsystemFactory();
	void init$();
	static bool amendCgroupInfos($String* mntInfoLine, ::java::util::Map* infos, bool isCgroupsV2);
	static ::jdk::internal::platform::CgroupMetrics* create();
	static ::java::util::Optional* determineType($String* mountInfo, $String* cgroups, $String* selfCgroup);
	static void lambda$determineType$0(::java::util::Map* infos, $StringArray* tokens);
	static void lambda$determineType$1(::java::util::Map* infos, $StringArray* tokens);
	static $StringArray* lambda$determineType$2($String* line);
	static bool lambda$determineType$3($StringArray* tokens);
	static void setCgroupV1Path(::java::util::Map* infos, $StringArray* tokens);
	static void setCgroupV2Path(::java::util::Map* infos, $StringArray* tokens);
	static bool $assertionsDisabled;
	static $String* CPU_CTRL;
	static $String* CPUACCT_CTRL;
	static $String* CPUSET_CTRL;
	static $String* BLKIO_CTRL;
	static $String* MEMORY_CTRL;
	static ::java::util::regex::Pattern* MOUNTINFO_PATTERN;
};

		} // platform
	} // internal
} // jdk

#pragma pop_macro("CPU_CTRL")
#pragma pop_macro("CPUACCT_CTRL")
#pragma pop_macro("CPUSET_CTRL")
#pragma pop_macro("MEMORY_CTRL")
#pragma pop_macro("BLKIO_CTRL")
#pragma pop_macro("MOUNTINFO_PATTERN")

#endif // _jdk_internal_platform_CgroupSubsystemFactory_h_