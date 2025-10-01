#include <GroupOfOne$3.h>

#include <GroupOfOne$3$1.h>
#include <GroupOfOne.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $GroupOfOne = ::GroupOfOne;
using $GroupOfOne$3$1 = ::GroupOfOne$3$1;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _GroupOfOne$3_FieldInfo_[] = {
	{"val$group", "Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$group)},
	{"val$shutdownGroup", "Z", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$shutdownGroup)},
	{"val$closeChannel", "Z", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$closeChannel)},
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$latch)},
	{"val$ch", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$ch)},
	{}
};

$MethodInfo _GroupOfOne$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/util/concurrent/CountDownLatch;ZZLjava/nio/channels/AsynchronousChannelGroup;)V", "()V", 0, $method(static_cast<void(GroupOfOne$3::*)($AsynchronousSocketChannel*,$CountDownLatch*,bool,bool,$AsynchronousChannelGroup*)>(&GroupOfOne$3::init$))},
	{"completed", "(Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _GroupOfOne$3_EnclosingMethodInfo_ = {
	"GroupOfOne",
	"test",
	"(Ljava/net/SocketAddress;ZZ)V"
};

$InnerClassInfo _GroupOfOne$3_InnerClassesInfo_[] = {
	{"GroupOfOne$3", nullptr, nullptr, 0},
	{"GroupOfOne$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GroupOfOne$3_ClassInfo_ = {
	$ACC_SUPER,
	"GroupOfOne$3",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_GroupOfOne$3_FieldInfo_,
	_GroupOfOne$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_GroupOfOne$3_EnclosingMethodInfo_,
	_GroupOfOne$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GroupOfOne"
};

$Object* allocate$GroupOfOne$3($Class* clazz) {
	return $of($alloc(GroupOfOne$3));
}

void GroupOfOne$3::init$($AsynchronousSocketChannel* val$ch, $CountDownLatch* val$latch, bool val$closeChannel, bool val$shutdownGroup, $AsynchronousChannelGroup* val$group) {
	$set(this, val$ch, val$ch);
	$set(this, val$latch, val$latch);
	this->val$closeChannel = val$closeChannel;
	this->val$shutdownGroup = val$shutdownGroup;
	$set(this, val$group, val$group);
}

void GroupOfOne$3::completed($Void* result, $Void* att) {
	$init($System);
	$nc($System::out)->println("Connected"_s);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(100));
	$nc(this->val$ch)->read(buf, ($Void*)nullptr, $$new($GroupOfOne$3$1, this));
	try {
		if (this->val$closeChannel) {
			$nc($System::out)->print("Close channel ..."_s);
			$nc(this->val$ch)->close();
			$nc($System::out)->println(" done."_s);
		}
		if (this->val$shutdownGroup) {
			$nc($System::out)->print("Shutdown group ..."_s);
			$nc(this->val$group)->shutdownNow();
			$nc($System::out)->println(" done."_s);
		}
		$nc(this->val$latch)->countDown();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException);
	}
}

void GroupOfOne$3::failed($Throwable* exc, $Void* att) {
	$throwNew($RuntimeException, exc);
}

void GroupOfOne$3::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void GroupOfOne$3::completed(Object$* result, Object$* att) {
	this->completed($cast($Void, result), $cast($Void, att));
}

GroupOfOne$3::GroupOfOne$3() {
}

$Class* GroupOfOne$3::load$($String* name, bool initialize) {
	$loadClass(GroupOfOne$3, name, initialize, &_GroupOfOne$3_ClassInfo_, allocate$GroupOfOne$3);
	return class$;
}

$Class* GroupOfOne$3::class$ = nullptr;