#include <jdk/internal/platform/Container.h>
#include <jdk/internal/platform/Metrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

void Container::init$() {
}

$Metrics* Container::metrics() {
	return $Metrics::systemMetrics();
}

Container::Container() {
}

$Class* Container::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Container, init$, void)},
		{"metrics", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $staticMethod(Container, metrics, $Metrics*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.platform.Container",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Container, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container);
	});
	return class$;
}

$Class* Container::class$ = nullptr;

		} // platform
	} // internal
} // jdk