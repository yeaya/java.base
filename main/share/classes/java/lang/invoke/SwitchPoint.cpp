#include <java/lang/invoke/SwitchPoint.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MutableCallSite.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $MutableCallSiteArray = $Array<::java::lang::invoke::MutableCallSite>;
using $SwitchPointArray = $Array<::java::lang::invoke::SwitchPoint>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MutableCallSite = ::java::lang::invoke::MutableCallSite;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _SwitchPoint_FieldInfo_[] = {
	{"K_true", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwitchPoint, K_true)},
	{"K_false", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwitchPoint, K_false)},
	{"mcs", "Ljava/lang/invoke/MutableCallSite;", nullptr, $PRIVATE | $FINAL, $field(SwitchPoint, mcs)},
	{"mcsInvoker", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(SwitchPoint, mcsInvoker)},
	{}
};

$MethodInfo _SwitchPoint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwitchPoint::*)()>(&SwitchPoint::init$))},
	{"guardWithTest", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"hasBeenInvalidated", "()Z", nullptr, $PUBLIC},
	{"invalidateAll", "([Ljava/lang/invoke/SwitchPoint;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($SwitchPointArray*)>(&SwitchPoint::invalidateAll))},
	{}
};

$ClassInfo _SwitchPoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.SwitchPoint",
	"java.lang.Object",
	nullptr,
	_SwitchPoint_FieldInfo_,
	_SwitchPoint_MethodInfo_
};

$Object* allocate$SwitchPoint($Class* clazz) {
	return $of($alloc(SwitchPoint));
}

$MethodHandle* SwitchPoint::K_true = nullptr;
$MethodHandle* SwitchPoint::K_false = nullptr;

void SwitchPoint::init$() {
	$set(this, mcs, $new($MutableCallSite, SwitchPoint::K_true));
	$set(this, mcsInvoker, $nc(this->mcs)->dynamicInvoker());
}

bool SwitchPoint::hasBeenInvalidated() {
	return ($nc(this->mcs)->getTarget() != SwitchPoint::K_true);
}

$MethodHandle* SwitchPoint::guardWithTest($MethodHandle* target, $MethodHandle* fallback) {
	if ($nc(this->mcs)->getTarget() == SwitchPoint::K_false) {
		return fallback;
	}
	return $MethodHandles::guardWithTest(this->mcsInvoker, target, fallback);
}

void SwitchPoint::invalidateAll($SwitchPointArray* switchPoints) {
	$init(SwitchPoint);
	if ($nc(switchPoints)->length == 0) {
		return;
	}
	$var($MutableCallSiteArray, sites, $new($MutableCallSiteArray, $nc(switchPoints)->length));
	for (int32_t i = 0; i < switchPoints->length; ++i) {
		$var(SwitchPoint, spt, switchPoints->get(i));
		if (spt == nullptr) {
			break;
		}
		sites->set(i, $nc(spt)->mcs);
		$nc(spt->mcs)->setTarget(SwitchPoint::K_false);
	}
	$MutableCallSite::syncAll(sites);
}

void clinit$SwitchPoint($Class* class$) {
	$init($Boolean);
	$assignStatic(SwitchPoint::K_true, $MethodHandles::constant($Boolean::TYPE, $($Boolean::valueOf(true))));
	$assignStatic(SwitchPoint::K_false, $MethodHandles::constant($Boolean::TYPE, $($Boolean::valueOf(false))));
}

SwitchPoint::SwitchPoint() {
}

$Class* SwitchPoint::load$($String* name, bool initialize) {
	$loadClass(SwitchPoint, name, initialize, &_SwitchPoint_ClassInfo_, clinit$SwitchPoint, allocate$SwitchPoint);
	return class$;
}

$Class* SwitchPoint::class$ = nullptr;

		} // invoke
	} // lang
} // java