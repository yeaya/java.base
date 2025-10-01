#include <java/security/cert/Certificate.h>

#include <java/io/NotSerializableException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate$CertificateRep.h>
#include <java/security/cert/CertificateException.h>
#include <java/util/Arrays.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

using $NotSerializableException = ::java::io::NotSerializableException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $Certificate$CertificateRep = ::java::security::cert::Certificate$CertificateRep;
using $CertificateException = ::java::security::cert::CertificateException;
using $Arrays = ::java::util::Arrays;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _Certificate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Certificate, serialVersionUID)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Certificate, type)},
	{"hash", "I", nullptr, $PRIVATE, $field(Certificate, hash)},
	{}
};

$MethodInfo _Certificate_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Certificate::*)($String*)>(&Certificate::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateEncodingException"},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Certificate::*)()>(&Certificate::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"verify", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
	{"verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.NoSuchProviderException,java.security.SignatureException"},
	{"verify", "(Ljava/security/PublicKey;Ljava/security/Provider;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.SignatureException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _Certificate_InnerClassesInfo_[] = {
	{"java.security.cert.Certificate$CertificateRep", "java.security.cert.Certificate", "CertificateRep", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _Certificate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.Certificate",
	"java.lang.Object",
	"java.io.Serializable",
	_Certificate_FieldInfo_,
	_Certificate_MethodInfo_,
	nullptr,
	nullptr,
	_Certificate_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.cert.Certificate$CertificateRep"
};

$Object* allocate$Certificate($Class* clazz) {
	return $of($alloc(Certificate));
}

$String* Certificate::toString() {
	 return this->$Serializable::toString();
}

void Certificate::init$($String* type) {
	this->hash = -1;
	$set(this, type, type);
}

$String* Certificate::getType() {
	return this->type;
}

bool Certificate::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(Certificate, other))) {
		return false;
	}
	try {
		$var($bytes, thisCert, $X509CertImpl::getEncodedInternal(this));
		$var($bytes, otherCert, $X509CertImpl::getEncodedInternal($cast(Certificate, other)));
		return $Arrays::equals(thisCert, otherCert);
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t Certificate::hashCode() {
	int32_t h = this->hash;
	if (h == -1) {
		try {
			h = $Arrays::hashCode($($X509CertImpl::getEncodedInternal(this)));
		} catch ($CertificateException&) {
			$var($CertificateException, e, $catch());
			h = 0;
		}
		this->hash = h;
	}
	return h;
}

void Certificate::verify($PublicKey* key, $Provider* sigProvider) {
	$throwNew($UnsupportedOperationException);
}

$Object* Certificate::writeReplace() {
	try {
		return $of($new($Certificate$CertificateRep, this->type, $(getEncoded())));
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throwNew($NotSerializableException, $$str({"java.security.cert.Certificate: "_s, this->type, ": "_s, $(e->getMessage())}));
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
} // java