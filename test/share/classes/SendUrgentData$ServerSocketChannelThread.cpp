#include <SendUrgentData$ServerSocketChannelThread.h>
#include <SendUrgentData.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;

void SendUrgentData$ServerSocketChannelThread::init$($String* name) {
	$Thread::init$(name);
	try {
		$set(this, ssc, $ServerSocketChannel::open());
		$nc(this->ssc)->bind($$new($InetSocketAddress, (0)));
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

void SendUrgentData$ServerSocketChannelThread::run() {
	while ($nc(this->ssc)->isOpen()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException& ex) {
			$throwNew($RuntimeException, ex);
		}
	}
	try {
		this->ssc->close();
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, ex);
	}
	$nc($System::out)->println("ServerSocketChannelThread exiting ..."_s);
}

$InetSocketAddress* SendUrgentData$ServerSocketChannelThread::getAddress() {
	if (this->ssc == nullptr) {
		$throwNew($IllegalStateException, "ServerSocketChannel not created"_s);
	}
	return $cast($InetSocketAddress, $nc(this->ssc)->getLocalAddress());
}

void SendUrgentData$ServerSocketChannelThread::close() {
	try {
		$nc(this->ssc)->close();
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

SendUrgentData$ServerSocketChannelThread::SendUrgentData$ServerSocketChannelThread() {
}

$Class* SendUrgentData$ServerSocketChannelThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ssc", "Ljava/nio/channels/ServerSocketChannel;", nullptr, $PRIVATE, $field(SendUrgentData$ServerSocketChannelThread, ssc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(SendUrgentData$ServerSocketChannelThread, init$, void, $String*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SendUrgentData$ServerSocketChannelThread, close, void)},
		{"getAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC, $virtualMethod(SendUrgentData$ServerSocketChannelThread, getAddress, $InetSocketAddress*), "java.io.IOException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SendUrgentData$ServerSocketChannelThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SendUrgentData$ServerSocketChannelThread", "SendUrgentData", "ServerSocketChannelThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SendUrgentData$ServerSocketChannelThread",
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
		"SendUrgentData"
	};
	$loadClass(SendUrgentData$ServerSocketChannelThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SendUrgentData$ServerSocketChannelThread);
	});
	return class$;
}

$Class* SendUrgentData$ServerSocketChannelThread::class$ = nullptr;