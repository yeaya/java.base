#include <javax/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace security {
		namespace cert {

void CertificateException::init$() {
	$Exception::init$();
}

void CertificateException::init$($String* msg) {
	$Exception::init$(msg);
}

CertificateException::CertificateException() {
}

CertificateException::CertificateException(const CertificateException& e) : $Exception(e) {
}

void CertificateException::throw$() {
	throw *this;
}

$Class* CertificateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertificateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CertificateException, init$, void, $String*)},
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
		"javax.security.cert.CertificateException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertificateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateException);
	});
	return class$;
}

$Class* CertificateException::class$ = nullptr;

		} // cert
	} // security
} // javax