#include <java/io/CharArrayWriter.h>

#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace io {

$FieldInfo _CharArrayWriter_FieldInfo_[] = {
	{"buf", "[C", nullptr, $PROTECTED, $field(CharArrayWriter, buf)},
	{"count", "I", nullptr, $PROTECTED, $field(CharArrayWriter, count)},
	{}
};

$MethodInfo _CharArrayWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CharArrayWriter, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(CharArrayWriter, init$, void, int32_t)},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, append, CharArrayWriter*, $CharSequence*)},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, append, CharArrayWriter*, $CharSequence*, int32_t, int32_t)},
	{"append", "(C)Ljava/io/CharArrayWriter;", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, append, CharArrayWriter*, char16_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, close, void)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, flush, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, reset, void)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, size, int32_t)},
	{"toCharArray", "()[C", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, toCharArray, $chars*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, toString, $String*)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, write, void, int32_t)},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, write, void, $chars*, int32_t, int32_t)},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, write, void, $String*, int32_t, int32_t)},
	{"writeTo", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(CharArrayWriter, writeTo, void, $Writer*), "java.io.IOException"},
	{}
};

$ClassInfo _CharArrayWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.CharArrayWriter",
	"java.io.Writer",
	nullptr,
	_CharArrayWriter_FieldInfo_,
	_CharArrayWriter_MethodInfo_
};

$Object* allocate$CharArrayWriter($Class* clazz) {
	return $of($alloc(CharArrayWriter));
}

void CharArrayWriter::init$() {
	CharArrayWriter::init$(32);
}

void CharArrayWriter::init$(int32_t initialSize) {
	$useLocalCurrentObjectStackCache();
	$Writer::init$();
	if (initialSize < 0) {
		$throwNew($IllegalArgumentException, $$str({"Negative initial size: "_s, $$str(initialSize)}));
	}
	$set(this, buf, $new($chars, initialSize));
}

void CharArrayWriter::write(int32_t c) {
	$synchronized(this->lock) {
		int32_t newcount = this->count + 1;
		if (newcount > $nc(this->buf)->length) {
			$set(this, buf, $Arrays::copyOf(this->buf, $Math::max($nc(this->buf)->length << 1, newcount)));
		}
		$nc(this->buf)->set(this->count, (char16_t)c);
		this->count = newcount;
	}
}

void CharArrayWriter::write($chars* c, int32_t off, int32_t len) {
	if ((off < 0) || (off > $nc(c)->length) || (len < 0) || ((off + len) > $nc(c)->length) || ((off + len) < 0)) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	$synchronized(this->lock) {
		int32_t newcount = this->count + len;
		if (newcount > $nc(this->buf)->length) {
			$set(this, buf, $Arrays::copyOf(this->buf, $Math::max($nc(this->buf)->length << 1, newcount)));
		}
		$System::arraycopy(c, off, this->buf, this->count, len);
		this->count = newcount;
	}
}

void CharArrayWriter::write($String* str, int32_t off, int32_t len) {
	$synchronized(this->lock) {
		int32_t newcount = this->count + len;
		if (newcount > $nc(this->buf)->length) {
			$set(this, buf, $Arrays::copyOf(this->buf, $Math::max($nc(this->buf)->length << 1, newcount)));
		}
		$nc(str)->getChars(off, off + len, this->buf, this->count);
		this->count = newcount;
	}
}

void CharArrayWriter::writeTo($Writer* out) {
	$synchronized(this->lock) {
		$nc(out)->write(this->buf, 0, this->count);
	}
}

CharArrayWriter* CharArrayWriter::append($CharSequence* csq) {
	$var($String, s, $String::valueOf($of(csq)));
	write(s, 0, s->length());
	return this;
}

CharArrayWriter* CharArrayWriter::append($CharSequence* csq$renamed, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, csq, csq$renamed);
	if (csq == nullptr) {
		$assign(csq, "null"_s);
	}
	return append($($nc(csq)->subSequence(start, end)));
}

CharArrayWriter* CharArrayWriter::append(char16_t c) {
	write((int32_t)c);
	return this;
}

void CharArrayWriter::reset() {
	this->count = 0;
}

$chars* CharArrayWriter::toCharArray() {
	$synchronized(this->lock) {
		return $Arrays::copyOf(this->buf, this->count);
	}
}

int32_t CharArrayWriter::size() {
	return this->count;
}

$String* CharArrayWriter::toString() {
	$synchronized(this->lock) {
		return $new($String, this->buf, 0, this->count);
	}
}

void CharArrayWriter::flush() {
}

void CharArrayWriter::close() {
}

CharArrayWriter::CharArrayWriter() {
}

$Class* CharArrayWriter::load$($String* name, bool initialize) {
	$loadClass(CharArrayWriter, name, initialize, &_CharArrayWriter_ClassInfo_, allocate$CharArrayWriter);
	return class$;
}

$Class* CharArrayWriter::class$ = nullptr;

	} // io
} // java