#include <java/net/DefaultInterface.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace net {

class DefaultInterface$$Lambda$getInetAddresses : public $PrivilegedAction {
	$class(DefaultInterface$$Lambda$getInetAddresses, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($NetworkInterface* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->getInetAddresses();
	}
	$NetworkInterface* inst$ = nullptr;
};
$Class* DefaultInterface$$Lambda$getInetAddresses::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultInterface$$Lambda$getInetAddresses, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/NetworkInterface;)V", nullptr, $PUBLIC, $method(DefaultInterface$$Lambda$getInetAddresses, init$, void, $NetworkInterface*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultInterface$$Lambda$getInetAddresses, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.DefaultInterface$$Lambda$getInetAddresses",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultInterface$$Lambda$getInetAddresses, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultInterface$$Lambda$getInetAddresses);
	});
	return class$;
}
$Class* DefaultInterface$$Lambda$getInetAddresses::class$ = nullptr;

$NetworkInterface* DefaultInterface::defaultInterface = nullptr;

void DefaultInterface::init$() {
}

$NetworkInterface* DefaultInterface::getDefault() {
	$init(DefaultInterface);
	return DefaultInterface::defaultInterface;
}

$NetworkInterface* DefaultInterface::chooseDefaultInterface() {
	$init(DefaultInterface);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Enumeration, nifs, nullptr);
	try {
		$assign(nifs, $NetworkInterface::getNetworkInterfaces());
	} catch ($IOException& ignore) {
		return nullptr;
	}
	$var($NetworkInterface, preferred, nullptr);
	$var($NetworkInterface, dual, nullptr);
	$var($NetworkInterface, nonLinkLocal, nullptr);
	$var($NetworkInterface, ppp, nullptr);
	$var($NetworkInterface, loopback, nullptr);
	while ($nc(nifs)->hasMoreElements()) {
		$var($NetworkInterface, ni, $cast($NetworkInterface, nifs->nextElement()));
		try {
			bool var$0 = !$nc(ni)->isUp();
			if (var$0 || !ni->supportsMulticast()) {
				continue;
			}
			bool ip4 = false;
			bool ip6 = false;
			bool isNonLinkLocal = false;
			$var($PrivilegedAction, pa, $new(DefaultInterface$$Lambda$getInetAddresses, ni));
			$var($Enumeration, addrs, $cast($Enumeration, $AccessController::doPrivileged(pa)));
			while ($nc(addrs)->hasMoreElements()) {
				$var($InetAddress, addr, $cast($InetAddress, addrs->nextElement()));
				if (!$nc(addr)->isAnyLocalAddress()) {
					if ($instanceOf($Inet4Address, addr)) {
						ip4 = true;
					} else if ($instanceOf($Inet6Address, addr)) {
						ip6 = true;
					}
					if (!addr->isLinkLocalAddress()) {
						isNonLinkLocal = true;
					}
				}
			}
			bool isLoopback = ni->isLoopback();
			bool isPPP = ni->isPointToPoint();
			if (!isLoopback && !isPPP) {
				if (preferred == nullptr) {
					$assign(preferred, ni);
				}
				if (ip4 && ip6) {
					if (isNonLinkLocal) {
						return ni;
					}
					if (dual == nullptr) {
						$assign(dual, ni);
					}
				}
				if (nonLinkLocal == nullptr) {
					if (isNonLinkLocal) {
						$assign(nonLinkLocal, ni);
					}
				}
			}
			if (ppp == nullptr && isPPP) {
				$assign(ppp, ni);
			}
			if (loopback == nullptr && isLoopback) {
				$assign(loopback, ni);
			}
		} catch ($IOException& skip) {
		}
	}
	if (dual != nullptr) {
		return dual;
	} else if (nonLinkLocal != nullptr) {
		return nonLinkLocal;
	} else if (preferred != nullptr) {
		return preferred;
	} else {
		return (ppp != nullptr) ? ppp : loopback;
	}
}

void DefaultInterface::clinit$($Class* clazz) {
	$assignStatic(DefaultInterface::defaultInterface, DefaultInterface::chooseDefaultInterface());
}

DefaultInterface::DefaultInterface() {
}

$Class* DefaultInterface::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.net.DefaultInterface$$Lambda$getInetAddresses")) {
			return DefaultInterface$$Lambda$getInetAddresses::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"defaultInterface", "Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultInterface, defaultInterface)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultInterface, init$, void)},
		{"chooseDefaultInterface", "()Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultInterface, chooseDefaultInterface, $NetworkInterface*)},
		{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $staticMethod(DefaultInterface, getDefault, $NetworkInterface*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.DefaultInterface",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultInterface, name, initialize, &classInfo$$, DefaultInterface::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultInterface);
	});
	return class$;
}

$Class* DefaultInterface::class$ = nullptr;

	} // net
} // java