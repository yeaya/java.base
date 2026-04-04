#include <sun/nio/fs/AbstractPoller$1.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AbstractPoller = ::sun::nio::fs::AbstractPoller;

namespace sun {
	namespace nio {
		namespace fs {

void AbstractPoller$1::init$($AbstractPoller* this$0, $Runnable* val$thisRunnable) {
	$set(this, this$0, this$0);
	$set(this, val$thisRunnable, val$thisRunnable);
}

$Object* AbstractPoller$1::run() {
	$var($Thread, thr, $new($Thread, nullptr, this->val$thisRunnable, "FileSystemWatchService"_s, 0, false));
	thr->setDaemon(true);
	thr->start();
	return nullptr;
}

AbstractPoller$1::AbstractPoller$1() {
}

$Class* AbstractPoller$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/AbstractPoller;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPoller$1, this$0)},
		{"val$thisRunnable", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPoller$1, val$thisRunnable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/AbstractPoller;Ljava/lang/Runnable;)V", nullptr, 0, $method(AbstractPoller$1, init$, void, $AbstractPoller*, $Runnable*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractPoller$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.AbstractPoller",
		"start",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.AbstractPoller$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.AbstractPoller$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.AbstractPoller"
	};
	$loadClass(AbstractPoller$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractPoller$1);
	});
	return class$;
}

$Class* AbstractPoller$1::class$ = nullptr;

		} // fs
	} // nio
} // sun