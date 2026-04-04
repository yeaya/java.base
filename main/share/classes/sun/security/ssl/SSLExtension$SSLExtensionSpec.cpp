#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>
#include <sun/security/ssl/SSLExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLExtension$SSLExtensionSpec::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLExtension$SSLExtensionSpec",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLExtension"
	};
	$loadClass(SSLExtension$SSLExtensionSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLExtension$SSLExtensionSpec);
	});
	return class$;
}

$Class* SSLExtension$SSLExtensionSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun