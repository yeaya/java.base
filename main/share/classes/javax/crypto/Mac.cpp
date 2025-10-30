#include <javax/crypto/Mac.h>

#include <java/lang/Cloneable.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <javax/crypto/JceSecurity.h>
#include <javax/crypto/MacSpi.h>
#include <javax/crypto/ShortBufferException.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $ProviderException = ::java::security::ProviderException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $JceSecurity = ::javax::crypto::JceSecurity;
using $MacSpi = ::javax::crypto::MacSpi;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $Debug = ::sun::security::util::Debug;

namespace javax {
	namespace crypto {

$FieldInfo _Mac_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Mac, debug)},
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Mac, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Mac, skipDebug)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(Mac, provider)},
	{"spi", "Ljavax/crypto/MacSpi;", nullptr, $PRIVATE, $field(Mac, spi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mac, algorithm)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(Mac, initialized)},
	{"firstService", "Ljava/security/Provider$Service;", nullptr, $PRIVATE, $field(Mac, firstService)},
	{"serviceIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/Provider$Service;>;", $PRIVATE, $field(Mac, serviceIterator)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Mac, lock)},
	{"warnCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(Mac, warnCount)},
	{}
};

$MethodInfo _Mac_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/MacSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Mac::*)($MacSpi*,$Provider*,$String*)>(&Mac::init$))},
	{"<init>", "(Ljava/security/Provider$Service;Ljava/util/Iterator;Ljava/lang/String;)V", "(Ljava/security/Provider$Service;Ljava/util/Iterator<Ljava/security/Provider$Service;>;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Mac::*)($Provider$Service*,$Iterator*,$String*)>(&Mac::init$))},
	{"chooseFirstProvider", "()V", nullptr, 0},
	{"chooseProvider", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PRIVATE, $method(static_cast<void(Mac::*)($Key*,$AlgorithmParameterSpec*)>(&Mac::chooseProvider)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.CloneNotSupportedException"},
	{"doFinal", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(Mac::*)()>(&Mac::doFinal)), "java.lang.IllegalStateException"},
	{"doFinal", "([BI)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($bytes*,int32_t)>(&Mac::doFinal)), "javax.crypto.ShortBufferException,java.lang.IllegalStateException"},
	{"doFinal", "([B)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(Mac::*)($bytes*)>(&Mac::doFinal)), "java.lang.IllegalStateException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Mac::*)()>(&Mac::getAlgorithm))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/crypto/Mac;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<Mac*(*)($String*)>(&Mac::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<Mac*(*)($String*,$String*)>(&Mac::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<Mac*(*)($String*,$Provider*)>(&Mac::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getMacLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Mac::*)()>(&Mac::getMacLength))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(Mac::*)()>(&Mac::getProvider))},
	{"getProviderName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Mac::*)()>(&Mac::getProviderName))},
	{"init", "(Ljava/security/Key;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($Key*)>(&Mac::init)), "java.security.InvalidKeyException"},
	{"init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($Key*,$AlgorithmParameterSpec*)>(&Mac::init)), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"reset", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)()>(&Mac::reset))},
	{"update", "(B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)(int8_t)>(&Mac::update)), "java.lang.IllegalStateException"},
	{"update", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($bytes*)>(&Mac::update)), "java.lang.IllegalStateException"},
	{"update", "([BII)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($bytes*,int32_t,int32_t)>(&Mac::update)), "java.lang.IllegalStateException"},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Mac::*)($ByteBuffer*)>(&Mac::update))},
	{}
};

$ClassInfo _Mac_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.Mac",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Mac_FieldInfo_,
	_Mac_MethodInfo_
};

$Object* allocate$Mac($Class* clazz) {
	return $of($alloc(Mac));
}

$Debug* Mac::debug = nullptr;
$Debug* Mac::pdebug = nullptr;
bool Mac::skipDebug = false;
int32_t Mac::warnCount = 0;

void Mac::init$($MacSpi* macSpi, $Provider* provider, $String* algorithm) {
	this->initialized = false;
	$set(this, spi, macSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
	$set(this, serviceIterator, nullptr);
	$set(this, lock, nullptr);
}

void Mac::init$($Provider$Service* s, $Iterator* t, $String* algorithm) {
	this->initialized = false;
	$set(this, firstService, s);
	$set(this, serviceIterator, t);
	$set(this, algorithm, algorithm);
	$set(this, lock, $new($Object));
}

$String* Mac::getAlgorithm() {
	return this->algorithm;
}

Mac* Mac::getInstance($String* algorithm) {
	$init(Mac);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$var($List, services, $GetInstance::getServices("Mac"_s, algorithm));
	$var($Iterator, t, $nc(services)->iterator());
	while ($nc(t)->hasNext()) {
		$var($Provider$Service, s, $cast($Provider$Service, t->next()));
		if ($JceSecurity::canUseProvider($($nc(s)->getProvider())) == false) {
			continue;
		}
		return $new(Mac, s, t, algorithm);
	}
	$throwNew($NoSuchAlgorithmException, $$str({"Algorithm "_s, algorithm, " not available"_s}));
}

Mac* Mac::getInstance($String* algorithm, $String* provider) {
	$init(Mac);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($MacSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("Mac"_s, $MacSpi::class$, algorithm, provider));
	return $new(Mac, $cast($MacSpi, $nc(instance)->impl), instance->provider, algorithm);
}

Mac* Mac::getInstance($String* algorithm, $Provider* provider) {
	$init(Mac);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($MacSpi);
	$var($GetInstance$Instance, instance, $JceSecurity::getInstance("Mac"_s, $MacSpi::class$, algorithm, provider));
	return $new(Mac, $cast($MacSpi, $nc(instance)->impl), instance->provider, algorithm);
}

void Mac::chooseFirstProvider() {
	$useLocalCurrentObjectStackCache();
	if ((this->spi != nullptr) || (this->serviceIterator == nullptr)) {
		return;
	}
	$synchronized(this->lock) {
		if (this->spi != nullptr) {
			return;
		}
		if (Mac::debug != nullptr) {
			int32_t w = --Mac::warnCount;
			if (w >= 0) {
				$nc(Mac::debug)->println("Mac.init() not first method called, disabling delayed provider selection"_s);
				if (w == 0) {
					$nc(Mac::debug)->println("Further warnings of this type will be suppressed"_s);
				}
				$$new($Exception, "Call trace"_s)->printStackTrace();
			}
		}
		$var($Exception, lastException, nullptr);
		while ((this->firstService != nullptr) || $nc(this->serviceIterator)->hasNext()) {
			$var($Provider$Service, s, nullptr);
			if (this->firstService != nullptr) {
				$assign(s, this->firstService);
				$set(this, firstService, nullptr);
			} else {
				$assign(s, $cast($Provider$Service, $nc(this->serviceIterator)->next()));
			}
			if ($JceSecurity::canUseProvider($($nc(s)->getProvider())) == false) {
				continue;
			}
			try {
				$var($Object, obj, $nc(s)->newInstance(nullptr));
				if ($instanceOf($MacSpi, obj) == false) {
					continue;
				}
				$set(this, spi, $cast($MacSpi, obj));
				$set(this, provider, s->getProvider());
				$set(this, firstService, nullptr);
				$set(this, serviceIterator, nullptr);
				return;
			} catch ($NoSuchAlgorithmException& e) {
				$assign(lastException, e);
			}
		}
		$var($ProviderException, e, $new($ProviderException, "Could not construct MacSpi instance"_s));
		if (lastException != nullptr) {
			e->initCause(lastException);
		}
		$throw(e);
	}
}

void Mac::chooseProvider($Key* key, $AlgorithmParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->spi != nullptr) {
			$nc(this->spi)->engineInit(key, params);
			return;
		}
		$var($Exception, lastException, nullptr);
		while ((this->firstService != nullptr) || $nc(this->serviceIterator)->hasNext()) {
			$var($Provider$Service, s, nullptr);
			if (this->firstService != nullptr) {
				$assign(s, this->firstService);
				$set(this, firstService, nullptr);
			} else {
				$assign(s, $cast($Provider$Service, $nc(this->serviceIterator)->next()));
			}
			if ($nc(s)->supportsParameter(key) == false) {
				continue;
			}
			if ($JceSecurity::canUseProvider($($nc(s)->getProvider())) == false) {
				continue;
			}
			try {
				$var($MacSpi, spi, $cast($MacSpi, $nc(s)->newInstance(nullptr)));
				$nc(spi)->engineInit(key, params);
				$set(this, provider, s->getProvider());
				$set(this, spi, spi);
				$set(this, firstService, nullptr);
				$set(this, serviceIterator, nullptr);
				return;
			} catch ($Exception& e) {
				if (lastException == nullptr) {
					$assign(lastException, e);
				}
			}
		}
		if ($instanceOf($InvalidKeyException, lastException)) {
			$throw($cast($InvalidKeyException, lastException));
		}
		if ($instanceOf($InvalidAlgorithmParameterException, lastException)) {
			$throw($cast($InvalidAlgorithmParameterException, lastException));
		}
		if ($instanceOf($RuntimeException, lastException)) {
			$throw($cast($RuntimeException, lastException));
		}
		$var($String, kName, (key != nullptr) ? $nc($of(key))->getClass()->getName() : "(null)"_s);
		$throwNew($InvalidKeyException, $$str({"No installed provider supports this key: "_s, kName}), lastException);
	}
}

$Provider* Mac::getProvider() {
	chooseFirstProvider();
	return this->provider;
}

int32_t Mac::getMacLength() {
	chooseFirstProvider();
	return $nc(this->spi)->engineGetMacLength();
}

$String* Mac::getProviderName() {
	return (this->provider == nullptr) ? "(no provider)"_s : $nc(this->provider)->getName();
}

void Mac::init($Key* key) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->spi != nullptr) {
			$nc(this->spi)->engineInit(key, nullptr);
		} else {
			chooseProvider(key, nullptr);
		}
	} catch ($InvalidAlgorithmParameterException& e) {
		$throwNew($InvalidKeyException, "init() failed"_s, e);
	}
	this->initialized = true;
	if (!Mac::skipDebug && Mac::pdebug != nullptr) {
		$nc(Mac::pdebug)->println($$str({"Mac."_s, this->algorithm, " algorithm from: "_s, $(getProviderName())}));
	}
}

