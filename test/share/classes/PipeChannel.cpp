#include <PipeChannel.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Random = ::java::util::Random;

$FieldInfo _PipeChannel_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(PipeChannel, generator)},
	{}
};

$MethodInfo _PipeChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PipeChannel::*)()>(&PipeChannel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PipeChannel::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _PipeChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PipeChannel",
	"java.lang.Object",
	nullptr,
	_PipeChannel_FieldInfo_,
	_PipeChannel_MethodInfo_
};

$Object* allocate$PipeChannel($Class* clazz) {
	return $of($alloc(PipeChannel));
}

$Random* PipeChannel::generator = nullptr;

void PipeChannel::init$() {
}

void PipeChannel::main($StringArray* args) {
	$init(PipeChannel);
	$useLocalCurrentObjectStackCache();
	for (int32_t x = 0; x < 100; ++x) {
		$var($SelectorProvider, sp, $SelectorProvider::provider());
		$var($Pipe, p, $nc(sp)->openPipe());
		$var($Pipe$SinkChannel, sink, $nc(p)->sink());
		$var($Pipe$SourceChannel, source, p->source());
		$var($ByteBuffer, outgoingdata, $ByteBuffer::allocateDirect(10));
		$var($bytes, someBytes, $new($bytes, 10));
		$nc(PipeChannel::generator)->nextBytes(someBytes);
		$nc(outgoingdata)->put(someBytes);
		outgoingdata->flip();
		int32_t totalWritten = 0;
		while (totalWritten < 10) {
			int32_t written = $nc(sink)->write(outgoingdata);
			if (written < 0) {
				$throwNew($Exception, "Write failed"_s);
			}
			totalWritten += written;
		}
		$var($ByteBuffer, incomingdata, $ByteBuffer::allocateDirect(10));
		int32_t totalRead = 0;
		do {
			int32_t bytesRead = $nc(source)->read(incomingdata);
			if (bytesRead > 0) {
				totalRead += bytesRead;
			}
		} while (totalRead < 10);
		for (int32_t i = 0; i < 10; ++i) {
			int8_t var$0 = outgoingdata->get(i);
			if (var$0 != $nc(incomingdata)->get(i)) {
				$throwNew($Exception, "Pipe failed"_s);
			}
		}
		$nc(sink)->close();
		$nc(source)->close();
	}
}

void clinit$PipeChannel($Class* class$) {
	$assignStatic(PipeChannel::generator, $new($Random));
}

PipeChannel::PipeChannel() {
}

$Class* PipeChannel::load$($String* name, bool initialize) {
	$loadClass(PipeChannel, name, initialize, &_PipeChannel_ClassInfo_, clinit$PipeChannel, allocate$PipeChannel);
	return class$;
}

$Class* PipeChannel::class$ = nullptr;