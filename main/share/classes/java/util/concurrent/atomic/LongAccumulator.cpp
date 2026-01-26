#include <java/util/concurrent/atomic/LongAccumulator.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/concurrent/atomic/LongAccumulator$SerializationProxy.h>
#include <java/util/concurrent/atomic/Striped64$Cell.h>
#include <java/util/concurrent/atomic/Striped64.h>
#include <java/util/function/LongBinaryOperator.h>
#include <jcpp.h>

using $Striped64$CellArray = $Array<::java::util::concurrent::atomic::Striped64$Cell>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongAccumulator$SerializationProxy = ::java::util::concurrent::atomic::LongAccumulator$SerializationProxy;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $Striped64$Cell = ::java::util::concurrent::atomic::Striped64$Cell;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _LongAccumulator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAccumulator, serialVersionUID)},
	{"function", "Ljava/util/function/LongBinaryOperator;", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator, function)},
	{"identity", "J", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator, identity)},
	{}
};

$MethodInfo _LongAccumulator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/LongBinaryOperator;J)V", nullptr, $PUBLIC, $method(LongAccumulator, init$, void, $LongBinaryOperator*, int64_t)},
	{"accumulate", "(J)V", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, accumulate, void, int64_t)},
	{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, doubleValue, double)},
	{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, floatValue, float)},
	{"get", "()J", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, get, int64_t)},
	{"getThenReset", "()J", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, getThenReset, int64_t)},
	{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, intValue, int32_t)},
	{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, longValue, int64_t)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(LongAccumulator, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, reset, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LongAccumulator, toString, $String*)},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(LongAccumulator, writeReplace, $Object*)},
	{}
};

$InnerClassInfo _LongAccumulator_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.LongAccumulator$SerializationProxy", "java.util.concurrent.atomic.LongAccumulator", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongAccumulator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.LongAccumulator",
	"java.util.concurrent.atomic.Striped64",
	nullptr,
	_LongAccumulator_FieldInfo_,
	_LongAccumulator_MethodInfo_,
	nullptr,
	nullptr,
	_LongAccumulator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.LongAccumulator$SerializationProxy"
};

$Object* allocate$LongAccumulator($Class* clazz) {
	return $of($alloc(LongAccumulator));
}

void LongAccumulator::init$($LongBinaryOperator* accumulatorFunction, int64_t identity) {
	$Striped64::init$();
	$set(this, function, accumulatorFunction);
	this->base = (this->identity = identity);
}

void LongAccumulator::accumulate(int64_t x) {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, nullptr);
	int64_t b = 0;
	int64_t v = 0;
	int64_t r = 0;
	int32_t m = 0;
	$var($Striped64$Cell, c, nullptr);
	bool var$0 = ($assign(cs, this->cells)) != nullptr;
	if (!var$0) {
		bool var$1 = (r = $nc(this->function)->applyAsLong(b = this->base, x)) != b;
		var$0 = (var$1 && !casBase(b, r));
	}
	if (var$0) {
		int32_t index = getProbe();
		bool uncontended = true;
		bool var$3 = cs == nullptr || (m = $nc(cs)->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, $nc(cs)->get((int32_t)(index & (uint32_t)m)))) == nullptr;
		if (!var$2) {
			bool var$4 = (r = $nc(this->function)->applyAsLong(v = $nc(c)->value, x)) == v;
			var$2 = !(uncontended = var$4 || $nc(c)->cas(v, r));
		}
		if (var$2) {
			longAccumulate(x, this->function, uncontended, index);
		}
	}
}

int64_t LongAccumulator::get() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t result = this->base;
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					result = $nc(this->function)->applyAsLong(result, c->value);
				}
			}
		}
	}
	return result;
}

void LongAccumulator::reset() {
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

int64_t LongAccumulator::getThenReset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t result = getAndSetBase(this->identity);
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				{
					if (c != nullptr) {
						int64_t v = c->getAndSet(this->identity);
						result = $nc(this->function)->applyAsLong(result, v);
					}
				}
			}
		}
	}
	return result;
}

$String* LongAccumulator::toString() {
	return $Long::toString(get());
}

int64_t LongAccumulator::longValue() {
	return get();
}

int32_t LongAccumulator::intValue() {
	return (int32_t)get();
}

float LongAccumulator::floatValue() {
	return (float)get();
}

double LongAccumulator::doubleValue() {
	return (double)get();
}

$Object* LongAccumulator::writeReplace() {
	return $of($new($LongAccumulator$SerializationProxy, get(), this->function, this->identity));
}

void LongAccumulator::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

LongAccumulator::LongAccumulator() {
}

$Class* LongAccumulator::load$($String* name, bool initialize) {
	$loadClass(LongAccumulator, name, initialize, &_LongAccumulator_ClassInfo_, allocate$LongAccumulator);
	return class$;
}

$Class* LongAccumulator::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java