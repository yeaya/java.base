#include <sun/security/util/Length.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$Class* Length::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Length, length, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.Length",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Length, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Length);
	});
	return class$;
}

$Class* Length::class$ = nullptr;

		} // util
	} // security
} // sun