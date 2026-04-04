#include <jdk/internal/misc/OSEnvironment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

void OSEnvironment::init$() {
}

void OSEnvironment::initialize() {
}

OSEnvironment::OSEnvironment() {
}

$Class* OSEnvironment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OSEnvironment, init$, void)},
		{"initialize", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(OSEnvironment, initialize, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.misc.OSEnvironment",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OSEnvironment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OSEnvironment);
	});
	return class$;
}

$Class* OSEnvironment::class$ = nullptr;

		} // misc
	} // internal
} // jdk