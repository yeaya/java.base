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

$MethodInfo _NativeSeedGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NativeSeedGenerator::*)($String*)>(&NativeSeedGenerator::init$)), "java.io.IOException"},
	{"getSeedBytes", "([B)V", nullptr, 0},
	{"nativeGenerateSeed", "([B)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($bytes*)>(&NativeSeedGenerator::nativeGenerateSeed))},
	{}
};

#define _METHOD_INDEX_nativeGenerateSeed 2

$ClassInfo _NativeSeedGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.NativeSeedGenerator",
	"sun.security.provider.SeedGenerator",
	nullptr,
	nullptr,
	_NativeSeedGenerator_MethodInfo_
};

$Object* allocate$NativeSeedGenerator($Class* clazz) {
	return $of($alloc(NativeSeedGenerator));
}

void NativeSeedGenerator::init$($String* seedFile) {
	$SeedGenerator::init$();
	if (!nativeGenerateSeed($$new($bytes, 2))) {
		$throwNew($IOException, "Required native CryptoAPI features not  available on this machine"_s);
	}
}

bool NativeSeedGenerator::nativeGenerateSeed($bytes* result) {
	$init(NativeSeedGenerator);
	bool $ret = false;
	$prepareNativeStatic(NativeSeedGenerator, nativeGenerateSeed, bool, $bytes* result);
	$ret = $invokeNativeStatic(result);
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
	$loadClass(NativeSeedGenerator, name, initialize, &_NativeSeedGenerator_ClassInfo_, allocate$NativeSeedGenerator);
	return class$;
}

$Class* NativeSeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun