#include <java/util/stream/AbstractSpinedBuffer.h>

#include <java/lang/Math.h>
#include <jcpp.h>

#undef MAX_CHUNK_POWER
#undef MIN_CHUNK_POWER
#undef MIN_CHUNK_SIZE
#undef MIN_SPINE_SIZE
#undef SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _AbstractSpinedBuffer_FieldInfo_[] = {
	{"MIN_CHUNK_POWER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractSpinedBuffer, MIN_CHUNK_POWER)},
	{"MIN_CHUNK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractSpinedBuffer, MIN_CHUNK_SIZE)},
	{"MAX_CHUNK_POWER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractSpinedBuffer, MAX_CHUNK_POWER)},
	{"MIN_SPINE_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AbstractSpinedBuffer, MIN_SPINE_SIZE)},
	{"initialChunkPower", "I", nullptr, $PROTECTED | $FINAL, $field(AbstractSpinedBuffer, initialChunkPower)},
	{"elementIndex", "I", nullptr, $PROTECTED, $field(AbstractSpinedBuffer, elementIndex)},
	{"spineIndex", "I", nullptr, $PROTECTED, $field(AbstractSpinedBuffer, spineIndex)},
	{"priorElementCount", "[J", nullptr, $PROTECTED, $field(AbstractSpinedBuffer, priorElementCount)},
	{}
};

$MethodInfo _AbstractSpinedBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractSpinedBuffer, init$, void)},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(AbstractSpinedBuffer, init$, void, int32_t)},
	{"chunkSize", "(I)I", nullptr, $PROTECTED, $virtualMethod(AbstractSpinedBuffer, chunkSize, int32_t, int32_t)},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractSpinedBuffer, clear, void)},
	{"count", "()J", nullptr, $PUBLIC, $virtualMethod(AbstractSpinedBuffer, count, int64_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractSpinedBuffer, isEmpty, bool)},
	{}
};

$ClassInfo _AbstractSpinedBuffer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.AbstractSpinedBuffer",
	"java.lang.Object",
	nullptr,
	_AbstractSpinedBuffer_FieldInfo_,
	_AbstractSpinedBuffer_MethodInfo_
};

$Object* allocate$AbstractSpinedBuffer($Class* clazz) {
	return $of($alloc(AbstractSpinedBuffer));
}

void AbstractSpinedBuffer::init$() {
	this->initialChunkPower = AbstractSpinedBuffer::MIN_CHUNK_POWER;
}

void AbstractSpinedBuffer::init$(int32_t initialCapacity) {
	$useLocalCurrentObjectStackCache();
	if (initialCapacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal Capacity: "_s, $$str(initialCapacity)}));
	}
	this->initialChunkPower = $Math::max(AbstractSpinedBuffer::MIN_CHUNK_POWER, $Integer::SIZE - $Integer::numberOfLeadingZeros(initialCapacity - 1));
}

bool AbstractSpinedBuffer::isEmpty() {
	return (this->spineIndex == 0) && (this->elementIndex == 0);
}

int64_t AbstractSpinedBuffer::count() {
	return (this->spineIndex == 0) ? (int64_t)this->elementIndex : $nc(this->priorElementCount)->get(this->spineIndex) + this->elementIndex;
}

int32_t AbstractSpinedBuffer::chunkSize(int32_t n) {
	int32_t power = (n == 0 || n == 1) ? this->initialChunkPower : $Math::min(this->initialChunkPower + n - 1, AbstractSpinedBuffer::MAX_CHUNK_POWER);
	return $sl(1, power);
}

AbstractSpinedBuffer::AbstractSpinedBuffer() {
}

$Class* AbstractSpinedBuffer::load$($String* name, bool initialize) {
	$loadClass(AbstractSpinedBuffer, name, initialize, &_AbstractSpinedBuffer_ClassInfo_, allocate$AbstractSpinedBuffer);
	return class$;
}

$Class* AbstractSpinedBuffer::class$ = nullptr;

		} // stream
	} // util
} // java