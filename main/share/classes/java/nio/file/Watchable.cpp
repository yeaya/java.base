#include <java/nio/file/Watchable.h>

#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <jcpp.h>

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _Watchable_MethodInfo_[] = {
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Watchable, register$, $WatchKey*, $WatchService*, $WatchEvent$KindArray*, $WatchEvent$ModifierArray*), "java.io.IOException"},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Watchable, register$, $WatchKey*, $WatchService*, $WatchEvent$KindArray*), "java.io.IOException"},
	{}
};

$ClassInfo _Watchable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.Watchable",
	nullptr,
	nullptr,
	nullptr,
	_Watchable_MethodInfo_
};

$Object* allocate$Watchable($Class* clazz) {
	return $of($alloc(Watchable));
}

$Class* Watchable::load$($String* name, bool initialize) {
	$loadClass(Watchable, name, initialize, &_Watchable_ClassInfo_, allocate$Watchable);
	return class$;
}

$Class* Watchable::class$ = nullptr;

		} // file
	} // nio
} // java