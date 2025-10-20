#include <sun/security/util/DisabledAlgorithmConstraints.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/interfaces/ECKey.h>
#include <java/security/interfaces/XECKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/NamedParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <sun/security/util/AlgorithmDecomposer.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/CurveDB.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints$CertPathHolder.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraints.h>
#include <sun/security/util/DisabledAlgorithmConstraints$JarHolder.h>
#include <sun/security/util/NamedCurve.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED
#undef CONSTRAINTS
#undef ENGLISH
#undef PROPERTY_CERTPATH_DISABLED_ALGS
#undef PROPERTY_DISABLED_EC_CURVES
#undef PROPERTY_JAR_DISABLED_ALGS
#undef PROPERTY_SECURITY_LEGACY_ALGS
#undef PROPERTY_TLS_DISABLED_ALGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $ECKey = ::java::security::interfaces::ECKey;
using $XECKey = ::java::security::interfaces::XECKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $NamedParameterSpec = ::java::security::spec::NamedParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $AbstractAlgorithmConstraints = ::sun::security::util::AbstractAlgorithmConstraints;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $CurveDB = ::sun::security::util::CurveDB;
using $Debug = ::sun::security::util::Debug;
using $DisabledAlgorithmConstraints$CertPathHolder = ::sun::security::util::DisabledAlgorithmConstraints$CertPathHolder;
using $DisabledAlgorithmConstraints$Constraints = ::sun::security::util::DisabledAlgorithmConstraints$Constraints;
using $DisabledAlgorithmConstraints$JarHolder = ::sun::security::util::DisabledAlgorithmConstraints$JarHolder;
using $NamedCurve = ::sun::security::util::NamedCurve;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, debug)},
	{"PROPERTY_CERTPATH_DISABLED_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, PROPERTY_CERTPATH_DISABLED_ALGS)},
	{"PROPERTY_SECURITY_LEGACY_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, PROPERTY_SECURITY_LEGACY_ALGS)},
	{"PROPERTY_TLS_DISABLED_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, PROPERTY_TLS_DISABLED_ALGS)},
	{"PROPERTY_JAR_DISABLED_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, PROPERTY_JAR_DISABLED_ALGS)},
	{"PROPERTY_DISABLED_EC_CURVES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints, PROPERTY_DISABLED_EC_CURVES)},
	{"disabledAlgorithms", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DisabledAlgorithmConstraints, disabledAlgorithms)},
	{"algorithmConstraints", "Lsun/security/util/DisabledAlgorithmConstraints$Constraints;", nullptr, $PRIVATE | $FINAL, $field(DisabledAlgorithmConstraints, algorithmConstraints)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DisabledAlgorithmConstraints::*)($String*)>(&DisabledAlgorithmConstraints::init$))},
	{"<init>", "(Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)V", nullptr, $PUBLIC, $method(static_cast<void(DisabledAlgorithmConstraints::*)($String*,$AlgorithmDecomposer*)>(&DisabledAlgorithmConstraints::init$))},
	{"certPathConstraints", "()Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DisabledAlgorithmConstraints*(*)()>(&DisabledAlgorithmConstraints::certPathConstraints))},
	{"checkConstraints", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PRIVATE, $method(static_cast<bool(DisabledAlgorithmConstraints::*)($Set*,$String*,$Key*,$AlgorithmParameters*)>(&DisabledAlgorithmConstraints::checkConstraints))},
	{"getNamedCurveFromKey", "(Ljava/security/Key;)Ljava/util/List;", "(Ljava/security/Key;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Key*)>(&DisabledAlgorithmConstraints::getNamedCurveFromKey))},
	{"jarConstraints", "()Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DisabledAlgorithmConstraints*(*)()>(&DisabledAlgorithmConstraints::jarConstraints))},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL},
	{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $FINAL},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL},
	{"permits", "(Ljava/lang/String;Ljava/security/AlgorithmParameters;Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(DisabledAlgorithmConstraints::*)($String*,$AlgorithmParameters*,$ConstraintsParameters*)>(&DisabledAlgorithmConstraints::permits)), "java.security.cert.CertPathValidatorException"},
	{"permits", "(Ljava/security/AlgorithmParameters;Lsun/security/util/ConstraintsParameters;)V", nullptr, $PRIVATE, $method(static_cast<void(DisabledAlgorithmConstraints::*)($AlgorithmParameters*,$ConstraintsParameters*)>(&DisabledAlgorithmConstraints::permits)), "java.security.cert.CertPathValidatorException"},
	{"permits", "(Ljava/lang/String;Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(DisabledAlgorithmConstraints::*)($String*,$ConstraintsParameters*)>(&DisabledAlgorithmConstraints::permits)), "java.security.cert.CertPathValidatorException"},
	{"permitsPSSParams", "(Ljava/security/AlgorithmParameters;Lsun/security/util/ConstraintsParameters;)V", nullptr, $PRIVATE, $method(static_cast<void(DisabledAlgorithmConstraints::*)($AlgorithmParameters*,$ConstraintsParameters*)>(&DisabledAlgorithmConstraints::permitsPSSParams)), "java.security.cert.CertPathValidatorException"},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint", "sun.security.util.DisabledAlgorithmConstraints", "DisabledConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$KeySizeConstraint", "sun.security.util.DisabledAlgorithmConstraints", "KeySizeConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$UsageConstraint", "sun.security.util.DisabledAlgorithmConstraints", "UsageConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$DenyAfterConstraint", "sun.security.util.DisabledAlgorithmConstraints", "DenyAfterConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$jdkCAConstraint", "sun.security.util.DisabledAlgorithmConstraints", "jdkCAConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraints", "sun.security.util.DisabledAlgorithmConstraints", "Constraints", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$JarHolder", "sun.security.util.DisabledAlgorithmConstraints", "JarHolder", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$CertPathHolder", "sun.security.util.DisabledAlgorithmConstraints", "CertPathHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints",
	"sun.security.util.AbstractAlgorithmConstraints",
	nullptr,
	_DisabledAlgorithmConstraints_FieldInfo_,
	_DisabledAlgorithmConstraints_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints$1,sun.security.util.DisabledAlgorithmConstraints$DisabledConstraint,sun.security.util.DisabledAlgorithmConstraints$KeySizeConstraint,sun.security.util.DisabledAlgorithmConstraints$UsageConstraint,sun.security.util.DisabledAlgorithmConstraints$DenyAfterConstraint,sun.security.util.DisabledAlgorithmConstraints$jdkCAConstraint,sun.security.util.DisabledAlgorithmConstraints$Constraint,sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator,sun.security.util.DisabledAlgorithmConstraints$Constraints,sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder,sun.security.util.DisabledAlgorithmConstraints$JarHolder,sun.security.util.DisabledAlgorithmConstraints$CertPathHolder"
};

$Object* allocate$DisabledAlgorithmConstraints($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints));
}

$Debug* DisabledAlgorithmConstraints::debug = nullptr;
$String* DisabledAlgorithmConstraints::PROPERTY_CERTPATH_DISABLED_ALGS = nullptr;
$String* DisabledAlgorithmConstraints::PROPERTY_SECURITY_LEGACY_ALGS = nullptr;
$String* DisabledAlgorithmConstraints::PROPERTY_TLS_DISABLED_ALGS = nullptr;
$String* DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS = nullptr;
$String* DisabledAlgorithmConstraints::PROPERTY_DISABLED_EC_CURVES = nullptr;

DisabledAlgorithmConstraints* DisabledAlgorithmConstraints::certPathConstraints() {
	$init(DisabledAlgorithmConstraints);
	$init($DisabledAlgorithmConstraints$CertPathHolder);
	return $DisabledAlgorithmConstraints$CertPathHolder::CONSTRAINTS;
}

DisabledAlgorithmConstraints* DisabledAlgorithmConstraints::jarConstraints() {
	$init(DisabledAlgorithmConstraints);
	$init($DisabledAlgorithmConstraints$JarHolder);
	return $DisabledAlgorithmConstraints$JarHolder::CONSTRAINTS;
}

void DisabledAlgorithmConstraints::init$($String* propertyName) {
	DisabledAlgorithmConstraints::init$(propertyName, $$new($AlgorithmDecomposer));
}

void DisabledAlgorithmConstraints::init$($String* propertyName, $AlgorithmDecomposer* decomposer) {
	$useLocalCurrentObjectStackCache();
	$AbstractAlgorithmConstraints::init$(decomposer);
	$set(this, disabledAlgorithms, getAlgorithms(propertyName));
	int32_t ecindex = -1;
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc(this->disabledAlgorithms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				if ($nc(s)->regionMatches(true, 0, "include "_s, 0, 8)) {
					if (s->regionMatches(true, 8, DisabledAlgorithmConstraints::PROPERTY_DISABLED_EC_CURVES, 0, $nc(DisabledAlgorithmConstraints::PROPERTY_DISABLED_EC_CURVES)->length())) {
						ecindex = i;
						break;
					}
				}
				++i;
			}
		}
	}
	if (ecindex > -1) {
		$nc(this->disabledAlgorithms)->remove(ecindex);
		$nc(this->disabledAlgorithms)->addAll(ecindex, $(getAlgorithms(DisabledAlgorithmConstraints::PROPERTY_DISABLED_EC_CURVES)));
	}
	$set(this, algorithmConstraints, $new($DisabledAlgorithmConstraints$Constraints, propertyName, this->disabledAlgorithms));
}

bool DisabledAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $AlgorithmParameters* parameters) {
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	if (!checkAlgorithm(this->disabledAlgorithms, algorithm, this->decomposer)) {
		return false;
	}
	if (parameters != nullptr) {
		return $nc(this->algorithmConstraints)->permits(algorithm, parameters);
	}
	return true;
}

