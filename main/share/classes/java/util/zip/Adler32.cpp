#include <java/util/zip/Adler32.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Reference.h>
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
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

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
	$useLocalObjectStack();
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
		$var($Throwable, var$0, nullptr);
		try {
			this->adler = updateByteBuffer(this->adler, $cast($DirectBuffer, buffer)->address(), pos, rem);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(buffer);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else if (buffer->hasArray()) {
		int32_t var$2 = this->adler;
		$var($bytes, var$3, $cast($bytes, buffer->array()));
		this->adler = updateBytes(var$2, var$3, pos + buffer->arrayOffset(), rem);
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
	return (int64_t)this->adler & (int64_t)0xffffffff;
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

void Adler32::clinit$($Class* clazz) {
	Adler32::$assertionsDisabled = !Adler32::class$->desiredAssertionStatus();
	{
		$ZipUtils::loadLibrary();
	}
}

Adler32::Adler32() {
}

$Class* Adler32::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Adler32, $assertionsDisabled)},
		{"adler", "I", nullptr, $PRIVATE, $field(Adler32, adler)},
		{}
	};
	$CompoundAttribute updateByteBuffermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute updateBytesmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Adler32, init$, void)},
		{"getValue", "()J", nullptr, $PUBLIC, $virtualMethod(Adler32, getValue, int64_t)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(Adler32, reset, void)},
		{"update", "(I)V", nullptr, $PUBLIC, $virtualMethod(Adler32, update, void, int32_t)},
		{"update", "([BII)V", nullptr, $PUBLIC, $virtualMethod(Adler32, update, void, $bytes*, int32_t, int32_t)},
		{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Adler32, update, void, $ByteBuffer*)},
		{"update", "(II)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Adler32, update, int32_t, int32_t, int32_t)},
		{"updateByteBuffer", "(IJII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Adler32, updateByteBuffer, int32_t, int32_t, int64_t, int32_t, int32_t), nullptr, nullptr, updateByteBuffermethodAnnotations$$},
		{"updateBytes", "(I[BII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Adler32, updateBytes, int32_t, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, updateBytesmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.Adler32",
		"java.lang.Object",
		"java.util.zip.Checksum",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Adler32, name, initialize, &classInfo$$, Adler32::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Adler32);
	});
	return class$;
}

$Class* Adler32::class$ = nullptr;

		} // zip
	} // util
} // java