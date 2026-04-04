#include <ScatteringRead.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Pipe$SinkChannel.h>
#include <java/nio/channels/Pipe$SourceChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Pipe = ::java::nio::channels::Pipe;
using $Pipe$SinkChannel = ::java::nio::channels::Pipe$SinkChannel;
using $Pipe$SourceChannel = ::java::nio::channels::Pipe$SourceChannel;
using $Random = ::java::util::Random;

$Random* ScatteringRead::generator = nullptr;

void ScatteringRead::init$() {
}

void ScatteringRead::main($StringArray* args) {
	$init(ScatteringRead);
	scScatter();
}

void ScatteringRead::scScatter() {
	$init(ScatteringRead);
	$useLocalObjectStack();
	$var($Pipe, p, $Pipe::open());
	$var($Pipe$SinkChannel, sink, $nc(p)->sink());
	$var($Pipe$SourceChannel, source, p->source());
	$nc(sink)->configureBlocking(false);
	$var($ByteBuffer, outgoingdata, $ByteBuffer::allocateDirect(30));
	$var($bytes, someBytes, $new($bytes, 30));
	$nc(ScatteringRead::generator)->nextBytes(someBytes);
	$nc(outgoingdata)->put(someBytes);
	outgoingdata->flip();
	int32_t totalWritten = 0;
	while (totalWritten < 30) {
		int32_t written = sink->write(outgoingdata);
		if (written < 0) {
			$throwNew($Exception, "Write failed"_s);
		}
		totalWritten += written;
	}
	$var($ByteBufferArray, bufs, $new($ByteBufferArray, 3));
	for (int32_t i = 0; i < 3; ++i) {
		bufs->set(i, $($ByteBuffer::allocateDirect(10)));
	}
	int64_t numBytesRead = $nc(source)->read(bufs);
	if (numBytesRead < 30) {
		$throwNew($Exception, "Pipe test failed"_s);
	}
	sink->close();
	source->close();
}

void ScatteringRead::clinit$($Class* clazz) {
	$assignStatic(ScatteringRead::generator, $new($Random));
}

ScatteringRead::ScatteringRead() {
}

$Class* ScatteringRead::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(ScatteringRead, generator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScatteringRead, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ScatteringRead, main, void, $StringArray*), "java.lang.Exception"},
		{"scScatter", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ScatteringRead, scScatter, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ScatteringRead",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScatteringRead, name, initialize, &classInfo$$, ScatteringRead::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScatteringRead);
	});
	return class$;
}

$Class* ScatteringRead::class$ = nullptr;