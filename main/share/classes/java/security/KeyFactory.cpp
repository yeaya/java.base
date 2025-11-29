#include <java/security/KeyFactory.h>

#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactorySpi.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyFactorySpi = ::java::security::KeyFactorySpi;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $PublicKey = ::java::security::PublicKey;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _KeyFactory_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyFactory, debug)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyFactory, algorithm)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(KeyFactory, provider)},
	{"spi", "Ljava/security/KeyFactorySpi;", nullptr, $PRIVATE | $VOLATILE, $field(KeyFactory, spi)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(KeyFactory, lock)},
	{"serviceIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PRIVATE, $field(KeyFactory, serviceIterator)},
	{}
};

$MethodInfo _KeyFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(KeyFactory::*)($KeyFactorySpi*,$Provider*,$String*)>(&KeyFactory::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(KeyFactory::*)($String*)>(&KeyFactory::init$)), "java.security.NoSuchAlgorithmException"},
	{"generatePrivate", "(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$PrivateKey*(KeyFactory::*)($KeySpec*)>(&KeyFactory::generatePrivate)), "java.security.spec.InvalidKeySpecException"},
	{"generatePublic", "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$PublicKey*(KeyFactory::*)($KeySpec*)>(&KeyFactory::generatePublic)), "java.security.spec.InvalidKeySpecException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(KeyFactory::*)()>(&KeyFactory::getAlgorithm))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/KeyFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyFactory*(*)($String*)>(&KeyFactory::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyFactory*(*)($String*,$String*)>(&KeyFactory::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyFactory*(*)($String*,$Provider*)>(&KeyFactory::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getKeySpec", "(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;", "<T::Ljava/security/spec/KeySpec;>(Ljava/security/Key;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $FINAL, $method(static_cast<$KeySpec*(KeyFactory::*)($Key*,$Class*)>(&KeyFactory::getKeySpec)), "java.security.spec.InvalidKeySpecException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(KeyFactory::*)()>(&KeyFactory::getProvider))},
	{"nextSpi", "(Ljava/security/KeyFactorySpi;)Ljava/security/KeyFactorySpi;", nullptr, $PRIVATE, $method(static_cast<$KeyFactorySpi*(KeyFactory::*)($KeyFactorySpi*)>(&KeyFactory::nextSpi))},
	{"translateKey", "(Ljava/security/Key;)Ljava/security/Key;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Key*(KeyFactory::*)($Key*)>(&KeyFactory::translateKey)), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _KeyFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyFactory",
	"java.lang.Object",
	nullptr,
	_KeyFactory_FieldInfo_,
	_KeyFactory_MethodInfo_
};

$Object* allocate$KeyFactory($Class* clazz) {
	return $of($alloc(KeyFactory));
}

$Debug* KeyFactory::debug = nullptr;

void KeyFactory::init$($KeyFactorySpi* keyFacSpi, $Provider* provider, $String* algorithm) {
	$set(this, lock, $new($Object));
	$set(this, spi, keyFacSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

void KeyFactory::init$($String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$set(this, lock, $new($Object));
	$set(this, algorithm, algorithm);
	$var($List, list, $GetInstance::getServices("KeyFactory"_s, algorithm));
	$set(this, serviceIterator, $nc(list)->iterator());
	if (nextSpi(nullptr) == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " KeyFactory not available"_s}));
	}
}

KeyFactory* KeyFactory::getInstance($String* algorithm) {
	$init(KeyFactory);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	return $new(KeyFactory, algorithm);
}

KeyFactory* KeyFactory::getInstance($String* algorithm, $String* provider) {
	$init(KeyFactory);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyFactory"_s, $KeyFactorySpi::class$, algorithm, provider));
	return $new(KeyFactory, $cast($KeyFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

KeyFactory* KeyFactory::getInstance($String* algorithm, $Provider* provider) {
	$init(KeyFactory);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyFactorySpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyFactory"_s, $KeyFactorySpi::class$, algorithm, provider));
	return $new(KeyFactory, $cast($KeyFactorySpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* KeyFactory::getProvider() {
	$synchronized(this->lock) {
		$set(this, serviceIterator, nullptr);
		return this->provider;
	}
}

$String* KeyFactory::getAlgorithm() {
	return this->algorithm;
}

$KeyFactorySpi* KeyFactory::nextSpi($KeyFactorySpi* oldSpi) {
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
			try {
				$var($Object, obj, $nc(s)->newInstance(nullptr));
				$var($KeyFactorySpi, spi, nullptr);
				bool var$0 = $instanceOf($KeyFactorySpi, obj);
				if (var$0) {
					$assign(spi, $cast($KeyFactorySpi, obj));
					var$0 = true;
				}
				if (!(var$0)) {
					continue;
				}
				$set(this, provider, s->getProvider());
				$set(this, spi, spi);
				return spi;
			} catch ($NoSuchAlgorithmException& e) {
			}
		}
		$set(this, serviceIterator, nullptr);
		return nullptr;
	}
}

$PublicKey* KeyFactory::generatePublic($KeySpec* keySpec) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGeneratePublic(keySpec);
	}
	$var($Exception, failure, nullptr);
	$var($KeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGeneratePublic(keySpec);
		} catch ($Exception& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	if ($instanceOf($InvalidKeySpecException, failure)) {
		$throw($cast($InvalidKeySpecException, failure));
	}
	$throwNew($InvalidKeySpecException, "Could not generate public key"_s, failure);
	$shouldNotReachHere();
}

$PrivateKey* KeyFactory::generatePrivate($KeySpec* keySpec) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGeneratePrivate(keySpec);
	}
	$var($Exception, failure, nullptr);
	$var($KeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGeneratePrivate(keySpec);
		} catch ($Exception& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	if ($instanceOf($InvalidKeySpecException, failure)) {
		$throw($cast($InvalidKeySpecException, failure));
	}
	$throwNew($InvalidKeySpecException, "Could not generate private key"_s, failure);
	$shouldNotReachHere();
}

$KeySpec* KeyFactory::getKeySpec($Key* key, $Class* keySpec) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineGetKeySpec(key, keySpec);
	}
	$var($Exception, failure, nullptr);
	$var($KeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineGetKeySpec(key, keySpec);
		} catch ($Exception& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	if ($instanceOf($InvalidKeySpecException, failure)) {
		$throw($cast($InvalidKeySpecException, failure));
	}
	$throwNew($InvalidKeySpecException, "Could not get key spec"_s, failure);
	$shouldNotReachHere();
}

$Key* KeyFactory::translateKey($Key* key) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->engineTranslateKey(key);
	}
	$var($Exception, failure, nullptr);
	$var($KeyFactorySpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->engineTranslateKey(key);
		} catch ($Exception& e) {
			if (failure == nullptr) {
				$assign(failure, e);
			}
			$assign(mySpi, nextSpi(mySpi));
		}
	} while (mySpi != nullptr);
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	if ($instanceOf($InvalidKeyException, failure)) {
		$throw($cast($InvalidKeyException, failure));
	}
	$throwNew($InvalidKeyException, "Could not translate key"_s, failure);
	$shouldNotReachHere();
}

void clinit$KeyFactory($Class* class$) {
	$assignStatic(KeyFactory::debug, $Debug::getInstance("jca"_s, "KeyFactory"_s));
}

KeyFactory::KeyFactory() {
}

$Class* KeyFactory::load$($String* name, bool initialize) {
	$loadClass(KeyFactory, name, initialize, &_KeyFactory_ClassInfo_, clinit$KeyFactory, allocate$KeyFactory);
	return class$;
}

$Class* KeyFactory::class$ = nullptr;

	} // security
} // java