bool DisabledAlgorithmConstraints::permits($Set* primitives, $Key* key) {
	return checkConstraints(primitives, ""_s, key, nullptr);
}

bool DisabledAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $Key* key, $AlgorithmParameters* parameters) {
	if (algorithm == nullptr || $nc(algorithm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "No algorithm name specified"_s);
	}
	return checkConstraints(primitives, algorithm, key, parameters);
}

void DisabledAlgorithmConstraints::permits($String* algorithm, $AlgorithmParameters* ap, $ConstraintsParameters* cp) {
	permits(algorithm, cp);
	if (ap != nullptr) {
		permits(ap, cp);
	}
}

void DisabledAlgorithmConstraints::permits($AlgorithmParameters* ap, $ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	{
		$init($Locale);
		$var($String, s7603$, $nc($($nc(ap)->getAlgorithm()))->toUpperCase($Locale::ENGLISH));
		int32_t tmp7603$ = -1;
		switch (s7603$->hashCode()) {
		case 0x69D3B2A4:
			{
				if (s7603$->equals("RSASSA-PSS"_s)) {
					tmp7603$ = 0;
				}
				break;
			}
		}
		switch (tmp7603$) {
		case 0:
			{
				permitsPSSParams(ap, cp);
				break;
			}
		default:
			{}
		}
	}
}

