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

$NamedAttribute CertificateNotYetValidException_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _CertificateNotYetValidException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", CertificateNotYetValidException_Attribute_var$0},
	{}
};

$FieldInfo _CertificateNotYetValidException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateNotYetValidException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateNotYetValidException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateNotYetValidException::*)()>(&CertificateNotYetValidException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateNotYetValidException::*)($String*)>(&CertificateNotYetValidException::init$))},
	{}
};

$ClassInfo _CertificateNotYetValidException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.cert.CertificateNotYetValidException",
	"javax.security.cert.CertificateException",
	nullptr,
	_CertificateNotYetValidException_FieldInfo_,
	_CertificateNotYetValidException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertificateNotYetValidException_Annotations_
};

$Object* allocate$CertificateNotYetValidException($Class* clazz) {
	return $of($alloc(CertificateNotYetValidException));
}

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
	$loadClass(CertificateNotYetValidException, name, initialize, &_CertificateNotYetValidException_ClassInfo_, allocate$CertificateNotYetValidException);
	return class$;
}

$Class* CertificateNotYetValidException::class$ = nullptr;

		} // cert
	} // security
} // javax