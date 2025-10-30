#include <sun/net/www/protocol/http/DigestAuthentication$1.h>

#include <sun/net/NetProperties.h>
#include <sun/net/www/protocol/http/DigestAuthentication.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetProperties = ::sun::net::NetProperties;
using $DigestAuthentication = ::sun::net::www::protocol::http::DigestAuthentication;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$MethodInfo _DigestAuthentication$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DigestAuthentication$1::*)()>(&DigestAuthentication$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DigestAuthentication$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.DigestAuthentication",
	nullptr,
	nullptr
};

$InnerClassInfo _DigestAuthentication$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.DigestAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DigestAuthentication$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.DigestAuthentication$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DigestAuthentication$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_DigestAuthentication$1_EnclosingMethodInfo_,
	_DigestAuthentication$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.DigestAuthentication"
};

$Object* allocate$DigestAuthentication$1($Class* clazz) {
	return $of($alloc(DigestAuthentication$1));
}

void DigestAuthentication$1::init$() {
}

$Object* DigestAuthentication$1::run() {
	return $of($NetProperties::getBoolean("http.auth.digest.quoteParameters"_s));
}

DigestAuthentication$1::DigestAuthentication$1() {
}

$Class* DigestAuthentication$1::load$($String* name, bool initialize) {
	$loadClass(DigestAuthentication$1, name, initialize, &_DigestAuthentication$1_ClassInfo_, allocate$DigestAuthentication$1);
	return class$;
}

$Class* DigestAuthentication$1::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun