#include <StressLoopback$Sink.h>
#include <StressLoopback$Sink$1.h>
#include <StressLoopback.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $StressLoopback = ::StressLoopback;
using $StressLoopback$Sink$1 = ::StressLoopback$Sink$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;

void StressLoopback$Sink::init$($AsynchronousByteChannel* channel) {
	$set(this, channel, channel);
	$init($StressLoopback);
	int32_t size = 1024 + $nc($StressLoopback::rand)->nextInt(10000);
	$set(this, readBuffer, ($StressLoopback::rand->nextBoolean()) ? $ByteBuffer::allocateDirect(size) : $ByteBuffer::allocate(size));
}

void StressLoopback$Sink::start() {
	$nc(this->channel)->read(this->readBuffer, ($Void*)nullptr, $$new($StressLoopback$Sink$1, this));
}

int64_t StressLoopback$Sink::finish() {
	$StressLoopback::waitUntilClosed(this->channel);
	return this->bytesRead;
}

StressLoopback$Sink::StressLoopback$Sink() {
}

$Class* StressLoopback$Sink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Ljava/nio/channels/AsynchronousByteChannel;", nullptr, $PRIVATE | $FINAL, $field(StressLoopback$Sink, channel)},
		{"readBuffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(StressLoopback$Sink, readBuffer)},
		{"bytesRead", "J", nullptr, $PRIVATE | $VOLATILE, $field(StressLoopback$Sink, bytesRead)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/AsynchronousByteChannel;)V", nullptr, 0, $method(StressLoopback$Sink, init$, void, $AsynchronousByteChannel*)},
		{"finish", "()J", nullptr, 0, $virtualMethod(StressLoopback$Sink, finish, int64_t)},
		{"start", "()V", nullptr, 0, $virtualMethod(StressLoopback$Sink, start, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StressLoopback$Sink", "StressLoopback", "Sink", $STATIC},
		{"StressLoopback$Sink$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"StressLoopback$Sink",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StressLoopback"
	};
	$loadClass(StressLoopback$Sink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StressLoopback$Sink);
	});
	return class$;
}

$Class* StressLoopback$Sink::class$ = nullptr;