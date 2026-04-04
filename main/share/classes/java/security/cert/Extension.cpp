#include <java/security/cert/Extension.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$Class* Extension::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, encode, void, $OutputStream*), "java.io.IOException"},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, getId, $String*)},
		{"getValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, getValue, $bytes*)},
		{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Extension, isCritical, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.cert.Extension",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Extension, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Extension);
	});
	return class$;
}

$Class* Extension::class$ = nullptr;

		} // cert
	} // security
} // java