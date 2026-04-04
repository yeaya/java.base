#include <AsyncCloseChannel$TargetServer$1.h>
#include <AsyncCloseChannel$TargetServer.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$TargetServer = ::AsyncCloseChannel$TargetServer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void AsyncCloseChannel$TargetServer$1::init$($AsyncCloseChannel$TargetServer* this$0, $Socket* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$TargetServer$1::run() {
	$useLocalObjectStack();
	bool empty = true;
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$init($AsyncCloseChannel);
			while ($AsyncCloseChannel::keepGoing) {
				int32_t c = $$nc($nc(this->val$s)->getInputStream())->read();
				if (c == -1) {
					if (!empty) {
						break;
					}
				}
				empty = false;
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

AsyncCloseChannel$TargetServer$1::AsyncCloseChannel$TargetServer$1() {
}

$Class* AsyncCloseChannel$TargetServer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LAsyncCloseChannel$TargetServer;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetServer$1, this$0)},
		{"val$s", "Ljava/net/Socket;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetServer$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAsyncCloseChannel$TargetServer;Ljava/net/Socket;)V", nullptr, 0, $method(AsyncCloseChannel$TargetServer$1, init$, void, $AsyncCloseChannel$TargetServer*, $Socket*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$TargetServer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AsyncCloseChannel$TargetServer",
		"runEx",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$TargetServer", "AsyncCloseChannel", "TargetServer", $STATIC},
		{"AsyncCloseChannel$TargetServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$TargetServer$1",
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
	$loadClass(AsyncCloseChannel$TargetServer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$TargetServer$1);
	});
	return class$;
}

$Class* AsyncCloseChannel$TargetServer$1::class$ = nullptr;