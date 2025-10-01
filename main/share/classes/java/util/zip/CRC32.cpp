#include <java/util/zip/CRC32.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Objects.h>
#include <java/util/zip/ZipUtils.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include "_java_util_zip_CRC32.h"

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Objects = ::java::util::Objects;
using $Checksum = ::java::util::zip::Checksum;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

$CompoundAttribute _CRC32_MethodAnnotations_update6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CRC32_MethodAnnotations_updateByteBuffer08[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CRC32_MethodAnnotations_updateBytes011[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _CRC32_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CRC32, $assertionsDisabled)},
	{"crc", "I", nullptr, $PRIVATE, $field(CRC32, crc)},
	{}
};

$MethodInfo _CRC32_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CRC32::*)()>(&CRC32::init$))},
	{"getValue", "()J", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"update", "(I)V", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"update", "(II)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&CRC32::update)), nullptr, nullptr, _CRC32_MethodAnnotations_update6},
	{"updateByteBuffer", "(IJII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int32_t)>(&CRC32::updateByteBuffer))},
	{"updateByteBuffer0", "(IJII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int32_t)>(&CRC32::updateByteBuffer0)), nullptr, nullptr, _CRC32_MethodAnnotations_updateByteBuffer08},
	{"updateByteBufferCheck", "(J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t)>(&CRC32::updateByteBufferCheck))},
	{"updateBytes", "(I[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t,int32_t)>(&CRC32::updateBytes))},
	{"updateBytes0", "(I[BII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t,int32_t)>(&CRC32::updateBytes0)), nullptr, nullptr, _CRC32_MethodAnnotations_updateBytes011},
	{"updateBytesCheck", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&CRC32::updateBytesCheck))},
	{}
};

#define _METHOD_INDEX_update 6
#define _METHOD_INDEX_updateByteBuffer0 8
#define _METHOD_INDEX_updateBytes0 11

$ClassInfo _CRC32_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.CRC32",
	"java.lang.Object",
	"java.util.zip.Checksum",
	_CRC32_FieldInfo_,
	_CRC32_MethodInfo_
};

$Object* allocate$CRC32($Class* clazz) {
	return $of($alloc(CRC32));
}

bool CRC32::$assertionsDisabled = false;

void CRC32::init$() {
}

void CRC32::update(int32_t b) {
	this->crc = update(this->crc, b);
}

void CRC32::update($bytes* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (off < 0 || len < 0 || off > $nc(b)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	this->crc = updateBytes(this->crc, b, off, len);
}

void CRC32::update($ByteBuffer* buffer) {
	int32_t pos = $nc(buffer)->position();
	int32_t limit = buffer->limit();
	if (!CRC32::$assertionsDisabled && !(pos <= limit)) {
		$throwNew($AssertionError);
	}
	int32_t rem = limit - pos;
	if (rem <= 0) {
		return;
	}
	if (buffer->isDirect()) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->crc = updateByteBuffer(this->crc, $nc(($cast($DirectBuffer, buffer)))->address(), pos, rem);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$Reference::reachabilityFence(buffer);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if ($nc(buffer)->hasArray()) {
		int32_t var$1 = this->crc;
		$var($bytes, var$2, $cast($bytes, buffer->array()));
		this->crc = updateBytes(var$1, var$2, pos + buffer->arrayOffset(), rem);
	} else {
		$var($bytes, b, $new($bytes, $Math::min(buffer->remaining(), 4096)));
		while (buffer->hasRemaining()) {
			int32_t length = $Math::min(buffer->remaining(), b->length);
			buffer->get(b, 0, length);
			update(b, 0, length);
		}
	}
	buffer->position(limit);
}

void CRC32::reset() {
	this->crc = 0;
}

int64_t CRC32::getValue() {
	return (int64_t)((int64_t)this->crc & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int32_t CRC32::update(int32_t crc, int32_t b) {
	return _Java_java_util_zip_CRC32_update(crc, b);
}

int32_t CRC32::updateBytes(int32_t crc, $bytes* b, int32_t off, int32_t len) {
	$init(CRC32);
	updateBytesCheck(b, off, len);
	return updateBytes0(crc, b, off, len);
}

int32_t CRC32::updateBytes0(int32_t crc, $bytes* b, int32_t off, int32_t len) {
	return _Java_java_util_zip_CRC32_updateBytes0(crc, b, off, len);
}

void CRC32::updateBytesCheck($bytes* b, int32_t off, int32_t len) {
	$init(CRC32);
	if (len <= 0) {
		return;
	}
	$Objects::requireNonNull(b);
	if (off < 0 || off >= b->length) {
		$throwNew($ArrayIndexOutOfBoundsException, off);
	}
	int32_t endIndex = off + len - 1;
	if (endIndex < 0 || endIndex >= b->length) {
		$throwNew($ArrayIndexOutOfBoundsException, endIndex);
	}
}

int32_t CRC32::updateByteBuffer(int32_t alder, int64_t addr, int32_t off, int32_t len) {
	$init(CRC32);
	updateByteBufferCheck(addr);
	return updateByteBuffer0(alder, addr, off, len);
}

int32_t CRC32::updateByteBuffer0(int32_t alder, int64_t addr, int32_t off, int32_t len) {
	return _Java_java_util_zip_CRC32_updateByteBuffer0(alder, addr, off, len);
}

void CRC32::updateByteBufferCheck(int64_t addr) {
	$init(CRC32);
	if (addr == (int64_t)0) {
		$throwNew($NullPointerException);
	}
}

void clinit$CRC32($Class* class$) {
	CRC32::$assertionsDisabled = !CRC32::class$->desiredAssertionStatus();
	{
		$ZipUtils::loadLibrary();
	}
}

CRC32::CRC32() {
}

$Class* CRC32::load$($String* name, bool initialize) {
	$loadClass(CRC32, name, initialize, &_CRC32_ClassInfo_, clinit$CRC32, allocate$CRC32);
	return class$;
}

$Class* CRC32::class$ = nullptr;

		} // zip
	} // util
} // java