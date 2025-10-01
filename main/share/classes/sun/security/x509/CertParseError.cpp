#include <sun/security/x509/CertParseError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
$CompoundAttribute _CertParseError_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _CertParseError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertParseError, serialVersionUID)},
	{}
};

$MethodInfo _CertParseError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CertParseError::*)($String*)>(&CertParseError::init$))},
	{}
};

$ClassInfo _CertParseError_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.x509.CertParseError",
	"sun.security.x509.CertException",
	nullptr,
	_CertParseError_FieldInfo_,
	_CertParseError_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertParseError_Annotations_
};

$Object* allocate$CertParseError($Class* clazz) {
	return $of($alloc(CertParseError));
}

void CertParseError::init$($String* where) {
	$CertException::init$($CertException::verf_PARSE_ERROR, where);
}

CertParseError::CertParseError() {
}

CertParseError::CertParseError(const CertParseError& e) {
}

CertParseError CertParseError::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertParseError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertParseError::load$($String* name, bool initialize) {
	$loadClass(CertParseError, name, initialize, &_CertParseError_ClassInfo_, allocate$CertParseError);
	return class$;
}

$Class* CertParseError::class$ = nullptr;

		} // x509
	} // security
} // sun