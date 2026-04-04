#include <java/util/concurrent/atomic/LongAdder.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/concurrent/atomic/LongAdder$SerializationProxy.h>
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
using $LongAdder$SerializationProxy = ::java::util::concurrent::atomic::LongAdder$SerializationProxy;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $Striped64$Cell = ::java::util::concurrent::atomic::Striped64$Cell;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

void LongAdder::init$() {
	$Striped64::init$();
}

void LongAdder::add(int64_t x) {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, nullptr);
	int64_t b = 0;
	int64_t v = 0;
	int32_t m = 0;
	$var($Striped64$Cell, c, nullptr);
	bool var$0 = ($assign(cs, this->cells)) != nullptr;
	if (!var$0) {
		int64_t var$1 = b = this->base;
		var$0 = !casBase(var$1, b + x);
	}
	if (var$0) {
		int32_t index = getProbe();
		bool uncontended = true;
		bool var$3 = cs == nullptr || (m = cs->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, cs->get(index & m))) == nullptr;
		if (!var$2) {
			int64_t var$4 = v = $nc(c)->value;
			var$2 = !(uncontended = $nc(c)->cas(var$4, v + x));
		}
		if (var$2) {
			longAccumulate(x, nullptr, uncontended, index);
		}
	}
}

void LongAdder::increment() {
	add(1);
}

void LongAdder::decrement() {
	add(-1);
}

int64_t LongAdder::sum() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t sum = this->base;
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				sum += c->value;
			}
		}
	}
	return sum;
}

void LongAdder::reset() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	this->base = 0;
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				c->reset();
			}
		}
	}
}

int64_t LongAdder::sumThenReset() {
	$useLocalObjectStack();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t sum = getAndSetBase(0);
	if (cs != nullptr) {
		$var($Striped64$CellArray, arr$, cs);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Striped64$Cell, c, arr$->get(i$));
			if (c != nullptr) {
				sum += c->getAndSet(0);
			}
		}
	}
	return sum;
}

$String* LongAdder::toString() {
	return $Long::toString(sum());
}

int64_t LongAdder::longValue() {
	return sum();
}

int32_t LongAdder::intValue() {
	return (int32_t)sum();
}

float LongAdder::floatValue() {
	return (float)sum();
}

double LongAdder::doubleValue() {
	return (double)sum();
}

$Object* LongAdder::writeReplace() {
	return $new($LongAdder$SerializationProxy, this);
}

void LongAdder::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

LongAdder::LongAdder() {
}

$Class* LongAdder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAdder, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LongAdder, init$, void)},
		{"add", "(J)V", nullptr, $PUBLIC, $virtualMethod(LongAdder, add, void, int64_t)},
		{"decrement", "()V", nullptr, $PUBLIC, $virtualMethod(LongAdder, decrement, void)},
		{"doubleValue", "()D", nullptr, $PUBLIC, $virtualMethod(LongAdder, doubleValue, double)},
		{"floatValue", "()F", nullptr, $PUBLIC, $virtualMethod(LongAdder, floatValue, float)},
		{"increment", "()V", nullptr, $PUBLIC, $virtualMethod(LongAdder, increment, void)},
		{"intValue", "()I", nullptr, $PUBLIC, $virtualMethod(LongAdder, intValue, int32_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(LongAdder, longValue, int64_t)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(LongAdder, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(LongAdder, reset, void)},
		{"sum", "()J", nullptr, $PUBLIC, $virtualMethod(LongAdder, sum, int64_t)},
		{"sumThenReset", "()J", nullptr, $PUBLIC, $virtualMethod(LongAdder, sumThenReset, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LongAdder, toString, $String*)},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(LongAdder, writeReplace, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.atomic.LongAdder$SerializationProxy", "java.util.concurrent.atomic.LongAdder", "SerializationProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.atomic.LongAdder",
		"java.util.concurrent.atomic.Striped64",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.atomic.LongAdder$SerializationProxy"
	};
	$loadClass(LongAdder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongAdder);
	});
	return class$;
}

$Class* LongAdder::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java