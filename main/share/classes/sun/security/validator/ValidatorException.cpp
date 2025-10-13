#include <sun/security/validator/ValidatorException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

#undef T_ALGORITHM_DISABLED
#undef T_CA_EXTENSIONS
#undef T_CERT_EXPIRED
#undef T_EE_EXTENSIONS
#undef T_NAME_CHAINING
#undef T_NO_TRUST_ANCHOR
#undef T_SIGNATURE_ERROR
#undef T_UNTRUSTED_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;

namespace sun {
	namespace security {
		namespace validator {

$FieldInfo _ValidatorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ValidatorException, serialVersionUID)},
	{"T_NO_TRUST_ANCHOR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_NO_TRUST_ANCHOR)},
	{"T_EE_EXTENSIONS", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_EE_EXTENSIONS)},
	{"T_CA_EXTENSIONS", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_CA_EXTENSIONS)},
	{"T_CERT_EXPIRED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_CERT_EXPIRED)},
	{"T_SIGNATURE_ERROR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_SIGNATURE_ERROR)},
	{"T_NAME_CHAINING", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_NAME_CHAINING)},
	{"T_ALGORITHM_DISABLED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_ALGORITHM_DISABLED)},
	{"T_UNTRUSTED_CERT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ValidatorException, T_UNTRUSTED_CERT)},
	{"type", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ValidatorException, type)},
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(ValidatorException, cert)},
	{}
};

$MethodInfo _ValidatorException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)($String*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)($String*,$Throwable*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)(Object$*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)(Object$*,$X509Certificate*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/security/cert/X509Certificate;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)(Object$*,$X509Certificate*,$Throwable*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)($String*,Object$*,$X509Certificate*)>(&ValidatorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/security/cert/X509Certificate;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ValidatorException::*)($String*,Object$*,$X509Certificate*,$Throwable*)>(&ValidatorException::init$))},
	{"getErrorCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"getErrorType", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ValidatorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.validator.ValidatorException",
	"java.security.cert.CertificateException",
	nullptr,
	_ValidatorException_FieldInfo_,
	_ValidatorException_MethodInfo_
};

$Object* allocate$ValidatorException($Class* clazz) {
	return $of($alloc(ValidatorException));
}

$Object* ValidatorException::T_NO_TRUST_ANCHOR = nullptr;
$Object* ValidatorException::T_EE_EXTENSIONS = nullptr;
$Object* ValidatorException::T_CA_EXTENSIONS = nullptr;
$Object* ValidatorException::T_CERT_EXPIRED = nullptr;
$Object* ValidatorException::T_SIGNATURE_ERROR = nullptr;
$Object* ValidatorException::T_NAME_CHAINING = nullptr;
$Object* ValidatorException::T_ALGORITHM_DISABLED = nullptr;
$Object* ValidatorException::T_UNTRUSTED_CERT = nullptr;

void ValidatorException::init$($String* msg) {
	$CertificateException::init$(msg);
}

void ValidatorException::init$($String* msg, $Throwable* cause) {
	$CertificateException::init$(msg);
	initCause(cause);
}

void ValidatorException::init$(Object$* type) {
	ValidatorException::init$(type, ($X509Certificate*)nullptr);
}

void ValidatorException::init$(Object$* type, $X509Certificate* cert) {
	$CertificateException::init$($cast($String, type));
	$set(this, type, type);
	$set(this, cert, cert);
}

void ValidatorException::init$(Object$* type, $X509Certificate* cert, $Throwable* cause) {
	ValidatorException::init$(type, cert);
	initCause(cause);
}

void ValidatorException::init$($String* msg, Object$* type, $X509Certificate* cert) {
	$CertificateException::init$(msg);
	$set(this, type, type);
	$set(this, cert, cert);
}

void ValidatorException::init$($String* msg, Object$* type, $X509Certificate* cert, $Throwable* cause) {
	ValidatorException::init$(msg, type, cert);
	initCause(cause);
}

$Object* ValidatorException::getErrorType() {
	return $of(this->type);
}

$X509Certificate* ValidatorException::getErrorCertificate() {
	return this->cert;
}

void clinit$ValidatorException($Class* class$) {
	$assignStatic(ValidatorException::T_NO_TRUST_ANCHOR, "No trusted certificate found"_s);
	$assignStatic(ValidatorException::T_EE_EXTENSIONS, "End entity certificate extension check failed"_s);
	$assignStatic(ValidatorException::T_CA_EXTENSIONS, "CA certificate extension check failed"_s);
	$assignStatic(ValidatorException::T_CERT_EXPIRED, "Certificate expired"_s);
	$assignStatic(ValidatorException::T_SIGNATURE_ERROR, "Certificate signature validation failed"_s);
	$assignStatic(ValidatorException::T_NAME_CHAINING, "Certificate chaining error"_s);
	$assignStatic(ValidatorException::T_ALGORITHM_DISABLED, "Certificate signature algorithm disabled"_s);
	$assignStatic(ValidatorException::T_UNTRUSTED_CERT, "Untrusted certificate"_s);
}

ValidatorException::ValidatorException() {
}

ValidatorException::ValidatorException(const ValidatorException& e) {
}

ValidatorException ValidatorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ValidatorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ValidatorException::load$($String* name, bool initialize) {
	$loadClass(ValidatorException, name, initialize, &_ValidatorException_ClassInfo_, clinit$ValidatorException, allocate$ValidatorException);
	return class$;
}

$Class* ValidatorException::class$ = nullptr;

		} // validator
	} // security
} // sun