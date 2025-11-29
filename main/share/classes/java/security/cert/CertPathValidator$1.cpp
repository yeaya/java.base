#include <java/security/cert/CertPathValidator$1.h>

#include <java/security/Security.h>
#include <java/security/cert/CertPathValidator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathValidator$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertPathValidator$1::*)()>(&CertPathValidator$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CertPathValidator$1_EnclosingMethodInfo_ = {
	"java.security.cert.CertPathValidator",
	"getDefaultType",
	"()Ljava/lang/String;"
};

$InnerClassInfo _CertPathValidator$1_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertPathValidator$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.cert.CertPathValidator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CertPathValidator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_CertPathValidator$1_EnclosingMethodInfo_,
	_CertPathValidator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertPathValidator"
};

$Object* allocate$CertPathValidator$1($Class* clazz) {
	return $of($alloc(CertPathValidator$1));
}

void CertPathValidator$1::init$() {
}

$Object* CertPathValidator$1::run() {
	return $of($Security::getProperty("certpathvalidator.type"_s));
}

CertPathValidator$1::CertPathValidator$1() {
}

$Class* CertPathValidator$1::load$($String* name, bool initialize) {
	$loadClass(CertPathValidator$1, name, initialize, &_CertPathValidator$1_ClassInfo_, allocate$CertPathValidator$1);
	return class$;
}

$Class* CertPathValidator$1::class$ = nullptr;

		} // cert
	} // security
} // java