#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NTLMAuthentication$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;", nullptr, $FINAL | $SYNTHETIC, $field(NTLMAuthentication$1, this$0)},
	{}
};

$MethodInfo _NTLMAuthentication$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/ntlm/NTLMAuthentication;)V", nullptr, 0, $method(static_cast<void(NTLMAuthentication$1::*)($NTLMAuthentication*)>(&NTLMAuthentication$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NTLMAuthentication$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
	"init0",
	"()V"
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
	_NTLMAuthentication$1_FieldInfo_,
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

void NTLMAuthentication$1::init$($NTLMAuthentication* this$0) {
	$set(this, this$0, this$0);
}

$Object* NTLMAuthentication$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, localhost, nullptr);
	try {
		$assign(localhost, $nc($($InetAddress::getLocalHost()))->getHostName());
	} catch ($UnknownHostException&) {
		$var($UnknownHostException, e, $catch());
		$assign(localhost, "localhost"_s);
	}
	return $of(localhost);
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