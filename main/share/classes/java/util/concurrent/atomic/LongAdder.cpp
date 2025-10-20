#include <java/util/concurrent/atomic/LongAdder.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _LongAdder_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongAdder, serialVersionUID)},
	{}
};

$MethodInfo _LongAdder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LongAdder::*)()>(&LongAdder::init$))},
	{"add", "(J)V", nullptr, $PUBLIC},
	{"decrement", "()V", nullptr, $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"increment", "()V", nullptr, $PUBLIC},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LongAdder::*)($ObjectInputStream*)>(&LongAdder::readObject)), "java.io.InvalidObjectException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"sum", "()J", nullptr, $PUBLIC},
	{"sumThenReset", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(LongAdder::*)()>(&LongAdder::writeReplace))},
	{}
};

$InnerClassInfo _LongAdder_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.LongAdder$SerializationProxy", "java.util.concurrent.atomic.LongAdder", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LongAdder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.LongAdder",
	"java.util.concurrent.atomic.Striped64",
	nullptr,
	_LongAdder_FieldInfo_,
	_LongAdder_MethodInfo_,
	nullptr,
	nullptr,
	_LongAdder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.LongAdder$SerializationProxy"
};

$Object* allocate$LongAdder($Class* clazz) {
	return $of($alloc(LongAdder));
}

void LongAdder::init$() {
	$Striped64::init$();
}

void LongAdder::add(int64_t x) {
	$useLocalCurrentObjectStackCache();
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
		bool var$3 = cs == nullptr || (m = $nc(cs)->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, $nc(cs)->get((int32_t)(index & (uint32_t)m)))) == nullptr;
		if (!var$2) {
			int64_t var$4 = v = c->value;
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
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t sum = this->base;
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					sum += c->value;
				}
			}
		}
	}
	return sum;
}

void LongAdder::reset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	this->base = 0;
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					c->reset();
				}
			}
		}
	}
}

int64_t LongAdder::sumThenReset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	int64_t sum = getAndSetBase(0);
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				{
					if (c != nullptr) {
						sum += c->getAndSet(0);
					}
				}
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
	return $of($new($LongAdder$SerializationProxy, this));
}

void LongAdder::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

LongAdder::LongAdder() {
}

$Class* LongAdder::load$($String* name, bool initialize) {
	$loadClass(LongAdder, name, initialize, &_LongAdder_ClassInfo_, allocate$LongAdder);
	return class$;
}

$Class* LongAdder::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java