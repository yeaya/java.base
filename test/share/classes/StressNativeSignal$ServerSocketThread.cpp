#include <StressNativeSignal$ServerSocketThread.h>

#include <StressNativeSignal.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $StressNativeSignal = ::StressNativeSignal;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$FieldInfo _StressNativeSignal$ServerSocketThread_FieldInfo_[] = {
	{"this$0", "LStressNativeSignal;", nullptr, $FINAL | $SYNTHETIC, $field(StressNativeSignal$ServerSocketThread, this$0)},
	{"shouldTerminate", "Z", nullptr, $PRIVATE | $VOLATILE, $field(StressNativeSignal$ServerSocketThread, shouldTerminate)},
	{"socket", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(StressNativeSignal$ServerSocketThread, socket)},
	{}
};

$MethodInfo _StressNativeSignal$ServerSocketThread_MethodInfo_[] = {
	{"<init>", "(LStressNativeSignal;)V", nullptr, $PUBLIC, $method(static_cast<void(StressNativeSignal$ServerSocketThread::*)($StressNativeSignal*)>(&StressNativeSignal$ServerSocketThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"terminate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StressNativeSignal$ServerSocketThread_InnerClassesInfo_[] = {
	{"StressNativeSignal$ServerSocketThread", "StressNativeSignal", "ServerSocketThread", $PUBLIC},
	{}
};

$ClassInfo _StressNativeSignal$ServerSocketThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StressNativeSignal$ServerSocketThread",
	"java.lang.Thread",
	nullptr,
	_StressNativeSignal$ServerSocketThread_FieldInfo_,
	_StressNativeSignal$ServerSocketThread_MethodInfo_,
	nullptr,
	nullptr,
	_StressNativeSignal$ServerSocketThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StressNativeSignal"
};

$Object* allocate$StressNativeSignal$ServerSocketThread($Class* clazz) {
	return $of($alloc(StressNativeSignal$ServerSocketThread));
}

void StressNativeSignal$ServerSocketThread::init$($StressNativeSignal* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void StressNativeSignal$ServerSocketThread::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$set(this, socket, $new($ServerSocket, 1122));
		$var($Socket, client, $nc(this->socket)->accept());
		$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, $($nc(client)->getInputStream()))));
		this->shouldTerminate = false;
		while (!this->shouldTerminate) {
			$var($String, msg, reader->readLine());
		}
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		if (!this->shouldTerminate) {
			$init($System);
			z->printStackTrace($System::err);
		}
	}
}

void StressNativeSignal$ServerSocketThread::terminate() {
	this->shouldTerminate = true;
	try {
		$nc(this->socket)->close();
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		$init($System);
		z->printStackTrace($System::err);
	}
}

StressNativeSignal$ServerSocketThread::StressNativeSignal$ServerSocketThread() {
}

$Class* StressNativeSignal$ServerSocketThread::load$($String* name, bool initialize) {
	$loadClass(StressNativeSignal$ServerSocketThread, name, initialize, &_StressNativeSignal$ServerSocketThread_ClassInfo_, allocate$StressNativeSignal$ServerSocketThread);
	return class$;
}

$Class* StressNativeSignal$ServerSocketThread::class$ = nullptr;