#include <EmptyRead.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;

void EmptyRead::init$() {
}

void EmptyRead::main($StringArray* args) {
	$useLocalObjectStack();
	$var($SelectorProvider, sp, $SelectorProvider::provider());
	$var($Pipe, p, $nc(sp)->openPipe());
	$var($Pipe$SinkChannel, sink, $nc(p)->sink());
	$var($Pipe$SourceChannel, source, p->source());
	$var($bytes, someBytes, $new($bytes, 0));
	$var($ByteBuffer, outgoingdata, $ByteBuffer::wrap(someBytes));
	int32_t totalWritten = 0;
	int32_t written = $nc(sink)->write(outgoingdata);
	if (written < 0) {
		$throwNew($Exception, "Write failed"_s);
	}
	$var($ByteBuffer, incomingdata, $ByteBuffer::allocateDirect(0));
	int32_t read = $nc(source)->read(incomingdata);
	if (read < 0) {
		$throwNew($Exception, "Read EOF"_s);
	}
	sink->close();
	source->close();
}

EmptyRead::EmptyRead() {
}

$Class* EmptyRead::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EmptyRead, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EmptyRead, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EmptyRead",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EmptyRead, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyRead);
	});
	return class$;
}

$Class* EmptyRead::class$ = nullptr;