#include <sun/nio/fs/PollingWatchService$PollingWatchKey$1.h>
#include <sun/nio/fs/PollingWatchService$PollingWatchKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PollingWatchService$PollingWatchKey = ::sun::nio::fs::PollingWatchService$PollingWatchKey;

namespace sun {
	namespace nio {
		namespace fs {

void PollingWatchService$PollingWatchKey$1::init$($PollingWatchService$PollingWatchKey* this$1) {
	$set(this, this$1, this$1);
}

void PollingWatchService$PollingWatchKey$1::run() {
	this->this$1->poll();
}

PollingWatchService$PollingWatchKey$1::PollingWatchService$PollingWatchKey$1() {
}

$Class* PollingWatchService$PollingWatchKey$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/nio/fs/PollingWatchService$PollingWatchKey;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$PollingWatchKey$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/PollingWatchService$PollingWatchKey;)V", nullptr, 0, $method(PollingWatchService$PollingWatchKey$1, init$, void, $PollingWatchService$PollingWatchKey*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$PollingWatchKey$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.PollingWatchService$PollingWatchKey",
		"enable",
		"(Ljava/util/Set;J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.PollingWatchService$PollingWatchKey", "sun.nio.fs.PollingWatchService", "PollingWatchKey", $PRIVATE},
		{"sun.nio.fs.PollingWatchService$PollingWatchKey$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.PollingWatchService$PollingWatchKey$1",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(PollingWatchService$PollingWatchKey$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PollingWatchService$PollingWatchKey$1);
	});
	return class$;
}

$Class* PollingWatchService$PollingWatchKey$1::class$ = nullptr;

		} // fs
	} // nio
} // sun