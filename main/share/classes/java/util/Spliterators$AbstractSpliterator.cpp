#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator$HoldingConsumer.h>
#include <java/util/Spliterators$ArraySpliterator.h>
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
using $Spliterators$AbstractSpliterator$HoldingConsumer = ::java::util::Spliterators$AbstractSpliterator$HoldingConsumer;
using $Spliterators$ArraySpliterator = ::java::util::Spliterators$ArraySpliterator;

namespace java {
	namespace util {

void Spliterators$AbstractSpliterator::init$(int64_t est, int32_t additionalCharacteristics) {
	this->est = est;
	this->characteristics$ = ((additionalCharacteristics & $Spliterator::SIZED) != 0) ? additionalCharacteristics | $Spliterator::SUBSIZED : additionalCharacteristics;
}

$Spliterator* Spliterators$AbstractSpliterator::trySplit() {
	$useLocalObjectStack();
	$var($Spliterators$AbstractSpliterator$HoldingConsumer, holder, $new($Spliterators$AbstractSpliterator$HoldingConsumer));
	int64_t s = this->est;
	if (s > 1 && tryAdvance(holder)) {
		int32_t n = this->batch + Spliterators$AbstractSpliterator::BATCH_UNIT;
		if (n > s) {
			n = (int32_t)s;
		}
		if (n > Spliterators$AbstractSpliterator::MAX_BATCH) {
			n = Spliterators$AbstractSpliterator::MAX_BATCH;
		}
		$var($ObjectArray, a, $new($ObjectArray, n));
		int32_t j = 0;
		do {
			a->set(j, holder->value);
		} while (++j < n && tryAdvance(holder));
		this->batch = j;
		if (this->est != $Long::MAX_VALUE) {
			this->est -= j;
		}
		return $new($Spliterators$ArraySpliterator, a, 0, j, characteristics());
	}
	return nullptr;
}

int64_t Spliterators$AbstractSpliterator::estimateSize() {
	return this->est;
}

int32_t Spliterators$AbstractSpliterator::characteristics() {
	return this->characteristics$;
}

Spliterators$AbstractSpliterator::Spliterators$AbstractSpliterator() {
}

$Class* Spliterators$AbstractSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BATCH_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractSpliterator, BATCH_UNIT)},
		{"MAX_BATCH", "I", nullptr, $STATIC | $FINAL, $constField(Spliterators$AbstractSpliterator, MAX_BATCH)},
		{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$AbstractSpliterator, characteristics$)},
		{"est", "J", nullptr, $PRIVATE, $field(Spliterators$AbstractSpliterator, est)},
		{"batch", "I", nullptr, $PRIVATE, $field(Spliterators$AbstractSpliterator, batch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JI)V", nullptr, $PROTECTED, $method(Spliterators$AbstractSpliterator, init$, void, int64_t, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterators$AbstractSpliterator, estimateSize, int64_t)},
		{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(Spliterators$AbstractSpliterator, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.util.Spliterators$AbstractSpliterator$HoldingConsumer", "java.util.Spliterators$AbstractSpliterator", "HoldingConsumer", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.Spliterators$AbstractSpliterator",
		"java.lang.Object",
		"java.util.Spliterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Spliterators"
	};
	$loadClass(Spliterators$AbstractSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spliterators$AbstractSpliterator);
	});
	return class$;
}

$Class* Spliterators$AbstractSpliterator::class$ = nullptr;

	} // util
} // java