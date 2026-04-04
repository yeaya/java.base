#include <sun/net/InetAddressCachePolicy$2.h>
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

void InetAddressCachePolicy$2::init$() {
}

$Object* InetAddressCachePolicy$2::run() {
	$useLocalObjectStack();
	try {
		$var($String, tmpString, $Security::getProperty("networkaddress.cache.negative.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::valueOf(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	try {
		$var($String, tmpString, $System::getProperty("sun.net.inetaddr.negative.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::decode(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	return nullptr;
}

InetAddressCachePolicy$2::InetAddressCachePolicy$2() {
}

$Class* InetAddressCachePolicy$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddressCachePolicy$2, init$, void)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(InetAddressCachePolicy$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.InetAddressCachePolicy",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.InetAddressCachePolicy$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.InetAddressCachePolicy$2",
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
	$loadClass(InetAddressCachePolicy$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddressCachePolicy$2);
	});
	return class$;
}

$Class* InetAddressCachePolicy$2::class$ = nullptr;

	} // net
} // sun