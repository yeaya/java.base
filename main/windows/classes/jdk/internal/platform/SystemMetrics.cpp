#include <jdk/internal/platform/SystemMetrics.h>

#include <jdk/internal/platform/Metrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _SystemMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SystemMetrics, init$, void)},
	{"instance", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemMetrics, instance, $Metrics*)},
	{}
};

$ClassInfo _SystemMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.SystemMetrics",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SystemMetrics_MethodInfo_
};

$Object* allocate$SystemMetrics($Class* clazz) {
	return $of($alloc(SystemMetrics));
}

void SystemMetrics::init$() {
}

$Metrics* SystemMetrics::instance() {
	return nullptr;
}

SystemMetrics::SystemMetrics() {
}

$Class* SystemMetrics::load$($String* name, bool initialize) {
	$loadClass(SystemMetrics, name, initialize, &_SystemMetrics_ClassInfo_, allocate$SystemMetrics);
	return class$;
}

$Class* SystemMetrics::class$ = nullptr;

		} // platform
	} // internal
} // jdk