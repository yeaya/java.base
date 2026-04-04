#include <LSI.h>
#include <jcpp.h>

#undef LSI

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* LSI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSI, convert, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LSI",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(LSI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSI);
	});
	return class$;
}

$Class* LSI::class$ = nullptr;