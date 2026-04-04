#include <sun/security/util/ManifestEntryVerifier$SunProviderHolder.h>
#include <java/security/Provider.h>
#include <sun/security/jca/Providers.h>
#include <sun/security/util/ManifestEntryVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Providers = ::sun::security::jca::Providers;

namespace sun {
	namespace security {
		namespace util {

$Provider* ManifestEntryVerifier$SunProviderHolder::instance = nullptr;

void ManifestEntryVerifier$SunProviderHolder::init$() {
}

void ManifestEntryVerifier$SunProviderHolder::clinit$($Class* clazz) {
	$assignStatic(ManifestEntryVerifier$SunProviderHolder::instance, $Providers::getSunProvider());
}

ManifestEntryVerifier$SunProviderHolder::ManifestEntryVerifier$SunProviderHolder() {
}

$Class* ManifestEntryVerifier$SunProviderHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/security/Provider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManifestEntryVerifier$SunProviderHolder, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ManifestEntryVerifier$SunProviderHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.ManifestEntryVerifier$SunProviderHolder", "sun.security.util.ManifestEntryVerifier", "SunProviderHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.ManifestEntryVerifier$SunProviderHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.ManifestEntryVerifier"
	};
	$loadClass(ManifestEntryVerifier$SunProviderHolder, name, initialize, &classInfo$$, ManifestEntryVerifier$SunProviderHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ManifestEntryVerifier$SunProviderHolder);
	});
	return class$;
}

$Class* ManifestEntryVerifier$SunProviderHolder::class$ = nullptr;

		} // util
	} // security
} // sun