void DisabledAlgorithmConstraints::permitsPSSParams($AlgorithmParameters* ap, $ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($PSSParameterSpec);
		$var($PSSParameterSpec, pssParams, $cast($PSSParameterSpec, $nc(ap)->getParameterSpec($PSSParameterSpec::class$)));
		$var($String, digestAlg, $nc(pssParams)->getDigestAlgorithm());
		permits(digestAlg, cp);
		$var($AlgorithmParameterSpec, mgfParams, pssParams->getMGFParameters());
		if ($instanceOf($MGF1ParameterSpec, mgfParams)) {
			$var($String, mgfDigestAlg, $nc(($cast($MGF1ParameterSpec, mgfParams)))->getDigestAlgorithm());
			if (!$nc(mgfDigestAlg)->equalsIgnoreCase(digestAlg)) {
				permits(mgfDigestAlg, cp);
			}
		}
	} catch ($InvalidParameterSpecException&) {
		$catch();
	}
}

void DisabledAlgorithmConstraints::permits($String* algorithm, $ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(cp)->getKeys()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Key, key, $cast($Key, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($(getNamedCurveFromKey(key)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, curve, $cast($String, i$->next()));
						{
							if (!checkAlgorithm(this->disabledAlgorithms, curve, this->decomposer)) {
								$init($CertPathValidatorException$BasicReason);
								$throwNew($CertPathValidatorException, $$str({"Algorithm constraints check failed on disabled algorithm: "_s, curve}), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
							}
						}
					}
				}
			}
		}
	}
	$nc(this->algorithmConstraints)->permits(algorithm, cp);
}

$List* DisabledAlgorithmConstraints::getNamedCurveFromKey($Key* key) {
	$init(DisabledAlgorithmConstraints);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ECKey, key)) {
		$var($NamedCurve, nc, $CurveDB::lookup($($nc(($cast($ECKey, key)))->getParams())));
		return (nc == nullptr ? $List::of() : $Arrays::asList($($nc(nc)->getNameAndAliases())));
	} else if ($instanceOf($XECKey, key)) {
		return $List::of($($of($nc(($cast($NamedParameterSpec, $($nc(($cast($XECKey, key)))->getParams()))))->getName())));
	} else {
		return $List::of();
	}
}

bool DisabledAlgorithmConstraints::checkConstraints($Set* primitives, $String* algorithm, $Key* key, $AlgorithmParameters* parameters) {
	$useLocalCurrentObjectStackCache();
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "The key cannot be null"_s);
	}
	if (algorithm != nullptr && !algorithm->isEmpty()) {
		if (!permits(primitives, algorithm, parameters)) {
			return false;
		}
	}
	if (!permits(primitives, $($nc(key)->getAlgorithm()), ($AlgorithmParameters*)nullptr)) {
		return false;
	}
	{
		$var($Iterator, i$, $nc($(getNamedCurveFromKey(key)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, curve, $cast($String, i$->next()));
			{
				if (!permits(primitives, curve, ($AlgorithmParameters*)nullptr)) {
					return false;
				}
			}
		}
	}
	return $nc(this->algorithmConstraints)->permits(key);
}

void clinit$DisabledAlgorithmConstraints($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints::PROPERTY_CERTPATH_DISABLED_ALGS, "jdk.certpath.disabledAlgorithms"_s);
	$assignStatic(DisabledAlgorithmConstraints::PROPERTY_SECURITY_LEGACY_ALGS, "jdk.security.legacyAlgorithms"_s);
	$assignStatic(DisabledAlgorithmConstraints::PROPERTY_TLS_DISABLED_ALGS, "jdk.tls.disabledAlgorithms"_s);
	$assignStatic(DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS, "jdk.jar.disabledAlgorithms"_s);
	$assignStatic(DisabledAlgorithmConstraints::PROPERTY_DISABLED_EC_CURVES, "jdk.disabled.namedCurves"_s);
	$assignStatic(DisabledAlgorithmConstraints::debug, $Debug::getInstance("certpath"_s));
}

DisabledAlgorithmConstraints::DisabledAlgorithmConstraints() {
}

$Class* DisabledAlgorithmConstraints::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints, name, initialize, &_DisabledAlgorithmConstraints_ClassInfo_, clinit$DisabledAlgorithmConstraints, allocate$DisabledAlgorithmConstraints);
	return class$;
}

$Class* DisabledAlgorithmConstraints::class$ = nullptr;

		} // util
	} // security
} // sun