#include <java/security/Signature.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/Security.h>
#include <java/security/Signature$1.h>
#include <java/security/Signature$CipherAdapter.h>
#include <java/security/Signature$Delegate.h>
#include <java/security/SignatureException.h>
#include <java/security/SignatureSpi.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/crypto/Cipher.h>
#include <jdk/internal/access/JavaSecuritySignatureAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/jca/ServiceId.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/KnownOIDs.h>
#include <jcpp.h>

#undef RSA_SIGNATURE
#undef UNINITIALIZED
#undef TRUE
#undef VERIFY
#undef SIGN
#undef RSA_CIPHER

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $Security = ::java::security::Security;
using $Signature$1 = ::java::security::Signature$1;
using $Signature$CipherAdapter = ::java::security::Signature$CipherAdapter;
using $Signature$Delegate = ::java::security::Signature$Delegate;
using $SignatureException = ::java::security::SignatureException;
using $SignatureSpi = ::java::security::SignatureSpi;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X509Extension = ::java::security::cert::X509Extension;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractMap = ::java::util::AbstractMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Cipher = ::javax::crypto::Cipher;
using $JavaSecuritySignatureAccess = ::jdk::internal::access::JavaSecuritySignatureAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $ServiceId = ::sun::security::jca::ServiceId;
using $Debug = ::sun::security::util::Debug;
using $KnownOIDs = ::sun::security::util::KnownOIDs;

