#include <java/util/Spliterators$AbstractDoubleSpliterator.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer.h>
#include <java/util/Spliterators$DoubleArraySpliterator.h>
#include <java/util/Spliterators.h>
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

namespace java {
	namespace util {

void Spliterators$AbstractDoubleSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = ((additionalCharacteristics & $Spliterator::SIZED) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator$OfDouble* Spliterators$AbstractDoubleSpliterator::trySplit() {
	$useLocalObjectStack();
	$var($Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer, holder, $new($Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(holder)) {
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
		} while (++j < n && tryAdvance(holder));
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
	$FieldInfo fieldInfos$$[] = {
		{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractDoubleSpliterator, MAX_BATCH)},
		{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractDoubleSpliterator, BATCH_UNIT)},
		{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractDoubleSpliterator, characteristics$)},
		{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractDoubleSpliterator, est)},
		{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractDoubleSpliterator, batch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JI)V", nullptr, $PROTECTED, $method(Spliterators$AbstractDoubleSpliterator, init$, void, int64_t, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractDoubleSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractDoubleSpliterator, estimateSize, int64_t)},
		{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractDoubleSpliterator, trySplit, $Spliterator$OfDouble*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer", "java.util.Spliterators$AbstractDoubleSpliterator", "HoldingDoubleConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.Spliterators$AbstractDoubleSpliterator",
		"java.lang.Object",
		"java.util.Spliterator$OfDouble",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$AbstractDoubleSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractDoubleSpliterator);
	});
	return class$;
}

$Class* Spliterators$AbstractDoubleSpliterator::class$ = nullptr;

	} // util
} // java