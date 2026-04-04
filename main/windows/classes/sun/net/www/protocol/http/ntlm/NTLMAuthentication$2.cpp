#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$2.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $NTLMAuthentication = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

void NTLMAuthentication$2::init$($NTLMAuthentication* this$0) {
	$set(this, this$0, this$0);
}

$Object* NTLMAuthentication$2::run() {
	$useLocalObjectStack();
	$var($String, localhost, nullptr);
	try {
		$assign(localhost, $$nc($$nc($InetAddress::getLocalHost())->getHostName())->toUpperCase());
	} catch ($UnknownHostException& e) {
		$assign(localhost, "localhost"_s);
	}
	return $of(localhost);
}

NTLMAuthentication$2::NTLMAuthentication$2() {
}

$Class* NTLMAuthentication$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;", nullptr, $FINAL | $SYNTHETIC, $field(NTLMAuthentication$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;)V", nullptr, 0, $method(NTLMAuthentication$2, init$, void, $NTLMAuthentication*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NTLMAuthentication$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
		"init0",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
	};
	$loadClass(NTLMAuthentication$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NTLMAuthentication$2);
	});
	return class$;
}

$Class* NTLMAuthentication$2::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun