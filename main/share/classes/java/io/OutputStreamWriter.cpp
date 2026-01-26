#include <java/io/OutputStreamWriter.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/StreamEncoder.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StreamEncoder = ::sun::nio::cs::StreamEncoder;

namespace java {
	namespace io {

$FieldInfo _OutputStreamWriter_FieldInfo_[] = {
	{"se", "Lsun/nio/cs/StreamEncoder;", nullptr, $PRIVATE | $FINAL, $field(OutputStreamWriter, se)},
	{}
};

$MethodInfo _OutputStreamWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OutputStreamWriter, init$, void, $OutputStream*, $String*), "java.io.UnsupportedEncodingException"},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(OutputStreamWriter, init$, void, $OutputStream*)},
	{"<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(OutputStreamWriter, init$, void, $OutputStream*, $Charset*)},
	{"<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V", nullptr, $PUBLIC, $method(OutputStreamWriter, init$, void, $OutputStream*, $CharsetEncoder*)},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, append, $Writer*, $CharSequence*, int32_t, int32_t), "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, append, $Writer*, $CharSequence*), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, flush, void), "java.io.IOException"},
	{"flushBuffer", "()V", nullptr, 0, $virtualMethod(OutputStreamWriter, flushBuffer, void), "java.io.IOException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, getEncoding, $String*)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, write, void, int32_t), "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(OutputStreamWriter, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _OutputStreamWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.OutputStreamWriter",
	"java.io.Writer",
	nullptr,
	_OutputStreamWriter_FieldInfo_,
	_OutputStreamWriter_MethodInfo_
};

$Object* allocate$OutputStreamWriter($Class* clazz) {
	return $of($alloc(OutputStreamWriter));
}

void OutputStreamWriter::init$($OutputStream* out, $String* charsetName) {
	$Writer::init$(out);
	if (charsetName == nullptr) {
		$throwNew($NullPointerException, "charsetName"_s);
	}
	$set(this, se, $StreamEncoder::forOutputStreamWriter(out, $of(this), charsetName));
}

void OutputStreamWriter::init$($OutputStream* out) {
	$Writer::init$(out);
	$set(this, se, $StreamEncoder::forOutputStreamWriter(out, $of(this), $($Charset::defaultCharset())));
}

void OutputStreamWriter::init$($OutputStream* out, $Charset* cs) {
	$Writer::init$(out);
	if (cs == nullptr) {
		$throwNew($NullPointerException, "charset"_s);
	}
	$set(this, se, $StreamEncoder::forOutputStreamWriter(out, $of(this), cs));
}

void OutputStreamWriter::init$($OutputStream* out, $CharsetEncoder* enc) {
	$Writer::init$(out);
	if (enc == nullptr) {
		$throwNew($NullPointerException, "charset encoder"_s);
	}
	$set(this, se, $StreamEncoder::forOutputStreamWriter(out, $of(this), enc));
}

$String* OutputStreamWriter::getEncoding() {
	return $nc(this->se)->getEncoding();
}

void OutputStreamWriter::flushBuffer() {
	$nc(this->se)->flushBuffer();
}

void OutputStreamWriter::write(int32_t c) {
	$nc(this->se)->write(c);
}

void OutputStreamWriter::write($chars* cbuf, int32_t off, int32_t len) {
	$nc(this->se)->write(cbuf, off, len);
}

void OutputStreamWriter::write($String* str, int32_t off, int32_t len) {
	$nc(this->se)->write(str, off, len);
}

$Writer* OutputStreamWriter::append($CharSequence* csq$renamed, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, csq, csq$renamed);
	if (csq == nullptr) {
		$assign(csq, "null"_s);
	}
	return append($($nc(csq)->subSequence(start, end)));
}

$Writer* OutputStreamWriter::append($CharSequence* csq) {
	if ($instanceOf($CharBuffer, csq)) {
		$nc(this->se)->write($cast($CharBuffer, csq));
	} else {
		$nc(this->se)->write($($String::valueOf($of(csq))));
	}
	return this;
}

void OutputStreamWriter::flush() {
	$nc(this->se)->flush();
}

void OutputStreamWriter::close() {
	$nc(this->se)->close();
}

OutputStreamWriter::OutputStreamWriter() {
}

$Class* OutputStreamWriter::load$($String* name, bool initialize) {
	$loadClass(OutputStreamWriter, name, initialize, &_OutputStreamWriter_ClassInfo_, allocate$OutputStreamWriter);
	return class$;
}

$Class* OutputStreamWriter::class$ = nullptr;

	} // io
} // java