namespace java {
	namespace security {

$CompoundAttribute _Signature_MethodAnnotations_getParameter9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Signature_MethodAnnotations_setParameter22[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Signature_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Signature, debug)},
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Signature, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Signature, skipDebug)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Signature, algorithm)},
	{"provider", "Ljava/security/Provider;", nullptr, 0, $field(Signature, provider)},
	{"UNINITIALIZED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Signature, UNINITIALIZED)},
	{"SIGN", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Signature, SIGN)},
	{"VERIFY", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Signature, VERIFY)},
	{"state", "I", nullptr, $PROTECTED, $field(Signature, state)},
	{"RSA_SIGNATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Signature, RSA_SIGNATURE)},
	{"RSA_CIPHER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Signature, RSA_CIPHER)},
	{"rsaIds", "Ljava/util/List;", "Ljava/util/List<Lsun/security/jca/ServiceId;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Signature, rsaIds)},
	{"signatureInfo", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Signature, signatureInfo)},
	{}
};

$MethodInfo _Signature_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Signature::*)($String*)>(&Signature::init$))},
	{"chooseFirstProvider", "()V", nullptr, 0},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Signature::*)()>(&Signature::getAlgorithm))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/Signature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Signature*(*)($String*)>(&Signature::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Lsun/security/jca/GetInstance$Instance;Ljava/lang/String;)Ljava/security/Signature;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Signature*(*)($GetInstance$Instance*,$String*)>(&Signature::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Signature*(*)($String*,$String*)>(&Signature::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Signature*(*)($String*,$Provider*)>(&Signature::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstanceRSA", "(Ljava/security/Provider;)Ljava/security/Signature;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Signature*(*)($Provider*)>(&Signature::getInstanceRSA)), "java.security.NoSuchAlgorithmException"},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<$Object*(Signature::*)($String*)>(&Signature::getParameter)), "java.security.InvalidParameterException", nullptr, _Signature_MethodAnnotations_getParameter9},
	{"getParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AlgorithmParameters*(Signature::*)()>(&Signature::getParameters))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(Signature::*)()>(&Signature::getProvider))},
	{"getProviderName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Signature::*)()>(&Signature::getProviderName))},
	{"getPublicKeyFromCert", "(Ljava/security/cert/Certificate;)Ljava/security/PublicKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PublicKey*(*)($Certificate*)>(&Signature::getPublicKeyFromCert)), "java.security.InvalidKeyException"},
	{"initSign", "(Ljava/security/PrivateKey;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($PrivateKey*)>(&Signature::initSign)), "java.security.InvalidKeyException"},
	{"initSign", "(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($PrivateKey*,$SecureRandom*)>(&Signature::initSign)), "java.security.InvalidKeyException"},
	{"initSign", "(Ljava/security/PrivateKey;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $FINAL, $method(static_cast<void(Signature::*)($PrivateKey*,$AlgorithmParameterSpec*,$SecureRandom*)>(&Signature::initSign)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($PublicKey*)>(&Signature::initVerify)), "java.security.InvalidKeyException"},
	{"initVerify", "(Ljava/security/PublicKey;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $FINAL, $method(static_cast<void(Signature::*)($PublicKey*,$AlgorithmParameterSpec*)>(&Signature::initVerify)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/cert/Certificate;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($Certificate*)>(&Signature::initVerify)), "java.security.InvalidKeyException"},
	{"initVerify", "(Ljava/security/cert/Certificate;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $FINAL, $method(static_cast<void(Signature::*)($Certificate*,$AlgorithmParameterSpec*)>(&Signature::initVerify)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"isSpi", "(Ljava/security/Provider$Service;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Provider$Service*)>(&Signature::isSpi))},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Signature::*)($String*,Object$*)>(&Signature::setParameter)), "java.security.InvalidParameterException", nullptr, _Signature_MethodAnnotations_setParameter22},
	{"setParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($AlgorithmParameterSpec*)>(&Signature::setParameter)), "java.security.InvalidAlgorithmParameterException"},
	{"sign", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(Signature::*)()>(&Signature::sign)), "java.security.SignatureException"},
	{"sign", "([BII)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Signature::*)($bytes*,int32_t,int32_t)>(&Signature::sign)), "java.security.SignatureException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)(int8_t)>(&Signature::update)), "java.security.SignatureException"},
	{"update", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($bytes*)>(&Signature::update)), "java.security.SignatureException"},
	{"update", "([BII)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($bytes*,int32_t,int32_t)>(&Signature::update)), "java.security.SignatureException"},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signature::*)($ByteBuffer*)>(&Signature::update)), "java.security.SignatureException"},
	{"verify", "([B)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Signature::*)($bytes*)>(&Signature::verify)), "java.security.SignatureException"},
	{"verify", "([BII)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Signature::*)($bytes*,int32_t,int32_t)>(&Signature::verify)), "java.security.SignatureException"},
	{}
};

$InnerClassInfo _Signature_InnerClassesInfo_[] = {
	{"java.security.Signature$CipherAdapter", "java.security.Signature", "CipherAdapter", $PRIVATE | $STATIC},
	{"java.security.Signature$Delegate", "java.security.Signature", "Delegate", $PRIVATE | $STATIC},
	{"java.security.Signature$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.Signature",
	"java.security.SignatureSpi",
	nullptr,
	_Signature_FieldInfo_,
	_Signature_MethodInfo_,
	nullptr,
	nullptr,
	_Signature_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.Signature$CipherAdapter,java.security.Signature$Delegate,java.security.Signature$Delegate$CloneableDelegate,java.security.Signature$1"
};

$Object* allocate$Signature($Class* clazz) {
	return $of($alloc(Signature));
}

$Debug* Signature::debug = nullptr;
$Debug* Signature::pdebug = nullptr;
bool Signature::skipDebug = false;
$String* Signature::RSA_SIGNATURE = nullptr;
$String* Signature::RSA_CIPHER = nullptr;
$List* Signature::rsaIds = nullptr;
$Map* Signature::signatureInfo = nullptr;

void Signature::init$($String* algorithm) {
	$SignatureSpi::init$();
	this->state = Signature::UNINITIALIZED;
	$set(this, algorithm, algorithm);
}

Signature* Signature::getInstance($String* algorithm) {
	$init(Signature);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$var($List, list, nullptr);
	if ($nc(algorithm)->equalsIgnoreCase(Signature::RSA_SIGNATURE)) {
		$assign(list, $GetInstance::getServices(Signature::rsaIds));
	} else {
		$assign(list, $GetInstance::getServices("Signature"_s, algorithm));
	}
	$var($Iterator, t, $nc(list)->iterator());
	if ($nc(t)->hasNext() == false) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " Signature not available"_s}));
	}
	$var($NoSuchAlgorithmException, failure, nullptr);
	do {
		$var($Provider$Service, s, $cast($Provider$Service, $nc(t)->next()));
		if (isSpi(s)) {
			return $new($Signature$Delegate, s, t, algorithm);
		} else {
			try {
				$load($SignatureSpi);
				$var($GetInstance$Instance, instance, $GetInstance::getInstance(s, $SignatureSpi::class$));
				return getInstance(instance, algorithm);
			} catch ($NoSuchAlgorithmException&) {
				$var($NoSuchAlgorithmException, e, $catch());
				$assign(failure, e);
			}
		}
	} while ($nc(t)->hasNext());
	$throw(failure);
	$shouldNotReachHere();
}

