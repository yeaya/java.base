#include <java/io/StringWriter.h>

#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace java {
	namespace io {

$FieldInfo _StringWriter_FieldInfo_[] = {
	{"buf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(StringWriter, buf)},
	{}
};

$MethodInfo _StringWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringWriter::*)()>(&StringWriter::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(StringWriter::*)(int32_t)>(&StringWriter::init$))},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;", nullptr, $PUBLIC},
	{"append", "(C)Ljava/io/StringWriter;", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBuffer", "()Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([CII)V", nullptr, $PUBLIC},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.StringWriter",
	"java.io.Writer",
	nullptr,
	_StringWriter_FieldInfo_,
	_StringWriter_MethodInfo_
};

$Object* allocate$StringWriter($Class* clazz) {
	return $of($alloc(StringWriter));
}

void StringWriter::init$() {
	$Writer::init$();
	$set(this, buf, $new($StringBuffer));
	$set(this, lock, this->buf);
}

void StringWriter::init$(int32_t initialSize) {
	$Writer::init$();
	if (initialSize < 0) {
		$throwNew($IllegalArgumentException, "Negative buffer size"_s);
	}
	$set(this, buf, $new($StringBuffer, initialSize));
	$set(this, lock, this->buf);
}

void StringWriter::write(int32_t c) {
	$nc(this->buf)->append((char16_t)c);
}

void StringWriter::write($chars* cbuf, int32_t off, int32_t len) {
	if ((off < 0) || (off > $nc(cbuf)->length) || (len < 0) || ((off + len) > $nc(cbuf)->length) || ((off + len) < 0)) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	$nc(this->buf)->append(cbuf, off, len);
}

void StringWriter::write($String* str) {
	$nc(this->buf)->append(str);
}

void StringWriter::write($String* str, int32_t off, int32_t len) {
	$nc(this->buf)->append(static_cast<$CharSequence*>(str), off, off + len);
}

StringWriter* StringWriter::append($CharSequence* csq) {
	write($($String::valueOf($of(csq))));
	return this;
}

StringWriter* StringWriter::append($CharSequence* csq$renamed, int32_t start, int32_t end) {
	$var($CharSequence, csq, csq$renamed);
	if (csq == nullptr) {
		$assign(csq, "null"_s);
	}
	return append($($nc(csq)->subSequence(start, end)));
}

StringWriter* StringWriter::append(char16_t c) {
	write((int32_t)c);
	return this;
}

$String* StringWriter::toString() {
	return $nc(this->buf)->toString();
}

$StringBuffer* StringWriter::getBuffer() {
	return this->buf;
}

void StringWriter::flush() {
}

void StringWriter::close() {
}

StringWriter::StringWriter() {
}

$Class* StringWriter::load$($String* name, bool initialize) {
	$loadClass(StringWriter, name, initialize, &_StringWriter_ClassInfo_, allocate$StringWriter);
	return class$;
}

$Class* StringWriter::class$ = nullptr;

	} // io
} // java