#include <sun/security/ssl/Record.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef OVERFLOW_OF_INT08
#undef OVERFLOW_OF_INT16
#undef OVERFLOW_OF_INT24

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLException = ::javax::net::ssl::SSLException;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

bool Record::enableCBCProtection = false;

int32_t Record::getInt8($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 1);
	return ($nc(m)->get() & 0xff);
}

int32_t Record::getInt16($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 2);
	int32_t var$0 = ($nc(m)->get() & 0xff) << 8;
	return var$0 | (m->get() & 0xff);
}

int32_t Record::getInt24($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 3);
	int32_t var$1 = ($nc(m)->get() & 0xff) << 16;
	int32_t var$0 = var$1 | ((m->get() & 0xff) << 8);
	return var$0 | (m->get() & 0xff);
}

int32_t Record::getInt32($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 4);
	int32_t var$2 = ($nc(m)->get() & 0xff) << 24;
	int32_t var$1 = var$2 | ((m->get() & 0xff) << 16);
	int32_t var$0 = var$1 | ((m->get() & 0xff) << 8);
	return var$0 | (m->get() & 0xff);
}

$bytes* Record::getBytes8($ByteBuffer* m) {
	$init(Record);
	int32_t len = Record::getInt8(m);
	verifyLength(m, len);
	$var($bytes, b, $new($bytes, len));
	$nc(m)->get(b);
	return b;
}

$bytes* Record::getBytes16($ByteBuffer* m) {
	$init(Record);
	int32_t len = Record::getInt16(m);
	verifyLength(m, len);
	$var($bytes, b, $new($bytes, len));
	$nc(m)->get(b);
	return b;
}

$bytes* Record::getBytes24($ByteBuffer* m) {
	$init(Record);
	int32_t len = Record::getInt24(m);
	verifyLength(m, len);
	$var($bytes, b, $new($bytes, len));
	$nc(m)->get(b);
	return b;
}

void Record::putInt8($ByteBuffer* m, int32_t i) {
	$init(Record);
	verifyLength(m, 1);
	$nc(m)->put((int8_t)(i & 0xff));
}

void Record::putInt16($ByteBuffer* m, int32_t i) {
	$init(Record);
	verifyLength(m, 2);
	$nc(m)->put((int8_t)((i >> 8) & 0xff));
	m->put((int8_t)(i & 0xff));
}

void Record::putInt24($ByteBuffer* m, int32_t i) {
	$init(Record);
	verifyLength(m, 3);
	$nc(m)->put((int8_t)((i >> 16) & 0xff));
	m->put((int8_t)((i >> 8) & 0xff));
	m->put((int8_t)(i & 0xff));
}

void Record::putInt32($ByteBuffer* m, int32_t i) {
	$init(Record);
	$nc(m)->put((int8_t)((i >> 24) & 0xff));
	m->put((int8_t)((i >> 16) & 0xff));
	m->put((int8_t)((i >> 8) & 0xff));
	m->put((int8_t)(i & 0xff));
}

void Record::putBytes8($ByteBuffer* m, $bytes* s) {
	$init(Record);
	if (s == nullptr || s->length == 0) {
		verifyLength(m, 1);
		putInt8(m, 0);
	} else {
		verifyLength(m, 1 + s->length);
		putInt8(m, s->length);
		$nc(m)->put(s);
	}
}

void Record::putBytes16($ByteBuffer* m, $bytes* s) {
	$init(Record);
	if (s == nullptr || s->length == 0) {
		verifyLength(m, 2);
		putInt16(m, 0);
	} else {
		verifyLength(m, 2 + s->length);
		putInt16(m, s->length);
		$nc(m)->put(s);
	}
}

void Record::putBytes24($ByteBuffer* m, $bytes* s) {
	$init(Record);
	if (s == nullptr || s->length == 0) {
		verifyLength(m, 3);
		putInt24(m, 0);
	} else {
		verifyLength(m, 3 + s->length);
		putInt24(m, s->length);
		$nc(m)->put(s);
	}
}

void Record::verifyLength($ByteBuffer* m, int32_t len) {
	$init(Record);
	if (len > $nc(m)->remaining()) {
		$throwNew($SSLException, "Insufficient space in the buffer, may be cause by an unexpected end of handshake data."_s);
	}
}

void Record::clinit$($Class* clazz) {
	Record::enableCBCProtection = $Utilities::getBooleanProperty("jsse.enableCBCProtection"_s, true);
}

$Class* Record::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"maxMacSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, maxMacSize)},
		{"maxDataSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, maxDataSize)},
		{"maxPadding", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, maxPadding)},
		{"maxIVLength", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, maxIVLength)},
		{"maxFragmentSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, maxFragmentSize)},
		{"enableCBCProtection", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Record, enableCBCProtection)},
		{"OVERFLOW_OF_INT08", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, OVERFLOW_OF_INT08)},
		{"OVERFLOW_OF_INT16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, OVERFLOW_OF_INT16)},
		{"OVERFLOW_OF_INT24", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Record, OVERFLOW_OF_INT24)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getBytes16", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getBytes16, $bytes*, $ByteBuffer*), "java.io.IOException"},
		{"getBytes24", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getBytes24, $bytes*, $ByteBuffer*), "java.io.IOException"},
		{"getBytes8", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getBytes8, $bytes*, $ByteBuffer*), "java.io.IOException"},
		{"getInt16", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getInt16, int32_t, $ByteBuffer*), "java.io.IOException"},
		{"getInt24", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getInt24, int32_t, $ByteBuffer*), "java.io.IOException"},
		{"getInt32", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getInt32, int32_t, $ByteBuffer*), "java.io.IOException"},
		{"getInt8", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, getInt8, int32_t, $ByteBuffer*), "java.io.IOException"},
		{"putBytes16", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putBytes16, void, $ByteBuffer*, $bytes*), "java.io.IOException"},
		{"putBytes24", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putBytes24, void, $ByteBuffer*, $bytes*), "java.io.IOException"},
		{"putBytes8", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putBytes8, void, $ByteBuffer*, $bytes*), "java.io.IOException"},
		{"putInt16", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putInt16, void, $ByteBuffer*, int32_t), "java.io.IOException"},
		{"putInt24", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putInt24, void, $ByteBuffer*, int32_t), "java.io.IOException"},
		{"putInt32", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putInt32, void, $ByteBuffer*, int32_t), "java.io.IOException"},
		{"putInt8", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, putInt8, void, $ByteBuffer*, int32_t), "java.io.IOException"},
		{"verifyLength", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Record, verifyLength, void, $ByteBuffer*, int32_t), "javax.net.ssl.SSLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.Record",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Record, name, initialize, &classInfo$$, Record::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Record);
	});
	return class$;
}

$Class* Record::class$ = nullptr;

		} // ssl
	} // security
} // sun