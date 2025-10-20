#include <java/security/cert/X509Certificate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/SignatureUtil.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BigInteger = ::java::math::BigInteger;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Principal = ::java::security::Principal;
using $Provider = ::java::security::Provider;
using $ProviderException = ::java::security::ProviderException;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Extension = ::java::security::cert::X509Extension;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $SignatureUtil = ::sun::security::util::SignatureUtil;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace java {
	namespace security {
		namespace cert {

$NamedAttribute X509Certificate_Attribute_var$0[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _X509Certificate_MethodAnnotations_getIssuerDN6[] = {
	{"Ljava/lang/Deprecated;", X509Certificate_Attribute_var$0},
	{}
};

$NamedAttribute X509Certificate_Attribute_var$1[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _X509Certificate_MethodAnnotations_getSubjectDN18[] = {
	{"Ljava/lang/Deprecated;", X509Certificate_Attribute_var$1},
	{}
};

$FieldInfo _X509Certificate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509Certificate, serialVersionUID)},
	{"subjectX500Principal", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE | $TRANSIENT, $field(X509Certificate, subjectX500Principal)},
	{"issuerX500Principal", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE | $TRANSIENT, $field(X509Certificate, issuerX500Principal)},
	{}
};

$MethodInfo _X509Certificate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(X509Certificate::*)()>(&X509Certificate::init$))},
	{"checkValidity", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateExpiredException,java.security.cert.CertificateNotYetValidException"},
	{"checkValidity", "(Ljava/util/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateExpiredException,java.security.cert.CertificateNotYetValidException"},
	{"getBasicConstraints", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getExtendedKeyUsage", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.security.cert.CertificateParsingException"},
	{"getIssuerAlternativeNames", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/util/List<*>;>;", $PUBLIC, nullptr, "java.security.cert.CertificateParsingException"},
	{"getIssuerDN", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _X509Certificate_MethodAnnotations_getIssuerDN6},
	{"getIssuerUniqueID", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getIssuerX500Principal", "()Ljavax/security/auth/x500/X500Principal;", nullptr, $PUBLIC},
	{"getKeyUsage", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotAfter", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotBefore", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSigAlgName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSigAlgOID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSigAlgParams", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubjectAlternativeNames", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/util/List<*>;>;", $PUBLIC, nullptr, "java.security.cert.CertificateParsingException"},
	{"getSubjectDN", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _X509Certificate_MethodAnnotations_getSubjectDN18},
	{"getSubjectUniqueID", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubjectX500Principal", "()Ljavax/security/auth/x500/X500Principal;", nullptr, $PUBLIC},
	{"getTBSCertificate", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertificateEncodingException"},
	{"getVersion", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"verify", "(Ljava/security/PublicKey;Ljava/security/Provider;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.SignatureException"},
	{}
};

$ClassInfo _X509Certificate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.X509Certificate",
	"java.security.cert.Certificate",
	"java.security.cert.X509Extension",
	_X509Certificate_FieldInfo_,
	_X509Certificate_MethodInfo_
};

$Object* allocate$X509Certificate($Class* clazz) {
	return $of($alloc(X509Certificate));
}

bool X509Certificate::equals(Object$* other) {
	 return this->$Certificate::equals(other);
}

int32_t X509Certificate::hashCode() {
	 return this->$Certificate::hashCode();
}

$String* X509Certificate::toString() {
	 return this->$Certificate::toString();
}

$Object* X509Certificate::clone() {
	 return this->$Certificate::clone();
}

void X509Certificate::finalize() {
	this->$Certificate::finalize();
}

void X509Certificate::init$() {
	$Certificate::init$("X.509"_s);
}

$X500Principal* X509Certificate::getIssuerX500Principal() {
	if (this->issuerX500Principal == nullptr) {
		$set(this, issuerX500Principal, $X509CertImpl::getIssuerX500Principal(this));
	}
	return this->issuerX500Principal;
}

$X500Principal* X509Certificate::getSubjectX500Principal() {
	if (this->subjectX500Principal == nullptr) {
		$set(this, subjectX500Principal, $X509CertImpl::getSubjectX500Principal(this));
	}
	return this->subjectX500Principal;
}

$List* X509Certificate::getExtendedKeyUsage() {
	return $X509CertImpl::getExtendedKeyUsage(this);
}

$Collection* X509Certificate::getSubjectAlternativeNames() {
	return $X509CertImpl::getSubjectAlternativeNames(this);
}

$Collection* X509Certificate::getIssuerAlternativeNames() {
	return $X509CertImpl::getIssuerAlternativeNames(this);
}

void X509Certificate::verify($PublicKey* key, $Provider* sigProvider) {
	$useLocalCurrentObjectStackCache();
	$var($String, sigName, getSigAlgName());
	$var($Signature, sig, (sigProvider == nullptr) ? $Signature::getInstance(sigName) : $Signature::getInstance(sigName, sigProvider));
	try {
		$SignatureUtil::initVerifyWithParam(sig, key, $($SignatureUtil::getParamSpec(sigName, $(getSigAlgParams()))));
	} catch ($ProviderException&) {
		$var($ProviderException, e, $catch());
		$var($String, var$0, e->getMessage());
		$throwNew($CertificateException, var$0, $(e->getCause()));
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, e, $catch());
		$throwNew($CertificateException, static_cast<$Throwable*>(e));
	}
	$var($bytes, tbsCert, getTBSCertificate());
	$nc(sig)->update(tbsCert, 0, $nc(tbsCert)->length);
	if (sig->verify($(getSignature())) == false) {
		$throwNew($SignatureException, "Signature does not match."_s);
	}
}

X509Certificate::X509Certificate() {
}

$Class* X509Certificate::load$($String* name, bool initialize) {
	$loadClass(X509Certificate, name, initialize, &_X509Certificate_ClassInfo_, allocate$X509Certificate);
	return class$;
}

$Class* X509Certificate::class$ = nullptr;

		} // cert
	} // security
} // java