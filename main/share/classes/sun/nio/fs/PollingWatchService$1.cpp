#include <sun/nio/fs/PollingWatchService$1.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

void PollingWatchService$1::init$($PollingWatchService* this$0) {
	$set(this, this$0, this$0);
}

$Thread* PollingWatchService$1::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, nullptr, r, "FileSystemWatcher"_s, 0, false));
	t->setDaemon(true);
	return t;
}

PollingWatchService$1::PollingWatchService$1() {
}

$Class* PollingWatchService$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/PollingWatchService;)V", nullptr, 0, $method(PollingWatchService$1, init$, void, $PollingWatchService*)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$1, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.PollingWatchService",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.PollingWatchService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.PollingWatchService$1",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.PollingWatchService"
	};
	$loadClass(PollingWatchService$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PollingWatchService$1);
	});
	return class$;
}

$Class* PollingWatchService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun