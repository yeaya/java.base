#include <sun/security/util/LegacyAlgorithmConstraints.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <sun/security/util/AlgorithmDecomposer.h>
#include <jcpp.h>

#undef PROPERTY_TLS_LEGACY_ALGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $Set = ::java::util::Set;
using $AbstractAlgorithmConstraints = ::sun::security::util::AbstractAlgorithmConstraints;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;

namespace sun {
	namespace security {
		namespace util {

$String* LegacyAlgorithmConstraints::PROPERTY_TLS_LEGACY_ALGS = nullptr;

void LegacyAlgorithmConstraints::init$($String* propertyName, $AlgorithmDecomposer* decomposer) {
	$AbstractAlgorithmConstraints::init$(decomposer);
	$set(this, legacyAlgorithms, getAlgorithms(propertyName));
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $AlgorithmParameters* parameters) {
	if (primitives == nullptr || primitives->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return checkAlgorithm(this->legacyAlgorithms, algorithm, this->decomposer);
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $Key* key) {
	if (primitives == nullptr || primitives->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return true;
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $Key* key, $AlgorithmParameters* parameters) {
	if (primitives == nullptr || primitives->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return checkAlgorithm(this->legacyAlgorithms, algorithm, this->decomposer);
}

LegacyAlgorithmConstraints::LegacyAlgorithmConstraints() {
}

void LegacyAlgorithmConstraints::clinit$($Class* clazz) {
	$assignStatic(LegacyAlgorithmConstraints::PROPERTY_TLS_LEGACY_ALGS, "jdk.tls.legacyAlgorithms"_s);
}

$Class* LegacyAlgorithmConstraints::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROPERTY_TLS_LEGACY_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LegacyAlgorithmConstraints, PROPERTY_TLS_LEGACY_ALGS)},
		{"legacyAlgorithms", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LegacyAlgorithmConstraints, legacyAlgorithms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)V", nullptr, $PUBLIC, $method(LegacyAlgorithmConstraints, init$, void, $String*, $AlgorithmDecomposer*)},
		{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL, $virtualMethod(LegacyAlgorithmConstraints, permits, bool, $Set*, $String*, $AlgorithmParameters*)},
		{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $FINAL, $virtualMethod(LegacyAlgorithmConstraints, permits, bool, $Set*, $Key*)},
		{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL, $virtualMethod(LegacyAlgorithmConstraints, permits, bool, $Set*, $String*, $Key*, $AlgorithmParameters*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.LegacyAlgorithmConstraints",
		"sun.security.util.AbstractAlgorithmConstraints",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LegacyAlgorithmConstraints, name, initialize, &classInfo$$, LegacyAlgorithmConstraints::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LegacyAlgorithmConstraints);
	});
	return class$;
}

$Class* LegacyAlgorithmConstraints::class$ = nullptr;

		} // util
	} // security
} // sun