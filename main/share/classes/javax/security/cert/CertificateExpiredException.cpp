#include <javax/security/cert/CertificateExpiredException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$NamedAttribute CertificateExpiredException_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _CertificateExpiredException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", CertificateExpiredException_Attribute_var$0},
	{}
};


$FieldInfo _CertificateExpiredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateExpiredException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateExpiredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateExpiredException::*)()>(&CertificateExpiredException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateExpiredException::*)($String*)>(&CertificateExpiredException::init$))},
	{}
};

$ClassInfo _CertificateExpiredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.cert.CertificateExpiredException",
	"javax.security.cert.CertificateException",
	nullptr,
	_CertificateExpiredException_FieldInfo_,
	_CertificateExpiredException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertificateExpiredException_Annotations_
};

$Object* allocate$CertificateExpiredException($Class* clazz) {
	return $of($alloc(CertificateExpiredException));
}

void CertificateExpiredException::init$() {
	$CertificateException::init$();
}

void CertificateExpiredException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateExpiredException::CertificateExpiredException() {
}

CertificateExpiredException::CertificateExpiredException(const CertificateExpiredException& e) {
}

CertificateExpiredException CertificateExpiredException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertificateExpiredException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertificateExpiredException::load$($String* name, bool initialize) {
	$loadClass(CertificateExpiredException, name, initialize, &_CertificateExpiredException_ClassInfo_, allocate$CertificateExpiredException);
	return class$;
}

$Class* CertificateExpiredException::class$ = nullptr;

		} // cert
	} // security
} // javax