Signature* Signature::getInstance($GetInstance$Instance* instance, $String* algorithm) {
	$init(Signature);
	$var(Signature, sig, nullptr);
	if ($instanceOf(Signature, $nc(instance)->impl)) {
		$assign(sig, $cast(Signature, instance->impl));
		$set($nc(sig), algorithm, algorithm);
	} else {
		$var($SignatureSpi, spi, $cast($SignatureSpi, instance->impl));
		$assign(sig, $Signature$Delegate::of(spi, algorithm));
	}
	$set($nc(sig), provider, $nc(instance)->provider);
	return sig;
}

bool Signature::isSpi($Provider$Service* s) {
	$init(Signature);
	if ($nc($($nc(s)->getType()))->equals("Cipher"_s)) {
		return true;
	}
	$var($String, className, $nc(s)->getClassName());
	$var($Boolean, result, $cast($Boolean, $nc(Signature::signatureInfo)->get(className)));
	if (result == nullptr) {
		try {
			$var($Object, instance, s->newInstance(nullptr));
			bool r = ($instanceOf($SignatureSpi, instance)) && (!($instanceOf(Signature, instance)));
			if ((Signature::debug != nullptr) && (r == false)) {
				$nc(Signature::debug)->println($$str({"Not a SignatureSpi "_s, className}));
				$nc(Signature::debug)->println($$str({"Delayed provider selection may not be available for algorithm "_s, $(s->getAlgorithm())}));
			}
			$assign(result, $Boolean::valueOf(r));
			$nc(Signature::signatureInfo)->put(className, result);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			return false;
		}
	}
	return $nc(result)->booleanValue();
}

Signature* Signature::getInstance($String* algorithm, $String* provider) {
	$init(Signature);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if ($nc(algorithm)->equalsIgnoreCase(Signature::RSA_SIGNATURE)) {
		if (provider == nullptr || $nc(provider)->isEmpty()) {
			$throwNew($IllegalArgumentException, "missing provider"_s);
		}
		$var($Provider, p, $Security::getProvider(provider));
		if (p == nullptr) {
			$throwNew($NoSuchProviderException, $$str({"no such provider: "_s, provider}));
		}
		return getInstanceRSA(p);
	}
	$load($SignatureSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("Signature"_s, $SignatureSpi::class$, algorithm, provider));
	return getInstance(instance, algorithm);
}

Signature* Signature::getInstance($String* algorithm, $Provider* provider) {
	$init(Signature);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if ($nc(algorithm)->equalsIgnoreCase(Signature::RSA_SIGNATURE)) {
		if (provider == nullptr) {
			$throwNew($IllegalArgumentException, "missing provider"_s);
		}
		return getInstanceRSA(provider);
	}
	$load($SignatureSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("Signature"_s, $SignatureSpi::class$, algorithm, provider));
	return getInstance(instance, algorithm);
}

Signature* Signature::getInstanceRSA($Provider* p) {
	$init(Signature);
	$var($Provider$Service, s, $nc(p)->getService("Signature"_s, Signature::RSA_SIGNATURE));
	if (s != nullptr) {
		$load($SignatureSpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance(s, $SignatureSpi::class$));
		return getInstance(instance, Signature::RSA_SIGNATURE);
	}
	try {
		$var($Cipher, c, $Cipher::getInstance(Signature::RSA_CIPHER, p));
		return $Signature$Delegate::of($$new($Signature$CipherAdapter, c), Signature::RSA_SIGNATURE);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($NoSuchAlgorithmException, $$str({"no such algorithm: "_s, Signature::RSA_SIGNATURE, " for provider "_s, $(p->getName())}), e);
	}
	$shouldNotReachHere();
}

$Provider* Signature::getProvider() {
	chooseFirstProvider();
	return this->provider;
}

$String* Signature::getProviderName() {
	return (this->provider == nullptr) ? "(no provider)"_s : $nc(this->provider)->getName();
}

void Signature::chooseFirstProvider() {
}

void Signature::initVerify($PublicKey* publicKey) {
	engineInitVerify(publicKey);
	this->state = Signature::VERIFY;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " verification algorithm from: "_s, $(getProviderName())}));
	}
}

