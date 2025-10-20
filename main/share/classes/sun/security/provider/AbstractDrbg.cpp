#include <sun/security/provider/AbstractDrbg.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters$Instantiation.h>
#include <java/security/DrbgParameters$NextBytes.h>
#include <java/security/DrbgParameters$Reseed.h>
#include <java/security/DrbgParameters.h>
#include <java/security/SecureRandomParameters.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/AbstractDrbg$NonceProvider.h>
#include <sun/security/provider/AbstractDrbg$SeederHolder.h>
#include <sun/security/provider/EntropySource.h>
#include <sun/security/provider/MoreDrbgParameters.h>
#include <sun/security/provider/SeedGenerator.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef DEFAULT_STRENGTH
#undef MAX_VALUE
#undef NONE
#undef PR_AND_RESEED
#undef RESEED_ONLY

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DrbgParameters = ::java::security::DrbgParameters;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;
using $DrbgParameters$Instantiation = ::java::security::DrbgParameters$Instantiation;
using $DrbgParameters$NextBytes = ::java::security::DrbgParameters$NextBytes;
using $DrbgParameters$Reseed = ::java::security::DrbgParameters$Reseed;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $AbstractDrbg$NonceProvider = ::sun::security::provider::AbstractDrbg$NonceProvider;
using $AbstractDrbg$SeederHolder = ::sun::security::provider::AbstractDrbg$SeederHolder;
using $EntropySource = ::sun::security::provider::EntropySource;
using $MoreDrbgParameters = ::sun::security::provider::MoreDrbgParameters;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {

class AbstractDrbg$$Lambda$lambda$static$0 : public $EntropySource {
	$class(AbstractDrbg$$Lambda$lambda$static$0, $NO_CLASS_INIT, $EntropySource)
public:
	void init$() {
	}
	virtual $bytes* getEntropy(int32_t minE, int32_t minLen, int32_t maxLen, bool pr) override {
		 return AbstractDrbg::lambda$static$0(minE, minLen, maxLen, pr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractDrbg$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AbstractDrbg$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDrbg$$Lambda$lambda$static$0::*)()>(&AbstractDrbg$$Lambda$lambda$static$0::init$))},
	{"getEntropy", "(IIIZ)[B", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractDrbg$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.provider.AbstractDrbg$$Lambda$lambda$static$0",
	"java.lang.Object",
	"sun.security.provider.EntropySource",
	nullptr,
	methodInfos
};
$Class* AbstractDrbg$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(AbstractDrbg$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractDrbg$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _AbstractDrbg_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDrbg, debug)},
	{"instantiated", "Z", nullptr, $PRIVATE, $field(AbstractDrbg, instantiated)},
	{"reseedCounter", "I", nullptr, $PROTECTED | $VOLATILE, $field(AbstractDrbg, reseedCounter)},
	{"DEFAULT_STRENGTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractDrbg, DEFAULT_STRENGTH)},
	{"mechName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractDrbg, mechName)},
	{"highestSupportedSecurityStrength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, highestSupportedSecurityStrength)},
	{"supportPredictionResistance", "Z", nullptr, $PROTECTED, $field(AbstractDrbg, supportPredictionResistance)},
	{"supportReseeding", "Z", nullptr, $PROTECTED, $field(AbstractDrbg, supportReseeding)},
	{"minLength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, minLength)},
	{"maxLength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, maxLength)},
	{"maxPersonalizationStringLength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, maxPersonalizationStringLength)},
	{"maxAdditionalInputLength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, maxAdditionalInputLength)},
	{"maxNumberOfBytesPerRequest", "I", nullptr, $PROTECTED, $field(AbstractDrbg, maxNumberOfBytesPerRequest)},
	{"reseedInterval", "I", nullptr, $PROTECTED, $field(AbstractDrbg, reseedInterval)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractDrbg, algorithm)},
	{"securityStrength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, securityStrength)},
	{"requestedInstantiationSecurityStrength", "I", nullptr, $PROTECTED, $field(AbstractDrbg, requestedInstantiationSecurityStrength)},
	{"personalizationString", "[B", nullptr, $PROTECTED, $field(AbstractDrbg, personalizationString)},
	{"predictionResistanceFlag", "Z", nullptr, $PRIVATE, $field(AbstractDrbg, predictionResistanceFlag)},
	{"usedf", "Z", nullptr, $PROTECTED, $field(AbstractDrbg, usedf)},
	{"nonce", "[B", nullptr, $PROTECTED, $field(AbstractDrbg, nonce)},
	{"requestedNonce", "[B", nullptr, $PRIVATE, $field(AbstractDrbg, requestedNonce)},
	{"requestedAlgorithm", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractDrbg, requestedAlgorithm)},
	{"es", "Lsun/security/provider/EntropySource;", nullptr, $PRIVATE, $field(AbstractDrbg, es)},
	{"defaultES", "Lsun/security/provider/EntropySource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDrbg, defaultES)},
	{}
};

$MethodInfo _AbstractDrbg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDrbg::*)()>(&AbstractDrbg::init$))},
	{"<init>", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDrbg::*)($SecureRandomParameters*)>(&AbstractDrbg::init$))},
	{"chooseAlgorithmAndStrength", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"configure", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractDrbg::*)($SecureRandomParameters*)>(&AbstractDrbg::configure))},
	{"engineGenerateSeed", "(I)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AbstractDrbg::*)(int32_t)>(&AbstractDrbg::engineGenerateSeed))},
	{"engineGetParameters", "()Ljava/security/SecureRandomParameters;", nullptr, $PROTECTED},
	{"engineNextBytes", "([B)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractDrbg::*)($bytes*)>(&AbstractDrbg::engineNextBytes))},
	{"engineNextBytes", "([BLjava/security/SecureRandomParameters;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractDrbg::*)($bytes*,$SecureRandomParameters*)>(&AbstractDrbg::engineNextBytes))},
	{"engineReseed", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractDrbg::*)($SecureRandomParameters*)>(&AbstractDrbg::engineReseed))},
	{"engineSetSeed", "([B)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractDrbg::*)($bytes*)>(&AbstractDrbg::engineSetSeed))},
	{"generateAlgorithm", "([B[B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"getEntropyInput", "(Z)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(AbstractDrbg::*)(bool)>(&AbstractDrbg::getEntropyInput))},
	{"getEntropyInput", "(IIIZ)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(AbstractDrbg::*)(int32_t,int32_t,int32_t,bool)>(&AbstractDrbg::getEntropyInput))},
	{"getStandardStrength", "(I)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&AbstractDrbg::getStandardStrength))},
	{"initEngine", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"instantiateAlgorithm", "([B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"instantiateIfNecessary", "([B)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(AbstractDrbg::*)($bytes*)>(&AbstractDrbg::instantiateIfNecessary))},
	{"lambda$static$0", "(IIIZ)[B", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$bytes*(*)(int32_t,int32_t,int32_t,bool)>(&AbstractDrbg::lambda$static$0))},
	{"reseedAlgorithm", "([B[B)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDrbg_InnerClassesInfo_[] = {
	{"sun.security.provider.AbstractDrbg$NonceProvider", "sun.security.provider.AbstractDrbg", "NonceProvider", $PRIVATE | $STATIC},
	{"sun.security.provider.AbstractDrbg$SeederHolder", "sun.security.provider.AbstractDrbg", "SeederHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractDrbg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.provider.AbstractDrbg",
	"java.lang.Object",
	nullptr,
	_AbstractDrbg_FieldInfo_,
	_AbstractDrbg_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDrbg_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.AbstractDrbg$NonceProvider,sun.security.provider.AbstractDrbg$SeederHolder"
};

$Object* allocate$AbstractDrbg($Class* clazz) {
	return $of($alloc(AbstractDrbg));
}


$Debug* AbstractDrbg::debug = nullptr;

$EntropySource* AbstractDrbg::defaultES = nullptr;

void AbstractDrbg::reseedAlgorithm($bytes* ei, $bytes* additionalInput) {
	$throwNew($UnsupportedOperationException, "No reseed function"_s);
}

void AbstractDrbg::engineNextBytes($bytes* result) {
	engineNextBytes(result, $($DrbgParameters::nextBytes(-1, this->predictionResistanceFlag, nullptr)));
}

void AbstractDrbg::engineNextBytes($bytes* result, $SecureRandomParameters* params) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(result);
	if (AbstractDrbg::debug != nullptr) {
		$nc(AbstractDrbg::debug)->println($of(this), "nextBytes"_s);
	}
	if ($instanceOf($DrbgParameters$NextBytes, params)) {
		$var($DrbgParameters$NextBytes, dp, $cast($DrbgParameters$NextBytes, params));
		if (result->length > this->maxNumberOfBytesPerRequest) {
		}
		if ($nc(dp)->getStrength() > this->securityStrength) {
			$throwNew($IllegalArgumentException, $$str({"strength too high: "_s, $$str(dp->getStrength())}));
		}
		$var($bytes, ai, $nc(dp)->getAdditionalInput());
		if (ai != nullptr && ai->length > this->maxAdditionalInputLength) {
			$throwNew($IllegalArgumentException, $$str({"ai too long: "_s, $$str(ai->length)}));
		}
		bool pr = dp->getPredictionResistance();
		if (!this->predictionResistanceFlag && pr) {
			$throwNew($IllegalArgumentException, "pr not available"_s);
		}
		instantiateIfNecessary(nullptr);
		if (this->reseedCounter < 0 || this->reseedCounter > this->reseedInterval || pr) {
			$synchronized(this) {
				if (this->reseedCounter < 0 || this->reseedCounter > this->reseedInterval || pr) {
					reseedAlgorithm($(getEntropyInput(pr)), ai);
					$assign(ai, nullptr);
				}
			}
		}
		generateAlgorithm(result, ai);
	} else {
		$throwNew($IllegalArgumentException, $$str({"unknown params type:"_s, $nc($of(params))->getClass()}));
	}
}

void AbstractDrbg::engineReseed($SecureRandomParameters* params$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SecureRandomParameters, params, params$renamed);
	if (AbstractDrbg::debug != nullptr) {
		$nc(AbstractDrbg::debug)->println($of(this), "reseed with params"_s);
	}
	if (!this->supportReseeding) {
		$throwNew($UnsupportedOperationException, "Reseed not supported"_s);
	}
	if (params == nullptr) {
		$assign(params, $DrbgParameters::reseed(this->predictionResistanceFlag, nullptr));
	}
	if ($instanceOf($DrbgParameters$Reseed, params)) {
		$var($DrbgParameters$Reseed, dp, $cast($DrbgParameters$Reseed, params));
		bool pr = $nc(dp)->getPredictionResistance();
		if (!this->predictionResistanceFlag && pr) {
			$throwNew($IllegalArgumentException, "pr not available"_s);
		}
		$var($bytes, ai, dp->getAdditionalInput());
		if (ai != nullptr && ai->length > this->maxAdditionalInputLength) {
			$throwNew($IllegalArgumentException, $$str({"ai too long: "_s, $$str(ai->length)}));
		}
		instantiateIfNecessary(nullptr);
		reseedAlgorithm($(getEntropyInput(pr)), ai);
	} else {
		$throwNew($IllegalArgumentException, $$str({"unknown params type: "_s, $nc($of(params))->getClass()}));
	}
}

$bytes* AbstractDrbg::engineGenerateSeed(int32_t numBytes) {
	$var($bytes, b, $new($bytes, numBytes));
	$SeedGenerator::generateSeed(b);
	return b;
}

void AbstractDrbg::engineSetSeed($bytes* input$renamed) {
	$synchronized(this) {
		$var($bytes, input, input$renamed);
		if (AbstractDrbg::debug != nullptr) {
			$nc(AbstractDrbg::debug)->println($of(this), "setSeed"_s);
		}
		if ($nc(input)->length < this->minLength) {
			$assign(input, $Arrays::copyOf(input, this->minLength));
		} else if (input->length > this->maxLength) {
			$assign(input, $Arrays::copyOf(input, this->maxLength));
		}
		if (!this->instantiated) {
			instantiateIfNecessary(input);
		} else {
			reseedAlgorithm(input, nullptr);
		}
	}
}

$bytes* AbstractDrbg::getEntropyInput(bool isPr) {
	return getEntropyInput(this->minLength, this->minLength, this->maxLength, isPr);
}

$bytes* AbstractDrbg::getEntropyInput(int32_t minEntropy, int32_t minLength, int32_t maxLength, bool pr) {
	$useLocalCurrentObjectStackCache();
	if (AbstractDrbg::debug != nullptr) {
		$nc(AbstractDrbg::debug)->println($of(this), $$str({"getEntropy("_s, $$str(minEntropy), ","_s, $$str(minLength), ","_s, $$str(maxLength), ","_s, $$str(pr), ")"_s}));
	}
	$var($EntropySource, esNow, this->es);
	if (esNow == nullptr) {
		$init($AbstractDrbg$SeederHolder);
		$assign(esNow, pr ? $AbstractDrbg$SeederHolder::prseeder : $AbstractDrbg$SeederHolder::seeder);
	}
	return $nc(esNow)->getEntropy(minEntropy, minLength, maxLength, pr);
}

void AbstractDrbg::init$() {
	$set(this, mechName, "DRBG"_s);
	this->highestSupportedSecurityStrength = 256;
	this->supportPredictionResistance = true;
	this->supportReseeding = true;
	this->maxLength = $Integer::MAX_VALUE;
	this->maxPersonalizationStringLength = $Integer::MAX_VALUE;
	this->maxAdditionalInputLength = $Integer::MAX_VALUE;
	this->maxNumberOfBytesPerRequest = $Integer::MAX_VALUE;
	this->reseedInterval = $Integer::MAX_VALUE;
	this->requestedInstantiationSecurityStrength = -1;
}

void AbstractDrbg::init$($SecureRandomParameters* params) {
	$set(this, mechName, "DRBG"_s);
	this->highestSupportedSecurityStrength = 256;
	this->supportPredictionResistance = true;
	this->supportReseeding = true;
	this->maxLength = $Integer::MAX_VALUE;
	this->maxPersonalizationStringLength = $Integer::MAX_VALUE;
	this->maxAdditionalInputLength = $Integer::MAX_VALUE;
	this->maxNumberOfBytesPerRequest = $Integer::MAX_VALUE;
	this->reseedInterval = $Integer::MAX_VALUE;
	this->requestedInstantiationSecurityStrength = -1;
}

$SecureRandomParameters* AbstractDrbg::engineGetParameters() {
	$init($DrbgParameters$Capability);
	return $DrbgParameters::instantiation(this->securityStrength, this->predictionResistanceFlag ? $DrbgParameters$Capability::PR_AND_RESEED : (this->supportReseeding ? $DrbgParameters$Capability::RESEED_ONLY : $DrbgParameters$Capability::NONE), this->personalizationString);
}

void AbstractDrbg::configure($SecureRandomParameters* params$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SecureRandomParameters, params, params$renamed);
	if (AbstractDrbg::debug != nullptr) {
		$nc(AbstractDrbg::debug)->println($of(this), $$str({"configure "_s, this, " with "_s, params}));
	}
	if (params == nullptr) {
		$init($DrbgParameters$Capability);
		$assign(params, $DrbgParameters::instantiation(-1, $DrbgParameters$Capability::RESEED_ONLY, nullptr));
	}
	if ($instanceOf($MoreDrbgParameters, params)) {
		$var($MoreDrbgParameters, m, $cast($MoreDrbgParameters, params));
		$set(this, requestedNonce, $nc(m)->nonce);
		$set(this, es, m->es);
		$set(this, requestedAlgorithm, m->algorithm);
		this->usedf = m->usedf;
		$assign(params, $DrbgParameters::instantiation(m->strength, m->capability, m->personalizationString));
	}
	if (params != nullptr) {
		if ($instanceOf($DrbgParameters$Instantiation, params)) {
			$var($DrbgParameters$Instantiation, inst, $cast($DrbgParameters$Instantiation, params));
			if (inst->getStrength() > this->highestSupportedSecurityStrength) {
				$throwNew($IllegalArgumentException, $$str({"strength too big: "_s, $$str(inst->getStrength())}));
			}
			if ($nc($(inst->getCapability()))->supportsPredictionResistance() && !this->supportPredictionResistance) {
				$throwNew($IllegalArgumentException, "pr not supported"_s);
			}
			$var($bytes, ps, inst->getPersonalizationString());
			if (ps != nullptr && ps->length > this->maxPersonalizationStringLength) {
				$throwNew($IllegalArgumentException, $$str({"ps too long: "_s, $$str(ps->length)}));
			}
			if ($nc($(inst->getCapability()))->supportsReseeding() && !this->supportReseeding) {
				$throwNew($IllegalArgumentException, "reseed not supported"_s);
			}
			$set(this, personalizationString, ps);
			this->predictionResistanceFlag = $nc($(inst->getCapability()))->supportsPredictionResistance();
			this->requestedInstantiationSecurityStrength = inst->getStrength();
		} else {
			$throwNew($IllegalArgumentException, $$str({"unknown params: "_s, $of(params)->getClass()}));
		}
	}
	chooseAlgorithmAndStrength();
	this->instantiated = false;
	if (AbstractDrbg::debug != nullptr) {
		$nc(AbstractDrbg::debug)->println($of(this), $$str({"configured "_s, this}));
	}
}

