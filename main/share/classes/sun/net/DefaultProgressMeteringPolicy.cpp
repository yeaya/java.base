#include <sun/net/DefaultProgressMeteringPolicy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ProgressMeteringPolicy = ::sun::net::ProgressMeteringPolicy;

namespace sun {
	namespace net {

$MethodInfo _DefaultProgressMeteringPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultProgressMeteringPolicy::*)()>(&DefaultProgressMeteringPolicy::init$))},
	{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC},
	{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC},
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