#include <java/security/cert/CertificateParsingException.h>
#include <java/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;

namespace java {
	namespace security {
		namespace cert {

void CertificateParsingException::init$() {
	$CertificateException::init$();
}

void CertificateParsingException::init$($String* message) {
	$CertificateException::init$(message);
}

void CertificateParsingException::init$($String* message, $Throwable* cause) {
	$CertificateException::init$(message, cause);
}

void CertificateParsingException::init$($Throwable* cause) {
	$CertificateException::init$(cause);
}

CertificateParsingException::CertificateParsingException() {
}

CertificateParsingException::CertificateParsingException(const CertificateParsingException& e) : $CertificateException(e) {
}

void CertificateParsingException::throw$() {
	throw *this;
}

$Class* CertificateParsingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateParsingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateParsingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateParsingException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateParsingException, init$, void, $String*, $Throwable*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(CertificateParsingException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertificateParsingException",
		"java.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificateParsingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateParsingException);
	});
	return class$;
}

$Class* CertificateParsingException::class$ = nullptr;

		} // cert
	} // security
} // java