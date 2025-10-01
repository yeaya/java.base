#include <AsyncCloseChannel$TargetServer$1.h>

#include <AsyncCloseChannel$TargetServer.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$TargetServer = ::AsyncCloseChannel$TargetServer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

$FieldInfo _AsyncCloseChannel$TargetServer$1_FieldInfo_[] = {
	{"this$0", "LAsyncCloseChannel$TargetServer;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetServer$1, this$0)},
	{"val$s", "Ljava/net/Socket;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetServer$1, val$s)},
	{}
};

$MethodInfo _AsyncCloseChannel$TargetServer$1_MethodInfo_[] = {
	{"<init>", "(LAsyncCloseChannel$TargetServer;Ljava/net/Socket;)V", nullptr, 0, $method(static_cast<void(AsyncCloseChannel$TargetServer$1::*)($AsyncCloseChannel$TargetServer*,$Socket*)>(&AsyncCloseChannel$TargetServer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsyncCloseChannel$TargetServer$1_EnclosingMethodInfo_ = {
	"AsyncCloseChannel$TargetServer",
	"runEx",
	"()V"
};

$InnerClassInfo _AsyncCloseChannel$TargetServer$1_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$TargetServer", "AsyncCloseChannel", "TargetServer", $STATIC},
	{"AsyncCloseChannel$TargetServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$TargetServer$1_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$TargetServer$1",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$TargetServer$1_FieldInfo_,
	_AsyncCloseChannel$TargetServer$1_MethodInfo_,
	nullptr,
	&_AsyncCloseChannel$TargetServer$1_EnclosingMethodInfo_,
	_AsyncCloseChannel$TargetServer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$TargetServer$1($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$TargetServer$1));
}

void AsyncCloseChannel$TargetServer$1::init$($AsyncCloseChannel$TargetServer* this$0, $Socket* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$TargetServer$1::run() {
	bool empty = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$init($AsyncCloseChannel);
				while ($AsyncCloseChannel::keepGoing) {
					int32_t c = $nc($($nc(this->val$s)->getInputStream()))->read();
					if (c == -1) {
						if (!empty) {
							break;
						}
					}
					empty = false;
				}
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				ex->printStackTrace();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$AsyncCloseChannel::closeIt(this->val$s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

AsyncCloseChannel$TargetServer$1::AsyncCloseChannel$TargetServer$1() {
}

$Class* AsyncCloseChannel$TargetServer$1::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$TargetServer$1, name, initialize, &_AsyncCloseChannel$TargetServer$1_ClassInfo_, allocate$AsyncCloseChannel$TargetServer$1);
	return class$;
}

$Class* AsyncCloseChannel$TargetServer$1::class$ = nullptr;