void AbstractDrbg::instantiateIfNecessary($bytes* entropy$renamed) {
	$synchronized(this) {
		$var($bytes, entropy, entropy$renamed);
		if (!this->instantiated) {
			if (entropy == nullptr) {
				$assign(entropy, getEntropyInput(this->predictionResistanceFlag));
			}
			if (this->requestedNonce != nullptr) {
				$set(this, nonce, this->requestedNonce);
			} else {
				$set(this, nonce, $AbstractDrbg$NonceProvider::next());
			}
			initEngine();
			instantiateAlgorithm(entropy);
			this->instantiated = true;
		}
	}
}

int32_t AbstractDrbg::getStandardStrength(int32_t input) {
	$init(AbstractDrbg);
	$useLocalCurrentObjectStackCache();
	if (input <= 112) {
		return 112;
	}
	if (input <= 128) {
		return 128;
	}
	if (input <= 192) {
		return 192;
	}
	if (input <= 256) {
		return 256;
	}
	$throwNew($IllegalArgumentException, $$str({"input too big: "_s, $$str(input)}));
}

$String* AbstractDrbg::toString() {
	return $str({this->mechName, ","_s, this->algorithm, ","_s, $$str(this->securityStrength), ","_s, (this->predictionResistanceFlag ? "pr_and_reseed"_s : (this->supportReseeding ? "reseed_only"_s : "none"_s))});
}

$bytes* AbstractDrbg::lambda$static$0(int32_t minE, int32_t minLen, int32_t maxLen, bool pr) {
	$init(AbstractDrbg);
	$var($bytes, result, $new($bytes, minLen));
	$SeedGenerator::generateSeed(result);
	return result;
}

void clinit$AbstractDrbg($Class* class$) {
	$assignStatic(AbstractDrbg::debug, $Debug::getInstance("securerandom"_s, "drbg"_s));
	$assignStatic(AbstractDrbg::defaultES, static_cast<$EntropySource*>($new(AbstractDrbg$$Lambda$lambda$static$0)));
}

AbstractDrbg::AbstractDrbg() {
}

$Class* AbstractDrbg::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractDrbg$$Lambda$lambda$static$0::classInfo$.name)) {
			return AbstractDrbg$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(AbstractDrbg, name, initialize, &_AbstractDrbg_ClassInfo_, clinit$AbstractDrbg, allocate$AbstractDrbg);
	return class$;
}

$Class* AbstractDrbg::class$ = nullptr;

		} // provider
	} // security
} // sun