#include <java/security/cert/X509Extension.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace java {
	namespace security {
		namespace cert {

$Class* X509Extension::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCriticalExtensionOIDs", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(X509Extension, getCriticalExtensionOIDs, $Set*)},
		{"getExtensionValue", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Extension, getExtensionValue, $bytes*, $String*)},
		{"getNonCriticalExtensionOIDs", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(X509Extension, getNonCriticalExtensionOIDs, $Set*)},
		{"hasUnsupportedCriticalExtension", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509Extension, hasUnsupportedCriticalExtension, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.X509Extension",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(X509Extension, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509Extension);
	});
	return class$;
}

$Class* X509Extension::class$ = nullptr;

		} // cert
	} // security
} // java