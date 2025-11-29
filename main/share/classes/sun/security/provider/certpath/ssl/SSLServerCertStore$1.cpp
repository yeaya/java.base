#include <sun/security/provider/certpath/ssl/SSLServerCertStore$1.h>

#include <javax/net/ssl/SSLSession.h>
#include <sun/security/provider/certpath/ssl/SSLServerCertStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

$MethodInfo _SSLServerCertStore$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SSLServerCertStore$1::*)()>(&SSLServerCertStore$1::init$))},
	{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SSLServerCertStore$1_EnclosingMethodInfo_ = {
	"sun.security.provider.certpath.ssl.SSLServerCertStore",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLServerCertStore$1_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ssl.SSLServerCertStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SSLServerCertStore$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ssl.SSLServerCertStore$1",
	"java.lang.Object",
	"javax.net.ssl.HostnameVerifier",
	nullptr,
	_SSLServerCertStore$1_MethodInfo_,
	nullptr,
	&_SSLServerCertStore$1_EnclosingMethodInfo_,
	_SSLServerCertStore$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ssl.SSLServerCertStore"
};

$Object* allocate$SSLServerCertStore$1($Class* clazz) {
	return $of($alloc(SSLServerCertStore$1));
}

void SSLServerCertStore$1::init$() {
}

bool SSLServerCertStore$1::verify($String* hostname, $SSLSession* session) {
	return true;
}

SSLServerCertStore$1::SSLServerCertStore$1() {
}

$Class* SSLServerCertStore$1::load$($String* name, bool initialize) {
	$loadClass(SSLServerCertStore$1, name, initialize, &_SSLServerCertStore$1_ClassInfo_, allocate$SSLServerCertStore$1);
	return class$;
}

$Class* SSLServerCertStore$1::class$ = nullptr;

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun