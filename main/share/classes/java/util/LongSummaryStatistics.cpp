#include <java/util/LongSummaryStatistics.h>

#include <java/lang/Math.h>
#include <java/util/function/LongConsumer.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

$FieldInfo _LongSummaryStatistics_FieldInfo_[] = {
	{"count", "J", nullptr, $PRIVATE, $field(LongSummaryStatistics, count)},
	{"sum", "J", nullptr, $PRIVATE, $field(LongSummaryStatistics, sum)},
	{"min", "J", nullptr, $PRIVATE, $field(LongSummaryStatistics, min)},
	{"max", "J", nullptr, $PRIVATE, $field(LongSummaryStatistics, max)},
	{}
};

$MethodInfo _LongSummaryStatistics_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LongSummaryStatistics::*)()>(&LongSummaryStatistics::init$))},
	{"<init>", "(JJJJ)V", nullptr, $PUBLIC, $method(static_cast<void(LongSummaryStatistics::*)(int64_t,int64_t,int64_t,int64_t)>(&LongSummaryStatistics::init$)), "java.lang.IllegalArgumentException"},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"accept", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/LongSummaryStatistics;)V", nullptr, $PUBLIC},
	{"getAverage", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(LongSummaryStatistics::*)()>(&LongSummaryStatistics::getAverage))},
	{"getCount", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(LongSummaryStatistics::*)()>(&LongSummaryStatistics::getCount))},
	{"getMax", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(LongSummaryStatistics::*)()>(&LongSummaryStatistics::getMax))},
	{"getMin", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(LongSummaryStatistics::*)()>(&LongSummaryStatistics::getMin))},
	{"getSum", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(LongSummaryStatistics::*)()>(&LongSummaryStatistics::getSum))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LongSummaryStatistics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.LongSummaryStatistics",
	"java.lang.Object",
	"java.util.function.LongConsumer,java.util.function.IntConsumer",
	_LongSummaryStatistics_FieldInfo_,
	_LongSummaryStatistics_MethodInfo_
};

$Object* allocate$LongSummaryStatistics($Class* clazz) {
	return $of($alloc(LongSummaryStatistics));
}

int32_t LongSummaryStatistics::hashCode() {
	 return this->$LongConsumer::hashCode();
}

bool LongSummaryStatistics::equals(Object$* obj) {
	 return this->$LongConsumer::equals(obj);
}

$Object* LongSummaryStatistics::clone() {
	 return this->$LongConsumer::clone();
}

void LongSummaryStatistics::finalize() {
	this->$LongConsumer::finalize();
}

void LongSummaryStatistics::init$() {
	this->min = $Long::MAX_VALUE;
	this->max = $Long::MIN_VALUE;
}

void LongSummaryStatistics::init$(int64_t count, int64_t min, int64_t max, int64_t sum) {
	this->min = $Long::MAX_VALUE;
	this->max = $Long::MIN_VALUE;
	if (count < (int64_t)0) {
		$throwNew($IllegalArgumentException, "Negative count value"_s);
	} else if (count > (int64_t)0) {
		if (min > max) {
			$throwNew($IllegalArgumentException, "Minimum greater than maximum"_s);
		}
		this->count = count;
		this->sum = sum;
		this->min = min;
		this->max = max;
	}
}

void LongSummaryStatistics::accept(int32_t value) {
	accept((int64_t)value);
}

void LongSummaryStatistics::accept(int64_t value) {
	++this->count;
	this->sum += value;
	this->min = $Math::min(this->min, value);
	this->max = $Math::max(this->max, value);
}

void LongSummaryStatistics::combine(LongSummaryStatistics* other) {
	this->count += $nc(other)->count;
	this->sum += other->sum;
	this->min = $Math::min(this->min, other->min);
	this->max = $Math::max(this->max, other->max);
}

int64_t LongSummaryStatistics::getCount() {
	return this->count;
}

int64_t LongSummaryStatistics::getSum() {
	return this->sum;
}

int64_t LongSummaryStatistics::getMin() {
	return this->min;
}

int64_t LongSummaryStatistics::getMax() {
	return this->max;
}

double LongSummaryStatistics::getAverage() {
	double var$0 = 0.0;
	if (getCount() > 0) {
		double var$1 = (double)getSum();
		var$0 = var$1 / getCount();
	} else {
		var$0 = 0.0;
	}
	return var$0;
}

$String* LongSummaryStatistics::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s{count=%d, sum=%d, min=%d, average=%f, max=%d}"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$($of($Long::valueOf(getCount()))),
		$($of($Long::valueOf(getSum()))),
		$($of($Long::valueOf(getMin()))),
		$($of($Double::valueOf(getAverage()))),
		$($of($Long::valueOf(getMax())))
	}));
}

LongSummaryStatistics::LongSummaryStatistics() {
}

$Class* LongSummaryStatistics::load$($String* name, bool initialize) {
	$loadClass(LongSummaryStatistics, name, initialize, &_LongSummaryStatistics_ClassInfo_, allocate$LongSummaryStatistics);
	return class$;
}

$Class* LongSummaryStatistics::class$ = nullptr;

	} // util
} // java