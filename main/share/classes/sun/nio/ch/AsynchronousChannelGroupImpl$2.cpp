#include <sun/nio/ch/AsynchronousChannelGroupImpl$2.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _AsynchronousChannelGroupImpl$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$2, this$0)},
	{"val$task", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$2, val$task)},
	{}
};

$MethodInfo _AsynchronousChannelGroupImpl$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(AsynchronousChannelGroupImpl$2::*)($AsynchronousChannelGroupImpl*,$Runnable*)>(&AsynchronousChannelGroupImpl$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsynchronousChannelGroupImpl$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.AsynchronousChannelGroupImpl",
	"startInternalThread",
	"(Ljava/lang/Runnable;)V"
};

$InnerClassInfo _AsynchronousChannelGroupImpl$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.AsynchronousChannelGroupImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsynchronousChannelGroupImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.AsynchronousChannelGroupImpl$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AsynchronousChannelGroupImpl$2_FieldInfo_,
	_AsynchronousChannelGroupImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_AsynchronousChannelGroupImpl$2_EnclosingMethodInfo_,
	_AsynchronousChannelGroupImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.AsynchronousChannelGroupImpl"
};

$Object* allocate$AsynchronousChannelGroupImpl$2($Class* clazz) {
	return $of($alloc(AsynchronousChannelGroupImpl$2));
}

void AsynchronousChannelGroupImpl$2::init$($AsynchronousChannelGroupImpl* this$0, $Runnable* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$task, val$task);
}

$Object* AsynchronousChannelGroupImpl$2::run() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($ThreadPool::defaultThreadFactory()))->newThread(this->val$task)))->start();
	return $of(nullptr);
}

AsynchronousChannelGroupImpl$2::AsynchronousChannelGroupImpl$2() {
}

$Class* AsynchronousChannelGroupImpl$2::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelGroupImpl$2, name, initialize, &_AsynchronousChannelGroupImpl$2_ClassInfo_, allocate$AsynchronousChannelGroupImpl$2);
	return class$;
}

$Class* AsynchronousChannelGroupImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun