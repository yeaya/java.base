#include <SelectPipe.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Random = ::java::util::Random;

$FieldInfo _SelectPipe_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(SelectPipe, generator)},
	{}
};

$MethodInfo _SelectPipe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectPipe::*)()>(&SelectPipe::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SelectPipe::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SelectPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectPipe",
	"java.lang.Object",
	nullptr,
	_SelectPipe_FieldInfo_,
	_SelectPipe_MethodInfo_
};

$Object* allocate$SelectPipe($Class* clazz) {
	return $of($alloc(SelectPipe));
}

$Random* SelectPipe::generator = nullptr;

void SelectPipe::init$() {
}

void SelectPipe::main($StringArray* args) {
	$init(SelectPipe);
	$useLocalCurrentObjectStackCache();
	$var($SelectorProvider, sp, $SelectorProvider::provider());
	$var($Selector, selector, $Selector::open());
	$var($Pipe, p, $nc(sp)->openPipe());
	$var($Pipe$SinkChannel, sink, $nc(p)->sink());
	$var($Pipe$SourceChannel, source, p->source());
	$nc(source)->configureBlocking(false);
	$nc(sink)->configureBlocking(false);
	$var($SelectionKey, readkey, source->register$(selector, $SelectionKey::OP_READ));
	$var($SelectionKey, writekey, sink->register$(selector, $SelectionKey::OP_WRITE));
	$var($ByteBuffer, outgoingdata, $ByteBuffer::allocateDirect(10));
	$var($bytes, someBytes, $new($bytes, 10));
	$nc(SelectPipe::generator)->nextBytes(someBytes);
	$nc(outgoingdata)->put(someBytes);
	outgoingdata->flip();
	int32_t totalWritten = 0;
	while (totalWritten < 10) {
		int32_t written = sink->write(outgoingdata);
		if (written < 0) {
			$throwNew($Exception, "Write failed"_s);
		}
		totalWritten += written;
	}
	if ($nc(selector)->select((int64_t)1000) == 0) {
		$throwNew($Exception, "test failed"_s);
	}
	$var($ByteBuffer, incomingdata, $ByteBuffer::allocateDirect(10));
	int32_t totalRead = 0;
	do {
		int32_t bytesRead = source->read(incomingdata);
		if (bytesRead > 0) {
			totalRead += bytesRead;
		}
	} while (totalRead < 10);
	sink->close();
	source->close();
	$nc(selector)->close();
	for (int32_t i = 0; i < 10; ++i) {
		int8_t var$0 = outgoingdata->get(i);
		if (var$0 != $nc(incomingdata)->get(i)) {
			$throwNew($Exception, "Pipe failed"_s);
		}
	}
}

void clinit$SelectPipe($Class* class$) {
	$assignStatic(SelectPipe::generator, $new($Random));
}

SelectPipe::SelectPipe() {
}

$Class* SelectPipe::load$($String* name, bool initialize) {
	$loadClass(SelectPipe, name, initialize, &_SelectPipe_ClassInfo_, clinit$SelectPipe, allocate$SelectPipe);
	return class$;
}

$Class* SelectPipe::class$ = nullptr;