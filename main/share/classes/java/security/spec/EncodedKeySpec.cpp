#include <java/security/spec/EncodedKeySpec.h>
#include <java/security/spec/EncodedKeySpec$1.h>
#include <java/util/Arrays.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EncodedKeySpec$1 = ::java::security::spec::EncodedKeySpec$1;
using $Arrays = ::java::util::Arrays;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace security {
		namespace spec {

void EncodedKeySpec::init$($bytes* encodedKey) {
	$set(this, encodedKey, $cast($bytes, $nc(encodedKey)->clone()));
}

void EncodedKeySpec::init$($bytes* encodedKey, $String* algorithm) {
	if (algorithm == nullptr) {
		$throwNew($NullPointerException, "algorithm name may not be null"_s);
	}
	if ($nc(algorithm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "algorithm name may not be empty"_s);
	}
	$set(this, encodedKey, $cast($bytes, $nc(encodedKey)->clone()));
	$set(this, algorithmName, algorithm);
}

$String* EncodedKeySpec::getAlgorithm() {
	return this->algorithmName;
}

$bytes* EncodedKeySpec::getEncoded() {
	return $cast($bytes, $nc(this->encodedKey)->clone());
}

void EncodedKeySpec::clear() {
	$Arrays::fill(this->encodedKey, (int8_t)0);
}

void EncodedKeySpec::clinit$($Class* clazz) {
	{
		$SharedSecrets::setJavaSecuritySpecAccess($$new($EncodedKeySpec$1));
	}
}

EncodedKeySpec::EncodedKeySpec() {
}

$Class* EncodedKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encodedKey", "[B", nullptr, $PRIVATE, $field(EncodedKeySpec, encodedKey)},
		{"algorithmName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EncodedKeySpec, algorithmName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(EncodedKeySpec, init$, void, $bytes*)},
		{"<init>", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $method(EncodedKeySpec, init$, void, $bytes*, $String*)},
		{"clear", "()V", nullptr, 0, $virtualMethod(EncodedKeySpec, clear, void)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EncodedKeySpec, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(EncodedKeySpec, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EncodedKeySpec, getFormat, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.spec.EncodedKeySpec$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.spec.EncodedKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.security.spec.EncodedKeySpec$1"
	};
	$loadClass(EncodedKeySpec, name, initialize, &classInfo$$, EncodedKeySpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EncodedKeySpec);
	});
	return class$;
}

$Class* EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java