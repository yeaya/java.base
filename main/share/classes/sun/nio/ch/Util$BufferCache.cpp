#include <sun/nio/ch/Util$BufferCache.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef TEMP_BUF_POOL_SIZE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Util$BufferCache_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Util$BufferCache, $assertionsDisabled)},
	{"buffers", "[Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Util$BufferCache, buffers)},
	{"count", "I", nullptr, $PRIVATE, $field(Util$BufferCache, count)},
	{"start", "I", nullptr, $PRIVATE, $field(Util$BufferCache, start)},
	{}
};

$MethodInfo _Util$BufferCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Util$BufferCache::*)()>(&Util$BufferCache::init$))},
	{"get", "(I)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"isEmpty", "()Z", nullptr, 0},
	{"next", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Util$BufferCache::*)(int32_t)>(&Util$BufferCache::next))},
	{"offerFirst", "(Ljava/nio/ByteBuffer;)Z", nullptr, 0},
	{"offerLast", "(Ljava/nio/ByteBuffer;)Z", nullptr, 0},
	{"removeFirst", "()Ljava/nio/ByteBuffer;", nullptr, 0},
	{}
};

$InnerClassInfo _Util$BufferCache_InnerClassesInfo_[] = {
	{"sun.nio.ch.Util$BufferCache", "sun.nio.ch.Util", "BufferCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Util$BufferCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Util$BufferCache",
	"java.lang.Object",
	nullptr,
	_Util$BufferCache_FieldInfo_,
	_Util$BufferCache_MethodInfo_,
	nullptr,
	nullptr,
	_Util$BufferCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Util"
};

$Object* allocate$Util$BufferCache($Class* clazz) {
	return $of($alloc(Util$BufferCache));
}

bool Util$BufferCache::$assertionsDisabled = false;

int32_t Util$BufferCache::next(int32_t i) {
	$init($Util);
	return $mod((i + 1), $Util::TEMP_BUF_POOL_SIZE);
}

void Util$BufferCache::init$() {
	$init($Util);
	$set(this, buffers, $new($ByteBufferArray, $Util::TEMP_BUF_POOL_SIZE));
}

$ByteBuffer* Util$BufferCache::get(int32_t size) {
	$useLocalCurrentObjectStackCache();
	if (!Util$BufferCache::$assertionsDisabled && ! !$Util::isBufferTooLarge(size)) {
		$throwNew($AssertionError);
	}
	if (this->count == 0) {
		return nullptr;
	}
	$var($ByteBufferArray, buffers, this->buffers);
	$var($ByteBuffer, buf, $nc(buffers)->get(this->start));
	if ($nc(buf)->capacity() < size) {
		$assign(buf, nullptr);
		int32_t i = this->start;
		while ((i = next(i)) != this->start) {
			$var($ByteBuffer, bb, buffers->get(i));
			if (bb == nullptr) {
				break;
			}
			if ($nc(bb)->capacity() >= size) {
				$assign(buf, bb);
				break;
			}
		}
		if (buf == nullptr) {
			return nullptr;
		}
		buffers->set(i, buffers->get(this->start));
	}
	buffers->set(this->start, nullptr);
	this->start = next(this->start);
	--this->count;
	$nc(buf)->rewind();
	buf->limit(size);
	return buf;
}

bool Util$BufferCache::offerFirst($ByteBuffer* buf) {
	if (!Util$BufferCache::$assertionsDisabled && ! !$Util::isBufferTooLarge(buf)) {
		$throwNew($AssertionError);
	}
	if (this->count >= $Util::TEMP_BUF_POOL_SIZE) {
		return false;
	} else {
		this->start = $mod((this->start + $Util::TEMP_BUF_POOL_SIZE - 1), $Util::TEMP_BUF_POOL_SIZE);
		$nc(this->buffers)->set(this->start, buf);
		++this->count;
		return true;
	}
}

bool Util$BufferCache::offerLast($ByteBuffer* buf) {
	if (!Util$BufferCache::$assertionsDisabled && ! !$Util::isBufferTooLarge(buf)) {
		$throwNew($AssertionError);
	}
	if (this->count >= $Util::TEMP_BUF_POOL_SIZE) {
		return false;
	} else {
		int32_t next = $mod((this->start + this->count), $Util::TEMP_BUF_POOL_SIZE);
		$nc(this->buffers)->set(next, buf);
		++this->count;
		return true;
	}
}

bool Util$BufferCache::isEmpty() {
	return this->count == 0;
}

$ByteBuffer* Util$BufferCache::removeFirst() {
	if (!Util$BufferCache::$assertionsDisabled && !(this->count > 0)) {
		$throwNew($AssertionError);
	}
	$var($ByteBuffer, buf, $nc(this->buffers)->get(this->start));
	$nc(this->buffers)->set(this->start, nullptr);
	this->start = next(this->start);
	--this->count;
	return buf;
}

void clinit$Util$BufferCache($Class* class$) {
	$load($Util);
	Util$BufferCache::$assertionsDisabled = !$Util::class$->desiredAssertionStatus();
}

Util$BufferCache::Util$BufferCache() {
}

$Class* Util$BufferCache::load$($String* name, bool initialize) {
	$loadClass(Util$BufferCache, name, initialize, &_Util$BufferCache_ClassInfo_, clinit$Util$BufferCache, allocate$Util$BufferCache);
	return class$;
}

$Class* Util$BufferCache::class$ = nullptr;

		} // ch
	} // nio
} // sun