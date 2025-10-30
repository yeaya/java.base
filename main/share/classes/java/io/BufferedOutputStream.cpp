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

$FieldInfo _BufferedOutputStream_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PROTECTED, $field(BufferedOutputStream, buf)},
	{"count", "I", nullptr, $PROTECTED, $field(BufferedOutputStream, count)},
	{}
};

$MethodInfo _BufferedOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedOutputStream::*)($OutputStream*)>(&BufferedOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(BufferedOutputStream::*)($OutputStream*,int32_t)>(&BufferedOutputStream::init$))},
	{"flush", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"flushBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(BufferedOutputStream::*)()>(&BufferedOutputStream::flushBuffer)), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _BufferedOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.BufferedOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_BufferedOutputStream_FieldInfo_,
	_BufferedOutputStream_MethodInfo_
};

$Object* allocate$BufferedOutputStream($Class* clazz) {
	return $of($alloc(BufferedOutputStream));
}

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
		$nc(this->buf)->set(this->count++, (int8_t)b);
	}
}

void BufferedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (len >= $nc(this->buf)->length) {
			flushBuffer();
			$nc(this->out)->write(b, off, len);
			return;
		}
		if (len > $nc(this->buf)->length - this->count) {
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
	$loadClass(BufferedOutputStream, name, initialize, &_BufferedOutputStream_ClassInfo_, allocate$BufferedOutputStream);
	return class$;
}

$Class* BufferedOutputStream::class$ = nullptr;

	} // io
} // java