void Mac::init($Key* key, $AlgorithmParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	if (this->spi != nullptr) {
		$nc(this->spi)->engineInit(key, params);
	} else {
		chooseProvider(key, params);
	}
	this->initialized = true;
	if (!Mac::skipDebug && Mac::pdebug != nullptr) {
		$nc(Mac::pdebug)->println($$str({"Mac."_s, this->algorithm, " algorithm from: "_s, $(getProviderName())}));
	}
}

void Mac::update(int8_t input) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	$nc(this->spi)->engineUpdate(input);
}

void Mac::update($bytes* input) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	if (input != nullptr) {
		$nc(this->spi)->engineUpdate(input, 0, input->length);
	}
}

void Mac::update($bytes* input, int32_t offset, int32_t len) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	if (input != nullptr) {
		if ((offset < 0) || (len > (input->length - offset)) || (len < 0)) {
			$throwNew($IllegalArgumentException, "Bad arguments"_s);
		}
		$nc(this->spi)->engineUpdate(input, offset, len);
	}
}

void Mac::update($ByteBuffer* input) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	if (input == nullptr) {
		$throwNew($IllegalArgumentException, "Buffer must not be null"_s);
	}
	$nc(this->spi)->engineUpdate(input);
}

$bytes* Mac::doFinal() {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	$var($bytes, mac, $nc(this->spi)->engineDoFinal());
	$nc(this->spi)->engineReset();
	return mac;
}

