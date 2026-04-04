#include <ReleaseOnCloseDeadlock$1.h>
#include <ReleaseOnCloseDeadlock.h>
#include <java/io/IOException.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;

void ReleaseOnCloseDeadlock$1::init$($Channel* val$channel) {
	$set(this, val$channel, val$channel);
}

void ReleaseOnCloseDeadlock$1::run() {
	try {
		$nc(this->val$channel)->close();
	} catch ($IOException& ignore) {
		ignore->printStackTrace();
	}
}

ReleaseOnCloseDeadlock$1::ReleaseOnCloseDeadlock$1() {
}

$Class* ReleaseOnCloseDeadlock$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$channel", "Ljava/nio/channels/Channel;", nullptr, $FINAL | $SYNTHETIC, $field(ReleaseOnCloseDeadlock$1, val$channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Channel;)V", "()V", 0, $method(ReleaseOnCloseDeadlock$1, init$, void, $Channel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ReleaseOnCloseDeadlock$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ReleaseOnCloseDeadlock",
		"tryToDeadlock",
		"(Ljava/nio/channels/Channel;[Ljava/nio/channels/FileLock;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReleaseOnCloseDeadlock$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReleaseOnCloseDeadlock$1",
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
		"ReleaseOnCloseDeadlock"
	};
	$loadClass(ReleaseOnCloseDeadlock$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReleaseOnCloseDeadlock$1);
	});
	return class$;
}

$Class* ReleaseOnCloseDeadlock$1::class$ = nullptr;