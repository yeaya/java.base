#include <java/net/FileNameMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {

$Class* FileNameMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileNameMap, getContentTypeFor, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.FileNameMap",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileNameMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileNameMap);
	});
	return class$;
}

$Class* FileNameMap::class$ = nullptr;

	} // net
} // java