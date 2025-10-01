#include <java/security/cert/CertificateExpiredException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateExpiredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateExpiredException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateExpiredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateExpiredException::*)()>(&CertificateExpiredException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateExpiredException::*)($String*)>(&CertificateExpiredException::init$))},
	{}
};

$ClassInfo _CertificateExpiredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateExpiredException",
	"java.security.cert.CertificateException",
	nullptr,
	_CertificateExpiredException_FieldInfo_,
	_CertificateExpiredException_MethodInfo_
};

$Object* allocate$CertificateExpiredException($Class* clazz) {
	return $of($alloc(CertificateExpiredException));
}

void CertificateExpiredException::init$() {
	$CertificateException::init$();
}

void CertificateExpiredException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateExpiredException::CertificateExpiredException() {
}

CertificateExpiredException::CertificateExpiredException(const CertificateExpiredException& e) {
}

CertificateExpiredException CertificateExpiredException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertificateExpiredException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertificateExpiredException::load$($String* name, bool initialize) {
	$loadClass(CertificateExpiredException, name, initialize, &_CertificateExpiredException_ClassInfo_, allocate$CertificateExpiredException);
	return class$;
}

$Class* CertificateExpiredException::class$ = nullptr;

		} // cert
	} // security
} // java