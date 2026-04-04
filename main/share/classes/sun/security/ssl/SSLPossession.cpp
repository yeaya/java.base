#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$bytes* SSLPossession::encode() {
	return $new($bytes, 0);
}

$Class* SSLPossession::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"encode", "()[B", nullptr, $PUBLIC, $virtualMethod(SSLPossession, encode, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLPossession",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLPossession, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLPossession);
	});
	return class$;
}

$Class* SSLPossession::class$ = nullptr;

		} // ssl
	} // security
} // sun