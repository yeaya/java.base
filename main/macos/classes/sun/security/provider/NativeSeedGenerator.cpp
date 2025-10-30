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

$MethodInfo _NativeSeedGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NativeSeedGenerator::*)($String*)>(&NativeSeedGenerator::init$)), "java.io.IOException"},
	{}
};

$InnerClassInfo _NativeSeedGenerator_InnerClassesInfo_[] = {
	{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
	{}
};

$ClassInfo _NativeSeedGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.NativeSeedGenerator",
	"sun.security.provider.SeedGenerator$URLSeedGenerator",
	nullptr,
	nullptr,
	_NativeSeedGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_NativeSeedGenerator_InnerClassesInfo_
};

$Object* allocate$NativeSeedGenerator($Class* clazz) {
	return $of($alloc(NativeSeedGenerator));
}

void NativeSeedGenerator::init$($String* seedFile) {
	$SeedGenerator$URLSeedGenerator::init$(seedFile);
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