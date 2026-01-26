#include <javax/crypto/KeyGenerator.h>

#include <java/lang/AssertionError.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/crypto/JceSecurity.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/jca/JCAUtil.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef I_NONE
#undef I_PARAMS
#undef I_RANDOM
#undef I_SIZE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $JceSecurity = ::javax::crypto::JceSecurity;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $Debug = ::sun::security::util::Debug;

namespace javax {
	namespace crypto {

$FieldInfo _KeyGenerator_FieldInfo_[] = {
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyGenerator, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyGenerator, skipDebug)},
	{"I_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyGenerator, I_NONE)},
	{"I_RANDOM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyGenerator, I_RANDOM)},
	{"I_PARAMS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyGenerator, I_PARAMS)},
	{"I_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyGenerator, I_SIZE)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(KeyGenerator, provider)},
	{"spi", "Ljavax/crypto/KeyGeneratorSpi;", nullptr, $PRIVATE | $VOLATILE, $field(KeyGenerator, spi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyGenerator, algorithm)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(KeyGenerator, lock)},
	{"serviceIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PRIVATE, $field(KeyGenerator, serviceIterator)},
	{"initType", "I", nullptr, $PRIVATE, $field(KeyGenerator, initType)},
	{"initKeySize", "I", nullptr, $PRIVATE, $field(KeyGenerator, initKeySize)},
	{"initParams", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(KeyGenerator, initParams)},
	{"initRandom", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(KeyGenerator, initRandom)},
	{}
};

$MethodInfo _KeyGenerator_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/KeyGeneratorSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(KeyGenerator, init$, void, $KeyGeneratorSpi*, $Provider*, $String*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(KeyGenerator, init$, void, $String*), "java.security.NoSuchAlgorithmException"},
	{"disableFailover", "()V", nullptr, 0, $virtualMethod(KeyGenerator, disableFailover, void)},
	{"generateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, generateKey, $SecretKey*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, getAlgorithm, $String*)},
	{"getInstance", "(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyGenerator, getInstance, KeyGenerator*, $String*), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyGenerator, getInstance, KeyGenerator*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(KeyGenerator, getInstance, KeyGenerator*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, getProvider, $Provider*)},
	{"getProviderName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(KeyGenerator, getProviderName, $String*)},
	{"init", "(Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, init, void, $SecureRandom*)},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, init, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, init, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{"init", "(I)V", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, init, void, int32_t)},
	{"init", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(KeyGenerator, init, void, int32_t, $SecureRandom*)},
	{"nextSpi", "(Ljavax/crypto/KeyGeneratorSpi;Z)Ljavax/crypto/KeyGeneratorSpi;", nullptr, $PRIVATE, $method(KeyGenerator, nextSpi, $KeyGeneratorSpi*, $KeyGeneratorSpi*, bool)},
	{}
};

$ClassInfo _KeyGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.KeyGenerator",
	"java.lang.Object",
	nullptr,
	_KeyGenerator_FieldInfo_,
	_KeyGenerator_MethodInfo_
};

$Object* allocate$KeyGenerator($Class* clazz) {
	return $of($alloc(KeyGenerator));
}

$Debug* KeyGenerator::pdebug = nullptr;
bool KeyGenerator::skipDebug = false;

void KeyGenerator::init$($KeyGeneratorSpi* keyGenSpi, $Provider* provider, $String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$set(this, lock, $new($Object));
	$set(this, spi, keyGenSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
	if (!KeyGenerator::skipDebug && KeyGenerator::pdebug != nullptr) {
		$nc(KeyGenerator::pdebug)->println($$str({"KeyGenerator."_s, algorithm, " algorithm from: "_s, $(getProviderName())}));
	}
}

void KeyGenerator::init$($String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$set(this, lock, $new($Object));
	$set(this, algorithm, algorithm);
	$var($List, list, $GetInstance::getServices("KeyGenerator"_s, algorithm));
	$set(this, serviceIterator, $nc(list)->iterator());
	this->initType = KeyGenerator::I_NONE;
	if (nextSpi(nullptr, false) == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " KeyGenerator not available"_s}));
	}
	if (!KeyGenerator::skipDebug && KeyGenerator::pdebug != nullptr) {
		$nc(KeyGenerator::pdebug)->println($$str({"KeyGenerator."_s, algorithm, " algorithm from: "_s, $(getProviderName())}));
	}
}

$String* KeyGenerator::getProviderName() {
	return (this->provider == nullptr) ? "(no provider)"_s : $nc(this->provider)->getName();
}

$String* KeyGenerator::getAlgorithm() {
	return this->algorithm;
}

KeyGenerator* KeyGenerator::getInstance($String* algorithm) {
	$init(KeyGenerator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	return $new(KeyGenerator, algorithm);
}

KeyGenerator* KeyGenerator::getInstance($String* algorithm, $String* provider) {
	$init(KeyGenerator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyGeneratorSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("KeyGenerator"_s, $KeyGeneratorSpi::class$, algorithm, provider));
	return $new(KeyGenerator, $cast($KeyGeneratorSpi, $nc(instance)->impl), instance->provider, algorithm);
}

KeyGenerator* KeyGenerator::getInstance($String* algorithm, $Provider* provider) {
	$init(KeyGenerator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyGeneratorSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("KeyGenerator"_s, $KeyGeneratorSpi::class$, algorithm, provider));
	return $new(KeyGenerator, $cast($KeyGeneratorSpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* KeyGenerator::getProvider() {
	$synchronized(this->lock) {
		disableFailover();
		return this->provider;
	}
}

$KeyGeneratorSpi* KeyGenerator::nextSpi($KeyGeneratorSpi* oldSpi, bool reinit) {
	$useLocalCurrentObjectStackCache();
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
				$var($Object, inst, $nc(s)->newInstance(nullptr));
				if ($instanceOf($KeyGeneratorSpi, inst) == false) {
					continue;
				}
				$var($KeyGeneratorSpi, spi, $cast($KeyGeneratorSpi, inst));
				if (reinit) {
					if (this->initType == KeyGenerator::I_SIZE) {
						$nc(spi)->engineInit(this->initKeySize, this->initRandom);
					} else if (this->initType == KeyGenerator::I_PARAMS) {
						$nc(spi)->engineInit(this->initParams, this->initRandom);
					} else if (this->initType == KeyGenerator::I_RANDOM) {
						$nc(spi)->engineInit(this->initRandom);
					} else if (this->initType != KeyGenerator::I_NONE) {
						$throwNew($AssertionError, $of($$str({"KeyGenerator initType: "_s, $$str(this->initType)})));
					}
				}
				$set(this, provider, s->getProvider());
				$set(this, spi, spi);
				return spi;
			} catch ($Exception& e) {
			}
		}
		disableFailover();
		return nullptr;
	}
}

void KeyGenerator::disableFailover() {
	$set(this, serviceIterator, nullptr);
	this->initType = 0;
	$set(this, initParams, nullptr);
	$set(this, initRandom, nullptr);
}

void KeyGenerator::init($SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		$nc(this->spi)->engineInit(random);
		return;
	}
	$var($RuntimeException, failure, nullptr);
	$var($KeyGeneratorSpi, mySpi, this->spi);
	do {
		try {
			$nc(mySpi)->engineInit(random);
			this->initType = KeyGenerator::I_RANDOM;
			this->initKeySize = 0;
			$set(this, initParams, nullptr);
			$set(this, initRandom, random);
			return;
		} catch ($RuntimeException& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi, false));
		}
	} while (mySpi != nullptr);
	$throw(failure);
}

void KeyGenerator::init($AlgorithmParameterSpec* params) {
	init(params, $($JCAUtil::getDefSecureRandom()));
}

void KeyGenerator::init($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		$nc(this->spi)->engineInit(params, random);
		return;
	}
	$var($Exception, failure, nullptr);
	$var($KeyGeneratorSpi, mySpi, this->spi);
	do {
		try {
			$nc(mySpi)->engineInit(params, random);
			this->initType = KeyGenerator::I_PARAMS;
			this->initKeySize = 0;
			$set(this, initParams, params);
			$set(this, initRandom, random);
			return;
		} catch ($Exception& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi, false));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($InvalidAlgorithmParameterException, failure)) {
		$throw($cast($InvalidAlgorithmParameterException, failure));
	}
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	$throwNew($InvalidAlgorithmParameterException, "init() failed"_s, failure);
}

void KeyGenerator::init(int32_t keysize) {
	init(keysize, $($JCAUtil::getDefSecureRandom()));
}

void KeyGenerator::init(int32_t keysize, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		$nc(this->spi)->engineInit(keysize, random);
		return;
	}
	$var($RuntimeException, failure, nullptr);
	$var($KeyGeneratorSpi, mySpi, this->spi);
	do {
		try {
			$nc(mySpi)->engineInit(keysize, random);
			this->initType = KeyGenerator::I_SIZE;
			this->initKeySize = keysize;
			$set(this, initParams, nullptr);
			$set(this, initRandom, random);
			return;
		} catch ($RuntimeException& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi, false));
		}
	} while (mySpi != nullptr);
	$throw(failure);
}

$SecretKey* KeyGenerator::generateKey() {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGenerateKey();
	}
	$var($RuntimeException, failure, nullptr);
	$var($KeyGeneratorSpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGenerateKey();
		} catch ($RuntimeException& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi, true));
		}
	} while (mySpi != nullptr);
	$throw(failure);
	$shouldNotReachHere();
}

void clinit$KeyGenerator($Class* class$) {
	$assignStatic(KeyGenerator::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	KeyGenerator::skipDebug = var$0 && !$Debug::isOn("keygenerator"_s);
}

KeyGenerator::KeyGenerator() {
}

$Class* KeyGenerator::load$($String* name, bool initialize) {
	$loadClass(KeyGenerator, name, initialize, &_KeyGenerator_ClassInfo_, clinit$KeyGenerator, allocate$KeyGenerator);
	return class$;
}

$Class* KeyGenerator::class$ = nullptr;

	} // crypto
} // javax