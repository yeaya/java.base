#include <sun/invoke/WrapperInstance.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace sun {
	namespace invoke {

$MethodInfo _WrapperInstance_MethodInfo_[] = {
	{"getWrapperInstanceTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWrapperInstanceType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WrapperInstance_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.invoke.WrapperInstance",
	nullptr,
	nullptr,
	nullptr,
	_WrapperInstance_MethodInfo_
};

$Object* allocate$WrapperInstance($Class* clazz) {
	return $of($alloc(WrapperInstance));
}

$Class* WrapperInstance::load$($String* name, bool initialize) {
	$loadClass(WrapperInstance, name, initialize, &_WrapperInstance_ClassInfo_, allocate$WrapperInstance);
	return class$;
}

$Class* WrapperInstance::class$ = nullptr;

	} // invoke
} // sun