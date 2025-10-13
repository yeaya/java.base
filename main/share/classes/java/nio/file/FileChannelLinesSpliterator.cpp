#include <java/nio/file/FileChannelLinesSpliterator.h>

#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/file/FileChannelLinesSpliterator$1.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/access/foreign/UnmapperProxy.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/nio/cs/US_ASCII.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

#undef INSTANCE
#undef NONNULL
#undef ORDERED
#undef READ_ONLY
#undef SUPPORTED_CHARSET_NAMES

using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $Channels = ::java::nio::channels::Channels;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $FileChannelLinesSpliterator$1 = ::java::nio::file::FileChannelLinesSpliterator$1;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Consumer = ::java::util::function::Consumer;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $UnmapperProxy = ::jdk::internal::access::foreign::UnmapperProxy;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $US_ASCII = ::sun::nio::cs::US_ASCII;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileChannelLinesSpliterator_FieldInfo_[] = {
	{"SUPPORTED_CHARSET_NAMES", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(FileChannelLinesSpliterator, SUPPORTED_CHARSET_NAMES)},
	{"fc", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $FINAL, $field(FileChannelLinesSpliterator, fc)},
	{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $FINAL, $field(FileChannelLinesSpliterator, cs)},
	{"index", "I", nullptr, $PRIVATE, $field(FileChannelLinesSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(FileChannelLinesSpliterator, fence)},
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(FileChannelLinesSpliterator, buffer)},
	{"reader", "Ljava/io/BufferedReader;", nullptr, $PRIVATE, $field(FileChannelLinesSpliterator, reader)},
	{"bufRefCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(FileChannelLinesSpliterator, bufRefCount)},
	{}
};

$MethodInfo _FileChannelLinesSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;Ljava/nio/charset/Charset;II)V", nullptr, 0, $method(static_cast<void(FileChannelLinesSpliterator::*)($FileChannel*,$Charset*,int32_t,int32_t)>(&FileChannelLinesSpliterator::init$))},
	{"<init>", "(Ljava/nio/channels/FileChannel;Ljava/nio/charset/Charset;IILjava/nio/ByteBuffer;Ljava/util/concurrent/atomic/AtomicInteger;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChannelLinesSpliterator::*)($FileChannel*,$Charset*,int32_t,int32_t,$ByteBuffer*,$AtomicInteger*)>(&FileChannelLinesSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, 0, $method(static_cast<void(FileChannelLinesSpliterator::*)()>(&FileChannelLinesSpliterator::close))},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)V", $PUBLIC},
	{"getBufferedReader", "()Ljava/io/BufferedReader;", nullptr, $PRIVATE, $method(static_cast<$BufferedReader*(FileChannelLinesSpliterator::*)()>(&FileChannelLinesSpliterator::getBufferedReader))},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC},
	{"getMappedByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(FileChannelLinesSpliterator::*)()>(&FileChannelLinesSpliterator::getMappedByteBuffer))},
	{"readLine", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FileChannelLinesSpliterator::*)()>(&FileChannelLinesSpliterator::readLine))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/lang/String;>;", $PUBLIC},
	{"unmap", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileChannelLinesSpliterator::*)()>(&FileChannelLinesSpliterator::unmap))},
	{}
};

