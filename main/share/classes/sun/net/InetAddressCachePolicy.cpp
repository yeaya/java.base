#include <sun/net/InetAddressCachePolicy.h>

#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/net/InetAddressCachePolicy$1.h>
#include <sun/net/InetAddressCachePolicy$2.h>
#include <jcpp.h>

#undef DEFAULT_POSITIVE
#undef FOREVER
#undef NEVER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InetAddressCachePolicy$1 = ::sun::net::InetAddressCachePolicy$1;
using $InetAddressCachePolicy$2 = ::sun::net::InetAddressCachePolicy$2;

namespace sun {
	namespace net {

$FieldInfo _InetAddressCachePolicy_FieldInfo_[] = {
	{"cachePolicyProp", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetAddressCachePolicy, cachePolicyProp)},
	{"cachePolicyPropFallback", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetAddressCachePolicy, cachePolicyPropFallback)},
	{"negativeCachePolicyProp", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetAddressCachePolicy, negativeCachePolicyProp)},
	{"negativeCachePolicyPropFallback", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InetAddressCachePolicy, negativeCachePolicyPropFallback)},
	{"FOREVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InetAddressCachePolicy, FOREVER)},
	{"NEVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InetAddressCachePolicy, NEVER)},
	{"DEFAULT_POSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InetAddressCachePolicy, DEFAULT_POSITIVE)},
	{"cachePolicy", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(InetAddressCachePolicy, cachePolicy)},
	{"negativeCachePolicy", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(InetAddressCachePolicy, negativeCachePolicy)},
	{"propertySet", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InetAddressCachePolicy, propertySet)},
	{"propertyNegativeSet", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InetAddressCachePolicy, propertyNegativeSet)},
	{}
};

$MethodInfo _InetAddressCachePolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InetAddressCachePolicy, init$, void)},
	{"checkValue", "(II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InetAddressCachePolicy, checkValue, void, int32_t, int32_t)},
	{"get", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(InetAddressCachePolicy, get, int32_t)},
	{"getNegative", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(InetAddressCachePolicy, getNegative, int32_t)},
	{"setIfNotSet", "(I)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(InetAddressCachePolicy, setIfNotSet, void, int32_t)},
	{"setNegativeIfNotSet", "(I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InetAddressCachePolicy, setNegativeIfNotSet, void, int32_t)},
	{}
};

$InnerClassInfo _InetAddressCachePolicy_InnerClassesInfo_[] = {
	{"sun.net.InetAddressCachePolicy$2", nullptr, nullptr, 0},
	{"sun.net.InetAddressCachePolicy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InetAddressCachePolicy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.InetAddressCachePolicy",
	"java.lang.Object",
	nullptr,
	_InetAddressCachePolicy_FieldInfo_,
	_InetAddressCachePolicy_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddressCachePolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.InetAddressCachePolicy$2,sun.net.InetAddressCachePolicy$1"
};

$Object* allocate$InetAddressCachePolicy($Class* clazz) {
	return $of($alloc(InetAddressCachePolicy));
}

$String* InetAddressCachePolicy::cachePolicyProp = nullptr;
$String* InetAddressCachePolicy::cachePolicyPropFallback = nullptr;
$String* InetAddressCachePolicy::negativeCachePolicyProp = nullptr;
$String* InetAddressCachePolicy::negativeCachePolicyPropFallback = nullptr;
$volatile(int32_t) InetAddressCachePolicy::cachePolicy = 0;
$volatile(int32_t) InetAddressCachePolicy::negativeCachePolicy = 0;
bool InetAddressCachePolicy::propertySet = false;
bool InetAddressCachePolicy::propertyNegativeSet = false;

void InetAddressCachePolicy::init$() {
}

int32_t InetAddressCachePolicy::get() {
	$init(InetAddressCachePolicy);
	return InetAddressCachePolicy::cachePolicy;
}

int32_t InetAddressCachePolicy::getNegative() {
	$init(InetAddressCachePolicy);
	return InetAddressCachePolicy::negativeCachePolicy;
}

void InetAddressCachePolicy::setIfNotSet(int32_t newPolicy) {
	$load(InetAddressCachePolicy);
	$synchronized(class$) {
		$init(InetAddressCachePolicy);
		if (!InetAddressCachePolicy::propertySet) {
			checkValue(newPolicy, InetAddressCachePolicy::cachePolicy);
			InetAddressCachePolicy::cachePolicy = newPolicy;
		}
	}
}

void InetAddressCachePolicy::setNegativeIfNotSet(int32_t newPolicy) {
	$init(InetAddressCachePolicy);
	if (!InetAddressCachePolicy::propertyNegativeSet) {
		InetAddressCachePolicy::negativeCachePolicy = newPolicy < 0 ? InetAddressCachePolicy::FOREVER : newPolicy;
	}
}

void InetAddressCachePolicy::checkValue(int32_t newPolicy, int32_t oldPolicy) {
	$init(InetAddressCachePolicy);
	if (newPolicy == InetAddressCachePolicy::FOREVER) {
		return;
	}
	if ((oldPolicy == InetAddressCachePolicy::FOREVER) || (newPolicy < oldPolicy) || (newPolicy < InetAddressCachePolicy::FOREVER)) {
		$throwNew($SecurityException, "can\'t make InetAddress cache more lax"_s);
	}
}

void clinit$InetAddressCachePolicy($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(InetAddressCachePolicy::cachePolicyProp, "networkaddress.cache.ttl"_s);
	$assignStatic(InetAddressCachePolicy::cachePolicyPropFallback, "sun.net.inetaddr.ttl"_s);
	$assignStatic(InetAddressCachePolicy::negativeCachePolicyProp, "networkaddress.cache.negative.ttl"_s);
	$assignStatic(InetAddressCachePolicy::negativeCachePolicyPropFallback, "sun.net.inetaddr.negative.ttl"_s);
	$beforeCallerSensitive();
	InetAddressCachePolicy::cachePolicy = InetAddressCachePolicy::FOREVER;
	InetAddressCachePolicy::negativeCachePolicy = InetAddressCachePolicy::NEVER;
	{
		$var($Integer, tmp, $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InetAddressCachePolicy$1)))));
		if (tmp != nullptr) {
			InetAddressCachePolicy::cachePolicy = tmp->intValue() < 0 ? InetAddressCachePolicy::FOREVER : tmp->intValue();
			InetAddressCachePolicy::propertySet = true;
		} else if ($System::getSecurityManager() == nullptr) {
			InetAddressCachePolicy::cachePolicy = InetAddressCachePolicy::DEFAULT_POSITIVE;
		}
		$assign(tmp, $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InetAddressCachePolicy$2)))));
		if (tmp != nullptr) {
			InetAddressCachePolicy::negativeCachePolicy = tmp->intValue() < 0 ? InetAddressCachePolicy::FOREVER : tmp->intValue();
			InetAddressCachePolicy::propertyNegativeSet = true;
		}
	}
}

InetAddressCachePolicy::InetAddressCachePolicy() {
}

$Class* InetAddressCachePolicy::load$($String* name, bool initialize) {
	$loadClass(InetAddressCachePolicy, name, initialize, &_InetAddressCachePolicy_ClassInfo_, clinit$InetAddressCachePolicy, allocate$InetAddressCachePolicy);
	return class$;
}

$Class* InetAddressCachePolicy::class$ = nullptr;

	} // net
} // sun