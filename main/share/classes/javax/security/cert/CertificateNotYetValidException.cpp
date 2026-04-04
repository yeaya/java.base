#include <javax/security/cert/CertificateNotYetValidException.h>
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

void CertificateNotYetValidException::init$() {
	$CertificateException::init$();
}

void CertificateNotYetValidException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateNotYetValidException::CertificateNotYetValidException() {
}

CertificateNotYetValidException::CertificateNotYetValidException(const CertificateNotYetValidException& e) : $CertificateException(e) {
}

void CertificateNotYetValidException::throw$() {
	throw *this;
}

$Class* CertificateNotYetValidException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateNotYetValidException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateNotYetValidException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateNotYetValidException, init$, void, $String*)},
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
		"javax.security.cert.CertificateNotYetValidException",
		"javax.security.cert.CertificateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertificateNotYetValidException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateNotYetValidException);
	});
	return class$;
}

$Class* CertificateNotYetValidException::class$ = nullptr;

		} // cert
	} // security
} // javax