$InnerClassInfo _FileChannelLinesSpliterator_InnerClassesInfo_[] = {
	{"java.nio.file.FileChannelLinesSpliterator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileChannelLinesSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.nio.file.FileChannelLinesSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_FileChannelLinesSpliterator_FieldInfo_,
	_FileChannelLinesSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<Ljava/lang/String;>;",
	nullptr,
	_FileChannelLinesSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.FileChannelLinesSpliterator$1"
};

$Object* allocate$FileChannelLinesSpliterator($Class* clazz) {
	return $of($alloc(FileChannelLinesSpliterator));
}

$Set* FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES = nullptr;

void FileChannelLinesSpliterator::init$($FileChannel* fc, $Charset* cs, int32_t index, int32_t fence) {
	$set(this, fc, fc);
	$set(this, cs, cs);
	this->index = index;
	this->fence = fence;
	$set(this, bufRefCount, $new($AtomicInteger));
}

void FileChannelLinesSpliterator::init$($FileChannel* fc, $Charset* cs, int32_t index, int32_t fence, $ByteBuffer* buffer, $AtomicInteger* bufRefCount) {
	$set(this, fc, fc);
	$set(this, cs, cs);
	this->index = index;
	this->fence = fence;
	$set(this, buffer, buffer);
	$set(this, bufRefCount, bufRefCount);
	$nc(this->bufRefCount)->incrementAndGet();
}

bool FileChannelLinesSpliterator::tryAdvance($Consumer* action) {
	$var($String, line, readLine());
	if (line != nullptr) {
		$nc(action)->accept(line);
		return true;
	} else {
		return false;
	}
}

void FileChannelLinesSpliterator::forEachRemaining($Consumer* action) {
	$var($String, line, nullptr);
	while (($assign(line, readLine())) != nullptr) {
		$nc(action)->accept(line);
	}
}

$BufferedReader* FileChannelLinesSpliterator::getBufferedReader() {
	$var($ReadableByteChannel, rrbc, $new($FileChannelLinesSpliterator$1, this));
	return $new($BufferedReader, $($Channels::newReader(rrbc, $($nc(this->cs)->newDecoder()), -1)));
}

$String* FileChannelLinesSpliterator::readLine() {
	if (this->reader == nullptr) {
		$set(this, reader, getBufferedReader());
		unmap();
	}
	try {
		return $nc(this->reader)->readLine();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$ByteBuffer* FileChannelLinesSpliterator::getMappedByteBuffer() {
	try {
		$init($FileChannel$MapMode);
		return $nc(this->fc)->map($FileChannel$MapMode::READ_ONLY, 0, this->fence);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$Spliterator* FileChannelLinesSpliterator::trySplit() {
	if (this->reader != nullptr) {
		return nullptr;
	}
	$var($ByteBuffer, b, nullptr);
	if (($assign(b, this->buffer)) == nullptr) {
		$assign(b, ($assignField(this, buffer, getMappedByteBuffer())));
		$nc(this->bufRefCount)->set(1);
	}
	int32_t hi = this->fence;
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + hi) >> 1);
	int32_t c = $nc(b)->get(mid);
	if (c == u'\n') {
		++mid;
	} else if (c == u'\r') {
		bool var$0 = ++mid < hi;
		if (var$0 && b->get(mid) == u'\n') {
			++mid;
		}
	} else {
		int32_t midL = mid - 1;
		int32_t midR = mid + 1;
		mid = 0;
		while (midL > lo && midR < hi) {
			c = b->get(midL--);
			if (c == u'\n' || c == u'\r') {
				mid = midL + 2;
				break;
			}
			c = b->get(midR++);
			if (c == u'\n' || c == u'\r') {
				mid = midR;
				if (c == u'\r' && mid < hi && b->get(mid) == u'\n') {
					++mid;
				}
				break;
			}
		}
	}
	return (mid > lo && mid < hi) ? static_cast<$Spliterator*>($new(FileChannelLinesSpliterator, this->fc, this->cs, lo, this->index = mid, b, this->bufRefCount)) : ($Spliterator*)nullptr;
}

int64_t FileChannelLinesSpliterator::estimateSize() {
	return this->fence - this->index;
}

int64_t FileChannelLinesSpliterator::getExactSizeIfKnown() {
	return -1;
}

int32_t FileChannelLinesSpliterator::characteristics() {
	return $Spliterator::ORDERED | $Spliterator::NONNULL;
}

void FileChannelLinesSpliterator::unmap() {
	if (this->buffer != nullptr) {
		$var($ByteBuffer, b, this->buffer);
		$set(this, buffer, nullptr);
		if ($nc(this->bufRefCount)->decrementAndGet() == 0) {
			$var($JavaNioAccess, nioAccess, $SharedSecrets::getJavaNioAccess());
			try {
				$nc($($nc(nioAccess)->unmapper(b)))->unmap();
			} catch ($UnsupportedOperationException&) {
				$catch();
			}
		}
	}
}

void FileChannelLinesSpliterator::close() {
	unmap();
}

void clinit$FileChannelLinesSpliterator($Class* class$) {
	{
		$assignStatic(FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES, $new($HashSet));
		$init($UTF_8);
		$nc(FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES)->add($($nc($UTF_8::INSTANCE)->name()));
		$init($ISO_8859_1);
		$nc(FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES)->add($($nc($ISO_8859_1::INSTANCE)->name()));
		$init($US_ASCII);
		$nc(FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES)->add($($nc($US_ASCII::INSTANCE)->name()));
	}
}

FileChannelLinesSpliterator::FileChannelLinesSpliterator() {
}

$Class* FileChannelLinesSpliterator::load$($String* name, bool initialize) {
	$loadClass(FileChannelLinesSpliterator, name, initialize, &_FileChannelLinesSpliterator_ClassInfo_, clinit$FileChannelLinesSpliterator, allocate$FileChannelLinesSpliterator);
	return class$;
}

$Class* FileChannelLinesSpliterator::class$ = nullptr;

		} // file
	} // nio
} // java