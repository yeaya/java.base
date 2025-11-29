#include <java/util/Spliterators$AbstractLongSpliterator.h>

#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer.h>
#include <java/util/Spliterators$LongArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

#undef BATCH_UNIT
#undef MAX_BATCH
#undef MAX_VALUE
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators$AbstractLongSpliterator$HoldingLongConsumer = ::java::util::Spliterators$AbstractLongSpliterator$HoldingLongConsumer;
using $Spliterators$LongArraySpliterator = ::java::util::Spliterators$LongArraySpliterator;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractLongSpliterator_FieldInfo_[] = {
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractLongSpliterator, MAX_BATCH)},
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractLongSpliterator, BATCH_UNIT)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractLongSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractLongSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractLongSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$AbstractLongSpliterator_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, $PROTECTED, $method(static_cast<void(Spliterators$AbstractLongSpliterator::*)(int64_t,int32_t)>(&Spliterators$AbstractLongSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractLongSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer", "java.util.Spliterators$AbstractLongSpliterator", "HoldingLongConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractLongSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.Spliterators$AbstractLongSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfLong",
	_Spliterators$AbstractLongSpliterator_FieldInfo_,
	_Spliterators$AbstractLongSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractLongSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractLongSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$AbstractLongSpliterator));
}

void Spliterators$AbstractLongSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = (((int32_t)(additionalCharacteristics & (uint32_t)$Spliterator::SIZED)) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator$OfLong* Spliterators$AbstractLongSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($Spliterators$AbstractLongSpliterator$HoldingLongConsumer, holder, $new($Spliterators$AbstractLongSpliterator$HoldingLongConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(static_cast<$LongConsumer*>(holder))) {
		int32_t n = this->batch + Spliterators$AbstractLongSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$AbstractLongSpliterator::MAX_BATCH) {
			n = Spliterators$AbstractLongSpliterator::MAX_BATCH;
		}
		$var($longs, a, $new($longs, n));
		int32_t j = 0;
		do {
			a->set(j, holder->value);
		} while (++j < n && tryAdvance(static_cast<$LongConsumer*>(holder)));
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$LongArraySpliterator, a, 0, j, characteristics());
	}
	return nullptr;
}

int64_t Spliterators$AbstractLongSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$AbstractLongSpliterator::characteristics() {
	return this->characteristics$;
}

Spliterators$AbstractLongSpliterator::Spliterators$AbstractLongSpliterator() {
}

$Class* Spliterators$AbstractLongSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractLongSpliterator, name, initialize, &_Spliterators$AbstractLongSpliterator_ClassInfo_, allocate$Spliterators$AbstractLongSpliterator);
	return class$;
}

$Class* Spliterators$AbstractLongSpliterator::class$ = nullptr;

	} // util
} // java