void Signature::initVerify($PublicKey* publicKey, $AlgorithmParameterSpec* params) {
	engineInitVerify(publicKey, params);
	this->state = Signature::VERIFY;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " verification algorithm from: "_s, $(getProviderName())}));
	}
}

$PublicKey* Signature::getPublicKeyFromCert($Certificate* cert) {
	$init(Signature);
	{
		$var($X509Certificate, xcert, nullptr);
		bool var$0 = $instanceOf($X509Certificate, cert);
		if (var$0) {
			$assign(xcert, $cast($X509Certificate, cert));
			var$0 = true;
		}
		if (var$0) {
			$var($Set, critSet, $nc(xcert)->getCriticalExtensionOIDs());
			bool var$1 = critSet != nullptr && !critSet->isEmpty();
			$init($KnownOIDs);
			if (var$1 && critSet->contains($($KnownOIDs::KeyUsage->value()))) {
				$var($booleans, keyUsageInfo, xcert->getKeyUsage());
				if ((keyUsageInfo != nullptr) && (keyUsageInfo->get(0) == false)) {
					$throwNew($InvalidKeyException, "Wrong key usage"_s);
				}
			}
		}
	}
	return $nc(cert)->getPublicKey();
}

void Signature::initVerify($Certificate* certificate) {
	engineInitVerify($(getPublicKeyFromCert(certificate)));
	this->state = Signature::VERIFY;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " verification algorithm from: "_s, $(getProviderName())}));
	}
}

void Signature::initVerify($Certificate* certificate, $AlgorithmParameterSpec* params) {
	engineInitVerify($(getPublicKeyFromCert(certificate)), params);
	this->state = Signature::VERIFY;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " verification algorithm from: "_s, $(getProviderName())}));
	}
}

void Signature::initSign($PrivateKey* privateKey) {
	engineInitSign(privateKey);
	this->state = Signature::SIGN;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " signing algorithm from: "_s, $(getProviderName())}));
	}
}

void Signature::initSign($PrivateKey* privateKey, $SecureRandom* random) {
	engineInitSign(privateKey, random);
	this->state = Signature::SIGN;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " signing algorithm from: "_s, $(getProviderName())}));
	}
}

void Signature::initSign($PrivateKey* privateKey, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	engineInitSign(privateKey, params, random);
	this->state = Signature::SIGN;
	if (!Signature::skipDebug && Signature::pdebug != nullptr) {
		$nc(Signature::pdebug)->println($$str({"Signature."_s, this->algorithm, " signing algorithm from: "_s, $(getProviderName())}));
	}
}

$bytes* Signature::sign() {
	if (this->state == Signature::SIGN) {
		return engineSign();
	}
	$throwNew($SignatureException, "object not initialized for signing"_s);
}

int32_t Signature::sign($bytes* outbuf, int32_t offset, int32_t len) {
	if (outbuf == nullptr) {
		$throwNew($IllegalArgumentException, "No output buffer given"_s);
	}
	if (offset < 0 || len < 0) {
		$throwNew($IllegalArgumentException, "offset or len is less than 0"_s);
	}
	if ($nc(outbuf)->length - offset < len) {
		$throwNew($IllegalArgumentException, "Output buffer too small for specified offset and length"_s);
	}
	if (this->state != Signature::SIGN) {
		$throwNew($SignatureException, "object not initialized for signing"_s);
	}
	return engineSign(outbuf, offset, len);
}

bool Signature::verify($bytes* signature) {
	if (this->state == Signature::VERIFY) {
		return engineVerify(signature);
	}
	$throwNew($SignatureException, "object not initialized for verification"_s);
}

bool Signature::verify($bytes* signature, int32_t offset, int32_t length) {
	if (this->state == Signature::VERIFY) {
		if (signature == nullptr) {
			$throwNew($IllegalArgumentException, "signature is null"_s);
		}
		if (offset < 0 || length < 0) {
			$throwNew($IllegalArgumentException, "offset or length is less than 0"_s);
		}
		if ($nc(signature)->length - offset < length) {
			$throwNew($IllegalArgumentException, "signature too small for specified offset and length"_s);
		}
		return engineVerify(signature, offset, length);
	}
	$throwNew($SignatureException, "object not initialized for verification"_s);
}

void Signature::update(int8_t b) {
	if (this->state == Signature::VERIFY || this->state == Signature::SIGN) {
		engineUpdate(b);
	} else {
		$throwNew($SignatureException, "object not initialized for signature or verification"_s);
	}
}

