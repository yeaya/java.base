#include <sun/security/tools/keytool/CertAndKeyGen.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/KeyPair.h>
#include <java/security/KeyPairGenerator.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECGenParameterSpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/util/Date.h>
#include <java/util/Random.h>
#include <sun/security/util/SignatureUtil.h>
#include <sun/security/x509/CertificateExtensions.h>
#include <sun/security/x509/CertificateSerialNumber.h>
#include <sun/security/x509/CertificateValidity.h>
#include <sun/security/x509/CertificateVersion.h>
#include <sun/security/x509/CertificateX509Key.h>
#include <sun/security/x509/X500Name.h>
#include <sun/security/x509/X509CertImpl.h>
#include <sun/security/x509/X509CertInfo.h>
#include <sun/security/x509/X509Key.h>
#include <jcpp.h>

#undef EXTENSIONS
#undef ISSUER
#undef KEY
#undef SERIAL_NUMBER
#undef SUBJECT
#undef VALIDITY
#undef VERSION

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $KeyPair = ::java::security::KeyPair;
using $KeyPairGenerator = ::java::security::KeyPairGenerator;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECGenParameterSpec = ::java::security::spec::ECGenParameterSpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $Date = ::java::util::Date;
using $Random = ::java::util::Random;
using $SignatureUtil = ::sun::security::util::SignatureUtil;
using $CertificateExtensions = ::sun::security::x509::CertificateExtensions;
using $CertificateSerialNumber = ::sun::security::x509::CertificateSerialNumber;
using $CertificateValidity = ::sun::security::x509::CertificateValidity;
using $CertificateVersion = ::sun::security::x509::CertificateVersion;
using $CertificateX509Key = ::sun::security::x509::CertificateX509Key;
using $X500Name = ::sun::security::x509::X500Name;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;
using $X509CertInfo = ::sun::security::x509::X509CertInfo;
using $X509Key = ::sun::security::x509::X509Key;

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

$FieldInfo _CertAndKeyGen_FieldInfo_[] = {
	{"prng", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(CertAndKeyGen, prng)},
	{"keyType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertAndKeyGen, keyType)},
	{"sigAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertAndKeyGen, sigAlg)},
	{"keyGen", "Ljava/security/KeyPairGenerator;", nullptr, $PRIVATE, $field(CertAndKeyGen, keyGen)},
	{"publicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(CertAndKeyGen, publicKey)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(CertAndKeyGen, privateKey)},
	{"signerFlag", "Z", nullptr, $PRIVATE, $field(CertAndKeyGen, signerFlag)},
	{"signerPrivateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(CertAndKeyGen, signerPrivateKey)},
	{"signerSubjectName", "Lsun/security/x509/X500Name;", nullptr, $PRIVATE, $field(CertAndKeyGen, signerSubjectName)},
	{}
};

$MethodInfo _CertAndKeyGen_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)($String*,$String*)>(&CertAndKeyGen::init$)), "java.security.NoSuchAlgorithmException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)($String*,$String*,$String*)>(&CertAndKeyGen::init$)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/security/PrivateKey;Lsun/security/x509/X500Name;)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)($String*,$String*,$String*,$PrivateKey*,$X500Name*)>(&CertAndKeyGen::init$)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"generate", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)($String*)>(&CertAndKeyGen::generate))},
	{"generate", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)(int32_t)>(&CertAndKeyGen::generate))},
	{"generateInternal", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertAndKeyGen::*)()>(&CertAndKeyGen::generateInternal))},
	{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC, $method(static_cast<$PrivateKey*(CertAndKeyGen::*)()>(&CertAndKeyGen::getPrivateKey))},
	{"getPublicKey", "()Lsun/security/x509/X509Key;", nullptr, $PUBLIC, $method(static_cast<$X509Key*(CertAndKeyGen::*)()>(&CertAndKeyGen::getPublicKey))},
	{"getPublicKeyAnyway", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, $method(static_cast<$PublicKey*(CertAndKeyGen::*)()>(&CertAndKeyGen::getPublicKeyAnyway))},
	{"getSelfCertificate", "(Lsun/security/x509/X500Name;Ljava/util/Date;J)Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $method(static_cast<$X509Certificate*(CertAndKeyGen::*)($X500Name*,$Date*,int64_t)>(&CertAndKeyGen::getSelfCertificate)), "java.security.cert.CertificateException,java.security.InvalidKeyException,java.security.SignatureException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getSelfCertificate", "(Lsun/security/x509/X500Name;Ljava/util/Date;JLsun/security/x509/CertificateExtensions;)Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $method(static_cast<$X509Certificate*(CertAndKeyGen::*)($X500Name*,$Date*,int64_t,$CertificateExtensions*)>(&CertAndKeyGen::getSelfCertificate)), "java.security.cert.CertificateException,java.security.InvalidKeyException,java.security.SignatureException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getSelfCertificate", "(Lsun/security/x509/X500Name;J)Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $method(static_cast<$X509Certificate*(CertAndKeyGen::*)($X500Name*,int64_t)>(&CertAndKeyGen::getSelfCertificate)), "java.security.cert.CertificateException,java.security.InvalidKeyException,java.security.SignatureException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"setRandom", "(Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, $method(static_cast<void(CertAndKeyGen::*)($SecureRandom*)>(&CertAndKeyGen::setRandom))},
	{}
};

