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

$FieldInfo _AbstractPoller$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/AbstractPoller;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPoller$1, this$0)},
	{"val$thisRunnable", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPoller$1, val$thisRunnable)},
	{}
};

$MethodInfo _AbstractPoller$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/AbstractPoller;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(AbstractPoller$1::*)($AbstractPoller*,$Runnable*)>(&AbstractPoller$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractPoller$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.AbstractPoller",
	"start",
	"()V"
};

$InnerClassInfo _AbstractPoller$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractPoller$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractPoller$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.AbstractPoller$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AbstractPoller$1_FieldInfo_,
	_AbstractPoller$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_AbstractPoller$1_EnclosingMethodInfo_,
	_AbstractPoller$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractPoller"
};

$Object* allocate$AbstractPoller$1($Class* clazz) {
	return $of($alloc(AbstractPoller$1));
}

void AbstractPoller$1::init$($AbstractPoller* this$0, $Runnable* val$thisRunnable) {
	$set(this, this$0, this$0);
	$set(this, val$thisRunnable, val$thisRunnable);
}

$Object* AbstractPoller$1::run() {
	$var($Thread, thr, $new($Thread, nullptr, this->val$thisRunnable, "FileSystemWatchService"_s, 0, false));
	thr->setDaemon(true);
	thr->start();
	return $of(nullptr);
}

AbstractPoller$1::AbstractPoller$1() {
}

$Class* AbstractPoller$1::load$($String* name, bool initialize) {
	$loadClass(AbstractPoller$1, name, initialize, &_AbstractPoller$1_ClassInfo_, allocate$AbstractPoller$1);
	return class$;
}

$Class* AbstractPoller$1::class$ = nullptr;

		} // fs
	} // nio
} // sun