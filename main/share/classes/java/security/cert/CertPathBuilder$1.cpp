#include <java/security/cert/CertPathBuilder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Security.h>
#include <java/security/cert/CertPathBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $CertPathBuilder = ::java::security::cert::CertPathBuilder;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathBuilder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CertPathBuilder$1::*)()>(&CertPathBuilder$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CertPathBuilder$1_EnclosingMethodInfo_ = {
	"java.security.cert.CertPathBuilder",
	"getDefaultType",
	"()Ljava/lang/String;"
};

$InnerClassInfo _CertPathBuilder$1_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertPathBuilder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.cert.CertPathBuilder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_CertPathBuilder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_CertPathBuilder$1_EnclosingMethodInfo_,
	_CertPathBuilder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.CertPathBuilder"
};

$Object* allocate$CertPathBuilder$1($Class* clazz) {
	return $of($alloc(CertPathBuilder$1));
}

void CertPathBuilder$1::init$() {
}

$Object* CertPathBuilder$1::run() {
	return $of($Security::getProperty("certpathbuilder.type"_s));
}

CertPathBuilder$1::CertPathBuilder$1() {
}

$Class* CertPathBuilder$1::load$($String* name, bool initialize) {
	$loadClass(CertPathBuilder$1, name, initialize, &_CertPathBuilder$1_ClassInfo_, allocate$CertPathBuilder$1);
	return class$;
}

$Class* CertPathBuilder$1::class$ = nullptr;

		} // cert
	} // security
} // java