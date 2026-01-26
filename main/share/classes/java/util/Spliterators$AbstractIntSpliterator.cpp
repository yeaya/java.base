#include <java/util/Spliterators$AbstractIntSpliterator.h>

#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer.h>
#include <java/util/Spliterators$IntArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/IntConsumer.h>
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
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators$AbstractIntSpliterator$HoldingIntConsumer = ::java::util::Spliterators$AbstractIntSpliterator$HoldingIntConsumer;
using $Spliterators$IntArraySpliterator = ::java::util::Spliterators$IntArraySpliterator;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractIntSpliterator_FieldInfo_[] = {
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractIntSpliterator, MAX_BATCH)},
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractIntSpliterator, BATCH_UNIT)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractIntSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractIntSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractIntSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$AbstractIntSpliterator_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, $PROTECTED, $method(Spliterators$AbstractIntSpliterator, init$, void, int64_t, int32_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractIntSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractIntSpliterator, estimateSize, int64_t)},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractIntSpliterator, trySplit, $Spliterator$OfInt*)},
	{}
};

$InnerClassInfo _Spliterators$AbstractIntSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer", "java.util.Spliterators$AbstractIntSpliterator", "HoldingIntConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractIntSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.Spliterators$AbstractIntSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_Spliterators$AbstractIntSpliterator_FieldInfo_,
	_Spliterators$AbstractIntSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractIntSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractIntSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$AbstractIntSpliterator));
}

void Spliterators$AbstractIntSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = (((int32_t)(additionalCharacteristics & (uint32_t)$Spliterator::SIZED)) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator$OfInt* Spliterators$AbstractIntSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($Spliterators$AbstractIntSpliterator$HoldingIntConsumer, holder, $new($Spliterators$AbstractIntSpliterator$HoldingIntConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(static_cast<$IntConsumer*>(holder))) {
		int32_t n = this->batch + Spliterators$AbstractIntSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$AbstractIntSpliterator::MAX_BATCH) {
			n = Spliterators$AbstractIntSpliterator::MAX_BATCH;
		}
		$var($ints, a, $new($ints, n));
		int32_t j = 0;
		do {
			a->set(j, holder->value);
		} while (++j < n && tryAdvance(static_cast<$IntConsumer*>(holder)));
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$IntArraySpliterator, a, 0, j, characteristics());
	}
	return nullptr;
}

int64_t Spliterators$AbstractIntSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$AbstractIntSpliterator::characteristics() {
	return this->characteristics$;
}

Spliterators$AbstractIntSpliterator::Spliterators$AbstractIntSpliterator() {
}

$Class* Spliterators$AbstractIntSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractIntSpliterator, name, initialize, &_Spliterators$AbstractIntSpliterator_ClassInfo_, allocate$Spliterators$AbstractIntSpliterator);
	return class$;
}

$Class* Spliterators$AbstractIntSpliterator::class$ = nullptr;

	} // util
} // java