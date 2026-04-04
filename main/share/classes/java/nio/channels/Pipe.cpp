#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

namespace java {
	namespace nio {
		namespace channels {

void Pipe::init$() {
}

Pipe* Pipe::open() {
	return $$nc($SelectorProvider::provider())->openPipe();
}

Pipe::Pipe() {
}

$Class* Pipe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Pipe, init$, void)},
		{"open", "()Ljava/nio/channels/Pipe;", nullptr, $PUBLIC | $STATIC, $staticMethod(Pipe, open, Pipe*), "java.io.IOException"},
		{"sink", "()Ljava/nio/channels/Pipe$SinkChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pipe, sink, $Pipe$SinkChannel*)},
		{"source", "()Ljava/nio/channels/Pipe$SourceChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pipe, source, $Pipe$SourceChannel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.channels.Pipe$SinkChannel", "java.nio.channels.Pipe", "SinkChannel", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.nio.channels.Pipe$SourceChannel", "java.nio.channels.Pipe", "SourceChannel", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.channels.Pipe",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.nio.channels.Pipe$SinkChannel,java.nio.channels.Pipe$SourceChannel"
	};
	$loadClass(Pipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pipe);
	});
	return class$;
}

$Class* Pipe::class$ = nullptr;

		} // channels
	} // nio
} // java