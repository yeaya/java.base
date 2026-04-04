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

void LongAccumulator::init$($LongBinaryOperator* accumulatorFunction, int64_t identity) {
	$Striped64::init$();
	$set(this, function, accumulatorFunction);
	this->base = (this->identity = identity);
}

void LongAccumulator::accumulate(int64_t x) {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, nullptr);
	int64_t b = 0;
	int64_t v = 0;
	int64_t r = 0;
	int32_t m = 0;
	$var($Striped64$Cell, c, nullptr);
	bool var$0 = ($assign(cs, this->cells)) != nullptr;
	if (!var$0) {
		bool var$1 = (r = $nc(this->function)->applyAsLong(b = this->base, x)) != b;
		var$0 = var$1 && !casBase(b, r);
	}
	if (var$0) {
		int32_t index = getProbe();
		bool uncontended = true;
		bool var$3 = cs == nullptr || (m = cs->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, cs->get(index & m))) == nullptr;
		if (!var$2) {
			bool var$4 = (r = $nc(this->function)->applyAsLong(v = $nc(c)->value, x)) == v;
			var$2 = !(uncontended = var$4 || c->cas(v, r));
		}
		if (var$2) {
			longAccumulate(x, this->function, uncontended, index);
		}
	}
}

int64_t LongAccumulator::get() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t result = this->base;
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				result = $nc(this->function)->applyAsLong(result, c->value);
			}
		}
	}
	return result;
}

void LongAccumulator::reset() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	this->base = this->identity;
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				c->reset(this->identity);
			}
		}
	}
}

int64_t LongAccumulator::getThenReset() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t result = getAndSetBase(this->identity);
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				int64_t v = c->getAndSet(this->identity);
				result = $nc(this->function)->applyAsLong(result, v);
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
	return $new($LongAccumulator$SerializationProxy, get(), this->function, this->identity);
}

void LongAccumulator::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

LongAccumulator::LongAccumulator() {
}

$Class* LongAccumulator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAccumulator, serialVersionUID)},
		{"function", "Ljava/util/function/LongBinaryOperator;", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator, function)},
		{"identity", "J", nullptr, $PRIVATE | $FINAL, $field(LongAccumulator, identity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.LongAccumulator$SerializationProxy", "java.util.concurrent.atomic.LongAccumulator", "SerializationProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.LongAccumulator",
		"java.util.concurrent.atomic.Striped64",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.LongAccumulator$SerializationProxy"
	};
	$loadClass(LongAccumulator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongAccumulator);
	});
	return class$;
}

$Class* LongAccumulator::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java