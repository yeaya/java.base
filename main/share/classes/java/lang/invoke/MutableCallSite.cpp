#include <java/lang/invoke/MutableCallSite.h>

#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

#undef STORE_BARRIER

using $MutableCallSiteArray = $Array<::java::lang::invoke::MutableCallSite>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MutableCallSite_FieldInfo_[] = {
	{"STORE_BARRIER", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MutableCallSite, STORE_BARRIER)},
	{}
};

$MethodInfo _MutableCallSite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(MutableCallSite, init$, void, $MethodType*)},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(MutableCallSite, init$, void, $MethodHandle*)},
	{"dynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MutableCallSite, dynamicInvoker, $MethodHandle*)},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MutableCallSite, getTarget, $MethodHandle*)},
	{"setTarget", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(MutableCallSite, setTarget, void, $MethodHandle*)},
	{"syncAll", "([Ljava/lang/invoke/MutableCallSite;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MutableCallSite, syncAll, void, $MutableCallSiteArray*)},
	{}
};

$ClassInfo _MutableCallSite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.MutableCallSite",
	"java.lang.invoke.CallSite",
	nullptr,
	_MutableCallSite_FieldInfo_,
	_MutableCallSite_MethodInfo_
};

$Object* allocate$MutableCallSite($Class* clazz) {
	return $of($alloc(MutableCallSite));
}

$AtomicInteger* MutableCallSite::STORE_BARRIER = nullptr;

void MutableCallSite::init$($MethodType* type) {
	$CallSite::init$(type);
}

void MutableCallSite::init$($MethodHandle* target) {
	$CallSite::init$(target);
}

$MethodHandle* MutableCallSite::getTarget() {
	return this->target;
}

void MutableCallSite::setTarget($MethodHandle* newTarget) {
	setTargetNormal(newTarget);
}

$MethodHandle* MutableCallSite::dynamicInvoker() {
	return makeDynamicInvoker();
}

void MutableCallSite::syncAll($MutableCallSiteArray* sites) {
	$init(MutableCallSite);
	$useLocalCurrentObjectStackCache();
	if ($nc(sites)->length == 0) {
		return;
	}
	$nc(MutableCallSite::STORE_BARRIER)->lazySet(0);
	{
		$var($MutableCallSiteArray, arr$, sites);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(MutableCallSite, site, arr$->get(i$));
			{
				$Objects::requireNonNull(site);
			}
		}
	}
}

void clinit$MutableCallSite($Class* class$) {
	$assignStatic(MutableCallSite::STORE_BARRIER, $new($AtomicInteger));
}

MutableCallSite::MutableCallSite() {
}

$Class* MutableCallSite::load$($String* name, bool initialize) {
	$loadClass(MutableCallSite, name, initialize, &_MutableCallSite_ClassInfo_, clinit$MutableCallSite, allocate$MutableCallSite);
	return class$;
}

$Class* MutableCallSite::class$ = nullptr;

		} // invoke
	} // lang
} // java