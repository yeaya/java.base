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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NTLMAuthentication = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$FieldInfo _NTLMAuthentication$2_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;", nullptr, $FINAL | $SYNTHETIC, $field(NTLMAuthentication$2, this$0)},
	{}
};

$MethodInfo _NTLMAuthentication$2_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;)V", nullptr, 0, $method(static_cast<void(NTLMAuthentication$2::*)($NTLMAuthentication*)>(&NTLMAuthentication$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NTLMAuthentication$2_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
	"init0",
	"()V"
};

$InnerClassInfo _NTLMAuthentication$2_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NTLMAuthentication$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_NTLMAuthentication$2_FieldInfo_,
	_NTLMAuthentication$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_NTLMAuthentication$2_EnclosingMethodInfo_,
	_NTLMAuthentication$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication"
};

$Object* allocate$NTLMAuthentication$2($Class* clazz) {
	return $of($alloc(NTLMAuthentication$2));
}

void NTLMAuthentication$2::init$($NTLMAuthentication* this$0) {
	$set(this, this$0, this$0);
}

$Object* NTLMAuthentication$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, localhost, nullptr);
	try {
		$assign(localhost, $nc($($nc($($InetAddress::getLocalHost()))->getHostName()))->toUpperCase());
	} catch ($UnknownHostException& e) {
		$assign(localhost, "localhost"_s);
	}
	return $of(localhost);
}

NTLMAuthentication$2::NTLMAuthentication$2() {
}

$Class* NTLMAuthentication$2::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthentication$2, name, initialize, &_NTLMAuthentication$2_ClassInfo_, allocate$NTLMAuthentication$2);
	return class$;
}

$Class* NTLMAuthentication$2::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun