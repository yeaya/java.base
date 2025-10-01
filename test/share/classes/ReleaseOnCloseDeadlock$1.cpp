#include <ReleaseOnCloseDeadlock$1.h>

#include <ReleaseOnCloseDeadlock.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $ReleaseOnCloseDeadlock = ::ReleaseOnCloseDeadlock;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Channel = ::java::nio::channels::Channel;

$FieldInfo _ReleaseOnCloseDeadlock$1_FieldInfo_[] = {
	{"val$channel", "Ljava/nio/channels/Channel;", nullptr, $FINAL | $SYNTHETIC, $field(ReleaseOnCloseDeadlock$1, val$channel)},
	{}
};

$MethodInfo _ReleaseOnCloseDeadlock$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Channel;)V", "()V", 0, $method(static_cast<void(ReleaseOnCloseDeadlock$1::*)($Channel*)>(&ReleaseOnCloseDeadlock$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReleaseOnCloseDeadlock$1_EnclosingMethodInfo_ = {
	"ReleaseOnCloseDeadlock",
	"tryToDeadlock",
	"(Ljava/nio/channels/Channel;[Ljava/nio/channels/FileLock;)V"
};

$InnerClassInfo _ReleaseOnCloseDeadlock$1_InnerClassesInfo_[] = {
	{"ReleaseOnCloseDeadlock$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReleaseOnCloseDeadlock$1_ClassInfo_ = {
	$ACC_SUPER,
	"ReleaseOnCloseDeadlock$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ReleaseOnCloseDeadlock$1_FieldInfo_,
	_ReleaseOnCloseDeadlock$1_MethodInfo_,
	nullptr,
	&_ReleaseOnCloseDeadlock$1_EnclosingMethodInfo_,
	_ReleaseOnCloseDeadlock$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReleaseOnCloseDeadlock"
};

$Object* allocate$ReleaseOnCloseDeadlock$1($Class* clazz) {
	return $of($alloc(ReleaseOnCloseDeadlock$1));
}

void ReleaseOnCloseDeadlock$1::init$($Channel* val$channel) {
	$set(this, val$channel, val$channel);
}

void ReleaseOnCloseDeadlock$1::run() {
	try {
		$nc(this->val$channel)->close();
	} catch ($IOException&) {
		$var($IOException, ignore, $catch());
		ignore->printStackTrace();
	}
}

ReleaseOnCloseDeadlock$1::ReleaseOnCloseDeadlock$1() {
}

$Class* ReleaseOnCloseDeadlock$1::load$($String* name, bool initialize) {
	$loadClass(ReleaseOnCloseDeadlock$1, name, initialize, &_ReleaseOnCloseDeadlock$1_ClassInfo_, allocate$ReleaseOnCloseDeadlock$1);
	return class$;
}

$Class* ReleaseOnCloseDeadlock$1::class$ = nullptr;