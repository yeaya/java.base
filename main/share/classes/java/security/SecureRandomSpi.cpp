#include <java/security/SecureRandomSpi.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/SecureRandomParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;

namespace java {
	namespace security {

void SecureRandomSpi::init$() {
}

void SecureRandomSpi::init$($SecureRandomParameters* params) {
}

void SecureRandomSpi::engineNextBytes($bytes* bytes, $SecureRandomParameters* params) {
	$throwNew($UnsupportedOperationException);
}

void SecureRandomSpi::engineReseed($SecureRandomParameters* params) {
	$throwNew($UnsupportedOperationException);
}

$SecureRandomParameters* SecureRandomSpi::engineGetParameters() {
	return nullptr;
}

$String* SecureRandomSpi::toString() {
	return $of(this)->getClass()->getSimpleName();
}

SecureRandomSpi::SecureRandomSpi() {
}

$Class* SecureRandomSpi::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecureRandomSpi, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecureRandomSpi, init$, void)},
		{"<init>", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED, $method(SecureRandomSpi, init$, void, $SecureRandomParameters*)},
		{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SecureRandomSpi, engineGenerateSeed, $bytes*, int32_t)},
		{"engineGetParameters", "()Ljava/security/SecureRandomParameters;", nullptr, $PROTECTED, $virtualMethod(SecureRandomSpi, engineGetParameters, $SecureRandomParameters*)},
		{"engineNextBytes", "([B)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SecureRandomSpi, engineNextBytes, void, $bytes*)},
		{"engineNextBytes", "([BLjava/security/SecureRandomParameters;)V", nullptr, $PROTECTED, $virtualMethod(SecureRandomSpi, engineNextBytes, void, $bytes*, $SecureRandomParameters*)},
		{"engineReseed", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED, $virtualMethod(SecureRandomSpi, engineReseed, void, $SecureRandomParameters*)},
		{"engineSetSeed", "([B)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SecureRandomSpi, engineSetSeed, void, $bytes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SecureRandomSpi, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.SecureRandomSpi",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecureRandomSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecureRandomSpi);
	});
	return class$;
}

$Class* SecureRandomSpi::class$ = nullptr;

	} // security
} // java