#include <sun/nio/cs/HistoricallyNamedCharset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$Class* HistoricallyNamedCharset::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HistoricallyNamedCharset, historicalName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.cs.HistoricallyNamedCharset",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HistoricallyNamedCharset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HistoricallyNamedCharset);
	});
	return class$;
}

$Class* HistoricallyNamedCharset::class$ = nullptr;

		} // cs
	} // nio
} // sun