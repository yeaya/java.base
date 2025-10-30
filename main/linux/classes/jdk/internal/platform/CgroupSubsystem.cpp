#include <jdk/internal/platform/CgroupSubsystem.h>

#include <jcpp.h>

#undef LONG_RETVAL_UNLIMITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$FieldInfo _CgroupSubsystem_FieldInfo_[] = {
	{"LONG_RETVAL_UNLIMITED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CgroupSubsystem, LONG_RETVAL_UNLIMITED)},
	{}
};

$ClassInfo _CgroupSubsystem_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.platform.CgroupSubsystem",
	nullptr,
	"jdk.internal.platform.Metrics",
	_CgroupSubsystem_FieldInfo_
};

$Object* allocate$CgroupSubsystem($Class* clazz) {
	return $of($alloc(CgroupSubsystem));
}

$Class* CgroupSubsystem::load$($String* name, bool initialize) {
	$loadClass(CgroupSubsystem, name, initialize, &_CgroupSubsystem_ClassInfo_, allocate$CgroupSubsystem);
	return class$;
}

$Class* CgroupSubsystem::class$ = nullptr;

		} // platform
	} // internal
} // jdk