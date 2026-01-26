#include <java/lang/invoke/VolatileCallSite.h>

#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _VolatileCallSite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(VolatileCallSite, init$, void, $MethodType*)},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(VolatileCallSite, init$, void, $MethodHandle*)},
	{"dynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(VolatileCallSite, dynamicInvoker, $MethodHandle*)},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(VolatileCallSite, getTarget, $MethodHandle*)},
	{"setTarget", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(VolatileCallSite, setTarget, void, $MethodHandle*)},
	{}
};

$ClassInfo _VolatileCallSite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.VolatileCallSite",
	"java.lang.invoke.CallSite",
	nullptr,
	nullptr,
	_VolatileCallSite_MethodInfo_
};

$Object* allocate$VolatileCallSite($Class* clazz) {
	return $of($alloc(VolatileCallSite));
}

void VolatileCallSite::init$($MethodType* type) {
	$CallSite::init$(type);
}

void VolatileCallSite::init$($MethodHandle* target) {
	$CallSite::init$(target);
}

$MethodHandle* VolatileCallSite::getTarget() {
	return getTargetVolatile();
}

void VolatileCallSite::setTarget($MethodHandle* newTarget) {
	setTargetVolatile(newTarget);
}

$MethodHandle* VolatileCallSite::dynamicInvoker() {
	return makeDynamicInvoker();
}

VolatileCallSite::VolatileCallSite() {
}

$Class* VolatileCallSite::load$($String* name, bool initialize) {
	$loadClass(VolatileCallSite, name, initialize, &_VolatileCallSite_ClassInfo_, allocate$VolatileCallSite);
	return class$;
}

$Class* VolatileCallSite::class$ = nullptr;

		} // invoke
	} // lang
} // java