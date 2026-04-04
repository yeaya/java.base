#include <StressNativeSignal$ServerSocketThread.h>
#include <StressNativeSignal.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $StressNativeSignal = ::StressNativeSignal;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

void StressNativeSignal$ServerSocketThread::init$($StressNativeSignal* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void StressNativeSignal$ServerSocketThread::run() {
	$useLocalObjectStack();
	try {
		$set(this, socket, $new($ServerSocket, 1122));
		$var($Socket, client, this->socket->accept());
		$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, $($nc(client)->getInputStream()))));
		this->shouldTerminate = false;
		while (!this->shouldTerminate) {
			$var($String, msg, reader->readLine());
		}
	} catch ($Exception& z) {
		if (!this->shouldTerminate) {
			z->printStackTrace($System::err);
		}
	}
}

void StressNativeSignal$ServerSocketThread::terminate() {
	this->shouldTerminate = true;
	try {
		$nc(this->socket)->close();
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
}

StressNativeSignal$ServerSocketThread::StressNativeSignal$ServerSocketThread() {
}

$Class* StressNativeSignal$ServerSocketThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LStressNativeSignal;", nullptr, $FINAL | $SYNTHETIC, $field(StressNativeSignal$ServerSocketThread, this$0)},
		{"shouldTerminate", "Z", nullptr, $PRIVATE | $VOLATILE, $field(StressNativeSignal$ServerSocketThread, shouldTerminate)},
		{"socket", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(StressNativeSignal$ServerSocketThread, socket)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LStressNativeSignal;)V", nullptr, $PUBLIC, $method(StressNativeSignal$ServerSocketThread, init$, void, $StressNativeSignal*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(StressNativeSignal$ServerSocketThread, run, void)},
		{"terminate", "()V", nullptr, $PUBLIC, $virtualMethod(StressNativeSignal$ServerSocketThread, terminate, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StressNativeSignal$ServerSocketThread", "StressNativeSignal", "ServerSocketThread", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StressNativeSignal$ServerSocketThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StressNativeSignal"
	};
	$loadClass(StressNativeSignal$ServerSocketThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StressNativeSignal$ServerSocketThread);
	});
	return class$;
}

$Class* StressNativeSignal$ServerSocketThread::class$ = nullptr;