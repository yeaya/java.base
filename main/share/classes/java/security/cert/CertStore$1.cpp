#include <java/security/cert/CertStore$1.h>

#include <java/security/Security.h>
#include <java/security/cert/CertStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertStore$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CertStore$1, init$, void)},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStore$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _CertStore$1_EnclosingMethodInfo_ = {
	"java.security.cert.CertStore",
	"getDefaultType",
	"()Ljava/lang/String;"
};

$InnerClassInfo _CertStore$1_InnerClassesInfo_[] = {
	{"java.security.cert.CertStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertStore$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.cert.CertStore$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CertStore$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_CertStore$1_EnclosingMethodInfo_,
	_CertStore$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertStore"
};

$Object* allocate$CertStore$1($Class* clazz) {
	return $of($alloc(CertStore$1));
}

void CertStore$1::init$() {
}

$Object* CertStore$1::run() {
	return $of($Security::getProperty("certstore.type"_s));
}

CertStore$1::CertStore$1() {
}

$Class* CertStore$1::load$($String* name, bool initialize) {
	$loadClass(CertStore$1, name, initialize, &_CertStore$1_ClassInfo_, allocate$CertStore$1);
	return class$;
}

$Class* CertStore$1::class$ = nullptr;

		} // cert
	} // security
} // java