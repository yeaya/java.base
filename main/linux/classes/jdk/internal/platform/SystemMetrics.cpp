#include <jdk/internal/platform/SystemMetrics.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/platform/CgroupMetrics.h>
#include <jdk/internal/platform/Metrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CgroupMetrics = ::jdk::internal::platform::CgroupMetrics;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _SystemMetrics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemMetrics::*)()>(&SystemMetrics::init$))},
	{"instance", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Metrics*(*)()>(&SystemMetrics::instance))},
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
	return $CgroupMetrics::getInstance();
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