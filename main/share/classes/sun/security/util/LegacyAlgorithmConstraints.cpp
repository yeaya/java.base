#include <sun/security/util/LegacyAlgorithmConstraints.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AbstractAlgorithmConstraints = ::sun::security::util::AbstractAlgorithmConstraints;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _LegacyAlgorithmConstraints_FieldInfo_[] = {
	{"PROPERTY_TLS_LEGACY_ALGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LegacyAlgorithmConstraints, PROPERTY_TLS_LEGACY_ALGS)},
	{"legacyAlgorithms", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LegacyAlgorithmConstraints, legacyAlgorithms)},
	{}
};

$MethodInfo _LegacyAlgorithmConstraints_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)V", nullptr, $PUBLIC, $method(static_cast<void(LegacyAlgorithmConstraints::*)($String*,$AlgorithmDecomposer*)>(&LegacyAlgorithmConstraints::init$))},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL},
	{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $FINAL},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _LegacyAlgorithmConstraints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.LegacyAlgorithmConstraints",
	"sun.security.util.AbstractAlgorithmConstraints",
	nullptr,
	_LegacyAlgorithmConstraints_FieldInfo_,
	_LegacyAlgorithmConstraints_MethodInfo_
};

$Object* allocate$LegacyAlgorithmConstraints($Class* clazz) {
	return $of($alloc(LegacyAlgorithmConstraints));
}

$String* LegacyAlgorithmConstraints::PROPERTY_TLS_LEGACY_ALGS = nullptr;

void LegacyAlgorithmConstraints::init$($String* propertyName, $AlgorithmDecomposer* decomposer) {
	$AbstractAlgorithmConstraints::init$(decomposer);
	$set(this, legacyAlgorithms, getAlgorithms(propertyName));
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $AlgorithmParameters* parameters) {
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return checkAlgorithm(this->legacyAlgorithms, algorithm, this->decomposer);
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $Key* key) {
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return true;
}

bool LegacyAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $Key* key, $AlgorithmParameters* parameters) {
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "The primitives cannot be null or empty."_s);
	}
	return checkAlgorithm(this->legacyAlgorithms, algorithm, this->decomposer);
}

LegacyAlgorithmConstraints::LegacyAlgorithmConstraints() {
}

void clinit$LegacyAlgorithmConstraints($Class* class$) {
	$assignStatic(LegacyAlgorithmConstraints::PROPERTY_TLS_LEGACY_ALGS, "jdk.tls.legacyAlgorithms"_s);
}

$Class* LegacyAlgorithmConstraints::load$($String* name, bool initialize) {
	$loadClass(LegacyAlgorithmConstraints, name, initialize, &_LegacyAlgorithmConstraints_ClassInfo_, clinit$LegacyAlgorithmConstraints, allocate$LegacyAlgorithmConstraints);
	return class$;
}

$Class* LegacyAlgorithmConstraints::class$ = nullptr;

		} // util
	} // security
} // sun