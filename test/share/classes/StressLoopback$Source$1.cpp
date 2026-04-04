#include <StressLoopback$Source$1.h>
#include <StressLoopback$Source.h>
#include <StressLoopback.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $StressLoopback = ::StressLoopback;
using $StressLoopback$Source = ::StressLoopback$Source;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

void StressLoopback$Source$1::init$($StressLoopback$Source* this$0) {
	$set(this, this$0, this$0);
}

void StressLoopback$Source$1::completed($Integer* nwrote, $Void* att) {
	this->this$0->bytesSent += $nc(nwrote)->intValue();
	if (this->this$0->finished) {
		$StressLoopback::closeUnchecked(this->this$0->channel);
	} else {
		$nc(this->this$0->sentBuffer)->position(0);
		this->this$0->sentBuffer->limit(this->this$0->sentBuffer->capacity());
		$nc(this->this$0->channel)->write(this->this$0->sentBuffer, ($Void*)nullptr, this);
	}
}

void StressLoopback$Source$1::failed($Throwable* exc, $Void* att) {
	$nc(exc)->printStackTrace();
	$StressLoopback::closeUnchecked(this->this$0->channel);
}

void StressLoopback$Source$1::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void StressLoopback$Source$1::completed(Object$* nwrote, Object$* att) {
	this->completed($cast($Integer, nwrote), $cast($Void, att));
}

StressLoopback$Source$1::StressLoopback$Source$1() {
}

$Class* StressLoopback$Source$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LStressLoopback$Source;", nullptr, $FINAL | $SYNTHETIC, $field(StressLoopback$Source$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LStressLoopback$Source;)V", nullptr, 0, $method(StressLoopback$Source$1, init$, void, $StressLoopback$Source*)},
		{"completed", "(Ljava/lang/Integer;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(StressLoopback$Source$1, completed, void, $Integer*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StressLoopback$Source$1, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(StressLoopback$Source$1, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StressLoopback$Source$1, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"StressLoopback$Source",
		"start",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StressLoopback$Source", "StressLoopback", "Source", $STATIC},
		{"StressLoopback$Source$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StressLoopback$Source$1",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StressLoopback"
	};
	$loadClass(StressLoopback$Source$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StressLoopback$Source$1);
	});
	return class$;
}

$Class* StressLoopback$Source$1::class$ = nullptr;