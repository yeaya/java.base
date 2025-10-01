#include <jdk/internal/invoke/VMStorageProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace invoke {

$MethodInfo _VMStorageProxy_MethodInfo_[] = {
	{"index", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _VMStorageProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.invoke.VMStorageProxy",
	nullptr,
	nullptr,
	nullptr,
	_VMStorageProxy_MethodInfo_
};

$Object* allocate$VMStorageProxy($Class* clazz) {
	return $of($alloc(VMStorageProxy));
}

$Class* VMStorageProxy::load$($String* name, bool initialize) {
	$loadClass(VMStorageProxy, name, initialize, &_VMStorageProxy_ClassInfo_, allocate$VMStorageProxy);
	return class$;
}

$Class* VMStorageProxy::class$ = nullptr;

		} // invoke
	} // internal
} // jdk