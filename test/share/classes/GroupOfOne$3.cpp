#include <GroupOfOne$3.h>
#include <GroupOfOne$3$1.h>
#include <GroupOfOne.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $GroupOfOne$3$1 = ::GroupOfOne$3$1;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void GroupOfOne$3::init$($AsynchronousSocketChannel* val$ch, $CountDownLatch* val$latch, bool val$closeChannel, bool val$shutdownGroup, $AsynchronousChannelGroup* val$group) {
	$set(this, val$ch, val$ch);
	$set(this, val$latch, val$latch);
	this->val$closeChannel = val$closeChannel;
	this->val$shutdownGroup = val$shutdownGroup;
	$set(this, val$group, val$group);
}

void GroupOfOne$3::completed($Void* result, $Void* att) {
	$useLocalObjectStack();
	$nc($System::out)->println("Connected"_s);
	$var($ByteBuffer, buf, $ByteBuffer::allocate(100));
	$nc(this->val$ch)->read(buf, ($Void*)nullptr, $$new($GroupOfOne$3$1, this));
	try {
		if (this->val$closeChannel) {
			$System::out->print("Close channel ..."_s);
			this->val$ch->close();
			$System::out->println(" done."_s);
		}
		if (this->val$shutdownGroup) {
			$System::out->print("Shutdown group ..."_s);
			$nc(this->val$group)->shutdownNow();
			$System::out->println(" done."_s);
		}
		$nc(this->val$latch)->countDown();
	} catch ($IOException& e) {
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
	$FieldInfo fieldInfos$$[] = {
		{"val$group", "Ljava/nio/channels/AsynchronousChannelGroup;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$group)},
		{"val$shutdownGroup", "Z", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$shutdownGroup)},
		{"val$closeChannel", "Z", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$closeChannel)},
		{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$latch)},
		{"val$ch", "Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$3, val$ch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/util/concurrent/CountDownLatch;ZZLjava/nio/channels/AsynchronousChannelGroup;)V", "()V", 0, $method(GroupOfOne$3, init$, void, $AsynchronousSocketChannel*, $CountDownLatch*, bool, bool, $AsynchronousChannelGroup*)},
		{"completed", "(Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$3, completed, void, $Void*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$3, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$3, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$3, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GroupOfOne",
		"test",
		"(Ljava/net/SocketAddress;ZZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GroupOfOne$3", nullptr, nullptr, 0},
		{"GroupOfOne$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GroupOfOne$3",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Void;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GroupOfOne"
	};
	$loadClass(GroupOfOne$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupOfOne$3);
	});
	return class$;
}

$Class* GroupOfOne$3::class$ = nullptr;