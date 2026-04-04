#include <javax/security/cert/CertificateExpiredException.h>
#include <javax/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $CertificateException = ::javax::security::cert::CertificateException;

namespace javax {
	namespace security {
		namespace cert {

void CertificateExpiredException::init$() {
	$CertificateException::init$();
}

void CertificateExpiredException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateExpiredException::CertificateExpiredException() {
}

CertificateExpiredException::CertificateExpiredException(const CertificateExpiredException& e) : $CertificateException(e) {
}

void CertificateExpiredException::throw$() {
	throw *this;
}

$Class* CertificateExpiredException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateExpiredException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateExpiredException, init$, void, $String*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.cert.CertificateExpiredException",
		"javax.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertificateExpiredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateExpiredException);
	});
	return class$;
}

$Class* CertificateExpiredException::class$ = nullptr;

		} // cert
	} // security
} // javax