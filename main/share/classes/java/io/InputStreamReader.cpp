#include <java/io/InputStreamReader.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/StreamDecoder.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $StreamDecoder = ::sun::nio::cs::StreamDecoder;

namespace java {
	namespace io {

$FieldInfo _InputStreamReader_FieldInfo_[] = {
	{"sd", "Lsun/nio/cs/StreamDecoder;", nullptr, $PRIVATE | $FINAL, $field(InputStreamReader, sd)},
	{}
};

$MethodInfo _InputStreamReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamReader::*)($InputStream*)>(&InputStreamReader::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamReader::*)($InputStream*,$String*)>(&InputStreamReader::init$)), "java.io.UnsupportedEncodingException"},
	{"<init>", "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamReader::*)($InputStream*,$Charset*)>(&InputStreamReader::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V", nullptr, $PUBLIC, $method(static_cast<void(InputStreamReader::*)($InputStream*,$CharsetDecoder*)>(&InputStreamReader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _InputStreamReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.InputStreamReader",
	"java.io.Reader",
	nullptr,
	_InputStreamReader_FieldInfo_,
	_InputStreamReader_MethodInfo_
};

$Object* allocate$InputStreamReader($Class* clazz) {
	return $of($alloc(InputStreamReader));
}

void InputStreamReader::init$($InputStream* in) {
	$Reader::init$(in);
	$set(this, sd, $StreamDecoder::forInputStreamReader(in, $of(this), $($Charset::defaultCharset())));
}

void InputStreamReader::init$($InputStream* in, $String* charsetName) {
	$Reader::init$(in);
	if (charsetName == nullptr) {
		$throwNew($NullPointerException, "charsetName"_s);
	}
	$set(this, sd, $StreamDecoder::forInputStreamReader(in, $of(this), charsetName));
}

void InputStreamReader::init$($InputStream* in, $Charset* cs) {
	$Reader::init$(in);
	if (cs == nullptr) {
		$throwNew($NullPointerException, "charset"_s);
	}
	$set(this, sd, $StreamDecoder::forInputStreamReader(in, $of(this), cs));
}

void InputStreamReader::init$($InputStream* in, $CharsetDecoder* dec) {
	$Reader::init$(in);
	if (dec == nullptr) {
		$throwNew($NullPointerException, "charset decoder"_s);
	}
	$set(this, sd, $StreamDecoder::forInputStreamReader(in, $of(this), dec));
}

$String* InputStreamReader::getEncoding() {
	return $nc(this->sd)->getEncoding();
}

int32_t InputStreamReader::read($CharBuffer* target) {
	return $nc(this->sd)->read(target);
}

int32_t InputStreamReader::read() {
	return $nc(this->sd)->read();
}

int32_t InputStreamReader::read($chars* cbuf, int32_t off, int32_t len) {
	return $nc(this->sd)->read(cbuf, off, len);
}

bool InputStreamReader::ready() {
	return $nc(this->sd)->ready();
}

void InputStreamReader::close() {
	$nc(this->sd)->close();
}

InputStreamReader::InputStreamReader() {
}

$Class* InputStreamReader::load$($String* name, bool initialize) {
	$loadClass(InputStreamReader, name, initialize, &_InputStreamReader_ClassInfo_, allocate$InputStreamReader);
	return class$;
}

$Class* InputStreamReader::class$ = nullptr;

	} // io
} // java