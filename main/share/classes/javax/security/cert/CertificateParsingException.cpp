#include <javax/security/cert/CertificateParsingException.h>
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

void CertificateParsingException::init$() {
	$CertificateException::init$();
}

void CertificateParsingException::init$($String* message) {
	$CertificateException::init$(message);
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
		"javax.security.cert.CertificateParsingException",
		"javax.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertificateParsingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateParsingException);
	});
	return class$;
}

$Class* CertificateParsingException::class$ = nullptr;

		} // cert
	} // security
} // javax