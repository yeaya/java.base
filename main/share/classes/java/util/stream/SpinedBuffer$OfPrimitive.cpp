#include <java/util/stream/SpinedBuffer$OfPrimitive.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <java/util/stream/AbstractSpinedBuffer.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/SpinedBuffer.h>
#include <jcpp.h>

#undef BAD_SIZE
#undef MAX_ARRAY_SIZE
#undef MIN_SPINE_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Consumer = ::java::util::function::Consumer;
using $AbstractSpinedBuffer = ::java::util::stream::AbstractSpinedBuffer;
using $Nodes = ::java::util::stream::Nodes;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SpinedBuffer$OfPrimitive_FieldInfo_[] = {
	{"curChunk", "Ljava/lang/Object;", "TT_ARR;", 0, $field(SpinedBuffer$OfPrimitive, curChunk)},
	{"spine", "[Ljava/lang/Object;", "[TT_ARR;", 0, $field(SpinedBuffer$OfPrimitive, spine)},
	{}
};

$MethodInfo _SpinedBuffer$OfPrimitive_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SpinedBuffer$OfPrimitive::*)(int32_t)>(&SpinedBuffer$OfPrimitive::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpinedBuffer$OfPrimitive::*)()>(&SpinedBuffer$OfPrimitive::init$))},
	{"arrayForEach", "(Ljava/lang/Object;IILjava/lang/Object;)V", "(TT_ARR;IITT_CONS;)V", $PROTECTED | $ABSTRACT},
	{"arrayLength", "(Ljava/lang/Object;)I", "(TT_ARR;)I", $PROTECTED | $ABSTRACT},
	{"asPrimitiveArray", "()Ljava/lang/Object;", "()TT_ARR;", $PUBLIC},
	{"capacity", "()J", nullptr, $PROTECTED},
	{"chunkFor", "(J)I", nullptr, $PROTECTED},
	{"clear", "()V", nullptr, $PUBLIC},
	{"copyInto", "(Ljava/lang/Object;I)V", "(TT_ARR;I)V", $PUBLIC},
	{"ensureCapacity", "(J)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SpinedBuffer$OfPrimitive::*)(int64_t)>(&SpinedBuffer$OfPrimitive::ensureCapacity))},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC},
	{"increaseCapacity", "()V", nullptr, $PROTECTED},
	{"inflateSpine", "()V", nullptr, $PRIVATE, $method(static_cast<void(SpinedBuffer$OfPrimitive::*)()>(&SpinedBuffer$OfPrimitive::inflateSpine))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"newArray", "(I)Ljava/lang/Object;", "(I)TT_ARR;", $PUBLIC | $ABSTRACT},
	{"newArrayArray", "(I)[Ljava/lang/Object;", "(I)[TT_ARR;", $PROTECTED | $ABSTRACT},
	{"preAccept", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpinedBuffer$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.SpinedBuffer$OfPrimitive", "java.util.stream.SpinedBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator", "java.util.stream.SpinedBuffer$OfPrimitive", "BaseSpliterator", $ABSTRACT},
	{}
};

$ClassInfo _SpinedBuffer$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SpinedBuffer$OfPrimitive",
	"java.util.stream.AbstractSpinedBuffer",
	"java.lang.Iterable",
	_SpinedBuffer$OfPrimitive_FieldInfo_,
	_SpinedBuffer$OfPrimitive_MethodInfo_,
	"<E:Ljava/lang/Object;T_ARR:Ljava/lang/Object;T_CONS:Ljava/lang/Object;>Ljava/util/stream/AbstractSpinedBuffer;Ljava/lang/Iterable<TE;>;",
	nullptr,
	_SpinedBuffer$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SpinedBuffer"
};

$Object* allocate$SpinedBuffer$OfPrimitive($Class* clazz) {
	return $of($alloc(SpinedBuffer$OfPrimitive));
}

int32_t SpinedBuffer$OfPrimitive::hashCode() {
	 return this->$AbstractSpinedBuffer::hashCode();
}

bool SpinedBuffer$OfPrimitive::equals(Object$* obj) {
	 return this->$AbstractSpinedBuffer::equals(obj);
}

$Object* SpinedBuffer$OfPrimitive::clone() {
	 return this->$AbstractSpinedBuffer::clone();
}

$String* SpinedBuffer$OfPrimitive::toString() {
	 return this->$AbstractSpinedBuffer::toString();
}

void SpinedBuffer$OfPrimitive::finalize() {
	this->$AbstractSpinedBuffer::finalize();
}

void SpinedBuffer$OfPrimitive::init$(int32_t initialCapacity) {
	$AbstractSpinedBuffer::init$(initialCapacity);
	$set(this, curChunk, newArray($sl(1, this->initialChunkPower)));
}

void SpinedBuffer$OfPrimitive::init$() {
	$AbstractSpinedBuffer::init$();
	$set(this, curChunk, newArray($sl(1, this->initialChunkPower)));
}

