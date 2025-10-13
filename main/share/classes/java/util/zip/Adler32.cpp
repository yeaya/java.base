#include <java/util/zip/Adler32.h>

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
#include <java/util/zip/ZipUtils.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include "_java_util_zip_Adler32.h"

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
using $Checksum = ::java::util::zip::Checksum;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

$CompoundAttribute _Adler32_MethodAnnotations_updateByteBuffer7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Adler32_MethodAnnotations_updateBytes8[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Adler32_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Adler32, $assertionsDisabled)},
	{"adler", "I", nullptr, $PRIVATE, $field(Adler32, adler)},
	{}
};

$MethodInfo _Adler32_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Adler32::*)()>(&Adler32::init$))},
	{"getValue", "()J", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"update", "(I)V", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"update", "(II)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Adler32::update))},
	{"updateByteBuffer", "(IJII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int32_t)>(&Adler32::updateByteBuffer)), nullptr, nullptr, _Adler32_MethodAnnotations_updateByteBuffer7},
	{"updateBytes", "(I[BII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t,int32_t)>(&Adler32::updateBytes)), nullptr, nullptr, _Adler32_MethodAnnotations_updateBytes8},
	{}
};

#define _METHOD_INDEX_update 6
#define _METHOD_INDEX_updateByteBuffer 7
#define _METHOD_INDEX_updateBytes 8

$ClassInfo _Adler32_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.Adler32",
	"java.lang.Object",
	"java.util.zip.Checksum",
	_Adler32_FieldInfo_,
	_Adler32_MethodInfo_
};

$Object* allocate$Adler32($Class* clazz) {
	return $of($alloc(Adler32));
}

bool Adler32::$assertionsDisabled = false;

void Adler32::init$() {
	this->adler = 1;
}

void Adler32::update(int32_t b) {
	this->adler = update(this->adler, b);
}

void Adler32::update($bytes* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (off < 0 || len < 0 || off > $nc(b)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	this->adler = updateBytes(this->adler, b, off, len);
}

void Adler32::update($ByteBuffer* buffer) {
	int32_t pos = $nc(buffer)->position();
	int32_t limit = buffer->limit();
	if (!Adler32::$assertionsDisabled && !(pos <= limit)) {
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
				this->adler = updateByteBuffer(this->adler, $nc(($cast($DirectBuffer, buffer)))->address(), pos, rem);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$Reference::reachabilityFence(buffer);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if (buffer->hasArray()) {
		int32_t var$1 = this->adler;
		$var($bytes, var$2, $cast($bytes, buffer->array()));
		this->adler = updateBytes(var$1, var$2, pos + buffer->arrayOffset(), rem);
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

void Adler32::reset() {
	this->adler = 1;
}

int64_t Adler32::getValue() {
	return (int64_t)((int64_t)this->adler & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int32_t Adler32::update(int32_t adler, int32_t b) {
	return _Java_java_util_zip_Adler32_update(adler, b);
}

int32_t Adler32::updateBytes(int32_t adler, $bytes* b, int32_t off, int32_t len) {
	return _Java_java_util_zip_Adler32_updateBytes(adler, b, off, len);
}

int32_t Adler32::updateByteBuffer(int32_t adler, int64_t addr, int32_t off, int32_t len) {
	return _Java_java_util_zip_Adler32_updateByteBuffer(adler, addr, off, len);
}

void clinit$Adler32($Class* class$) {
	Adler32::$assertionsDisabled = !Adler32::class$->desiredAssertionStatus();
	{
		$ZipUtils::loadLibrary();
	}
}

Adler32::Adler32() {
}

$Class* Adler32::load$($String* name, bool initialize) {
	$loadClass(Adler32, name, initialize, &_Adler32_ClassInfo_, clinit$Adler32, allocate$Adler32);
	return class$;
}

$Class* Adler32::class$ = nullptr;

		} // zip
	} // util
} // java