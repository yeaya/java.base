#include <java/security/cert/Certificate$CertificateRep.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/NotSerializableException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $NotSerializableException = ::java::io::NotSerializableException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _Certificate$CertificateRep_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Certificate$CertificateRep, serialVersionUID)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Certificate$CertificateRep, type)},
	{"data", "[B", nullptr, $PRIVATE, $field(Certificate$CertificateRep, data)},
	{}
};

$MethodInfo _Certificate$CertificateRep_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(Certificate$CertificateRep::*)($String*,$bytes*)>(&Certificate$CertificateRep::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _Certificate$CertificateRep_InnerClassesInfo_[] = {
	{"java.security.cert.Certificate$CertificateRep", "java.security.cert.Certificate", "CertificateRep", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _Certificate$CertificateRep_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.Certificate$CertificateRep",
	"java.lang.Object",
	"java.io.Serializable",
	_Certificate$CertificateRep_FieldInfo_,
	_Certificate$CertificateRep_MethodInfo_,
	nullptr,
	nullptr,
	_Certificate$CertificateRep_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.Certificate"
};

$Object* allocate$Certificate$CertificateRep($Class* clazz) {
	return $of($alloc(Certificate$CertificateRep));
}

void Certificate$CertificateRep::init$($String* type, $bytes* data) {
	$set(this, type, type);
	$set(this, data, data);
}

$Object* Certificate$CertificateRep::readResolve() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($CertificateFactory, cf, $CertificateFactory::getInstance(this->type));
		return $of($nc(cf)->generateCertificate($$new($ByteArrayInputStream, this->data)));
	} catch ($CertificateException& e) {
		$throwNew($NotSerializableException, $$str({"java.security.cert.Certificate: "_s, this->type, ": "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

Certificate$CertificateRep::Certificate$CertificateRep() {
}

$Class* Certificate$CertificateRep::load$($String* name, bool initialize) {
	$loadClass(Certificate$CertificateRep, name, initialize, &_Certificate$CertificateRep_ClassInfo_, allocate$Certificate$CertificateRep);
	return class$;
}

$Class* Certificate$CertificateRep::class$ = nullptr;

		} // cert
	} // security
} // java