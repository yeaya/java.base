#include <sun/nio/ch/AsynchronousChannelGroupImpl$1.h>

#include <java/lang/Runnable.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/Invoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $Invoker = ::sun::nio::ch::Invoker;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _AsynchronousChannelGroupImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$1, this$0)},
	{"val$task", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$1, val$task)},
	{"val$thisGroup", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$1, val$thisGroup)},
	{}
};

$MethodInfo _AsynchronousChannelGroupImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;Lsun/nio/ch/AsynchronousChannelGroupImpl;Ljava/lang/Runnable;)V", "()V", 0, $method(static_cast<void(AsynchronousChannelGroupImpl$1::*)($AsynchronousChannelGroupImpl*,$AsynchronousChannelGroupImpl*,$Runnable*)>(&AsynchronousChannelGroupImpl$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsynchronousChannelGroupImpl$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.AsynchronousChannelGroupImpl",
	"bindToGroup",
	"(Ljava/lang/Runnable;)Ljava/lang/Runnable;"
};

$InnerClassInfo _AsynchronousChannelGroupImpl$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.AsynchronousChannelGroupImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsynchronousChannelGroupImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.AsynchronousChannelGroupImpl$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_AsynchronousChannelGroupImpl$1_FieldInfo_,
	_AsynchronousChannelGroupImpl$1_MethodInfo_,
	nullptr,
	&_AsynchronousChannelGroupImpl$1_EnclosingMethodInfo_,
	_AsynchronousChannelGroupImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.AsynchronousChannelGroupImpl"
};

$Object* allocate$AsynchronousChannelGroupImpl$1($Class* clazz) {
	return $of($alloc(AsynchronousChannelGroupImpl$1));
}

void AsynchronousChannelGroupImpl$1::init$($AsynchronousChannelGroupImpl* this$0, $AsynchronousChannelGroupImpl* val$thisGroup, $Runnable* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$thisGroup, val$thisGroup);
	$set(this, val$task, val$task);
}

void AsynchronousChannelGroupImpl$1::run() {
	$Invoker::bindToGroup(this->val$thisGroup);
	$nc(this->val$task)->run();
}

AsynchronousChannelGroupImpl$1::AsynchronousChannelGroupImpl$1() {
}

$Class* AsynchronousChannelGroupImpl$1::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelGroupImpl$1, name, initialize, &_AsynchronousChannelGroupImpl$1_ClassInfo_, allocate$AsynchronousChannelGroupImpl$1);
	return class$;
}

$Class* AsynchronousChannelGroupImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun