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

$NamedAttribute CertificateException_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _CertificateException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", CertificateException_Attribute_var$0},
	{}
};

$FieldInfo _CertificateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertificateException, serialVersionUID)},
	{}
};

$MethodInfo _CertificateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertificateException::*)()>(&CertificateException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateException::*)($String*)>(&CertificateException::init$))},
	{}
};

$ClassInfo _CertificateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.cert.CertificateException",
	"java.lang.Exception",
	nullptr,
	_CertificateException_FieldInfo_,
	_CertificateException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertificateException_Annotations_
};

$Object* allocate$CertificateException($Class* clazz) {
	return $of($alloc(CertificateException));
}

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
	$loadClass(CertificateException, name, initialize, &_CertificateException_ClassInfo_, allocate$CertificateException);
	return class$;
}

$Class* CertificateException::class$ = nullptr;

		} // cert
	} // security
} // javax