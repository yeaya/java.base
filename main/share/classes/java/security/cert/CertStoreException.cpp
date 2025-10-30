#include <java/security/cert/CertStoreException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertStoreException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertStoreException, serialVersionUID)},
	{}
};

$MethodInfo _CertStoreException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertStoreException::*)()>(&CertStoreException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertStoreException::*)($String*)>(&CertStoreException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertStoreException::*)($Throwable*)>(&CertStoreException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertStoreException::*)($String*,$Throwable*)>(&CertStoreException::init$))},
	{}
};

$ClassInfo _CertStoreException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertStoreException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CertStoreException_FieldInfo_,
	_CertStoreException_MethodInfo_
};

$Object* allocate$CertStoreException($Class* clazz) {
	return $of($alloc(CertStoreException));
}

void CertStoreException::init$() {
	$GeneralSecurityException::init$();
}

void CertStoreException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CertStoreException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

void CertStoreException::init$($String* msg, $Throwable* cause) {
	$GeneralSecurityException::init$(msg, cause);
}

CertStoreException::CertStoreException() {
}

CertStoreException::CertStoreException(const CertStoreException& e) : $GeneralSecurityException(e) {
}

void CertStoreException::throw$() {
	throw *this;
}

$Class* CertStoreException::load$($String* name, bool initialize) {
	$loadClass(CertStoreException, name, initialize, &_CertStoreException_ClassInfo_, allocate$CertStoreException);
	return class$;
}

$Class* CertStoreException::class$ = nullptr;

		} // cert
	} // security
} // java