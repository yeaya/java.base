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

$FieldInfo _AsyncCloseChannel$ServerThread_FieldInfo_[] = {
	{"server", "Ljava/net/ServerSocket;", nullptr, 0, $field(AsyncCloseChannel$ServerThread, server)},
	{}
};

$MethodInfo _AsyncCloseChannel$ServerThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AsyncCloseChannel$ServerThread::*)()>(&AsyncCloseChannel$ServerThread::init$))},
	{"interrupt", "()V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"runEx", "()V", nullptr, $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _AsyncCloseChannel$ServerThread_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AsyncCloseChannel$ServerThread_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"AsyncCloseChannel$ServerThread",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$ServerThread_FieldInfo_,
	_AsyncCloseChannel$ServerThread_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel$ServerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$ServerThread($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$ServerThread));
}

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
			$nc(this->server)->close();
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
	$loadClass(AsyncCloseChannel$ServerThread, name, initialize, &_AsyncCloseChannel$ServerThread_ClassInfo_, allocate$AsyncCloseChannel$ServerThread);
	return class$;
}

$Class* AsyncCloseChannel$ServerThread::class$ = nullptr;