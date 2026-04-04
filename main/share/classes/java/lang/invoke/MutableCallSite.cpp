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
	$useLocalObjectStack();
	if ($nc(sites)->length == 0) {
		return;
	}
	MutableCallSite::STORE_BARRIER->lazySet(0);
	{
		$var($MutableCallSiteArray, arr$, sites);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var(MutableCallSite, site, arr$->get(i$));
			{
				$Objects::requireNonNull(site);
			}
		}
	}
}

void MutableCallSite::clinit$($Class* clazz) {
	$assignStatic(MutableCallSite::STORE_BARRIER, $new($AtomicInteger));
}

MutableCallSite::MutableCallSite() {
}

$Class* MutableCallSite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"STORE_BARRIER", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MutableCallSite, STORE_BARRIER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodType;)V", nullptr, $PUBLIC, $method(MutableCallSite, init$, void, $MethodType*)},
		{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $method(MutableCallSite, init$, void, $MethodHandle*)},
		{"dynamicInvoker", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MutableCallSite, dynamicInvoker, $MethodHandle*)},
		{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MutableCallSite, getTarget, $MethodHandle*)},
		{"setTarget", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(MutableCallSite, setTarget, void, $MethodHandle*)},
		{"syncAll", "([Ljava/lang/invoke/MutableCallSite;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MutableCallSite, syncAll, void, $MutableCallSiteArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.invoke.MutableCallSite",
		"java.lang.invoke.CallSite",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MutableCallSite, name, initialize, &classInfo$$, MutableCallSite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MutableCallSite);
	});
	return class$;
}

$Class* MutableCallSite::class$ = nullptr;

		} // invoke
	} // lang
} // java