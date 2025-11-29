#include <LotsOfWrites$Writer.h>

#include <LotsOfWrites.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Random.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef WRITE

using $LotsOfWrites = ::LotsOfWrites;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $OpenOption = ::java::nio::file::OpenOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Random = ::java::util::Random;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _LotsOfWrites$Writer_FieldInfo_[] = {
	{"file", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(LotsOfWrites$Writer, file$)},
	{"size", "J", nullptr, $PRIVATE | $FINAL, $field(LotsOfWrites$Writer, size$)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(LotsOfWrites$Writer, latch)},
	{"channel", "Ljava/nio/channels/AsynchronousFileChannel;", nullptr, $PRIVATE | $FINAL, $field(LotsOfWrites$Writer, channel)},
	{"position", "J", nullptr, $PRIVATE | $VOLATILE, $field(LotsOfWrites$Writer, position)},
	{"nextByte", "B", nullptr, $PRIVATE | $VOLATILE, $field(LotsOfWrites$Writer, nextByte)},
	{}
};

$MethodInfo _LotsOfWrites$Writer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;JLjava/util/concurrent/CountDownLatch;)V", nullptr, 0, $method(static_cast<void(LotsOfWrites$Writer::*)($File*,int64_t,$CountDownLatch*)>(&LotsOfWrites$Writer::init$)), "java.io.IOException"},
	{"completed", "(Ljava/lang/Integer;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"done", "()V", nullptr, $PRIVATE, $method(static_cast<void(LotsOfWrites$Writer::*)()>(&LotsOfWrites$Writer::done))},
	{"failed", "(Ljava/lang/Throwable;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"file", "()Ljava/io/File;", nullptr, 0},
	{"genNextBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(LotsOfWrites$Writer::*)()>(&LotsOfWrites$Writer::genNextBuffer))},
	{"size", "()J", nullptr, 0},
	{"start", "()V", nullptr, 0},
	{"updatePosition", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(LotsOfWrites$Writer::*)(int64_t)>(&LotsOfWrites$Writer::updatePosition))},
	{}
};

$InnerClassInfo _LotsOfWrites$Writer_InnerClassesInfo_[] = {
	{"LotsOfWrites$Writer", "LotsOfWrites", "Writer", $STATIC},
	{}
};

$ClassInfo _LotsOfWrites$Writer_ClassInfo_ = {
	$ACC_SUPER,
	"LotsOfWrites$Writer",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_LotsOfWrites$Writer_FieldInfo_,
	_LotsOfWrites$Writer_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;",
	nullptr,
	_LotsOfWrites$Writer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LotsOfWrites"
};

$Object* allocate$LotsOfWrites$Writer($Class* clazz) {
	return $of($alloc(LotsOfWrites$Writer));
}

int64_t LotsOfWrites$Writer::updatePosition(int64_t nwrote) {
	this->position += nwrote;
	return this->position;
}

$ByteBuffer* LotsOfWrites$Writer::genNextBuffer() {
	$init($LotsOfWrites);
	int32_t n = $Math::min(8192 + $nc($LotsOfWrites::rand)->nextInt(8192), (int32_t)(this->size$ - this->position));
	$var($ByteBuffer, buf, $ByteBuffer::allocate(n));
	for (int32_t i = 0; i < n; ++i) {
		$nc(buf)->put(this->nextByte++);
	}
	$nc(buf)->flip();
	return buf;
}

void LotsOfWrites$Writer::done() {
	try {
		$nc(this->channel)->close();
	} catch ($IOException& ignore) {
	}
	$nc(this->latch)->countDown();
}

void LotsOfWrites$Writer::init$($File* file, int64_t size, $CountDownLatch* latch) {
	$useLocalCurrentObjectStackCache();
	$set(this, file$, file);
	this->size$ = size;
	$set(this, latch, latch);
	$init($StandardOpenOption);
	$set(this, channel, $AsynchronousFileChannel::open($($nc(file)->toPath()), $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
}

$File* LotsOfWrites$Writer::file() {
	return this->file$;
}

int64_t LotsOfWrites$Writer::size() {
	return this->size$;
}

void LotsOfWrites$Writer::start() {
	$var($ByteBuffer, buf, genNextBuffer());
	$nc(this->channel)->write(buf, 0, buf, this);
}

void LotsOfWrites$Writer::completed($Integer* nwrote, $ByteBuffer* buf$renamed) {
	$var($ByteBuffer, buf, buf$renamed);
	int64_t pos = updatePosition($nc(nwrote)->intValue());
	if (!$nc(buf)->hasRemaining()) {
		if (this->position >= this->size$) {
			done();
			return;
		}
		$assign(buf, genNextBuffer());
	}
	$nc(this->channel)->write(buf, pos, buf, this);
}

void LotsOfWrites$Writer::failed($Throwable* exc, $ByteBuffer* buf) {
	$nc(exc)->printStackTrace();
	done();
}

void LotsOfWrites$Writer::failed($Throwable* exc, Object$* buf) {
	this->failed(exc, $cast($ByteBuffer, buf));
}

void LotsOfWrites$Writer::completed(Object$* nwrote, Object$* buf) {
	this->completed($cast($Integer, nwrote), $cast($ByteBuffer, buf));
}

LotsOfWrites$Writer::LotsOfWrites$Writer() {
}

$Class* LotsOfWrites$Writer::load$($String* name, bool initialize) {
	$loadClass(LotsOfWrites$Writer, name, initialize, &_LotsOfWrites$Writer_ClassInfo_, allocate$LotsOfWrites$Writer);
	return class$;
}

$Class* LotsOfWrites$Writer::class$ = nullptr;