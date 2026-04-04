#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$1.h>
#include <sun/net/NetProperties.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>
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
					namespace ntlm {

void NTLMAuthentication$1::init$() {
}

$Object* NTLMAuthentication$1::run() {
	return $of($NetProperties::get("jdk.http.ntlm.transparentAuth"_s));
}

NTLMAuthentication$1::NTLMAuthentication$1() {
}

$Class* NTLMAuthentication$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NTLMAuthentication$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NTLMAuthentication$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
	};
	$loadClass(NTLMAuthentication$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NTLMAuthentication$1);
	});
	return class$;
}

$Class* NTLMAuthentication$1::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun