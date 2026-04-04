#include <java/security/AlgorithmConstraints.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $Set = ::java::util::Set;

namespace java {
	namespace security {

$Class* AlgorithmConstraints::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AlgorithmConstraints, permits, bool, $Set*, $String*, $AlgorithmParameters*)},
		{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AlgorithmConstraints, permits, bool, $Set*, $Key*)},
		{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AlgorithmConstraints, permits, bool, $Set*, $String*, $Key*, $AlgorithmParameters*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.AlgorithmConstraints",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AlgorithmConstraints, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlgorithmConstraints);
	});
	return class$;
}

$Class* AlgorithmConstraints::class$ = nullptr;

	} // security
} // java