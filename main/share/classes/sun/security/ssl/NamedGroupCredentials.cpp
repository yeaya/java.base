#include <sun/security/ssl/NamedGroupCredentials.h>
#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $NamedGroup = ::sun::security::ssl::NamedGroup;

namespace sun {
	namespace security {
		namespace ssl {

$Class* NamedGroupCredentials::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupCredentials, getNamedGroup, $NamedGroup*)},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupCredentials, getPublicKey, $PublicKey*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.NamedGroupCredentials",
		nullptr,
		"sun.security.ssl.SSLCredentials",
		nullptr,
		methodInfos$$
	};
	$loadClass(NamedGroupCredentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedGroupCredentials);
	});
	return class$;
}

$Class* NamedGroupCredentials::class$ = nullptr;

		} // ssl
	} // security
} // sun