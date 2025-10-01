#include <javax/security/cert/CertificateParsingException.h>

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

$NamedAttribute CertificateParsingException_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _CertificateParsingException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", CertificateParsingException_Attribute_var$0},
	{}
};


$FieldInfo _CertificateParsingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateParsingException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateParsingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)()>(&CertificateParsingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateParsingException::*)($String*)>(&CertificateParsingException::init$))},
	{}
};

$ClassInfo _CertificateParsingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.cert.CertificateParsingException",
	"javax.security.cert.CertificateException",
	nullptr,
	_CertificateParsingException_FieldInfo_,
	_CertificateParsingException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertificateParsingException_Annotations_
};

$Object* allocate$CertificateParsingException($Class* clazz) {
	return $of($alloc(CertificateParsingException));
}

void CertificateParsingException::init$() {
	$CertificateException::init$();
}

void CertificateParsingException::init$($String* message) {
	$CertificateException::init$(message);
}

CertificateParsingException::CertificateParsingException() {
}

CertificateParsingException::CertificateParsingException(const CertificateParsingException& e) {
}

CertificateParsingException CertificateParsingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CertificateParsingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CertificateParsingException::load$($String* name, bool initialize) {
	$loadClass(CertificateParsingException, name, initialize, &_CertificateParsingException_ClassInfo_, allocate$CertificateParsingException);
	return class$;
}

$Class* CertificateParsingException::class$ = nullptr;

		} // cert
	} // security
} // javax