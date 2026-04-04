#include <javax/security/cert/CertificateEncodingException.h>
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

void CertificateEncodingException::init$() {
	$CertificateException::init$();
}

void CertificateEncodingException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateEncodingException::CertificateEncodingException() {
}

CertificateEncodingException::CertificateEncodingException(const CertificateEncodingException& e) : $CertificateException(e) {
}

void CertificateEncodingException::throw$() {
	throw *this;
}

$Class* CertificateEncodingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateEncodingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateEncodingException, init$, void, $String*)},
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
		"javax.security.cert.CertificateEncodingException",
		"javax.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertificateEncodingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateEncodingException);
	});
	return class$;
}

$Class* CertificateEncodingException::class$ = nullptr;

		} // cert
	} // security
} // javax