int64_t SpinedBuffer$OfPrimitive::capacity() {
	return (this->spineIndex == 0) ? (int64_t)arrayLength(this->curChunk) : $nc(this->priorElementCount)->get(this->spineIndex) + arrayLength($nc(this->spine)->get(this->spineIndex));
}

void SpinedBuffer$OfPrimitive::inflateSpine() {
	if (this->spine == nullptr) {
		$set(this, spine, newArrayArray($AbstractSpinedBuffer::MIN_SPINE_SIZE));
		$set(this, priorElementCount, $new($longs, $AbstractSpinedBuffer::MIN_SPINE_SIZE));
		$nc(this->spine)->set(0, this->curChunk);
	}
}

void SpinedBuffer$OfPrimitive::ensureCapacity(int64_t targetSize) {
	$useLocalCurrentObjectStackCache();
	int64_t capacity = this->capacity();
	if (targetSize > capacity) {
		inflateSpine();
		for (int32_t i = this->spineIndex + 1; targetSize > capacity; ++i) {
			if (i >= $nc(this->spine)->length) {
				int32_t newSpineSize = $nc(this->spine)->length * 2;
				$set(this, spine, $Arrays::copyOf(this->spine, newSpineSize));
				$set(this, priorElementCount, $Arrays::copyOf(this->priorElementCount, newSpineSize));
			}
			int32_t nextChunkSize = chunkSize(i);
			$nc(this->spine)->set(i, $(newArray(nextChunkSize)));
			$nc(this->priorElementCount)->set(i, $nc(this->priorElementCount)->get(i - 1) + arrayLength($nc(this->spine)->get(i - 1)));
			capacity += nextChunkSize;
		}
	}
}

void SpinedBuffer$OfPrimitive::increaseCapacity() {
	ensureCapacity(capacity() + 1);
}

int32_t SpinedBuffer$OfPrimitive::chunkFor(int64_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->spineIndex == 0) {
		if (index < this->elementIndex) {
			return 0;
		} else {
			$throwNew($IndexOutOfBoundsException, $($Long::toString(index)));
		}
	}
	if (index >= count()) {
		$throwNew($IndexOutOfBoundsException, $($Long::toString(index)));
	}
	for (int32_t j = 0; j <= this->spineIndex; ++j) {
		if (index < $nc(this->priorElementCount)->get(j) + arrayLength($nc(this->spine)->get(j))) {
			return j;
		}
	}
	$throwNew($IndexOutOfBoundsException, $($Long::toString(index)));
}

void SpinedBuffer$OfPrimitive::copyInto(Object$* array, int32_t offset) {
	int64_t finalOffset = offset + count();
	if (finalOffset > arrayLength(array) || finalOffset < offset) {
		$throwNew($IndexOutOfBoundsException, "does not fit"_s);
	}
	if (this->spineIndex == 0) {
		$System::arraycopy(this->curChunk, 0, array, offset, this->elementIndex);
	} else {
		for (int32_t i = 0; i < this->spineIndex; ++i) {
			$System::arraycopy($nc(this->spine)->get(i), 0, array, offset, arrayLength($nc(this->spine)->get(i)));
			offset += arrayLength($nc(this->spine)->get(i));
		}
		if (this->elementIndex > 0) {
			$System::arraycopy(this->curChunk, 0, array, offset, this->elementIndex);
		}
	}
}

$Object* SpinedBuffer$OfPrimitive::asPrimitiveArray() {
	int64_t size = count();
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$var($Object, result, newArray((int32_t)size));
	copyInto(result, 0);
	return $of(result);
}

void SpinedBuffer$OfPrimitive::preAccept() {
	if (this->elementIndex == arrayLength(this->curChunk)) {
		inflateSpine();
		if (this->spineIndex + 1 >= $nc(this->spine)->length || $nc(this->spine)->get(this->spineIndex + 1) == nullptr) {
			increaseCapacity();
		}
		this->elementIndex = 0;
		++this->spineIndex;
		$set(this, curChunk, $nc(this->spine)->get(this->spineIndex));
	}
}

void SpinedBuffer$OfPrimitive::clear() {
	if (this->spine != nullptr) {
		$set(this, curChunk, $nc(this->spine)->get(0));
		$set(this, spine, nullptr);
		$set(this, priorElementCount, nullptr);
	}
	this->elementIndex = 0;
	this->spineIndex = 0;
}

void SpinedBuffer$OfPrimitive::forEach(Object$* consumer) {
	for (int32_t j = 0; j < this->spineIndex; ++j) {
		arrayForEach($nc(this->spine)->get(j), 0, arrayLength($nc(this->spine)->get(j)), consumer);
	}
	arrayForEach(this->curChunk, 0, this->elementIndex, consumer);
}

SpinedBuffer$OfPrimitive::SpinedBuffer$OfPrimitive() {
}

$Class* SpinedBuffer$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(SpinedBuffer$OfPrimitive, name, initialize, &_SpinedBuffer$OfPrimitive_ClassInfo_, allocate$SpinedBuffer$OfPrimitive);
	return class$;
}

$Class* SpinedBuffer$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java