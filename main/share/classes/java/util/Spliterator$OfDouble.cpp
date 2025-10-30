#include <java/util/Spliterator$OfDouble.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
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
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfPrimitive = ::java::util::Spliterator$OfPrimitive;
using $Tripwire = ::java::util::Tripwire;
using $Consumer = ::java::util::function::Consumer;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

class Spliterator$OfDouble$$Lambda$accept : public $DoubleConsumer {
	$class(Spliterator$OfDouble$$Lambda$accept, $NO_CLASS_INIT, $DoubleConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(double t) override {
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Spliterator$OfDouble$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Spliterator$OfDouble$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Spliterator$OfDouble$$Lambda$accept, inst$)},
	{}
};
$MethodInfo Spliterator$OfDouble$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterator$OfDouble$$Lambda$accept::*)($Consumer*)>(&Spliterator$OfDouble$$Lambda$accept::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Spliterator$OfDouble$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Spliterator$OfDouble$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.DoubleConsumer",
	fieldInfos,
	methodInfos
};
$Class* Spliterator$OfDouble$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(Spliterator$OfDouble$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Spliterator$OfDouble$$Lambda$accept::class$ = nullptr;

$MethodInfo _Spliterator$OfDouble_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Double;>;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/Double;>;)Z", $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Spliterator$OfDouble_InnerClassesInfo_[] = {
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterator$OfDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Spliterator$OfDouble",
	nullptr,
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_Spliterator$OfDouble_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator$OfPrimitive<Ljava/lang/Double;Ljava/util/function/DoubleConsumer;Ljava/util/Spliterator$OfDouble;>;",
	nullptr,
	_Spliterator$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterator"
};

$Object* allocate$Spliterator$OfDouble($Class* clazz) {
	return $of($alloc(Spliterator$OfDouble));
}

void Spliterator$OfDouble::forEachRemaining($DoubleConsumer* action) {
	do {
	} while (tryAdvance(action));
}

bool Spliterator$OfDouble::tryAdvance($Consumer* action) {
	if ($instanceOf($DoubleConsumer, action)) {
		return tryAdvance($cast($DoubleConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfDouble.tryAdvance((DoubleConsumer) action::accept)"_s);
		}
		return tryAdvance(static_cast<$DoubleConsumer*>($$new(Spliterator$OfDouble$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfDouble::forEachRemaining($Consumer* action) {
	if ($instanceOf($DoubleConsumer, action)) {
		forEachRemaining($cast($DoubleConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfDouble.forEachRemaining((DoubleConsumer) action::accept)"_s);
		}
		forEachRemaining(static_cast<$DoubleConsumer*>($$new(Spliterator$OfDouble$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfDouble::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

bool Spliterator$OfDouble::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

$Class* Spliterator$OfDouble::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Spliterator$OfDouble$$Lambda$accept::classInfo$.name)) {
			return Spliterator$OfDouble$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(Spliterator$OfDouble, name, initialize, &_Spliterator$OfDouble_ClassInfo_, allocate$Spliterator$OfDouble);
	return class$;
}

$Class* Spliterator$OfDouble::class$ = nullptr;

	} // util
} // java