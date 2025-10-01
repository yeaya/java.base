#include <jdk/internal/invoke/ABIDescriptorProxy.h>

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

$MethodInfo _ABIDescriptorProxy_MethodInfo_[] = {
	{"shadowSpaceBytes", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ABIDescriptorProxy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.invoke.ABIDescriptorProxy",
	nullptr,
	nullptr,
	nullptr,
	_ABIDescriptorProxy_MethodInfo_
};

$Object* allocate$ABIDescriptorProxy($Class* clazz) {
	return $of($alloc(ABIDescriptorProxy));
}

$Class* ABIDescriptorProxy::load$($String* name, bool initialize) {
	$loadClass(ABIDescriptorProxy, name, initialize, &_ABIDescriptorProxy_ClassInfo_, allocate$ABIDescriptorProxy);
	return class$;
}

$Class* ABIDescriptorProxy::class$ = nullptr;

		} // invoke
	} // internal
} // jdk