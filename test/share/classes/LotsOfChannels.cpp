#include <LotsOfChannels.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef BUF_SIZE
#undef LOOPS
#undef OP_READ
#undef OP_WRITE
#undef PIPES_COUNT

using $PipeArray = $Array<::java::nio::channels::Pipe>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $Set = ::java::util::Set;

$FieldInfo _LotsOfChannels_FieldInfo_[] = {
	{"PIPES_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LotsOfChannels, PIPES_COUNT)},
	{"BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LotsOfChannels, BUF_SIZE)},
	{"LOOPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LotsOfChannels, LOOPS)},
	{}
};

$MethodInfo _LotsOfChannels_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LotsOfChannels, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LotsOfChannels, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _LotsOfChannels_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LotsOfChannels",
	"java.lang.Object",
	nullptr,
	_LotsOfChannels_FieldInfo_,
	_LotsOfChannels_MethodInfo_
};

$Object* allocate$LotsOfChannels($Class* clazz) {
	return $of($alloc(LotsOfChannels));
}

void LotsOfChannels::init$() {
}

void LotsOfChannels::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($PipeArray, pipes, $new($PipeArray, LotsOfChannels::PIPES_COUNT));
	$var($Pipe, pipe, $Pipe::open());
	$var($Pipe$SinkChannel, sink, $nc(pipe)->sink());
	$var($Pipe$SourceChannel, source, pipe->source());
	$var($Selector, sel, $Selector::open());
	$nc(source)->configureBlocking(false);
	source->register$(sel, $SelectionKey::OP_READ);
	for (int32_t i = 0; i < LotsOfChannels::PIPES_COUNT; ++i) {
		pipes->set(i, $($Pipe::open()));
		$var($Pipe$SourceChannel, sc, $nc(pipes->get(i))->source());
		$nc(sc)->configureBlocking(false);
		sc->register$(sel, $SelectionKey::OP_READ);
		$var($Pipe$SinkChannel, sc2, $nc(pipes->get(i))->sink());
		$nc(sc2)->configureBlocking(false);
		sc2->register$(sel, $SelectionKey::OP_WRITE);
	}
	for (int32_t i = 0; i < LotsOfChannels::LOOPS; ++i) {
		$nc(sink)->write($($ByteBuffer::allocate(LotsOfChannels::BUF_SIZE)));
		int32_t x = $nc(sel)->selectNow();
		$nc($(sel->selectedKeys()))->clear();
		source->read($($ByteBuffer::allocate(LotsOfChannels::BUF_SIZE)));
	}
	for (int32_t i = 0; i < LotsOfChannels::PIPES_COUNT; ++i) {
		$nc($($nc(pipes->get(i))->sink()))->close();
		$nc($($nc(pipes->get(i))->source()))->close();
	}
	$nc($(pipe->sink()))->close();
	$nc($(pipe->source()))->close();
	$nc(sel)->close();
}

LotsOfChannels::LotsOfChannels() {
}

$Class* LotsOfChannels::load$($String* name, bool initialize) {
	$loadClass(LotsOfChannels, name, initialize, &_LotsOfChannels_ClassInfo_, allocate$LotsOfChannels);
	return class$;
}

$Class* LotsOfChannels::class$ = nullptr;