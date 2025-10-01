#include <ExpandingMap.h>

#include <java/io/File.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

#undef READ_WRITE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $ArrayList = ::java::util::ArrayList;

$MethodInfo _ExpandingMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExpandingMap::*)()>(&ExpandingMap::init$))},
	{"fillBuffer", "(Ljava/nio/ByteBuffer;I)V", nullptr, $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&ExpandingMap::fillBuffer))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExpandingMap::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExpandingMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExpandingMap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExpandingMap_MethodInfo_
};

$Object* allocate$ExpandingMap($Class* clazz) {
	return $of($alloc(ExpandingMap));
}

void ExpandingMap::init$() {
}

void ExpandingMap::main($StringArray* args) {
	int32_t initialSize = 20480 * 1024;
	int32_t maximumMapSize = 16 * 1024 * 1024;
	int32_t maximumFileSize = 0x11E1A300;
	$var($File, file, $File::createTempFile("exp"_s, "tmp"_s));
	$nc(file)->deleteOnExit();
	$var($RandomAccessFile, f, $new($RandomAccessFile, file, "rw"_s));
	f->setLength(initialSize);
	$var($FileChannel, fc, f->getChannel());
	$var($ByteBufferArray, buffers, $new($ByteBufferArray, 128));
	$init($System);
	$nc($System::out)->format("map %d -> %d\n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(0))),
		$($of($Integer::valueOf(initialSize)))
	}));
	$init($FileChannel$MapMode);
	buffers->set(0, $($nc(fc)->map($FileChannel$MapMode::READ_WRITE, 0, initialSize)));
	int32_t currentBuffer = 0;
	int32_t currentSize = initialSize;
	int32_t currentPosition = 0;
	$var($ArrayList, junk, $new($ArrayList));
	while (currentPosition + currentSize < maximumFileSize) {
		int32_t inc = $Math::max(1000 * 1024, (currentPosition + currentSize) / 8);
		int32_t size = currentPosition + currentSize + inc;
		f->setLength(size);
		while (currentSize + inc > maximumMapSize) {
			if (currentSize < maximumMapSize) {
				$nc($System::out)->format("map %d -> %d\n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(currentPosition))),
					$($of($Integer::valueOf((currentPosition + maximumMapSize))))
				}));
				buffers->set(currentBuffer, $(fc->map($FileChannel$MapMode::READ_WRITE, currentPosition, maximumMapSize)));
				fillBuffer(buffers->get(currentBuffer), currentSize);
			}
			currentPosition += maximumMapSize;
			inc = currentSize + inc - maximumMapSize;
			currentSize = 0;
			++currentBuffer;
			if (currentBuffer == buffers->length) {
				$var($ByteBufferArray, old, buffers);
				$assign(buffers, $new($ByteBufferArray, currentBuffer + currentBuffer / 2));
				$System::arraycopy(old, 0, buffers, 0, currentBuffer);
			}
		}
		currentSize += inc;
		if (currentSize > 0) {
			$nc($System::out)->format("map %d -> %d\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(currentPosition))),
				$($of($Integer::valueOf((currentPosition + currentSize))))
			}));
			buffers->set(currentBuffer, $(fc->map($FileChannel$MapMode::READ_WRITE, currentPosition, currentSize)));
			fillBuffer(buffers->get(currentBuffer), currentSize - inc);
		}
		int64_t t = $System::currentTimeMillis();
		while ($System::currentTimeMillis() < t + 500) {
			junk->add($($String::valueOf(t)));
			if (junk->size() > 0x000186A0) {
				junk->clear();
			}
		}
	}
	fc->close();
	for (int32_t i = 0; i < buffers->length; ++i) {
		buffers->set(i, nullptr);
	}
	$System::gc();
	$Thread::sleep(1000);
	$nc($System::out)->println("TEST PASSED"_s);
}

void ExpandingMap::fillBuffer($ByteBuffer* buf, int32_t from) {
	int32_t limit = $nc(buf)->limit();
	for (int32_t i = from; i < limit; ++i) {
		buf->put(i, (int8_t)i);
	}
}

ExpandingMap::ExpandingMap() {
}

$Class* ExpandingMap::load$($String* name, bool initialize) {
	$loadClass(ExpandingMap, name, initialize, &_ExpandingMap_ClassInfo_, allocate$ExpandingMap);
	return class$;
}

$Class* ExpandingMap::class$ = nullptr;