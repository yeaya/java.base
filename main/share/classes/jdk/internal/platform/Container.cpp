#include <jdk/internal/platform/Container.h>

#include <jdk/internal/platform/Metrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _Container_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)()>(&Container::init$))},
	{"metrics", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Metrics*(*)()>(&Container::metrics))},
	{}
};

$ClassInfo _Container_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.Container",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Container_MethodInfo_
};

$Object* allocate$Container($Class* clazz) {
	return $of($alloc(Container));
}

void Container::init$() {
}

$Metrics* Container::metrics() {
	return $Metrics::systemMetrics();
}

Container::Container() {
}

$Class* Container::load$($String* name, bool initialize) {
	$loadClass(Container, name, initialize, &_Container_ClassInfo_, allocate$Container);
	return class$;
}

$Class* Container::class$ = nullptr;

		} // platform
	} // internal
} // jdk