#include <java/util/DoubleSummaryStatistics.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/DoublePredicate.h>
#include <java/util/stream/DoubleStream.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $DoublePredicate = ::java::util::function::DoublePredicate;
using $DoubleStream = ::java::util::stream::DoubleStream;

namespace java {
	namespace util {

class DoubleSummaryStatistics$$Lambda$isNaN : public $DoublePredicate {
	$class(DoubleSummaryStatistics$$Lambda$isNaN, $NO_CLASS_INIT, $DoublePredicate)
public:
	void init$() {
	}
	virtual bool test(double v) override {
		 return $Double::isNaN(v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoubleSummaryStatistics$$Lambda$isNaN>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DoubleSummaryStatistics$$Lambda$isNaN::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleSummaryStatistics$$Lambda$isNaN::*)()>(&DoubleSummaryStatistics$$Lambda$isNaN::init$))},
	{"test", "(D)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DoubleSummaryStatistics$$Lambda$isNaN::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.DoubleSummaryStatistics$$Lambda$isNaN",
	"java.lang.Object",
	"java.util.function.DoublePredicate",
	nullptr,
	methodInfos
};
$Class* DoubleSummaryStatistics$$Lambda$isNaN::load$($String* name, bool initialize) {
	$loadClass(DoubleSummaryStatistics$$Lambda$isNaN, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoubleSummaryStatistics$$Lambda$isNaN::class$ = nullptr;

$FieldInfo _DoubleSummaryStatistics_FieldInfo_[] = {
	{"count", "J", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, count)},
	{"sum", "D", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, sum)},
	{"sumCompensation", "D", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, sumCompensation)},
	{"simpleSum", "D", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, simpleSum)},
	{"min", "D", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, min)},
	{"max", "D", nullptr, $PRIVATE, $field(DoubleSummaryStatistics, max)},
	{}
};

$MethodInfo _DoubleSummaryStatistics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::init$))},
	{"<init>", "(JDDD)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleSummaryStatistics::*)(int64_t,double,double,double)>(&DoubleSummaryStatistics::init$)), "java.lang.IllegalArgumentException"},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/DoubleSummaryStatistics;)V", nullptr, $PUBLIC},
	{"getAverage", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::getAverage))},
	{"getCount", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::getCount))},
	{"getMax", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::getMax))},
	{"getMin", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::getMin))},
	{"getSum", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(DoubleSummaryStatistics::*)()>(&DoubleSummaryStatistics::getSum))},
	{"sumWithCompensation", "(D)V", nullptr, $PRIVATE, $method(static_cast<void(DoubleSummaryStatistics::*)(double)>(&DoubleSummaryStatistics::sumWithCompensation))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DoubleSummaryStatistics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.DoubleSummaryStatistics",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	_DoubleSummaryStatistics_FieldInfo_,
	_DoubleSummaryStatistics_MethodInfo_
};

$Object* allocate$DoubleSummaryStatistics($Class* clazz) {
	return $of($alloc(DoubleSummaryStatistics));
}

void DoubleSummaryStatistics::init$() {
	$init($Double);
	this->min = $Double::POSITIVE_INFINITY;
	this->max = $Double::NEGATIVE_INFINITY;
}

void DoubleSummaryStatistics::init$(int64_t count, double min, double max, double sum) {
	$useLocalCurrentObjectStackCache();
	$init($Double);
	this->min = $Double::POSITIVE_INFINITY;
	this->max = $Double::NEGATIVE_INFINITY;
	if (count < (int64_t)0) {
		$throwNew($IllegalArgumentException, "Negative count value"_s);
	} else if (count > (int64_t)0) {
		if (min > max) {
			$throwNew($IllegalArgumentException, "Minimum greater than maximum"_s);
		}
		int64_t ncount = $nc($($nc($($DoubleStream::of($$new($doubles, {
			min,
			max,
			sum
		}))))->filter(static_cast<$DoublePredicate*>($$new(DoubleSummaryStatistics$$Lambda$isNaN)))))->count();
		if (ncount > 0 && ncount < 3) {
			$throwNew($IllegalArgumentException, "Some, not all, of the minimum, maximum, or sum is NaN"_s);
		}
		this->count = count;
		this->sum = sum;
		this->simpleSum = sum;
		this->sumCompensation = 0.0;
		this->min = min;
		this->max = max;
	}
}

void DoubleSummaryStatistics::accept(double value) {
	++this->count;
	this->simpleSum += value;
	sumWithCompensation(value);
	this->min = $Math::min(this->min, value);
	this->max = $Math::max(this->max, value);
}

void DoubleSummaryStatistics::combine(DoubleSummaryStatistics* other) {
	this->count += $nc(other)->count;
	this->simpleSum += other->simpleSum;
	sumWithCompensation(other->sum);
	sumWithCompensation(other->sumCompensation);
	this->min = $Math::min(this->min, other->min);
	this->max = $Math::max(this->max, other->max);
}

void DoubleSummaryStatistics::sumWithCompensation(double value) {
	double tmp = value - this->sumCompensation;
	double velvel = this->sum + tmp;
	this->sumCompensation = (velvel - this->sum) - tmp;
	this->sum = velvel;
}

int64_t DoubleSummaryStatistics::getCount() {
	return this->count;
}

double DoubleSummaryStatistics::getSum() {
	double tmp = this->sum + this->sumCompensation;
	bool var$0 = $Double::isNaN(tmp);
	if (var$0 && $Double::isInfinite(this->simpleSum)) {
		return this->simpleSum;
	} else {
		return tmp;
	}
}

double DoubleSummaryStatistics::getMin() {
	return this->min;
}

double DoubleSummaryStatistics::getMax() {
	return this->max;
}

double DoubleSummaryStatistics::getAverage() {
	double var$0 = 0.0;
	if (getCount() > 0) {
		double var$1 = getSum();
		var$0 = var$1 / getCount();
	} else {
		var$0 = 0.0;
	}
	return var$0;
}

$String* DoubleSummaryStatistics::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s{count=%d, sum=%f, min=%f, average=%f, max=%f}"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$($of($Long::valueOf(getCount()))),
		$($of($Double::valueOf(getSum()))),
		$($of($Double::valueOf(getMin()))),
		$($of($Double::valueOf(getAverage()))),
		$($of($Double::valueOf(getMax())))
	}));
}

DoubleSummaryStatistics::DoubleSummaryStatistics() {
}

$Class* DoubleSummaryStatistics::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DoubleSummaryStatistics$$Lambda$isNaN::classInfo$.name)) {
			return DoubleSummaryStatistics$$Lambda$isNaN::load$(name, initialize);
		}
	}
	$loadClass(DoubleSummaryStatistics, name, initialize, &_DoubleSummaryStatistics_ClassInfo_, allocate$DoubleSummaryStatistics);
	return class$;
}

$Class* DoubleSummaryStatistics::class$ = nullptr;

	} // util
} // java