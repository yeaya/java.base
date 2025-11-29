#include <sun/nio/ch/ChannelInputStream.h>

#include <java/io/InputStream.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $Objects = ::java::util::Objects;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _ChannelInputStream_FieldInfo_[] = {
	{"ch", "Ljava/nio/channels/ReadableByteChannel;", nullptr, $PROTECTED | $FINAL, $field(ChannelInputStream, ch)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(ChannelInputStream, bb)},
	{"bs", "[B", nullptr, $PRIVATE, $field(ChannelInputStream, bs)},
	{"b1", "[B", nullptr, $PRIVATE, $field(ChannelInputStream, b1)},
	{}
};

$MethodInfo _ChannelInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/ReadableByteChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(ChannelInputStream::*)($ReadableByteChannel*)>(&ChannelInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/ByteBuffer;Z)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ReadableByteChannel*,$ByteBuffer*,bool)>(&ChannelInputStream::read)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ChannelInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.ChannelInputStream",
	"java.io.InputStream",
	nullptr,
	_ChannelInputStream_FieldInfo_,
	_ChannelInputStream_MethodInfo_
};

$Object* allocate$ChannelInputStream($Class* clazz) {
	return $of($alloc(ChannelInputStream));
}

int32_t ChannelInputStream::read($ReadableByteChannel* ch, $ByteBuffer* bb, bool block) {
	$init(ChannelInputStream);
	if ($instanceOf($SelectableChannel, ch)) {
		$var($SelectableChannel, sc, $cast($SelectableChannel, ch));
		$synchronized($nc(sc)->blockingLock()) {
			bool bm = sc->isBlocking();
			if (!bm) {
				$throwNew($IllegalBlockingModeException);
			}
			if (bm != block) {
				sc->configureBlocking(block);
			}
			int32_t n = $nc(ch)->read(bb);
			if (bm != block) {
				sc->configureBlocking(bm);
			}
			return n;
		}
	} else {
		return $nc(ch)->read(bb);
	}
}

void ChannelInputStream::init$($ReadableByteChannel* ch) {
	$InputStream::init$();
	$set(this, bb, nullptr);
	$set(this, bs, nullptr);
	$set(this, b1, nullptr);
	$set(this, ch, ch);
}

int32_t ChannelInputStream::read() {
	$synchronized(this) {
		if (this->b1 == nullptr) {
			$set(this, b1, $new($bytes, 1));
		}
		int32_t n = this->read(this->b1);
		if (n == 1) {
			return (int32_t)($nc(this->b1)->get(0) & (uint32_t)255);
		}
		return -1;
	}
}

int32_t ChannelInputStream::read($bytes* bs, int32_t off, int32_t len) {
	$synchronized(this) {
		$Objects::checkFromIndexSize(off, len, $nc(bs)->length);
		if (len == 0) {
			return 0;
		}
		$var($ByteBuffer, bb, (this->bs == bs) ? this->bb : $ByteBuffer::wrap(bs));
		$nc(bb)->limit($Math::min(off + len, bb->capacity()));
		bb->position(off);
		$set(this, bb, bb);
		$set(this, bs, bs);
		return read(bb);
	}
}

int32_t ChannelInputStream::read($ByteBuffer* bb) {
	return ChannelInputStream::read(this->ch, bb, true);
}

int32_t ChannelInputStream::available() {
	if ($instanceOf($SeekableByteChannel, this->ch)) {
		$var($SeekableByteChannel, sbc, $cast($SeekableByteChannel, this->ch));
		int64_t var$0 = $nc(sbc)->size();
		int64_t rem = $Math::max((int64_t)0, var$0 - sbc->position());
		return (rem > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (int32_t)rem;
	}
	return 0;
}

int64_t ChannelInputStream::skip(int64_t n) {
	$synchronized(this) {
		if ($instanceOf($SeekableByteChannel, this->ch)) {
			$var($SeekableByteChannel, sbc, $cast($SeekableByteChannel, this->ch));
			int64_t pos = $nc(sbc)->position();
			int64_t newPos = 0;
			if (n > 0) {
				newPos = pos + n;
				int64_t size = sbc->size();
				if (newPos < 0 || newPos > size) {
					newPos = size;
				}
			} else {
				newPos = $Long::max(pos + n, 0);
			}
			sbc->position(newPos);
			return newPos - pos;
		}
		return $InputStream::skip(n);
	}
}

void ChannelInputStream::close() {
	$nc(this->ch)->close();
}

ChannelInputStream::ChannelInputStream() {
}

$Class* ChannelInputStream::load$($String* name, bool initialize) {
	$loadClass(ChannelInputStream, name, initialize, &_ChannelInputStream_ClassInfo_, allocate$ChannelInputStream);
	return class$;
}

$Class* ChannelInputStream::class$ = nullptr;

		} // ch
	} // nio
} // sun