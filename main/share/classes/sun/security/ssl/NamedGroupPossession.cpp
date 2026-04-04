#include <sun/security/ssl/NamedGroupPossession.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $NamedGroup = ::sun::security::ssl::NamedGroup;

namespace sun {
	namespace security {
		namespace ssl {

$Class* NamedGroupPossession::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getNamedGroup", "()Lsun/security/ssl/NamedGroup;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupPossession, getNamedGroup, $NamedGroup*)},
		{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupPossession, getPrivateKey, $PrivateKey*)},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroupPossession, getPublicKey, $PublicKey*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.NamedGroupPossession",
		nullptr,
		"sun.security.ssl.SSLPossession",
		nullptr,
		methodInfos$$
	};
	$loadClass(NamedGroupPossession, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedGroupPossession);
	});
	return class$;
}

$Class* NamedGroupPossession::class$ = nullptr;

		} // ssl
	} // security
} // sun