$ClassInfo _CertAndKeyGen_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.tools.keytool.CertAndKeyGen",
	"java.lang.Object",
	nullptr,
	_CertAndKeyGen_FieldInfo_,
	_CertAndKeyGen_MethodInfo_
};

$Object* allocate$CertAndKeyGen($Class* clazz) {
	return $of($alloc(CertAndKeyGen));
}

void CertAndKeyGen::init$($String* keyType, $String* sigAlg) {
	$set(this, keyGen, $KeyPairGenerator::getInstance(keyType));
	$set(this, sigAlg, sigAlg);
	$set(this, keyType, keyType);
}

void CertAndKeyGen::init$($String* keyType, $String* sigAlg, $String* providerName) {
	CertAndKeyGen::init$(keyType, sigAlg, providerName, nullptr, nullptr);
}

void CertAndKeyGen::init$($String* keyType, $String* sigAlg, $String* providerName, $PrivateKey* signerPrivateKey, $X500Name* signerSubjectName) {
	if (providerName == nullptr) {
		$set(this, keyGen, $KeyPairGenerator::getInstance(keyType));
	} else {
		try {
			$set(this, keyGen, $KeyPairGenerator::getInstance(keyType, providerName));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$set(this, keyGen, $KeyPairGenerator::getInstance(keyType));
		}
	}
	$set(this, sigAlg, sigAlg);
	$set(this, keyType, keyType);
	$set(this, signerPrivateKey, signerPrivateKey);
	$set(this, signerSubjectName, signerSubjectName);
	this->signerFlag = signerPrivateKey != nullptr;
}

void CertAndKeyGen::setRandom($SecureRandom* generator) {
	$set(this, prng, generator);
}

void CertAndKeyGen::generate($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->prng == nullptr) {
			$set(this, prng, $new($SecureRandom));
		}
		try {
			$nc(this->keyGen)->initialize(static_cast<$AlgorithmParameterSpec*>($$new($NamedParameterSpec, name)), this->prng);
		} catch ($InvalidAlgorithmParameterException&) {
			$var($InvalidAlgorithmParameterException, e, $catch());
			if ($nc(this->keyType)->equalsIgnoreCase("EC"_s)) {
				$nc(this->keyGen)->initialize(static_cast<$AlgorithmParameterSpec*>($$new($ECGenParameterSpec, name)), this->prng);
			} else {
				$throw(e);
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IllegalArgumentException, $(e->getMessage()));
	}
	generateInternal();
}

