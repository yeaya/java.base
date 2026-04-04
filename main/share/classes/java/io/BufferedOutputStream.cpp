#include <java/io/BufferedOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void BufferedOutputStream::init$($OutputStream* out) {
	BufferedOutputStream::init$(out, 8192);
}

void BufferedOutputStream::init$($OutputStream* out, int32_t size) {
	$FilterOutputStream::init$(out);
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "Buffer size <= 0"_s);
	}
	$set(this, buf, $new($bytes, size));
}

void BufferedOutputStream::flushBuffer() {
	if (this->count > 0) {
		$nc(this->out)->write(this->buf, 0, this->count);
		this->count = 0;
	}
}

void BufferedOutputStream::write(int32_t b) {
	$synchronized(this) {
		if (this->count >= $nc(this->buf)->length) {
			flushBuffer();
		}
		this->buf->set(this->count++, (int8_t)b);
	}
}

void BufferedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (len >= $nc(this->buf)->length) {
			flushBuffer();
			$nc(this->out)->write(b, off, len);
			return;
		}
		if (len > this->buf->length - this->count) {
			flushBuffer();
		}
		$System::arraycopy(b, off, this->buf, this->count, len);
		this->count += len;
	}
}

void BufferedOutputStream::flush() {
	$synchronized(this) {
		flushBuffer();
		$nc(this->out)->flush();
	}
}

BufferedOutputStream::BufferedOutputStream() {
}

$Class* BufferedOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "[B", nullptr, $PROTECTED, $field(BufferedOutputStream, buf)},
		{"count", "I", nullptr, $PROTECTED, $field(BufferedOutputStream, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(BufferedOutputStream, init$, void, $OutputStream*)},
		{"<init>", "(Ljava/io/OutputStream;I)V", nullptr, $PUBLIC, $method(BufferedOutputStream, init$, void, $OutputStream*, int32_t)},
		{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedOutputStream, flush, void), "java.io.IOException"},
		{"flushBuffer", "()V", nullptr, $PRIVATE, $method(BufferedOutputStream, flushBuffer, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(BufferedOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.BufferedOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BufferedOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BufferedOutputStream));
	});
	return class$;
}

$Class* BufferedOutputStream::class$ = nullptr;

	} // io
} // java