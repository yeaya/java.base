#include <sun/security/util/HexDumpEncoder.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef ISO_8859_1

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _HexDumpEncoder_FieldInfo_[] = {
	{"offset", "I", nullptr, $PRIVATE, $field(HexDumpEncoder, offset)},
	{"thisLineLength", "I", nullptr, $PRIVATE, $field(HexDumpEncoder, thisLineLength)},
	{"currentByte", "I", nullptr, $PRIVATE, $field(HexDumpEncoder, currentByte)},
	{"thisLine", "[B", nullptr, $PRIVATE, $field(HexDumpEncoder, thisLine)},
	{"pStream", "Ljava/io/PrintStream;", nullptr, $PROTECTED, $field(HexDumpEncoder, pStream)},
	{}
};

$MethodInfo _HexDumpEncoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HexDumpEncoder::*)()>(&HexDumpEncoder::init$))},
	{"bytesPerAtom", "()I", nullptr, $PROTECTED},
	{"bytesPerLine", "()I", nullptr, $PROTECTED},
	{"encode", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "([B)Ljava/lang/String;", nullptr, $PUBLIC},
	{"encode", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"encodeAtom", "(Ljava/io/OutputStream;[BII)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"encodeBuffer", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeBuffer", "([BLjava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeBuffer", "([B)Ljava/lang/String;", nullptr, $PUBLIC},
	{"encodeBuffer", "(Ljava/nio/ByteBuffer;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeBufferPrefix", "(Ljava/io/OutputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"encodeLinePrefix", "(Ljava/io/OutputStream;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"encodeLineSuffix", "(Ljava/io/OutputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getBytes", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(HexDumpEncoder::*)($ByteBuffer*)>(&HexDumpEncoder::getBytes))},
	{"hexDigit", "(Ljava/io/PrintStream;B)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintStream*,int8_t)>(&HexDumpEncoder::hexDigit))},
	{"readFully", "(Ljava/io/InputStream;[B)I", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _HexDumpEncoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.HexDumpEncoder",
	"java.lang.Object",
	nullptr,
	_HexDumpEncoder_FieldInfo_,
	_HexDumpEncoder_MethodInfo_
};

$Object* allocate$HexDumpEncoder($Class* clazz) {
	return $of($alloc(HexDumpEncoder));
}

void HexDumpEncoder::init$() {
	$set(this, thisLine, $new($bytes, 16));
}

void HexDumpEncoder::hexDigit($PrintStream* p, int8_t x) {
	char16_t c = 0;
	c = (char16_t)((int32_t)((x >> 4) & (uint32_t)15));
	if (c > 9) {
		c = (char16_t)((c - 10) + u'A');
	} else {
		c = (char16_t)(c + u'0');
	}
	$nc(p)->write((int32_t)c);
	c = (char16_t)((int32_t)(x & (uint32_t)15));
	if (c > 9) {
		c = (char16_t)((c - 10) + u'A');
	} else {
		c = (char16_t)(c + u'0');
	}
	p->write((int32_t)c);
}

int32_t HexDumpEncoder::bytesPerAtom() {
	return (1);
}

int32_t HexDumpEncoder::bytesPerLine() {
	return (16);
}

void HexDumpEncoder::encodeBufferPrefix($OutputStream* o) {
	this->offset = 0;
	$set(this, pStream, $new($PrintStream, o));
}

void HexDumpEncoder::encodeLinePrefix($OutputStream* o, int32_t len) {
	hexDigit(this->pStream, (int8_t)((int32_t)(((int32_t)((uint32_t)this->offset >> 8)) & (uint32_t)255)));
	hexDigit(this->pStream, (int8_t)((int32_t)(this->offset & (uint32_t)255)));
	$nc(this->pStream)->print(": "_s);
	this->currentByte = 0;
	this->thisLineLength = len;
}

void HexDumpEncoder::encodeAtom($OutputStream* o, $bytes* buf, int32_t off, int32_t len) {
	$nc(this->thisLine)->set(this->currentByte, $nc(buf)->get(off));
	hexDigit(this->pStream, buf->get(off));
	$nc(this->pStream)->print(" "_s);
	++this->currentByte;
	if (this->currentByte == 8) {
		$nc(this->pStream)->print("  "_s);
	}
}

void HexDumpEncoder::encodeLineSuffix($OutputStream* o) {
	if (this->thisLineLength < 16) {
		for (int32_t i = this->thisLineLength; i < 16; ++i) {
			$nc(this->pStream)->print("   "_s);
			if (i == 7) {
				$nc(this->pStream)->print("  "_s);
			}
		}
	}
	$nc(this->pStream)->print(" "_s);
	for (int32_t i = 0; i < this->thisLineLength; ++i) {
		if (($nc(this->thisLine)->get(i) < u' ') || ($nc(this->thisLine)->get(i) > u'z')) {
			$nc(this->pStream)->print("."_s);
		} else {
			$nc(this->pStream)->write((int32_t)$nc(this->thisLine)->get(i));
		}
	}
	$nc(this->pStream)->println();
	this->offset += this->thisLineLength;
}

int32_t HexDumpEncoder::readFully($InputStream* in, $bytes* buffer) {
	for (int32_t i = 0; i < $nc(buffer)->length; ++i) {
		int32_t q = $nc(in)->read();
		if (q == -1) {
			return i;
		}
		buffer->set(i, (int8_t)q);
	}
	return $nc(buffer)->length;
}

void HexDumpEncoder::encode($InputStream* inStream, $OutputStream* outStream) {
	int32_t j = 0;
	int32_t numBytes = 0;
	$var($bytes, tmpbuffer, $new($bytes, bytesPerLine()));
	encodeBufferPrefix(outStream);
	while (true) {
		numBytes = readFully(inStream, tmpbuffer);
		if (numBytes == 0) {
			break;
		}
		encodeLinePrefix(outStream, numBytes);
		for (j = 0; j < numBytes; j += bytesPerAtom()) {
			if ((j + bytesPerAtom()) <= numBytes) {
				encodeAtom(outStream, tmpbuffer, j, bytesPerAtom());
			} else {
				encodeAtom(outStream, tmpbuffer, j, (numBytes) - j);
			}
		}
		if (numBytes < bytesPerLine()) {
			break;
		} else {
			encodeLineSuffix(outStream);
		}
	}
}

$String* HexDumpEncoder::encode($bytes* aBuffer) {
	$var($ByteArrayOutputStream, outStream, $new($ByteArrayOutputStream));
	$var($ByteArrayInputStream, inStream, $new($ByteArrayInputStream, aBuffer));
	try {
		encode(inStream, outStream);
		$init($StandardCharsets);
		return outStream->toString($StandardCharsets::ISO_8859_1);
	} catch ($IOException&) {
		$var($IOException, ignore, $catch());
		$throwNew($Error, "CharacterEncoder.encode internal error"_s);
	}
	$shouldNotReachHere();
}

$bytes* HexDumpEncoder::getBytes($ByteBuffer* bb) {
	$var($bytes, buf, nullptr);
	if ($nc(bb)->hasArray()) {
		$var($bytes, tmp, $cast($bytes, bb->array()));
		bool var$0 = ($nc(tmp)->length == bb->capacity());
		if (var$0 && (tmp->length == bb->remaining())) {
			$assign(buf, tmp);
			bb->position(bb->limit());
		}
	}
	if (buf == nullptr) {
		$assign(buf, $new($bytes, $nc(bb)->remaining()));
		bb->get(buf);
	}
	return buf;
}

$String* HexDumpEncoder::encode($ByteBuffer* aBuffer) {
	$var($bytes, buf, getBytes(aBuffer));
	return encode(buf);
}

void HexDumpEncoder::encodeBuffer($InputStream* inStream, $OutputStream* outStream) {
	int32_t j = 0;
	int32_t numBytes = 0;
	$var($bytes, tmpbuffer, $new($bytes, bytesPerLine()));
	encodeBufferPrefix(outStream);
	while (true) {
		numBytes = readFully(inStream, tmpbuffer);
		if (numBytes == 0) {
			break;
		}
		encodeLinePrefix(outStream, numBytes);
		for (j = 0; j < numBytes; j += bytesPerAtom()) {
			if ((j + bytesPerAtom()) <= numBytes) {
				encodeAtom(outStream, tmpbuffer, j, bytesPerAtom());
			} else {
				encodeAtom(outStream, tmpbuffer, j, (numBytes) - j);
			}
		}
		encodeLineSuffix(outStream);
		if (numBytes < bytesPerLine()) {
			break;
		}
	}
}

void HexDumpEncoder::encodeBuffer($bytes* aBuffer, $OutputStream* aStream) {
	$var($ByteArrayInputStream, inStream, $new($ByteArrayInputStream, aBuffer));
	encodeBuffer(static_cast<$InputStream*>(inStream), aStream);
}

$String* HexDumpEncoder::encodeBuffer($bytes* aBuffer) {
	$var($ByteArrayOutputStream, outStream, $new($ByteArrayOutputStream));
	$var($ByteArrayInputStream, inStream, $new($ByteArrayInputStream, aBuffer));
	try {
		encodeBuffer(static_cast<$InputStream*>(inStream), static_cast<$OutputStream*>(outStream));
	} catch ($Exception&) {
		$var($Exception, IOException, $catch());
		$throwNew($Error, "CharacterEncoder.encodeBuffer internal error"_s);
	}
	return (outStream->toString());
}

void HexDumpEncoder::encodeBuffer($ByteBuffer* aBuffer, $OutputStream* aStream) {
	$var($bytes, buf, getBytes(aBuffer));
	encodeBuffer(buf, aStream);
}

HexDumpEncoder::HexDumpEncoder() {
}

$Class* HexDumpEncoder::load$($String* name, bool initialize) {
	$loadClass(HexDumpEncoder, name, initialize, &_HexDumpEncoder_ClassInfo_, allocate$HexDumpEncoder);
	return class$;
}

$Class* HexDumpEncoder::class$ = nullptr;

		} // util
	} // security
} // sun