#include <java/security/cert/CertPathBuilderException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPathBuilderException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertPathBuilderException, serialVersionUID)},
	{}
};

$MethodInfo _CertPathBuilderException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertPathBuilderException::*)()>(&CertPathBuilderException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathBuilderException::*)($String*)>(&CertPathBuilderException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathBuilderException::*)($Throwable*)>(&CertPathBuilderException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CertPathBuilderException::*)($String*,$Throwable*)>(&CertPathBuilderException::init$))},
	{}
};

$ClassInfo _CertPathBuilderException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertPathBuilderException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CertPathBuilderException_FieldInfo_,
	_CertPathBuilderException_MethodInfo_
};

$Object* allocate$CertPathBuilderException($Class* clazz) {
	return $of($alloc(CertPathBuilderException));
}

void CertPathBuilderException::init$() {
	$GeneralSecurityException::init$();
}

void CertPathBuilderException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CertPathBuilderException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

void CertPathBuilderException::init$($String* msg, $Throwable* cause) {
	$GeneralSecurityException::init$(msg, cause);
}

CertPathBuilderException::CertPathBuilderException() {
}

CertPathBuilderException::CertPathBuilderException(const CertPathBuilderException& e) : $GeneralSecurityException(e) {
}

void CertPathBuilderException::throw$() {
	throw *this;
}

$Class* CertPathBuilderException::load$($String* name, bool initialize) {
	$loadClass(CertPathBuilderException, name, initialize, &_CertPathBuilderException_ClassInfo_, allocate$CertPathBuilderException);
	return class$;
}

$Class* CertPathBuilderException::class$ = nullptr;

		} // cert
	} // security
} // java