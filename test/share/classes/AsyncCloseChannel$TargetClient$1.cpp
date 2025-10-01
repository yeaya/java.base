#include <AsyncCloseChannel$TargetClient$1.h>

#include <AsyncCloseChannel$TargetClient.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $AsyncCloseChannel$TargetClient = ::AsyncCloseChannel$TargetClient;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$FieldInfo _AsyncCloseChannel$TargetClient$1_FieldInfo_[] = {
	{"this$0", "LAsyncCloseChannel$TargetClient;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetClient$1, this$0)},
	{"val$s", "Ljava/nio/channels/SocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncCloseChannel$TargetClient$1, val$s)},
	{}
};

$MethodInfo _AsyncCloseChannel$TargetClient$1_MethodInfo_[] = {
	{"<init>", "(LAsyncCloseChannel$TargetClient;Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(static_cast<void(AsyncCloseChannel$TargetClient$1::*)($AsyncCloseChannel$TargetClient*,$SocketChannel*)>(&AsyncCloseChannel$TargetClient$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsyncCloseChannel$TargetClient$1_EnclosingMethodInfo_ = {
	"AsyncCloseChannel$TargetClient",
	"run",
	"()V"
};

$InnerClassInfo _AsyncCloseChannel$TargetClient$1_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$TargetClient", "AsyncCloseChannel", "TargetClient", $STATIC},
	{"AsyncCloseChannel$TargetClient$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$TargetClient$1_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$TargetClient$1",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$TargetClient$1_FieldInfo_,
	_AsyncCloseChannel$TargetClient$1_MethodInfo_,
	nullptr,
	&_AsyncCloseChannel$TargetClient$1_EnclosingMethodInfo_,
	_AsyncCloseChannel$TargetClient$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$TargetClient$1($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$TargetClient$1));
}

void AsyncCloseChannel$TargetClient$1::init$($AsyncCloseChannel$TargetClient* this$0, $SocketChannel* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
	$Thread::init$();
}

void AsyncCloseChannel$TargetClient$1::run() {
	$var($ByteBuffer, b, $ByteBuffer::allocate(1));
	try {
		for (;;) {
			$nc(b)->clear();
			b->put((int8_t)u'A');
			b->flip();
			$nc(this->val$s)->write(b);
			this->this$0->ready = true;
		}
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		if (!($instanceOf($ClosedChannelException, ex))) {
			$init($System);
			$nc($System::err)->println($$str({"Exception in target client child "_s, $(ex->toString())}));
		}
	}
}

AsyncCloseChannel$TargetClient$1::AsyncCloseChannel$TargetClient$1() {
}

$Class* AsyncCloseChannel$TargetClient$1::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$TargetClient$1, name, initialize, &_AsyncCloseChannel$TargetClient$1_ClassInfo_, allocate$AsyncCloseChannel$TargetClient$1);
	return class$;
}

$Class* AsyncCloseChannel$TargetClient$1::class$ = nullptr;