void CertAndKeyGen::generate(int32_t keyBits) {
	$useLocalCurrentObjectStackCache();
	if (keyBits != -1) {
		try {
			if (this->prng == nullptr) {
				$set(this, prng, $new($SecureRandom));
			}
			$nc(this->keyGen)->initialize(keyBits, this->prng);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
	generateInternal();
}

void CertAndKeyGen::generateInternal() {
	$useLocalCurrentObjectStackCache();
	$var($KeyPair, pair, $nc(this->keyGen)->generateKeyPair());
	$set(this, publicKey, $nc(pair)->getPublic());
	$set(this, privateKey, pair->getPrivate());
	if (!"X.509"_s->equalsIgnoreCase($($nc(this->publicKey)->getFormat()))) {
		$throwNew($IllegalArgumentException, $$str({"Public key format is "_s, $($nc(this->publicKey)->getFormat()), ", must be X.509"_s}));
	}
	if (this->sigAlg == nullptr) {
		if (this->signerFlag) {
			$set(this, sigAlg, $SignatureUtil::getDefaultSigAlgForKey(this->signerPrivateKey));
			if (this->sigAlg == nullptr) {
				$throwNew($IllegalArgumentException, $$str({"Cannot derive signature algorithm from "_s, $($nc(this->signerPrivateKey)->getAlgorithm())}));
			}
		} else {
			$set(this, sigAlg, $SignatureUtil::getDefaultSigAlgForKey(this->privateKey));
			if (this->sigAlg == nullptr) {
				$throwNew($IllegalArgumentException, $$str({"Cannot derive signature algorithm from "_s, $($nc(this->privateKey)->getAlgorithm())}));
			}
		}
	}
}

$X509Key* CertAndKeyGen::getPublicKey() {
	if (!($instanceOf($X509Key, this->publicKey))) {
		return nullptr;
	}
	return $cast($X509Key, this->publicKey);
}

$PublicKey* CertAndKeyGen::getPublicKeyAnyway() {
	return this->publicKey;
}

$PrivateKey* CertAndKeyGen::getPrivateKey() {
	return this->privateKey;
}

$X509Certificate* CertAndKeyGen::getSelfCertificate($X500Name* myname, $Date* firstDate, int64_t validity) {
	return getSelfCertificate(myname, firstDate, validity, nullptr);
}

$X509Certificate* CertAndKeyGen::getSelfCertificate($X500Name* myname, $Date* firstDate, int64_t validity, $CertificateExtensions* ext) {
	$useLocalCurrentObjectStackCache();
	$var($X509CertImpl, cert, nullptr);
	$var($Date, lastDate, nullptr);
	try {
		$assign(lastDate, $new($Date));
		lastDate->setTime($nc(firstDate)->getTime() + validity * 1000);
		$var($CertificateValidity, interval, $new($CertificateValidity, firstDate, lastDate));
		$var($X509CertInfo, info, $new($X509CertInfo));
		$init($X509CertInfo);
		info->set($X509CertInfo::VERSION, $$new($CertificateVersion, $CertificateVersion::V3));
		if (this->prng == nullptr) {
			$set(this, prng, $new($SecureRandom));
		}
		info->set($X509CertInfo::SERIAL_NUMBER, $($CertificateSerialNumber::newRandom64bit(this->prng)));
		info->set($X509CertInfo::SUBJECT, myname);
		info->set($X509CertInfo::KEY, $$new($CertificateX509Key, this->publicKey));
		info->set($X509CertInfo::VALIDITY, interval);
		if (this->signerFlag) {
			info->set($X509CertInfo::ISSUER, this->signerSubjectName);
		} else {
			info->set($X509CertInfo::ISSUER, myname);
		}
		if (ext != nullptr) {
			info->set($X509CertInfo::EXTENSIONS, ext);
		}
		$assign(cert, $new($X509CertImpl, info));
		if (this->signerFlag) {
			cert->sign(this->signerPrivateKey, this->sigAlg);
		} else {
			cert->sign(this->privateKey, this->sigAlg);
		}
		return cert;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($CertificateEncodingException, $$str({"getSelfCert: "_s, $(e->getMessage())}));
	}
	$shouldNotReachHere();
}

$X509Certificate* CertAndKeyGen::getSelfCertificate($X500Name* myname, int64_t validity) {
	return getSelfCertificate(myname, $$new($Date), validity);
}

CertAndKeyGen::CertAndKeyGen() {
}

$Class* CertAndKeyGen::load$($String* name, bool initialize) {
	$loadClass(CertAndKeyGen, name, initialize, &_CertAndKeyGen_ClassInfo_, allocate$CertAndKeyGen);
	return class$;
}

$Class* CertAndKeyGen::class$ = nullptr;

			} // keytool
		} // tools
	} // security
} // sun