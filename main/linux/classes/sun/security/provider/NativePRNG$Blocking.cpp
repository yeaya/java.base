#include <sun/security/provider/NativePRNG$Blocking.h>
#include <java/lang/AssertionError.h>
#include <java/security/SecureRandomSpi.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef BLOCKING
#undef INSTANCE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandomSpi = ::java::security::SecureRandomSpi;
using $NativePRNG = ::sun::security::provider::NativePRNG;
using $NativePRNG$RandomIO = ::sun::security::provider::NativePRNG$RandomIO;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;

namespace sun {
	namespace security {
		namespace provider {

$NativePRNG$RandomIO* NativePRNG$Blocking::INSTANCE = nullptr;

bool NativePRNG$Blocking::isAvailable() {
	$init(NativePRNG$Blocking);
	return NativePRNG$Blocking::INSTANCE != nullptr;
}

void NativePRNG$Blocking::init$() {
	$SecureRandomSpi::init$();
	if (NativePRNG$Blocking::INSTANCE == nullptr) {
		$throwNew($AssertionError, $of("NativePRNG$Blocking not available"_s));
	}
}

void NativePRNG$Blocking::engineSetSeed($bytes* seed) {
	$nc(NativePRNG$Blocking::INSTANCE)->implSetSeed(seed);
}

void NativePRNG$Blocking::engineNextBytes($bytes* bytes) {
	$nc(NativePRNG$Blocking::INSTANCE)->implNextBytes(bytes);
}

$bytes* NativePRNG$Blocking::engineGenerateSeed(int32_t numBytes) {
	return $nc(NativePRNG$Blocking::INSTANCE)->implGenerateSeed(numBytes);
}

void NativePRNG$Blocking::clinit$($Class* clazz) {
	$init($NativePRNG$Variant);
	$assignStatic(NativePRNG$Blocking::INSTANCE, $NativePRNG::initIO($NativePRNG$Variant::BLOCKING));
}

NativePRNG$Blocking::NativePRNG$Blocking() {
}

$Class* NativePRNG$Blocking::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NativePRNG$Blocking, serialVersionUID)},
		{"INSTANCE", "Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG$Blocking, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativePRNG$Blocking, init$, void)},
		{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED, $virtualMethod(NativePRNG$Blocking, engineGenerateSeed, $bytes*, int32_t)},
		{"engineNextBytes", "([B)V", nullptr, $PROTECTED, $virtualMethod(NativePRNG$Blocking, engineNextBytes, void, $bytes*)},
		{"engineSetSeed", "([B)V", nullptr, $PROTECTED, $virtualMethod(NativePRNG$Blocking, engineSetSeed, void, $bytes*)},
		{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(NativePRNG$Blocking, isAvailable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.NativePRNG$Blocking",
		"java.security.SecureRandomSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.NativePRNG"
	};
	$loadClass(NativePRNG$Blocking, name, initialize, &classInfo$$, NativePRNG$Blocking::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativePRNG$Blocking);
	});
	return class$;
}

$Class* NativePRNG$Blocking::class$ = nullptr;

		} // provider
	} // security
} // sun