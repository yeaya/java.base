#include <java/nio/file/WatchKey.h>
#include <java/nio/file/Watchable.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Watchable = ::java::nio::file::Watchable;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {

$Class* WatchKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchKey, cancel, void)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchKey, isValid, bool)},
		{"pollEvents", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/WatchEvent<*>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WatchKey, pollEvents, $List*)},
		{"reset", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchKey, reset, bool)},
		{"watchable", "()Ljava/nio/file/Watchable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WatchKey, watchable, $Watchable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.WatchKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WatchKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WatchKey);
	});
	return class$;
}

$Class* WatchKey::class$ = nullptr;

		} // file
	} // nio
} // java