void Mac::doFinal($bytes* output, int32_t outOffset) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	int32_t macLen = getMacLength();
	if (output == nullptr || $nc(output)->length - outOffset < macLen) {
		$throwNew($ShortBufferException, "Cannot store MAC in output buffer"_s);
	}
	$var($bytes, mac, doFinal());
	$System::arraycopy(mac, 0, output, outOffset, macLen);
	return;
}

$bytes* Mac::doFinal($bytes* input) {
	chooseFirstProvider();
	if (this->initialized == false) {
		$throwNew($IllegalStateException, "MAC not initialized"_s);
	}
	update(input);
	return doFinal();
}

void Mac::reset() {
	chooseFirstProvider();
	$nc(this->spi)->engineReset();
}

$Object* Mac::clone() {
	chooseFirstProvider();
	$var(Mac, that, $cast(Mac, $Cloneable::clone()));
	$set($nc(that), spi, $cast($MacSpi, $nc(this->spi)->clone()));
	return $of(that);
}

void clinit$Mac($Class* class$) {
	$assignStatic(Mac::debug, $Debug::getInstance("jca"_s, "Mac"_s));
	$assignStatic(Mac::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	Mac::skipDebug = var$0 && !$Debug::isOn("mac"_s);
	Mac::warnCount = 10;
}

Mac::Mac() {
}

$Class* Mac::load$($String* name, bool initialize) {
	$loadClass(Mac, name, initialize, &_Mac_ClassInfo_, clinit$Mac, allocate$Mac);
	return class$;
}

$Class* Mac::class$ = nullptr;

	} // crypto
} // javax