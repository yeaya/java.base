#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$1.h>

#include <sun/net/NetProperties.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetProperties = ::sun::net::NetProperties;
using $NTLMAuthentication = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$MethodInfo _NTLMAuthentication$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NTLMAuthentication$1::*)()>(&NTLMAuthentication$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NTLMAuthentication$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
	nullptr,
	nullptr
};

$InnerClassInfo _NTLMAuthentication$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NTLMAuthentication$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_NTLMAuthentication$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_NTLMAuthentication$1_EnclosingMethodInfo_,
	_NTLMAuthentication$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
};

$Object* allocate$NTLMAuthentication$1($Class* clazz) {
	return $of($alloc(NTLMAuthentication$1));
}

void NTLMAuthentication$1::init$() {
}

$Object* NTLMAuthentication$1::run() {
	return $of($NetProperties::get("jdk.http.ntlm.transparentAuth"_s));
}

NTLMAuthentication$1::NTLMAuthentication$1() {
}

$Class* NTLMAuthentication$1::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthentication$1, name, initialize, &_NTLMAuthentication$1_ClassInfo_, allocate$NTLMAuthentication$1);
	return class$;
}

$Class* NTLMAuthentication$1::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun