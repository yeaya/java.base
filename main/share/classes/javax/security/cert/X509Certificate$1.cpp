#include <javax/security/cert/X509Certificate$1.h>

#include <java/security/Security.h>
#include <javax/security/cert/X509Certificate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace javax {
	namespace security {
		namespace cert {

$MethodInfo _X509Certificate$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(X509Certificate$1, init$, void)},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X509Certificate$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _X509Certificate$1_EnclosingMethodInfo_ = {
	"javax.security.cert.X509Certificate",
	nullptr,
	nullptr
};

$InnerClassInfo _X509Certificate$1_InnerClassesInfo_[] = {
	{"javax.security.cert.X509Certificate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X509Certificate$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.cert.X509Certificate$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_X509Certificate$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_X509Certificate$1_EnclosingMethodInfo_,
	_X509Certificate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.cert.X509Certificate"
};

$Object* allocate$X509Certificate$1($Class* clazz) {
	return $of($alloc(X509Certificate$1));
}

void X509Certificate$1::init$() {
}

$Object* X509Certificate$1::run() {
	return $of($Security::getProperty("cert.provider.x509v1"_s));
}

X509Certificate$1::X509Certificate$1() {
}

$Class* X509Certificate$1::load$($String* name, bool initialize) {
	$loadClass(X509Certificate$1, name, initialize, &_X509Certificate$1_ClassInfo_, allocate$X509Certificate$1);
	return class$;
}

$Class* X509Certificate$1::class$ = nullptr;

		} // cert
	} // security
} // javax