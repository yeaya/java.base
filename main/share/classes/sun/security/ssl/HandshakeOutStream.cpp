#include <sun/security/ssl/HandshakeOutStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/OutputRecord.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef OVERFLOW_OF_INT08
#undef OVERFLOW_OF_INT16
#undef OVERFLOW_OF_INT24

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $OutputRecord = ::sun::security::ssl::OutputRecord;
using $Record = ::sun::security::ssl::Record;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HandshakeOutStream_FieldInfo_[] = {
	{"outputRecord", "Lsun/security/ssl/OutputRecord;", nullptr, 0, $field(HandshakeOutStream, outputRecord)},
	{}
};

$MethodInfo _HandshakeOutStream_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/OutputRecord;)V", nullptr, 0, $method(static_cast<void(HandshakeOutStream::*)($OutputRecord*)>(&HandshakeOutStream::init$))},
	{"checkOverflow", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&HandshakeOutStream::checkOverflow))},
	{"complete", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putBytes16", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"putBytes24", "([B)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"putBytes8", "([B)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"putInt16", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"putInt24", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"putInt32", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"putInt8", "(I)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HandshakeOutStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.ssl.HandshakeOutStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_HandshakeOutStream_FieldInfo_,
	_HandshakeOutStream_MethodInfo_
};

$Object* allocate$HandshakeOutStream($Class* clazz) {
	return $of($alloc(HandshakeOutStream));
}

void HandshakeOutStream::init$($OutputRecord* outputRecord) {
	$ByteArrayOutputStream::init$();
	$set(this, outputRecord, outputRecord);
}

void HandshakeOutStream::complete() {
	$useLocalCurrentObjectStackCache();
	if (size() < 4) {
		$throwNew($RuntimeException, "handshake message is not available"_s);
	}
	if (this->outputRecord != nullptr) {
		if (!$nc(this->outputRecord)->isClosed()) {
			$nc(this->outputRecord)->encodeHandshake(this->buf, 0, this->count);
		} else {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
				$SSLLogger::warning("outbound has closed, ignore outbound handshake messages"_s, $$new($ObjectArray, {$($of($ByteBuffer::wrap(this->buf, 0, this->count)))}));
			}
		}
		reset();
	}
}

void HandshakeOutStream::write($bytes* b, int32_t off, int32_t len) {
	checkOverflow(len, $Record::OVERFLOW_OF_INT24);
	$ByteArrayOutputStream::write(b, off, len);
}

void HandshakeOutStream::flush() {
	if (this->outputRecord != nullptr) {
		$nc(this->outputRecord)->flush();
	}
}

void HandshakeOutStream::putInt8(int32_t i) {
	checkOverflow(i, $Record::OVERFLOW_OF_INT08);
	$ByteArrayOutputStream::write(i);
}

void HandshakeOutStream::putInt16(int32_t i) {
	checkOverflow(i, $Record::OVERFLOW_OF_INT16);
	$ByteArrayOutputStream::write(i >> 8);
	$ByteArrayOutputStream::write(i);
}

void HandshakeOutStream::putInt24(int32_t i) {
	checkOverflow(i, $Record::OVERFLOW_OF_INT24);
	$ByteArrayOutputStream::write(i >> 16);
	$ByteArrayOutputStream::write(i >> 8);
	$ByteArrayOutputStream::write(i);
}

void HandshakeOutStream::putInt32(int32_t i) {
	$ByteArrayOutputStream::write(i >> 24);
	$ByteArrayOutputStream::write(i >> 16);
	$ByteArrayOutputStream::write(i >> 8);
	$ByteArrayOutputStream::write(i);
}

void HandshakeOutStream::putBytes8($bytes* b) {
	if (b == nullptr) {
		putInt8(0);
	} else {
		putInt8($nc(b)->length);
		$ByteArrayOutputStream::write(b, 0, $nc(b)->length);
	}
}

void HandshakeOutStream::putBytes16($bytes* b) {
	if (b == nullptr) {
		putInt16(0);
	} else {
		putInt16($nc(b)->length);
		$ByteArrayOutputStream::write(b, 0, $nc(b)->length);
	}
}

void HandshakeOutStream::putBytes24($bytes* b) {
	if (b == nullptr) {
		putInt24(0);
	} else {
		putInt24($nc(b)->length);
		$ByteArrayOutputStream::write(b, 0, $nc(b)->length);
	}
}

void HandshakeOutStream::checkOverflow(int32_t length, int32_t limit) {
	$init(HandshakeOutStream);
	$useLocalCurrentObjectStackCache();
	if (length >= limit) {
		$throwNew($RuntimeException, $$str({"Field length overflow, the field length ("_s, $$str(length), ") should be less than "_s, $$str(limit)}));
	}
}

HandshakeOutStream::HandshakeOutStream() {
}

$Class* HandshakeOutStream::load$($String* name, bool initialize) {
	$loadClass(HandshakeOutStream, name, initialize, &_HandshakeOutStream_ClassInfo_, allocate$HandshakeOutStream);
	return class$;
}

$Class* HandshakeOutStream::class$ = nullptr;

		} // ssl
	} // security
} // sun