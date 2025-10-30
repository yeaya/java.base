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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLException = ::javax::net::ssl::SSLException;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Record_FieldInfo_[] = {
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

$MethodInfo _Record_MethodInfo_[] = {
	{"getBytes16", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ByteBuffer*)>(&Record::getBytes16)), "java.io.IOException"},
	{"getBytes24", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ByteBuffer*)>(&Record::getBytes24)), "java.io.IOException"},
	{"getBytes8", "(Ljava/nio/ByteBuffer;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ByteBuffer*)>(&Record::getBytes8)), "java.io.IOException"},
	{"getInt16", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*)>(&Record::getInt16)), "java.io.IOException"},
	{"getInt24", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*)>(&Record::getInt24)), "java.io.IOException"},
	{"getInt32", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*)>(&Record::getInt32)), "java.io.IOException"},
	{"getInt8", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*)>(&Record::getInt8)), "java.io.IOException"},
	{"putBytes16", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,$bytes*)>(&Record::putBytes16)), "java.io.IOException"},
	{"putBytes24", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,$bytes*)>(&Record::putBytes24)), "java.io.IOException"},
	{"putBytes8", "(Ljava/nio/ByteBuffer;[B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,$bytes*)>(&Record::putBytes8)), "java.io.IOException"},
	{"putInt16", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&Record::putInt16)), "java.io.IOException"},
	{"putInt24", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&Record::putInt24)), "java.io.IOException"},
	{"putInt32", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&Record::putInt32)), "java.io.IOException"},
	{"putInt8", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&Record::putInt8)), "java.io.IOException"},
	{"verifyLength", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&Record::verifyLength)), "javax.net.ssl.SSLException"},
	{}
};

$ClassInfo _Record_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.Record",
	nullptr,
	nullptr,
	_Record_FieldInfo_,
	_Record_MethodInfo_
};

$Object* allocate$Record($Class* clazz) {
	return $of($alloc(Record));
}

bool Record::enableCBCProtection = false;

int32_t Record::getInt8($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 1);
	return ((int32_t)($nc(m)->get() & (uint32_t)255));
}

int32_t Record::getInt16($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 2);
	int32_t var$0 = (((int32_t)($nc(m)->get() & (uint32_t)255)) << 8);
	return var$0 | ((int32_t)(m->get() & (uint32_t)255));
}

int32_t Record::getInt24($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 3);
	int32_t var$1 = (((int32_t)($nc(m)->get() & (uint32_t)255)) << 16);
	int32_t var$0 = var$1 | (((int32_t)(m->get() & (uint32_t)255)) << 8);
	return var$0 | ((int32_t)(m->get() & (uint32_t)255));
}

int32_t Record::getInt32($ByteBuffer* m) {
	$init(Record);
	verifyLength(m, 4);
	int32_t var$2 = (((int32_t)($nc(m)->get() & (uint32_t)255)) << 24);
	int32_t var$1 = var$2 | (((int32_t)(m->get() & (uint32_t)255)) << 16);
	int32_t var$0 = var$1 | (((int32_t)(m->get() & (uint32_t)255)) << 8);
	return var$0 | ((int32_t)(m->get() & (uint32_t)255));
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
	$nc(m)->put((int8_t)((int32_t)(i & (uint32_t)255)));
}

void Record::putInt16($ByteBuffer* m, int32_t i) {
	$init(Record);
	verifyLength(m, 2);
	$nc(m)->put((int8_t)((int32_t)((i >> 8) & (uint32_t)255)));
	m->put((int8_t)((int32_t)(i & (uint32_t)255)));
}

void Record::putInt24($ByteBuffer* m, int32_t i) {
	$init(Record);
	verifyLength(m, 3);
	$nc(m)->put((int8_t)((int32_t)((i >> 16) & (uint32_t)255)));
	m->put((int8_t)((int32_t)((i >> 8) & (uint32_t)255)));
	m->put((int8_t)((int32_t)(i & (uint32_t)255)));
}

void Record::putInt32($ByteBuffer* m, int32_t i) {
	$init(Record);
	$nc(m)->put((int8_t)((int32_t)((i >> 24) & (uint32_t)255)));
	m->put((int8_t)((int32_t)((i >> 16) & (uint32_t)255)));
	m->put((int8_t)((int32_t)((i >> 8) & (uint32_t)255)));
	m->put((int8_t)((int32_t)(i & (uint32_t)255)));
}

void Record::putBytes8($ByteBuffer* m, $bytes* s) {
	$init(Record);
	if (s == nullptr || $nc(s)->length == 0) {
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
	if (s == nullptr || $nc(s)->length == 0) {
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
	if (s == nullptr || $nc(s)->length == 0) {
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

void clinit$Record($Class* class$) {
	Record::enableCBCProtection = $Utilities::getBooleanProperty("jsse.enableCBCProtection"_s, true);
}

$Class* Record::load$($String* name, bool initialize) {
	$loadClass(Record, name, initialize, &_Record_ClassInfo_, clinit$Record, allocate$Record);
	return class$;
}

$Class* Record::class$ = nullptr;

		} // ssl
	} // security
} // sun