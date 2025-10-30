#include <java/security/cert/CRLException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CRLException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CRLException, serialVersionUID)},
	{}
};

$MethodInfo _CRLException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CRLException::*)()>(&CRLException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLException::*)($String*)>(&CRLException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLException::*)($String*,$Throwable*)>(&CRLException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLException::*)($Throwable*)>(&CRLException::init$))},
	{}
};

$ClassInfo _CRLException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CRLException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CRLException_FieldInfo_,
	_CRLException_MethodInfo_
};

$Object* allocate$CRLException($Class* clazz) {
	return $of($alloc(CRLException));
}

void CRLException::init$() {
	$GeneralSecurityException::init$();
}

void CRLException::init$($String* message) {
	$GeneralSecurityException::init$(message);
}

void CRLException::init$($String* message, $Throwable* cause) {
	$GeneralSecurityException::init$(message, cause);
}

void CRLException::init$($Throwable* cause) {
	$GeneralSecurityException::init$(cause);
}

CRLException::CRLException() {
}

CRLException::CRLException(const CRLException& e) : $GeneralSecurityException(e) {
}

void CRLException::throw$() {
	throw *this;
}

$Class* CRLException::load$($String* name, bool initialize) {
	$loadClass(CRLException, name, initialize, &_CRLException_ClassInfo_, allocate$CRLException);
	return class$;
}

$Class* CRLException::class$ = nullptr;

		} // cert
	} // security
} // java