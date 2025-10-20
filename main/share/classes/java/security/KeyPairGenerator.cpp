#include <java/security/KeyPairGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyPair.h>
#include <java/security/KeyPairGenerator$Delegate.h>
#include <java/security/KeyPairGeneratorSpi.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/jca/JCAUtil.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyPair = ::java::security::KeyPair;
using $KeyPairGenerator$Delegate = ::java::security::KeyPairGenerator$Delegate;
using $KeyPairGeneratorSpi = ::java::security::KeyPairGeneratorSpi;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _KeyPairGenerator_FieldInfo_[] = {
	{"pdebug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyPairGenerator, pdebug)},
	{"skipDebug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyPairGenerator, skipDebug)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyPairGenerator, algorithm)},
	{"provider", "Ljava/security/Provider;", nullptr, 0, $field(KeyPairGenerator, provider)},
	{}
};

$MethodInfo _KeyPairGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(KeyPairGenerator::*)($String*)>(&KeyPairGenerator::init$))},
	{"disableFailover", "()V", nullptr, 0},
	{"genKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$KeyPair*(KeyPairGenerator::*)()>(&KeyPairGenerator::genKeyPair))},
	{"generateKeyPair", "()Ljava/security/KeyPair;", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstance", "(Lsun/security/jca/GetInstance$Instance;Ljava/lang/String;)Ljava/security/KeyPairGenerator;", nullptr, $PRIVATE | $STATIC, $method(static_cast<KeyPairGenerator*(*)($GetInstance$Instance*,$String*)>(&KeyPairGenerator::getInstance))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/KeyPairGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyPairGenerator*(*)($String*)>(&KeyPairGenerator::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyPairGenerator*(*)($String*,$String*)>(&KeyPairGenerator::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyPairGenerator*(*)($String*,$Provider*)>(&KeyPairGenerator::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(KeyPairGenerator::*)()>(&KeyPairGenerator::getProvider))},
	{"initialize", "(I)V", nullptr, $PUBLIC},
	{"initialize", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _KeyPairGenerator_InnerClassesInfo_[] = {
	{"java.security.KeyPairGenerator$Delegate", "java.security.KeyPairGenerator", "Delegate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyPairGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.KeyPairGenerator",
	"java.security.KeyPairGeneratorSpi",
	nullptr,
	_KeyPairGenerator_FieldInfo_,
	_KeyPairGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_KeyPairGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.KeyPairGenerator$Delegate"
};

$Object* allocate$KeyPairGenerator($Class* clazz) {
	return $of($alloc(KeyPairGenerator));
}

$Debug* KeyPairGenerator::pdebug = nullptr;
bool KeyPairGenerator::skipDebug = false;

void KeyPairGenerator::init$($String* algorithm) {
	$KeyPairGeneratorSpi::init$();
	$set(this, algorithm, algorithm);
}

$String* KeyPairGenerator::getAlgorithm() {
	return this->algorithm;
}

KeyPairGenerator* KeyPairGenerator::getInstance($GetInstance$Instance* instance, $String* algorithm) {
	$init(KeyPairGenerator);
	$useLocalCurrentObjectStackCache();
	$var(KeyPairGenerator, kpg, nullptr);
	if ($instanceOf(KeyPairGenerator, $nc(instance)->impl)) {
		$assign(kpg, $cast(KeyPairGenerator, instance->impl));
	} else {
		$var($KeyPairGeneratorSpi, spi, $cast($KeyPairGeneratorSpi, instance->impl));
		$assign(kpg, $new($KeyPairGenerator$Delegate, spi, algorithm));
	}
	$set($nc(kpg), provider, $nc(instance)->provider);
	if (!KeyPairGenerator::skipDebug && KeyPairGenerator::pdebug != nullptr) {
		$nc(KeyPairGenerator::pdebug)->println($$str({"KeyPairGenerator."_s, algorithm, " algorithm from: "_s, $($nc(kpg->provider)->getName())}));
	}
	return kpg;
}

KeyPairGenerator* KeyPairGenerator::getInstance($String* algorithm) {
	$init(KeyPairGenerator);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$var($List, list, $GetInstance::getServices("KeyPairGenerator"_s, algorithm));
	$var($Iterator, t, $nc(list)->iterator());
	if ($nc(t)->hasNext() == false) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " KeyPairGenerator not available"_s}));
	}
	$var($NoSuchAlgorithmException, failure, nullptr);
	do {
		$var($Provider$Service, s, $cast($Provider$Service, $nc(t)->next()));
		try {
			$load($KeyPairGeneratorSpi);
			$var($GetInstance$Instance, instance, $GetInstance::getInstance(s, $KeyPairGeneratorSpi::class$));
			if ($instanceOf(KeyPairGenerator, $nc(instance)->impl)) {
				return getInstance(instance, algorithm);
			} else {
				return $new($KeyPairGenerator$Delegate, instance, t, algorithm);
			}
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, e, $catch());
			if (failure == nullptr) {
				$assign(failure, e);
			}
		}
	} while ($nc(t)->hasNext());
	$throw(failure);
	$shouldNotReachHere();
}

KeyPairGenerator* KeyPairGenerator::getInstance($String* algorithm, $String* provider) {
	$init(KeyPairGenerator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyPairGeneratorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyPairGenerator"_s, $KeyPairGeneratorSpi::class$, algorithm, provider));
	return getInstance(instance, algorithm);
}

KeyPairGenerator* KeyPairGenerator::getInstance($String* algorithm, $Provider* provider) {
	$init(KeyPairGenerator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($KeyPairGeneratorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("KeyPairGenerator"_s, $KeyPairGeneratorSpi::class$, algorithm, provider));
	return getInstance(instance, algorithm);
}

$Provider* KeyPairGenerator::getProvider() {
	disableFailover();
	return this->provider;
}

void KeyPairGenerator::disableFailover() {
}

void KeyPairGenerator::initialize(int32_t keysize) {
	initialize(keysize, $($JCAUtil::getDefSecureRandom()));
}

void KeyPairGenerator::initialize(int32_t keysize, $SecureRandom* random) {
}

void KeyPairGenerator::initialize($AlgorithmParameterSpec* params) {
	initialize(params, $($JCAUtil::getDefSecureRandom()));
}

void KeyPairGenerator::initialize($AlgorithmParameterSpec* params, $SecureRandom* random) {
}

$KeyPair* KeyPairGenerator::genKeyPair() {
	return generateKeyPair();
}

$KeyPair* KeyPairGenerator::generateKeyPair() {
	return nullptr;
}

void clinit$KeyPairGenerator($Class* class$) {
	$assignStatic(KeyPairGenerator::pdebug, $Debug::getInstance("provider"_s, "Provider"_s));
	bool var$0 = $Debug::isOn("engine="_s);
	KeyPairGenerator::skipDebug = var$0 && !$Debug::isOn("keypairgenerator"_s);
}

KeyPairGenerator::KeyPairGenerator() {
}

$Class* KeyPairGenerator::load$($String* name, bool initialize) {
	$loadClass(KeyPairGenerator, name, initialize, &_KeyPairGenerator_ClassInfo_, clinit$KeyPairGenerator, allocate$KeyPairGenerator);
	return class$;
}

$Class* KeyPairGenerator::class$ = nullptr;

	} // security
} // java