#include <sun/net/www/protocol/http/DigestAuthentication$1.h>
#include <sun/net/NetProperties.h>
#include <sun/net/www/protocol/http/DigestAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void DigestAuthentication$1::init$() {
}

$Object* DigestAuthentication$1::run() {
	return $of($NetProperties::getBoolean("http.auth.digest.quoteParameters"_s));
}

DigestAuthentication$1::DigestAuthentication$1() {
}

$Class* DigestAuthentication$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DigestAuthentication$1, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(DigestAuthentication$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.DigestAuthentication",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.DigestAuthentication$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.DigestAuthentication$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.DigestAuthentication"
	};
	$loadClass(DigestAuthentication$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DigestAuthentication$1);
	});
	return class$;
}

$Class* DigestAuthentication$1::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun