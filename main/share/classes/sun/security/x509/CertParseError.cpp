#include <sun/security/x509/CertParseError.h>
#include <sun/security/x509/CertException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertException = ::sun::security::x509::CertException;

namespace sun {
	namespace security {
		namespace x509 {

void CertParseError::init$($String* where) {
	$CertException::init$($CertException::verf_PARSE_ERROR, where);
}

CertParseError::CertParseError() {
}

CertParseError::CertParseError(const CertParseError& e) : $CertException(e) {
}

void CertParseError::throw$() {
	throw *this;
}

$Class* CertParseError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertParseError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CertParseError, init$, void, $String*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.CertParseError",
		"sun.security.x509.CertException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(CertParseError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertParseError);
	});
	return class$;
}

$Class* CertParseError::class$ = nullptr;

		} // x509
	} // security
} // sun