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
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void AsyncCloseChannel$SensorServer$1::init$($AsyncCloseChannel$SensorServer* this$0, $Socket* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$SensorServer$1::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			int32_t c = $$nc($nc(this->val$s)->getInputStream())->read();
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

AsyncCloseChannel$SensorServer$1::AsyncCloseChannel$SensorServer$1() {
}

$Class* AsyncCloseChannel$SensorServer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LAsyncCloseChannel$SensorServer;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$SensorServer$1, this$0)},
		{"val$s", "Ljava/net/Socket;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$SensorServer$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAsyncCloseChannel$SensorServer;Ljava/net/Socket;)V", nullptr, 0, $method(AsyncCloseChannel$SensorServer$1, init$, void, $AsyncCloseChannel$SensorServer*, $Socket*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$SensorServer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AsyncCloseChannel$SensorServer",
		"runEx",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$SensorServer", "AsyncCloseChannel", "SensorServer", $STATIC},
		{"AsyncCloseChannel$SensorServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$SensorServer$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AsyncCloseChannel"
	};
	$loadClass(AsyncCloseChannel$SensorServer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$SensorServer$1);
	});
	return class$;
}

$Class* AsyncCloseChannel$SensorServer$1::class$ = nullptr;