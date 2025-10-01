#include <sun/nio/fs/PollingWatchService$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _PollingWatchService$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$1, this$0)},
	{}
};

$MethodInfo _PollingWatchService$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/PollingWatchService;)V", nullptr, 0, $method(static_cast<void(PollingWatchService$1::*)($PollingWatchService*)>(&PollingWatchService$1::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PollingWatchService$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.PollingWatchService",
	"<init>",
	"()V"
};

$InnerClassInfo _PollingWatchService$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.PollingWatchService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PollingWatchService$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.PollingWatchService$1",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_PollingWatchService$1_FieldInfo_,
	_PollingWatchService$1_MethodInfo_,
	nullptr,
	&_PollingWatchService$1_EnclosingMethodInfo_,
	_PollingWatchService$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.PollingWatchService"
};

$Object* allocate$PollingWatchService$1($Class* clazz) {
	return $of($alloc(PollingWatchService$1));
}

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
	$loadClass(PollingWatchService$1, name, initialize, &_PollingWatchService$1_ClassInfo_, allocate$PollingWatchService$1);
	return class$;
}

$Class* PollingWatchService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun