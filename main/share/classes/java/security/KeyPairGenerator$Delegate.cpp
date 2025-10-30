#include <java/security/KeyPairGenerator$Delegate.h>

#include <java/lang/AssertionError.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/KeyPair.h>
#include <java/security/KeyPairGenerator.h>
#include <java/security/KeyPairGeneratorSpi.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef I_NONE
#undef I_PARAMS
#undef I_SIZE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $KeyPair = ::java::security::KeyPair;
using $KeyPairGenerator = ::java::security::KeyPairGenerator;
using $KeyPairGeneratorSpi = ::java::security::KeyPairGeneratorSpi;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _KeyPairGenerator$Delegate_FieldInfo_[] = {
	{"spi", "Ljava/security/KeyPairGeneratorSpi;", nullptr, $PRIVATE | $VOLATILE, $field(KeyPairGenerator$Delegate, spi)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(KeyPairGenerator$Delegate, lock)},
	{"serviceIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PRIVATE, $field(KeyPairGenerator$Delegate, serviceIterator)},
	{"I_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyPairGenerator$Delegate, I_NONE)},
	{"I_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyPairGenerator$Delegate, I_SIZE)},
	{"I_PARAMS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyPairGenerator$Delegate, I_PARAMS)},
	{"initType", "I", nullptr, $PRIVATE, $field(KeyPairGenerator$Delegate, initType)},
	{"initKeySize", "I", nullptr, $PRIVATE, $field(KeyPairGenerator$Delegate, initKeySize)},
	{"initParams", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(KeyPairGenerator$Delegate, initParams)},
	{"initRandom", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(KeyPairGenerator$Delegate, initRandom)},
	{}
};

$MethodInfo _KeyPairGenerator$Delegate_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyPairGeneratorSpi;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(KeyPairGenerator$Delegate::*)($KeyPairGeneratorSpi*,$String*)>(&KeyPairGenerator$Delegate::init$))},
	{"<init>", "(Lsun/security/jca/GetInstance$Instance;Ljava/util/Iterator;Ljava/lang/String;)V", "(Lsun/security/jca/GetInstance$Instance;Ljava/util/Iterator<Ljava/security/Provider$Service;>;Ljava/lang/String;)V", 0, $method(static_cast<void(KeyPairGenerator$Delegate::*)($GetInstance$Instance*,$Iterator*,$String*)>(&KeyPairGenerator$Delegate::init$))},
	{"disableFailover", "()V", nullptr, 0},
	{"generateKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC},
	{"initialize", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"nextSpi", "(Ljava/security/KeyPairGeneratorSpi;Z)Ljava/security/KeyPairGeneratorSpi;", nullptr, $PRIVATE, $method(static_cast<$KeyPairGeneratorSpi*(KeyPairGenerator$Delegate::*)($KeyPairGeneratorSpi*,bool)>(&KeyPairGenerator$Delegate::nextSpi))},
	{}
};

$InnerClassInfo _KeyPairGenerator$Delegate_InnerClassesInfo_[] = {
	{"java.security.KeyPairGenerator$Delegate", "java.security.KeyPairGenerator", "Delegate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyPairGenerator$Delegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.KeyPairGenerator$Delegate",
	"java.security.KeyPairGenerator",
	nullptr,
	_KeyPairGenerator$Delegate_FieldInfo_,
	_KeyPairGenerator$Delegate_MethodInfo_,
	nullptr,
	nullptr,
	_KeyPairGenerator$Delegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyPairGenerator"
};

$Object* allocate$KeyPairGenerator$Delegate($Class* clazz) {
	return $of($alloc(KeyPairGenerator$Delegate));
}

void KeyPairGenerator$Delegate::init$($KeyPairGeneratorSpi* spi, $String* algorithm) {
	$KeyPairGenerator::init$(algorithm);
	$set(this, lock, $new($Object));
	$set(this, spi, spi);
}

void KeyPairGenerator$Delegate::init$($GetInstance$Instance* instance, $Iterator* serviceIterator, $String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$KeyPairGenerator::init$(algorithm);
	$set(this, lock, $new($Object));
	$set(this, spi, $cast($KeyPairGeneratorSpi, $nc(instance)->impl));
	$set(this, provider, instance->provider);
	$set(this, serviceIterator, serviceIterator);
	this->initType = KeyPairGenerator$Delegate::I_NONE;
	$init($KeyPairGenerator);
	if (!$KeyPairGenerator::skipDebug && $KeyPairGenerator::pdebug != nullptr) {
		$nc($KeyPairGenerator::pdebug)->println($$str({"KeyPairGenerator."_s, algorithm, " algorithm from: "_s, $($nc(this->provider)->getName())}));
	}
}

$KeyPairGeneratorSpi* KeyPairGenerator$Delegate::nextSpi($KeyPairGeneratorSpi* oldSpi, bool reinit) {
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
				$var($Object, inst, $nc(s)->newInstance(nullptr));
				$var($KeyPairGeneratorSpi, spi, nullptr);
				bool var$0 = $instanceOf($KeyPairGeneratorSpi, inst);
				if (var$0) {
					$assign(spi, $cast($KeyPairGeneratorSpi, inst));
					var$0 = true;
				}
				if (!(var$0)) {
					continue;
				}
				if ($instanceOf($KeyPairGenerator, inst)) {
					continue;
				}
				if (reinit) {
					if (this->initType == KeyPairGenerator$Delegate::I_SIZE) {
						$nc(spi)->initialize(this->initKeySize, this->initRandom);
					} else if (this->initType == KeyPairGenerator$Delegate::I_PARAMS) {
						$nc(spi)->initialize(this->initParams, this->initRandom);
					} else if (this->initType != KeyPairGenerator$Delegate::I_NONE) {
						$throwNew($AssertionError, $of($$str({"KeyPairGenerator initType: "_s, $$str(this->initType)})));
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

void KeyPairGenerator$Delegate::disableFailover() {
	$set(this, serviceIterator, nullptr);
	this->initType = 0;
	$set(this, initParams, nullptr);
	$set(this, initRandom, nullptr);
}

void KeyPairGenerator$Delegate::initialize(int32_t keysize, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		$nc(this->spi)->initialize(keysize, random);
		return;
	}
	$var($RuntimeException, failure, nullptr);
	$var($KeyPairGeneratorSpi, mySpi, this->spi);
	do {
		try {
			$nc(mySpi)->initialize(keysize, random);
			this->initType = KeyPairGenerator$Delegate::I_SIZE;
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

void KeyPairGenerator$Delegate::initialize($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		$nc(this->spi)->initialize(params, random);
		return;
	}
	$var($Exception, failure, nullptr);
	$var($KeyPairGeneratorSpi, mySpi, this->spi);
	do {
		try {
			$nc(mySpi)->initialize(params, random);
			this->initType = KeyPairGenerator$Delegate::I_PARAMS;
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
	if ($instanceOf($RuntimeException, failure)) {
		$throw($cast($RuntimeException, failure));
	}
	$throw($cast($InvalidAlgorithmParameterException, failure));
}

$KeyPair* KeyPairGenerator$Delegate::generateKeyPair() {
	$useLocalCurrentObjectStackCache();
	if (this->serviceIterator == nullptr) {
		return $nc(this->spi)->generateKeyPair();
	}
	$var($RuntimeException, failure, nullptr);
	$var($KeyPairGeneratorSpi, mySpi, this->spi);
	do {
		try {
			return $nc(mySpi)->generateKeyPair();
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

KeyPairGenerator$Delegate::KeyPairGenerator$Delegate() {
}

$Class* KeyPairGenerator$Delegate::load$($String* name, bool initialize) {
	$loadClass(KeyPairGenerator$Delegate, name, initialize, &_KeyPairGenerator$Delegate_ClassInfo_, allocate$KeyPairGenerator$Delegate);
	return class$;
}

$Class* KeyPairGenerator$Delegate::class$ = nullptr;

	} // security
} // java