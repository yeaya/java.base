#include <sun/security/provider/NativeSeedGenerator.h>
#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <sun/security/provider/SeedGenerator.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SeedGenerator = ::sun::security::provider::SeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

void NativeSeedGenerator::init$($String* seedFile) {
	$SeedGenerator::init$();
	if (!nativeGenerateSeed($$new($bytes, 2))) {
		$throwNew($IOException, "Required native CryptoAPI features not  available on this machine"_s);
	}
}

bool NativeSeedGenerator::nativeGenerateSeed($bytes* result) {
	$init(NativeSeedGenerator);
	$prepareNativeStatic(nativeGenerateSeed, bool, $bytes* result);
	bool $ret = $invokeNativeStatic(result);
	$finishNativeStatic();
	return $ret;
}

void NativeSeedGenerator::getSeedBytes($bytes* result) {
	if (nativeGenerateSeed(result) == false) {
		$throwNew($InternalError, "Unexpected CryptoAPI failure generating seed"_s);
	}
}

NativeSeedGenerator::NativeSeedGenerator() {
}

$Class* NativeSeedGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(NativeSeedGenerator, init$, void, $String*), "java.io.IOException"},
		{"getSeedBytes", "([B)V", nullptr, 0, $virtualMethod(NativeSeedGenerator, getSeedBytes, void, $bytes*)},
		{"nativeGenerateSeed", "([B)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSeedGenerator, nativeGenerateSeed, bool, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.NativeSeedGenerator",
		"sun.security.provider.SeedGenerator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeSeedGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeSeedGenerator);
	});
	return class$;
}

$Class* NativeSeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun