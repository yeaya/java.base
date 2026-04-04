#include <sun/nio/fs/AbstractWatchService$1.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/WatchKey.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;

namespace sun {
	namespace nio {
		namespace fs {

void AbstractWatchService$1::init$($AbstractWatchService* this$0, $Path* dir, $AbstractWatchService* watcher) {
	$set(this, this$0, this$0);
	$AbstractWatchKey::init$(dir, watcher);
}

bool AbstractWatchService$1::isValid() {
	return true;
}

void AbstractWatchService$1::cancel() {
}

AbstractWatchService$1::AbstractWatchService$1() {
}

$Class* AbstractWatchService$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/AbstractWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractWatchService$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/AbstractWatchService;Ljava/nio/file/Path;Lsun/nio/fs/AbstractWatchService;)V", nullptr, 0, $method(AbstractWatchService$1, init$, void, $AbstractWatchService*, $Path*, $AbstractWatchService*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractWatchService$1, cancel, void)},
		{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractWatchService$1, isValid, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.AbstractWatchService",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.AbstractWatchService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.AbstractWatchService$1",
		"sun.nio.fs.AbstractWatchKey",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.AbstractWatchService"
	};
	$loadClass(AbstractWatchService$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractWatchService$1);
	});
	return class$;
}

$Class* AbstractWatchService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun