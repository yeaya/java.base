#include <java/util/concurrent/atomic/DoubleAdder.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/DoubleAdder$SerializationProxy.h>
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
using $DoubleAdder$SerializationProxy = ::java::util::concurrent::atomic::DoubleAdder$SerializationProxy;
using $Striped64 = ::java::util::concurrent::atomic::Striped64;
using $Striped64$Cell = ::java::util::concurrent::atomic::Striped64$Cell;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

$FieldInfo _DoubleAdder_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DoubleAdder, serialVersionUID)},
	{}
};

$MethodInfo _DoubleAdder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleAdder::*)()>(&DoubleAdder::init$))},
	{"add", "(D)V", nullptr, $PUBLIC},
	{"doubleValue", "()D", nullptr, $PUBLIC},
	{"floatValue", "()F", nullptr, $PUBLIC},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DoubleAdder::*)($ObjectInputStream*)>(&DoubleAdder::readObject)), "java.io.InvalidObjectException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"sum", "()D", nullptr, $PUBLIC},
	{"sumThenReset", "()D", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DoubleAdder::*)()>(&DoubleAdder::writeReplace))},
	{}
};

$InnerClassInfo _DoubleAdder_InnerClassesInfo_[] = {
	{"java.util.concurrent.atomic.DoubleAdder$SerializationProxy", "java.util.concurrent.atomic.DoubleAdder", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DoubleAdder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.atomic.DoubleAdder",
	"java.util.concurrent.atomic.Striped64",
	nullptr,
	_DoubleAdder_FieldInfo_,
	_DoubleAdder_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleAdder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.atomic.DoubleAdder$SerializationProxy"
};

$Object* allocate$DoubleAdder($Class* clazz) {
	return $of($alloc(DoubleAdder));
}

void DoubleAdder::init$() {
	$Striped64::init$();
}

void DoubleAdder::add(double x) {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, nullptr);
	int64_t b = 0;
	int64_t v = 0;
	int32_t m = 0;
	$var($Striped64$Cell, c, nullptr);
	bool var$0 = ($assign(cs, this->cells)) != nullptr;
	if (!var$0) {
		int64_t var$1 = b = this->base;
		var$0 = !casBase(var$1, $Double::doubleToRawLongBits($Double::longBitsToDouble(b) + x));
	}
	if (var$0) {
		int32_t index = getProbe();
		bool uncontended = true;
		bool var$3 = cs == nullptr || (m = $nc(cs)->length - 1) < 0;
		bool var$2 = var$3 || ($assign(c, $nc(cs)->get((int32_t)(index & (uint32_t)m)))) == nullptr;
		if (!var$2) {
			int64_t var$4 = v = c->value;
			var$2 = !(uncontended = $nc(c)->cas(var$4, $Double::doubleToRawLongBits($Double::longBitsToDouble(v) + x)));
		}
		if (var$2) {
			doubleAccumulate(x, nullptr, uncontended, index);
		}
	}
}

double DoubleAdder::sum() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	double sum = $Double::longBitsToDouble(this->base);
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				if (c != nullptr) {
					sum += $Double::longBitsToDouble(c->value);
				}
			}
		}
	}
	return sum;
}

void DoubleAdder::reset() {
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

double DoubleAdder::sumThenReset() {
	$useLocalCurrentObjectStackCache();
	$var($Striped64$CellArray, cs, this->cells);
	double sum = $Double::longBitsToDouble(getAndSetBase(0));
	if (cs != nullptr) {
		{
			$var($Striped64$CellArray, arr$, cs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Striped64$Cell, c, arr$->get(i$));
				{
					if (c != nullptr) {
						sum += $Double::longBitsToDouble(c->getAndSet(0));
					}
				}
			}
		}
	}
	return sum;
}

$String* DoubleAdder::toString() {
	return $Double::toString(sum());
}

double DoubleAdder::doubleValue() {
	return sum();
}

int64_t DoubleAdder::longValue() {
	return $cast(int64_t, sum());
}

int32_t DoubleAdder::intValue() {
	return $cast(int32_t, sum());
}

float DoubleAdder::floatValue() {
	return (float)sum();
}

$Object* DoubleAdder::writeReplace() {
	return $of($new($DoubleAdder$SerializationProxy, this));
}

void DoubleAdder::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

DoubleAdder::DoubleAdder() {
}

$Class* DoubleAdder::load$($String* name, bool initialize) {
	$loadClass(DoubleAdder, name, initialize, &_DoubleAdder_ClassInfo_, allocate$DoubleAdder);
	return class$;
}

$Class* DoubleAdder::class$ = nullptr;

			} // atomic
		} // concurrent
	} // util
} // java