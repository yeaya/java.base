#include <sun/security/util/DerEncoder.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$Class* DerEncoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DerEncoder, derEncode, void, $OutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.DerEncoder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DerEncoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DerEncoder);
	});
	return class$;
}

$Class* DerEncoder::class$ = nullptr;

		} // util
	} // security
} // sun