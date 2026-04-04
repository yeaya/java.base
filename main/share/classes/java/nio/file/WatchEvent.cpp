#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;

namespace java {
	namespace nio {
		namespace file {

$Class* WatchEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"context", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent, context, $Object*)},
		{"count", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent, count, int32_t)},
		{"kind", "()Ljava/nio/file/WatchEvent$Kind;", "()Ljava/nio/file/WatchEvent$Kind<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WatchEvent, kind, $WatchEvent$Kind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.WatchEvent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.nio.file.WatchEvent$Modifier,java.nio.file.WatchEvent$Kind"
	};
	$loadClass(WatchEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WatchEvent);
	});
	return class$;
}

$Class* WatchEvent::class$ = nullptr;

		} // file
	} // nio
} // java