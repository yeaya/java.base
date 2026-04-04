#include <AsyncCloseChannel$TargetClient$1.h>
#include <AsyncCloseChannel$TargetClient.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $AsyncCloseChannel$TargetClient = ::AsyncCloseChannel$TargetClient;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void AsyncCloseChannel$TargetClient$1::init$($AsyncCloseChannel$TargetClient* this$0, $SocketChannel* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$TargetClient$1::run() {
	$useLocalObjectStack();
	$var($ByteBuffer, b, $ByteBuffer::allocate(1));
	try {
		for (;;) {
			$nc(b)->clear();
			b->put((int8_t)u'A');
			b->flip();
			$nc(this->val$s)->write(b);
			this->this$0->ready = true;
		}
	} catch ($IOException& ex) {
		if (!($instanceOf($ClosedChannelException, ex))) {
			$nc($System::err)->println($$str({"Exception in target client child "_s, $(ex->toString())}));
		}
	}
}

AsyncCloseChannel$TargetClient$1::AsyncCloseChannel$TargetClient$1() {
}

$Class* AsyncCloseChannel$TargetClient$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LAsyncCloseChannel$TargetClient;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetClient$1, this$0)},
		{"val$s", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetClient$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAsyncCloseChannel$TargetClient;Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(AsyncCloseChannel$TargetClient$1, init$, void, $AsyncCloseChannel$TargetClient*, $SocketChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$TargetClient$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AsyncCloseChannel$TargetClient",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$TargetClient", "AsyncCloseChannel", "TargetClient", $STATIC},
		{"AsyncCloseChannel$TargetClient$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$TargetClient$1",
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
	$loadClass(AsyncCloseChannel$TargetClient$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$TargetClient$1);
	});
	return class$;
}

$Class* AsyncCloseChannel$TargetClient$1::class$ = nullptr;