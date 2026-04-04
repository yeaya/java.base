#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$Class* WatchEvent$Kind::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent$Kind, name, $String*)},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent$Kind, type, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.WatchEvent$Kind",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.WatchEvent"
	};
	$loadClass(WatchEvent$Kind, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WatchEvent$Kind);
	});
	return class$;
}

$Class* WatchEvent$Kind::class$ = nullptr;

		} // file
	} // nio
} // java