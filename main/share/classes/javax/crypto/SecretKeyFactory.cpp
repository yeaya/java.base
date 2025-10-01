#include <javax/crypto/SecretKeyFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/crypto/JceSecurity.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactorySpi.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $JceSecurity = ::javax::crypto::JceSecurity;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactorySpi = ::javax::crypto::SecretKeyFactorySpi;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace javax {
	namespace crypto {

$FieldInfo _SecretKeyFactory_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(SecretKeyFactory, provider)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SecretKeyFactory, algorithm)},
	{"spi", "Ljavax/crypto/SecretKeyFactorySpi;", nullptr, $PRIVATE | $VOLATILE, $field(SecretKeyFactory, spi)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SecretKeyFactory, lock)},
	{"serviceIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PRIVATE, $field(SecretKeyFactory, serviceIterator)},
	{}
};

$MethodInfo _SecretKeyFactory_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/SecretKeyFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(SecretKeyFactory::*)($SecretKeyFactorySpi*,$Provider*,$String*)>(&SecretKeyFactory::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SecretKeyFactory::*)($String*)>(&SecretKeyFactory::init$)), "java.security.NoSuchAlgorithmException"},
	{"generateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SecretKey*(SecretKeyFactory::*)($KeySpec*)>(&SecretKeyFactory::generateSecret)), "java.security.spec.InvalidKeySpecException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(SecretKeyFactory::*)()>(&SecretKeyFactory::getAlgorithm))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<SecretKeyFactory*(*)($String*)>(&SecretKeyFactory::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<SecretKeyFactory*(*)($String*,$String*)>(&SecretKeyFactory::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<SecretKeyFactory*(*)($String*,$Provider*)>(&SecretKeyFactory::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "(Ljavax/crypto/SecretKey;Ljava/lang/Class<*>;)Ljava/security/spec/KeySpec;", $PUBLIC | $FINAL, $method(static_cast<$KeySpec*(SecretKeyFactory::*)($SecretKey*,$Class*)>(&SecretKeyFactory::getKeySpec)), "java.security.spec.InvalidKeySpecException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(SecretKeyFactory::*)()>(&SecretKeyFactory::getProvider))},
	{"nextSpi", "(Ljavax/crypto/SecretKeyFactorySpi;)Ljavax/crypto/SecretKeyFactorySpi;", nullptr, $PRIVATE, $method(static_cast<$SecretKeyFactorySpi*(SecretKeyFactory::*)($SecretKeyFactorySpi*)>(&SecretKeyFactory::nextSpi))},
	{"translateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SecretKey*(SecretKeyFactory::*)($SecretKey*)>(&SecretKeyFactory::translateKey)), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _SecretKeyFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.SecretKeyFactory",
	"java.lang.Object",
	nullptr,
	_SecretKeyFactory_FieldInfo_,
	_SecretKeyFactory_MethodInfo_
};

$Object* allocate$SecretKeyFactory($Class* clazz) {
	return $of($alloc(SecretKeyFactory));
}

void SecretKeyFactory::init$($SecretKeyFactorySpi* keyFacSpi, $Provider* provider, $String* algorithm) {
	$set(this, lock, $new($Object));
	$set(this, spi, keyFacSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

void SecretKeyFactory::init$($String* algorithm) {
	$set(this, lock, $new($Object));
	$set(this, algorithm, algorithm);
	$var($List, list, $GetInstance::getServices("SecretKeyFactory"_s, algorithm));
	$set(this, serviceIterator, $nc(list)->iterator());
	if (nextSpi(nullptr) == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " SecretKeyFactory not available"_s}));
	}
}

SecretKeyFactory* SecretKeyFactory::getInstance($String* algorithm) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	return $new(SecretKeyFactory, algorithm);
}

SecretKeyFactory* SecretKeyFactory::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($SecretKeyFactorySpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("SecretKeyFactory"_s, $SecretKeyFactorySpi::class$, algorithm, provider));
	return $new(SecretKeyFactory, $cast($SecretKeyFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

SecretKeyFactory* SecretKeyFactory::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($SecretKeyFactorySpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("SecretKeyFactory"_s, $SecretKeyFactorySpi::class$, algorithm, provider));
	return $new(SecretKeyFactory, $cast($SecretKeyFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* SecretKeyFactory::getProvider() {
	$synchronized(this->lock) {
		$set(this, serviceIterator, nullptr);
		return this->provider;
	}
}

$String* SecretKeyFactory::getAlgorithm() {
	return this->algorithm;
}

$SecretKeyFactorySpi* SecretKeyFactory::nextSpi($SecretKeyFactorySpi* oldSpi) {
	$synchronized(this->lock) {
		if ((oldSpi != nullptr) && (oldSpi != this->spi)) {
			return this->spi;
		}
		if (this->serviceIterator == nullptr) {
			return nullptr;
		}
		while ($nc(this->serviceIterator)->hasNext()) {
			$var($Provider$Service, s, $cast($Provider$Service, $nc(this->serviceIterator)->next()));
			if ($JceSecurity::canUseProvider($($nc(s)->getProvider())) == false) {
				continue;
			}
			try {
				$var($Object, obj, $nc(s)->newInstance(nullptr));
				if ($instanceOf($SecretKeyFactorySpi, obj) == false) {
					continue;
				}
				$var($SecretKeyFactorySpi, spi, $cast($SecretKeyFactorySpi, obj));
				$set(this, provider, s->getProvider());
				$set(this, spi, spi);
				return spi;
			} catch ($NoSuchAlgorithmException&) {
				$catch();
			}
		}
		$set(this, serviceIterator, nullptr);
		return nullptr;
	}
}

$SecretKey* SecretKeyFactory::generateSecret($KeySpec* keySpec) {
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGenerateSecret(keySpec);
	}
	$var($Exception, failure, nullptr);
	$var($SecretKeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGenerateSecret(keySpec);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($InvalidKeySpecException, failure)) {
		$throw($cast($InvalidKeySpecException, failure));
	}
	$throwNew($InvalidKeySpecException, "Could not generate secret key"_s, failure);
	$shouldNotReachHere();
}

$KeySpec* SecretKeyFactory::getKeySpec($SecretKey* key, $Class* keySpec) {
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGetKeySpec(key, keySpec);
	}
	$var($Exception, failure, nullptr);
	$var($SecretKeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGetKeySpec(key, keySpec);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($InvalidKeySpecException, failure)) {
		$throw($cast($InvalidKeySpecException, failure));
	}
	$throwNew($InvalidKeySpecException, "Could not get key spec"_s, failure);
	$shouldNotReachHere();
}

$SecretKey* SecretKeyFactory::translateKey($SecretKey* key) {
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineTranslateKey(key);
	}
	$var($Exception, failure, nullptr);
	$var($SecretKeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineTranslateKey(key);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($InvalidKeyException, failure)) {
		$throw($cast($InvalidKeyException, failure));
	}
	$throwNew($InvalidKeyException, "Could not translate key"_s, failure);
	$shouldNotReachHere();
}

SecretKeyFactory::SecretKeyFactory() {
}

$Class* SecretKeyFactory::load$($String* name, bool initialize) {
	$loadClass(SecretKeyFactory, name, initialize, &_SecretKeyFactory_ClassInfo_, allocate$SecretKeyFactory);
	return class$;
}

$Class* SecretKeyFactory::class$ = nullptr;

	} // crypto
} // javax