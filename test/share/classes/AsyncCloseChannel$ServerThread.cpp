#include <AsyncCloseChannel$ServerThread.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/net/ServerSocket.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;

void AsyncCloseChannel$ServerThread::init$() {
	$Thread::init$();
	try {
		$set(this, server, $new($ServerSocket, 0));
	} catch ($IOException& ex) {
		ex->printStackTrace();
	}
}

void AsyncCloseChannel$ServerThread::interrupt() {
	$Thread::interrupt();
	if (this->server != nullptr) {
		try {
			this->server->close();
		} catch ($IOException& ex) {
			ex->printStackTrace();
		}
	}
}

void AsyncCloseChannel$ServerThread::run() {
	try {
		runEx();
	} catch ($Exception& ex) {
		ex->printStackTrace();
	}
}

AsyncCloseChannel$ServerThread::AsyncCloseChannel$ServerThread() {
}

$Class* AsyncCloseChannel$ServerThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"server", "Ljava/net/ServerSocket;", nullptr, 0, $field(AsyncCloseChannel$ServerThread, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AsyncCloseChannel$ServerThread, init$, void)},
		{"interrupt", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$ServerThread, interrupt, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$ServerThread, run, void)},
		{"runEx", "()V", nullptr, $ABSTRACT, $virtualMethod(AsyncCloseChannel$ServerThread, runEx, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"AsyncCloseChannel$ServerThread",
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
		"AsyncCloseChannel"
	};
	$loadClass(AsyncCloseChannel$ServerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$ServerThread);
	});
	return class$;
}

$Class* AsyncCloseChannel$ServerThread::class$ = nullptr;