#include <java/util/PrimitiveIterator$OfDouble.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Tripwire.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/DoubleConsumer.h>
#include <jcpp.h>

#undef ENABLED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator = ::java::util::PrimitiveIterator;
using $Tripwire = ::java::util::Tripwire;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

class PrimitiveIterator$OfDouble$$Lambda$accept : public $DoubleConsumer {
	$class(PrimitiveIterator$OfDouble$$Lambda$accept, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(double t) override {
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrimitiveIterator$OfDouble$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrimitiveIterator$OfDouble$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrimitiveIterator$OfDouble$$Lambda$accept, inst$)},
	{}
};
$MethodInfo PrimitiveIterator$OfDouble$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(PrimitiveIterator$OfDouble$$Lambda$accept::*)($Consumer*)>(&PrimitiveIterator$OfDouble$$Lambda$accept::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrimitiveIterator$OfDouble$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.PrimitiveIterator$OfDouble$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	fieldInfos,
	methodInfos
};
$Class* PrimitiveIterator$OfDouble$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(PrimitiveIterator$OfDouble$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrimitiveIterator$OfDouble$$Lambda$accept::class$ = nullptr;

$MethodInfo _PrimitiveIterator$OfDouble_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Double;>;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"next", "()Ljava/lang/Double;", nullptr, $PUBLIC},
	{"nextDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PrimitiveIterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.PrimitiveIterator$OfDouble", "java.util.PrimitiveIterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrimitiveIterator$OfDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.PrimitiveIterator$OfDouble",
	nullptr,
	"java.util.PrimitiveIterator",
	nullptr,
	_PrimitiveIterator$OfDouble_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/PrimitiveIterator<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;>;",
	nullptr,
	_PrimitiveIterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.PrimitiveIterator"
};

$Object* allocate$PrimitiveIterator$OfDouble($Class* clazz) {
	return $of($alloc(PrimitiveIterator$OfDouble));
}

void PrimitiveIterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept(nextDouble());
	}
}

$Object* PrimitiveIterator$OfDouble::next() {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfDouble.nextLong()"_s);
	}
	return $of($Double::valueOf(nextDouble()));
}

void PrimitiveIterator$OfDouble::forEachRemaining($Consumer* action) {
	if ($instanceOf($DoubleConsumer, action)) {
		forEachRemaining($cast($DoubleConsumer, action));
	} else {
		$Objects::requireNonNull(action);
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfDouble.forEachRemainingDouble(action::accept)"_s);
		}
		forEachRemaining(static_cast<$DoubleConsumer*>($$new(PrimitiveIterator$OfDouble$$Lambda$accept, static_cast<$Consumer*>(action))));
	}
}

void PrimitiveIterator$OfDouble::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

$Class* PrimitiveIterator$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrimitiveIterator$OfDouble$$Lambda$accept::classInfo$.name)) {
			return PrimitiveIterator$OfDouble$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(PrimitiveIterator$OfDouble, name, initialize, &_PrimitiveIterator$OfDouble_ClassInfo_, allocate$PrimitiveIterator$OfDouble);
	return class$;
}

$Class* PrimitiveIterator$OfDouble::class$ = nullptr;

	} // util
} // java