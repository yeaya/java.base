#include <sun/net/InetAddressCachePolicy$1.h>
#include <java/lang/NumberFormatException.h>
#include <java/security/Security.h>
#include <sun/net/InetAddressCachePolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Security = ::java::security::Security;

namespace sun {
	namespace net {

void InetAddressCachePolicy$1::init$() {
}

$Object* InetAddressCachePolicy$1::run() {
	$useLocalObjectStack();
	try {
		$var($String, tmpString, $Security::getProperty("networkaddress.cache.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::valueOf(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	try {
		$var($String, tmpString, $System::getProperty("sun.net.inetaddr.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::decode(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	return nullptr;
}

InetAddressCachePolicy$1::InetAddressCachePolicy$1() {
}

$Class* InetAddressCachePolicy$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddressCachePolicy$1, init$, void)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(InetAddressCachePolicy$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.InetAddressCachePolicy",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.InetAddressCachePolicy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.InetAddressCachePolicy$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.InetAddressCachePolicy"
	};
	$loadClass(InetAddressCachePolicy$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddressCachePolicy$1);
	});
	return class$;
}

$Class* InetAddressCachePolicy$1::class$ = nullptr;

	} // net
} // sun