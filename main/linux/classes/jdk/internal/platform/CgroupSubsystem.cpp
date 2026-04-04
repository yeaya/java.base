#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jcpp.h>

#undef LONG_RETVAL_UNLIMITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace jdk {
	namespace internal {
		namespace platform {

$Class* CgroupSubsystem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LONG_RETVAL_UNLIMITED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CgroupSubsystem, LONG_RETVAL_UNLIMITED)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.platform.CgroupSubsystem",
		nullptr,
		"jdk.internal.platform.Metrics",
		fieldInfos$$
	};
	$loadClass(CgroupSubsystem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CgroupSubsystem);
	});
	return class$;
}

$Class* CgroupSubsystem::class$ = nullptr;

		} // platform
	} // internal
} // jdk