void Signature::update($bytes* data) {
	update(data, 0, $nc(data)->length);
}

void Signature::update($bytes* data, int32_t off, int32_t len) {
	if (this->state == Signature::SIGN || this->state == Signature::VERIFY) {
		if (data == nullptr) {
			$throwNew($IllegalArgumentException, "data is null"_s);
		}
		if (off < 0 || len < 0) {
			$throwNew($IllegalArgumentException, "off or len is less than 0"_s);
		}
		if ($nc(data)->length - off < len) {
			$throwNew($IllegalArgumentException, "data too small for specified offset and length"_s);
		}
		engineUpdate(data, off, len);
	} else {
		$throwNew($SignatureException, "object not initialized for signature or verification"_s);
	}
}

void Signature::update($ByteBuffer* data) {
	if ((this->state != Signature::SIGN) && (this->state != Signature::VERIFY)) {
		$throwNew($SignatureException, "object not initialized for signature or verification"_s);
	}
	if (data == nullptr) {
		$throwNew($NullPointerException);
	}
	engineUpdate(data);
}

$String* Signature::getAlgorithm() {
	return this->algorithm;
}

$String* Signature::toString() {
	$var($String, initState, ""_s);
	switch (this->state) {
	case Signature::UNINITIALIZED:
		{
			$assign(initState, "<not initialized>"_s);
			break;
		}
	case Signature::VERIFY:
		{
			$assign(initState, "<initialized for verifying>"_s);
			break;
		}
	case Signature::SIGN:
		{
			$assign(initState, "<initialized for signing>"_s);
			break;
		}
	}
	return $str({"Signature object: "_s, $(getAlgorithm()), initState});
}

void Signature::setParameter($String* param, Object$* value) {
	engineSetParameter(param, value);
}

void Signature::setParameter($AlgorithmParameterSpec* params) {
	engineSetParameter(params);
}

$AlgorithmParameters* Signature::getParameters() {
	return engineGetParameters();
}

$Object* Signature::getParameter($String* param) {
	return $of(engineGetParameter(param));
}

$Object* Signature::clone() {
	if ($instanceOf($Cloneable, this)) {
		return $of($SignatureSpi::clone());
	} else {
		$throwNew($CloneNotSupportedException);
	}
}

void clinit$Signature($Class* class$) {
	$assignStatic(Signature::RSA_SIGNATURE, "NONEwithRSA"_s);
	$assignStatic(Signature::RSA_CIPHER, "RSA/ECB/PKCS1Padding"_s);
	{
		$SharedSecrets::setJavaSecuritySignatureAccess($$new($Signature$1));
	}
	$assignStatic(Signature::debug, $Debug::getInstance("jca"_s, "Signature"_s));
	$assignStatic(Signature::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	Signature::skipDebug = var$0 && !$Debug::isOn("signature"_s);
	$var($Object, var$1, $of($new($ServiceId, "Signature"_s, "NONEwithRSA"_s)));
	$var($Object, var$2, $of($new($ServiceId, "Cipher"_s, "RSA/ECB/PKCS1Padding"_s)));
	$var($Object, var$3, $of($new($ServiceId, "Cipher"_s, "RSA/ECB"_s)));
	$var($Object, var$4, $of($new($ServiceId, "Cipher"_s, "RSA//PKCS1Padding"_s)));
	$assignStatic(Signature::rsaIds, $List::of(var$1, var$2, var$3, var$4, $$new($ServiceId, "Cipher"_s, "RSA"_s)));
	{
		$assignStatic(Signature::signatureInfo, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
		$init($Boolean);
		$var($Boolean, TRUE, $Boolean::TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.provider.DSA$RawDSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.provider.DSA$SHA1withDSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$MD2withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$MD5withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$SHA1withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$SHA256withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$SHA384withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSASignature$SHA512withRSA"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.rsa.RSAPSSSignature"_s, TRUE);
		$nc(Signature::signatureInfo)->put("sun.security.pkcs11.P11Signature"_s, TRUE);
	}
}

Signature::Signature() {
}

$Class* Signature::load$($String* name, bool initialize) {
	$loadClass(Signature, name, initialize, &_Signature_ClassInfo_, clinit$Signature, allocate$Signature);
	return class$;
}

$Class* Signature::class$ = nullptr;

	} // security
} // java