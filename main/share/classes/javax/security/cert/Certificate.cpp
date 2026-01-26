#include <javax/security/cert/Certificate.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(Certificate, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Certificate, equals, bool, Object$*)},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getEncoded, $bytes*), "javax.security.cert.CertificateEncodingException"},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getPublicKey, $PublicKey*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Certificate, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"verify", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, verify, void, $PublicKey*), "javax.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
	{"verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, verify, void, $PublicKey*, $String*), "javax.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
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
	} catch ($CertificateException& e) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t Certificate::hashCode() {
	int32_t retval = 0;
	try {
		$var($bytes, certData, this->getEncoded());
		for (int32_t i = 1; i < $nc(certData)->length; ++i) {
			retval += certData->get(i) * i;
		}
		return (retval);
	} catch ($CertificateException& e) {
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