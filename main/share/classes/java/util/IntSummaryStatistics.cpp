#include <java/util/IntSummaryStatistics.h>

#include <java/lang/Math.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _IntSummaryStatistics_FieldInfo_[] = {
	{"count", "J", nullptr, $PRIVATE, $field(IntSummaryStatistics, count)},
	{"sum", "J", nullptr, $PRIVATE, $field(IntSummaryStatistics, sum)},
	{"min", "I", nullptr, $PRIVATE, $field(IntSummaryStatistics, min)},
	{"max", "I", nullptr, $PRIVATE, $field(IntSummaryStatistics, max)},
	{}
};

$MethodInfo _IntSummaryStatistics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntSummaryStatistics::*)()>(&IntSummaryStatistics::init$))},
	{"<init>", "(JIIJ)V", nullptr, $PUBLIC, $method(static_cast<void(IntSummaryStatistics::*)(int64_t,int32_t,int32_t,int64_t)>(&IntSummaryStatistics::init$)), "java.lang.IllegalArgumentException"},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/IntSummaryStatistics;)V", nullptr, $PUBLIC},
	{"getAverage", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(IntSummaryStatistics::*)()>(&IntSummaryStatistics::getAverage))},
	{"getCount", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(IntSummaryStatistics::*)()>(&IntSummaryStatistics::getCount))},
	{"getMax", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntSummaryStatistics::*)()>(&IntSummaryStatistics::getMax))},
	{"getMin", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IntSummaryStatistics::*)()>(&IntSummaryStatistics::getMin))},
	{"getSum", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(IntSummaryStatistics::*)()>(&IntSummaryStatistics::getSum))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntSummaryStatistics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IntSummaryStatistics",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	_IntSummaryStatistics_FieldInfo_,
	_IntSummaryStatistics_MethodInfo_
};

$Object* allocate$IntSummaryStatistics($Class* clazz) {
	return $of($alloc(IntSummaryStatistics));
}

void IntSummaryStatistics::init$() {
	this->min = $Integer::MAX_VALUE;
	this->max = $Integer::MIN_VALUE;
}

void IntSummaryStatistics::init$(int64_t count, int32_t min, int32_t max, int64_t sum) {
	this->min = $Integer::MAX_VALUE;
	this->max = $Integer::MIN_VALUE;
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

void IntSummaryStatistics::accept(int32_t value) {
	++this->count;
	this->sum += value;
	this->min = $Math::min(this->min, value);
	this->max = $Math::max(this->max, value);
}

void IntSummaryStatistics::combine(IntSummaryStatistics* other) {
	this->count += $nc(other)->count;
	this->sum += other->sum;
	this->min = $Math::min(this->min, other->min);
	this->max = $Math::max(this->max, other->max);
}

int64_t IntSummaryStatistics::getCount() {
	return this->count;
}

int64_t IntSummaryStatistics::getSum() {
	return this->sum;
}

int32_t IntSummaryStatistics::getMin() {
	return this->min;
}

int32_t IntSummaryStatistics::getMax() {
	return this->max;
}

double IntSummaryStatistics::getAverage() {
	double var$0 = 0.0;
	if (getCount() > 0) {
		double var$1 = (double)getSum();
		var$0 = var$1 / getCount();
	} else {
		var$0 = 0.0;
	}
	return var$0;
}

$String* IntSummaryStatistics::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s{count=%d, sum=%d, min=%d, average=%f, max=%d}"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$($of($Long::valueOf(getCount()))),
		$($of($Long::valueOf(getSum()))),
		$($of($Integer::valueOf(getMin()))),
		$($of($Double::valueOf(getAverage()))),
		$($of($Integer::valueOf(getMax())))
	}));
}

IntSummaryStatistics::IntSummaryStatistics() {
}

$Class* IntSummaryStatistics::load$($String* name, bool initialize) {
	$loadClass(IntSummaryStatistics, name, initialize, &_IntSummaryStatistics_ClassInfo_, allocate$IntSummaryStatistics);
	return class$;
}

$Class* IntSummaryStatistics::class$ = nullptr;

	} // util
} // java