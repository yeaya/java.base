#include <java/util/Spliterators$AbstractDoubleSpliterator.h>

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer.h>
#include <java/util/Spliterators$DoubleArraySpliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/DoubleConsumer.h>
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
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer = ::java::util::Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer;
using $Spliterators$DoubleArraySpliterator = ::java::util::Spliterators$DoubleArraySpliterator;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$AbstractDoubleSpliterator_FieldInfo_[] = {
	{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractDoubleSpliterator, MAX_BATCH)},
	{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractDoubleSpliterator, BATCH_UNIT)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractDoubleSpliterator, characteristics$)},
	{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractDoubleSpliterator, est)},
	{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractDoubleSpliterator, batch)},
	{}
};

$MethodInfo _Spliterators$AbstractDoubleSpliterator_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, $PROTECTED, $method(static_cast<void(Spliterators$AbstractDoubleSpliterator::*)(int64_t,int32_t)>(&Spliterators$AbstractDoubleSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$AbstractDoubleSpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer", "java.util.Spliterators$AbstractDoubleSpliterator", "HoldingDoubleConsumer", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$AbstractDoubleSpliterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.Spliterators$AbstractDoubleSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfDouble",
	_Spliterators$AbstractDoubleSpliterator_FieldInfo_,
	_Spliterators$AbstractDoubleSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$AbstractDoubleSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$AbstractDoubleSpliterator($Class* clazz) {
	return $of($alloc(Spliterators$AbstractDoubleSpliterator));
}

void Spliterators$AbstractDoubleSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = (((int32_t)(additionalCharacteristics & (uint32_t)$Spliterator::SIZED)) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator$OfDouble* Spliterators$AbstractDoubleSpliterator::trySplit() {
	$useLocalCurrentObjectStackCache();
	$var($Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, holder, $new($Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(static_cast<$DoubleConsumer*>(holder))) {
		int32_t n = this->batch + Spliterators$AbstractDoubleSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$AbstractDoubleSpliterator::MAX_BATCH) {
			n = Spliterators$AbstractDoubleSpliterator::MAX_BATCH;
		}
		$var($doubles, a, $new($doubles, n));
		int32_t j = 0;
		do {
			a->set(j, holder->value);
		} while (++j < n && tryAdvance(static_cast<$DoubleConsumer*>(holder)));
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$DoubleArraySpliterator, a, 0, j, characteristics());
	}
	return nullptr;
}

int64_t Spliterators$AbstractDoubleSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$AbstractDoubleSpliterator::characteristics() {
	return this->characteristics$;
}

Spliterators$AbstractDoubleSpliterator::Spliterators$AbstractDoubleSpliterator() {
}

$Class* Spliterators$AbstractDoubleSpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$AbstractDoubleSpliterator, name, initialize, &_Spliterators$AbstractDoubleSpliterator_ClassInfo_, allocate$Spliterators$AbstractDoubleSpliterator);
	return class$;
}

$Class* Spliterators$AbstractDoubleSpliterator::class$ = nullptr;

	} // util
} // java