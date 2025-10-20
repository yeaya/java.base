#include <javax/security/cert/Certificate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <javax/security/cert/CertificateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $PublicKey = ::java::security::PublicKey;
using $CertificateException = ::javax::security::cert::CertificateException;

namespace javax {
	namespace security {
		namespace cert {

$NamedAttribute Certificate_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};
$CompoundAttribute _Certificate_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Certificate_Attribute_var$0},
	{}
};


$MethodInfo _Certificate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Certificate::*)()>(&Certificate::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.cert.CertificateEncodingException"},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"verify", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
	{"verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
	{}
};

$ClassInfo _Certificate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.security.cert.Certificate",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Certificate_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Certificate_Annotations_
};

$Object* allocate$Certificate($Class* clazz) {
	return $of($alloc(Certificate));
}

$String* Certificate::toString() {
	 return this->$Object::toString();
}

void Certificate::init$() {
}

bool Certificate::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(Certificate, other))) {
		return false;
	}
	try {
		$var($bytes, thisCert, this->getEncoded());
		$var($bytes, otherCert, $nc(($cast(Certificate, other)))->getEncoded());
		if ($nc(thisCert)->length != $nc(otherCert)->length) {
			return false;
		}
		for (int32_t i = 0; i < $nc(thisCert)->length; ++i) {
			if (thisCert->get(i) != $nc(otherCert)->get(i)) {
				return false;
			}
		}
		return true;
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t Certificate::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t retval = 0;
	try {
		$var($bytes, certData, this->getEncoded());
		for (int32_t i = 1; i < $nc(certData)->length; ++i) {
			retval += certData->get(i) * i;
		}
		return (retval);
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		return (retval);
	}
	$shouldNotReachHere();
}

Certificate::Certificate() {
}

$Class* Certificate::load$($String* name, bool initialize) {
	$loadClass(Certificate, name, initialize, &_Certificate_ClassInfo_, allocate$Certificate);
	return class$;
}

$Class* Certificate::class$ = nullptr;

		} // cert
	} // security
} // javax