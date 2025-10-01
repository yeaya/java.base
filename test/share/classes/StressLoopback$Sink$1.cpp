#include <StressLoopback$Sink$1.h>

#include <StressLoopback$Sink.h>
#include <StressLoopback.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <jcpp.h>

using $StressLoopback = ::StressLoopback;
using $StressLoopback$Sink = ::StressLoopback$Sink;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $Channel = ::java::nio::channels::Channel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;

$FieldInfo _StressLoopback$Sink$1_FieldInfo_[] = {
	{"this$0", "LStressLoopback$Sink;", nullptr, $FINAL | $SYNTHETIC, $field(StressLoopback$Sink$1, this$0)},
	{}
};

$MethodInfo _StressLoopback$Sink$1_MethodInfo_[] = {
	{"<init>", "(LStressLoopback$Sink;)V", nullptr, 0, $method(static_cast<void(StressLoopback$Sink$1::*)($StressLoopback$Sink*)>(&StressLoopback$Sink$1::init$))},
	{"completed", "(Ljava/lang/Integer;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _StressLoopback$Sink$1_EnclosingMethodInfo_ = {
	"StressLoopback$Sink",
	"start",
	"()V"
};

$InnerClassInfo _StressLoopback$Sink$1_InnerClassesInfo_[] = {
	{"StressLoopback$Sink", "StressLoopback", "Sink", $STATIC},
	{"StressLoopback$Sink$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StressLoopback$Sink$1_ClassInfo_ = {
	$ACC_SUPER,
	"StressLoopback$Sink$1",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_StressLoopback$Sink$1_FieldInfo_,
	_StressLoopback$Sink$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Void;>;",
	&_StressLoopback$Sink$1_EnclosingMethodInfo_,
	_StressLoopback$Sink$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StressLoopback"
};

$Object* allocate$StressLoopback$Sink$1($Class* clazz) {
	return $of($alloc(StressLoopback$Sink$1));
}

void StressLoopback$Sink$1::init$($StressLoopback$Sink* this$0) {
	$set(this, this$0, this$0);
}

void StressLoopback$Sink$1::completed($Integer* nread, $Void* att) {
	if ($nc(nread)->intValue() < 0) {
		$StressLoopback::closeUnchecked(this->this$0->channel);
	} else {
		this->this$0->bytesRead += nread->intValue();
		$nc(this->this$0->readBuffer)->clear();
		$nc(this->this$0->channel)->read(this->this$0->readBuffer, ($Void*)nullptr, this);
	}
}

void StressLoopback$Sink$1::failed($Throwable* exc, $Void* att) {
	$nc(exc)->printStackTrace();
	$StressLoopback::closeUnchecked(this->this$0->channel);
}

void StressLoopback$Sink$1::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void StressLoopback$Sink$1::completed(Object$* nread, Object$* att) {
	this->completed($cast($Integer, nread), $cast($Void, att));
}

StressLoopback$Sink$1::StressLoopback$Sink$1() {
}

$Class* StressLoopback$Sink$1::load$($String* name, bool initialize) {
	$loadClass(StressLoopback$Sink$1, name, initialize, &_StressLoopback$Sink$1_ClassInfo_, allocate$StressLoopback$Sink$1);
	return class$;
}

$Class* StressLoopback$Sink$1::class$ = nullptr;