#include <sun/nio/fs/PollingWatchService$2.h>
#include <java/nio/file/Path.h>
#include <java/util/Set.h>
#include <sun/nio/fs/PollingWatchService$PollingWatchKey.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Set = ::java::util::Set;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

void PollingWatchService$2::init$($PollingWatchService* this$0, $Path* val$path, $Set* val$eventSet, int32_t val$value) {
	$set(this, this$0, this$0);
	$set(this, val$path, val$path);
	$set(this, val$eventSet, val$eventSet);
	this->val$value = val$value;
}

$Object* PollingWatchService$2::run() {
	return this->this$0->doPrivilegedRegister(this->val$path, this->val$eventSet, this->val$value);
}

PollingWatchService$2::PollingWatchService$2() {
}

$Class* PollingWatchService$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, this$0)},
		{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$value)},
		{"val$eventSet", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$eventSet)},
		{"val$path", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$2, val$path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/PollingWatchService;Ljava/nio/file/Path;Ljava/util/Set;I)V", "()V", 0, $method(PollingWatchService$2, init$, void, $PollingWatchService*, $Path*, $Set*, int32_t)},
		{"run", "()Lsun/nio/fs/PollingWatchService$PollingWatchKey;", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$2, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.PollingWatchService",
		"register",
		"(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.PollingWatchService$2", nullptr, nullptr, 0},
		{"sun.nio.fs.PollingWatchService$PollingWatchKey", "sun.nio.fs.PollingWatchService", "PollingWatchKey", $PRIVATE},
		{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.PollingWatchService$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Lsun/nio/fs/PollingWatchService$PollingWatchKey;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.PollingWatchService"
	};
	$loadClass(PollingWatchService$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PollingWatchService$2);
	});
	return class$;
}

$Class* PollingWatchService$2::class$ = nullptr;

		} // fs
	} // nio
} // sun