#include <sun/security/provider/NativeSeedGenerator.h>
#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SeedGenerator$URLSeedGenerator = ::sun::security::provider::SeedGenerator$URLSeedGenerator;

namespace sun {
	namespace security {
		namespace provider {

void NativeSeedGenerator::init$($String* seedFile) {
	$SeedGenerator$URLSeedGenerator::init$(seedFile);
}

NativeSeedGenerator::NativeSeedGenerator() {
}

$Class* NativeSeedGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(NativeSeedGenerator, init$, void, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.NativeSeedGenerator",
		"sun.security.provider.SeedGenerator$URLSeedGenerator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
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