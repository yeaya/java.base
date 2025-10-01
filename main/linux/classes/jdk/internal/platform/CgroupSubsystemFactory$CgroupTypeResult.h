#ifndef _jdk_internal_platform_CgroupSubsystemFactory$CgroupTypeResult_h_
#define _jdk_internal_platform_CgroupSubsystemFactory$CgroupTypeResult_h_
//$ class jdk.internal.platform.CgroupSubsystemFactory$CgroupTypeResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $export CgroupSubsystemFactory$CgroupTypeResult : public ::java::lang::Object {
	$class(CgroupSubsystemFactory$CgroupTypeResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CgroupSubsystemFactory$CgroupTypeResult();
	void init$(bool isCgroupV2, bool anyControllersEnabled, bool anyCgroupV2Controllers, bool anyCgroupV1Controllers, ::java::util::Map* infos);
	::java::util::Map* getInfos();
	bool isAnyCgroupV1Controllers();
	bool isAnyCgroupV2Controllers();
	bool isAnyControllersEnabled();
	bool isCgroupV2();
	bool isCgroupV2$ = false;
	bool anyControllersEnabled = false;
	bool anyCgroupV2Controllers = false;
	bool anyCgroupV1Controllers = false;
	::java::util::Map* infos = nullptr;
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupSubsystemFactory$CgroupTypeResult_h_