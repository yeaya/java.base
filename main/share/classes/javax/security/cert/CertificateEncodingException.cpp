#include <javax/security/cert/CertificateEncodingException.h>

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

$NamedAttribute CertificateEncodingException_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _CertificateEncodingException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", CertificateEncodingException_Attribute_var$0},
	{}
};


$FieldInfo _CertificateEncodingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateEncodingException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateEncodingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateEncodingException::*)()>(&CertificateEncodingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateEncodingException::*)($String*)>(&CertificateEncodingException::init$))},
	{}
};

$ClassInfo _CertificateEncodingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.cert.CertificateEncodingException",
	"javax.security.cert.CertificateException",
	nullptr,
	_CertificateEncodingException_FieldInfo_,
	_CertificateEncodingException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertificateEncodingException_Annotations_
};

$Object* allocate$CertificateEncodingException($Class* clazz) {
	return $of($alloc(CertificateEncodingException));
}

void CertificateEncodingException::init$() {
	$CertificateException::init$();
}

void CertificateEncodingException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateEncodingException::CertificateEncodingException() {
}

CertificateEncodingException::CertificateEncodingException(const CertificateEncodingException& e) {
}

CertificateEncodingException CertificateEncodingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertificateEncodingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertificateEncodingException::load$($String* name, bool initialize) {
	$loadClass(CertificateEncodingException, name, initialize, &_CertificateEncodingException_ClassInfo_, allocate$CertificateEncodingException);
	return class$;
}

$Class* CertificateEncodingException::class$ = nullptr;

		} // cert
	} // security
} // javax