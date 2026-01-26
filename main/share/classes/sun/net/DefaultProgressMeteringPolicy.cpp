#include <sun/net/DefaultProgressMeteringPolicy.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {

$MethodInfo _DefaultProgressMeteringPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DefaultProgressMeteringPolicy, init$, void)},
	{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultProgressMeteringPolicy, getProgressUpdateThreshold, int32_t)},
	{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultProgressMeteringPolicy, shouldMeterInput, bool, $URL*, $String*)},
	{}
};

$ClassInfo _DefaultProgressMeteringPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.DefaultProgressMeteringPolicy",
	"java.lang.Object",
	"sun.net.ProgressMeteringPolicy",
	nullptr,
	_DefaultProgressMeteringPolicy_MethodInfo_
};

$Object* allocate$DefaultProgressMeteringPolicy($Class* clazz) {
	return $of($alloc(DefaultProgressMeteringPolicy));
}

void DefaultProgressMeteringPolicy::init$() {
}

bool DefaultProgressMeteringPolicy::shouldMeterInput($URL* url, $String* method) {
	return false;
}

int32_t DefaultProgressMeteringPolicy::getProgressUpdateThreshold() {
	return 8192;
}

DefaultProgressMeteringPolicy::DefaultProgressMeteringPolicy() {
}

$Class* DefaultProgressMeteringPolicy::load$($String* name, bool initialize) {
	$loadClass(DefaultProgressMeteringPolicy, name, initialize, &_DefaultProgressMeteringPolicy_ClassInfo_, allocate$DefaultProgressMeteringPolicy);
	return class$;
}

$Class* DefaultProgressMeteringPolicy::class$ = nullptr;

	} // net
} // sun