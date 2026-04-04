#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$Class* WatchEvent$Modifier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent$Modifier, name, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.WatchEvent$Modifier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.WatchEvent"
	};
	$loadClass(WatchEvent$Modifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WatchEvent$Modifier);
	});
	return class$;
}

$Class* WatchEvent$Modifier::class$ = nullptr;

		} // file
	} // nio
} // java