#include <java/net/ProtocolFamily.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$Class* ProtocolFamily::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProtocolFamily, name, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.ProtocolFamily",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ProtocolFamily, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProtocolFamily);
	});
	return class$;
}

$Class* ProtocolFamily::class$ = nullptr;

	} // net
} // java