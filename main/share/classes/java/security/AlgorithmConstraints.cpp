#include <java/security/AlgorithmConstraints.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _AlgorithmConstraints_MethodInfo_[] = {
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $ABSTRACT},
	{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $ABSTRACT},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AlgorithmConstraints_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.AlgorithmConstraints",
	nullptr,
	nullptr,
	nullptr,
	_AlgorithmConstraints_MethodInfo_
};

$Object* allocate$AlgorithmConstraints($Class* clazz) {
	return $of($alloc(AlgorithmConstraints));
}

$Class* AlgorithmConstraints::load$($String* name, bool initialize) {
	$loadClass(AlgorithmConstraints, name, initialize, &_AlgorithmConstraints_ClassInfo_, allocate$AlgorithmConstraints);
	return class$;
}

$Class* AlgorithmConstraints::class$ = nullptr;

	} // security
} // java