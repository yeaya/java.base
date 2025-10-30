#include <java/util/concurrent/atomic/DoubleAccumulator.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/concurrent/atomic/DoubleAccumulator$SerializationProxy.h>
#include <java/util/concurrent/atomic/Striped64$Cell.h>
#include <java/util/concurrent/atomic/Striped64.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <jcpp.h>

using $Striped64$CellArray = $Array<::java::util::concurrent::atomic::Striped64$Cell>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleAccumulator$SerializationProxy = ::java::util::concurrent::atomic::DoubleAccumulator$SerializationProxy;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $Striped64$Cell = ::java::util::concurrent::atomic::Striped64$Cell;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _DoubleAccumulator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleAccumulator, serialVersionUID)},
	{"function", "Ljava/util/function/DoubleBinaryOperator;", nullptr, $PRIVATE | $FINAL, $field(DoubleAccumulator, function)},
	{"identity", "J", nullptr, $PRIVATE | $FINAL, $field(DoubleAccumulator, identity)},
	{}
};

$MethodInfo _DoubleAccumulator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/DoubleBinaryOperator;D)V", nullptr, $PUBLIC, $method(static_cast<void(DoubleAccumulator::*)($DoubleBinaryOperator*,double)>(&DoubleAccumulator::init$))},
	{"accumulate", "(D)V", nullptr, $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"get", "()D", nullptr, $PUBLIC},
	{"getThenReset", "()D", nullptr, $PUBLIC},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DoubleAccumulator::*)($ObjectInputStream*)>(&DoubleAccumulator::readObject)), "java.io.InvalidObjectException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DoubleAccumulator::*)()>(&DoubleAccumulator::writeReplace))},
	{}
};

$InnerClassInfo _DoubleAccumulator_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.DoubleAccumulator$SerializationProxy", "java.util.concurrent.atomic.DoubleAccumulator", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DoubleAccumulator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.DoubleAccumulator",
	"java.util.concurrent.atomic.Striped64",
	nullptr,
	_DoubleAccumulator_FieldInfo_,
	_DoubleAccumulator_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleAccumulator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.DoubleAccumulator$SerializationProxy"
};

$Object* allocate$DoubleAccumulator($Class* clazz) {
	return $of($alloc(DoubleAccumulator));
}

void DoubleAccumulator::init$($DoubleBinaryOperator* accumulatorFunction, double identity) {
	$Striped64::init$();
	$set(this, function, accumulatorFunction);
	this->base = (this->identity = $Double::doubleToRawLongBits(identity));
}

void DoubleAccumulator::accumulate(double x) {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, nullptr);
	int64_t b = 0;
	int64_t v = 0;
	int64_t r = 0;
	int32_t m = 0;
	$var($Striped64$Cell, c, nullptr);
	bool var$0 = ($assign(cs, this->cells)) != nullptr;
	if (!var$0) {
		bool var$1 = (r = $Double::doubleToRawLongBits($nc(this->function)->applyAsDouble($Double::longBitsToDouble(b = this->base), x))) != b;
		var$0 = (var$1 && !casBase(b, r));
	}
	if (var$0) {
		int32_t index = getProbe();
		bool uncontended = true;
		bool var$3 = cs == nullptr || (m = $nc(cs)->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, $nc(cs)->get((int32_t)(index & (uint32_t)m)))) == nullptr;
		if (!var$2) {
			bool var$4 = ((r = $Double::doubleToRawLongBits($nc(this->function)->applyAsDouble($Double::longBitsToDouble(v = $nc(c)->value), x))) == v);
			var$2 = !(uncontended = var$4 || $nc(c)->cas(v, r));
		}
		if (var$2) {
			doubleAccumulate(x, this->function, uncontended, index);
		}
	}
}

double DoubleAccumulator::get() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	double result = $Double::longBitsToDouble(this->base);
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					result = $nc(this->function)->applyAsDouble(result, $Double::longBitsToDouble(c->value));
				}
			}
		}
	}
	return result;
}

void DoubleAccumulator::reset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	this->base = this->identity;
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					c->reset(this->identity);
				}
			}
		}
	}
}

double DoubleAccumulator::getThenReset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	double result = $Double::longBitsToDouble(getAndSetBase(this->identity));
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				{
					if (c != nullptr) {
						double v = $Double::longBitsToDouble(c->getAndSet(this->identity));
						result = $nc(this->function)->applyAsDouble(result, v);
					}
				}
			}
		}
	}
	return result;
}

$String* DoubleAccumulator::toString() {
	return $Double::toString(get());
}

double DoubleAccumulator::doubleValue() {
	return get();
}

int64_t DoubleAccumulator::longValue() {
	return $cast(int64_t, get());
}

int32_t DoubleAccumulator::intValue() {
	return $cast(int32_t, get());
}

float DoubleAccumulator::floatValue() {
	return (float)get();
}

$Object* DoubleAccumulator::writeReplace() {
	return $of($new($DoubleAccumulator$SerializationProxy, get(), this->function, this->identity));
}

void DoubleAccumulator::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

DoubleAccumulator::DoubleAccumulator() {
}

$Class* DoubleAccumulator::load$($String* name, bool initialize) {
	$loadClass(DoubleAccumulator, name, initialize, &_DoubleAccumulator_ClassInfo_, allocate$DoubleAccumulator);
	return class$;
}

$Class* DoubleAccumulator::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java