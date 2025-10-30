#include <AsyncCloseChannel$SensorServer$1.h>

#include <AsyncCloseChannel$SensorServer.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$SensorServer = ::AsyncCloseChannel$SensorServer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

$FieldInfo _AsyncCloseChannel$SensorServer$1_FieldInfo_[] = {
	{"this$0", "LAsyncCloseChannel$SensorServer;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$SensorServer$1, this$0)},
	{"val$s", "Ljava/net/Socket;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$SensorServer$1, val$s)},
	{}
};

$MethodInfo _AsyncCloseChannel$SensorServer$1_MethodInfo_[] = {
	{"<init>", "(LAsyncCloseChannel$SensorServer;Ljava/net/Socket;)V", nullptr, 0, $method(static_cast<void(AsyncCloseChannel$SensorServer$1::*)($AsyncCloseChannel$SensorServer*,$Socket*)>(&AsyncCloseChannel$SensorServer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsyncCloseChannel$SensorServer$1_EnclosingMethodInfo_ = {
	"AsyncCloseChannel$SensorServer",
	"runEx",
	"()V"
};

$InnerClassInfo _AsyncCloseChannel$SensorServer$1_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$SensorServer", "AsyncCloseChannel", "SensorServer", $STATIC},
	{"AsyncCloseChannel$SensorServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$SensorServer$1_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$SensorServer$1",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$SensorServer$1_FieldInfo_,
	_AsyncCloseChannel$SensorServer$1_MethodInfo_,
	nullptr,
	&_AsyncCloseChannel$SensorServer$1_EnclosingMethodInfo_,
	_AsyncCloseChannel$SensorServer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$SensorServer$1($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$SensorServer$1));
}

void AsyncCloseChannel$SensorServer$1::init$($AsyncCloseChannel$SensorServer* this$0, $Socket* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$SensorServer$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				int32_t c = $nc($($nc(this->val$s)->getInputStream()))->read();
				if (c != -1) {
					$nc($System::err)->println($$str({"Oops: read a character: "_s, $$str((char16_t)c)}));
					$init($AsyncCloseChannel);
					$AsyncCloseChannel::failed = true;
				}
			} catch ($IOException& ex) {
				ex->printStackTrace();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$AsyncCloseChannel::closeIt(this->val$s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

AsyncCloseChannel$SensorServer$1::AsyncCloseChannel$SensorServer$1() {
}

$Class* AsyncCloseChannel$SensorServer$1::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$SensorServer$1, name, initialize, &_AsyncCloseChannel$SensorServer$1_ClassInfo_, allocate$AsyncCloseChannel$SensorServer$1);
	return class$;
}

$Class* AsyncCloseChannel$SensorServer$1::class$ = nullptr;