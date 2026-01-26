#include <sun/net/ProgressMeteringPolicy.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {

$MethodInfo _ProgressMeteringPolicy_MethodInfo_[] = {
	{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressMeteringPolicy, getProgressUpdateThreshold, int32_t)},
	{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressMeteringPolicy, shouldMeterInput, bool, $URL*, $String*)},
	{}
};

$ClassInfo _ProgressMeteringPolicy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.ProgressMeteringPolicy",
	nullptr,
	nullptr,
	nullptr,
	_ProgressMeteringPolicy_MethodInfo_
};

$Object* allocate$ProgressMeteringPolicy($Class* clazz) {
	return $of($alloc(ProgressMeteringPolicy));
}

$Class* ProgressMeteringPolicy::load$($String* name, bool initialize) {
	$loadClass(ProgressMeteringPolicy, name, initialize, &_ProgressMeteringPolicy_ClassInfo_, allocate$ProgressMeteringPolicy);
	return class$;
}

$Class* ProgressMeteringPolicy::class$ = nullptr;

	} // net
} // sun