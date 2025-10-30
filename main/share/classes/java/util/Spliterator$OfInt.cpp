#include <java/util/Spliterator$OfInt.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Spliterator.h>
#include <java/util/Tripwire.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef ENABLED

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

class Spliterator$OfInt$$Lambda$accept : public $IntConsumer {
	$class(Spliterator$OfInt$$Lambda$accept, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int32_t t) override {
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Spliterator$OfInt$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Spliterator$OfInt$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Spliterator$OfInt$$Lambda$accept, inst$)},
	{}
};
$MethodInfo Spliterator$OfInt$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterator$OfInt$$Lambda$accept::*)($Consumer*)>(&Spliterator$OfInt$$Lambda$accept::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Spliterator$OfInt$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Spliterator$OfInt$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Spliterator$OfInt$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(Spliterator$OfInt$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Spliterator$OfInt$$Lambda$accept::class$ = nullptr;

$MethodInfo _Spliterator$OfInt_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Integer;>;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/Integer;>;)Z", $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Spliterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterator$OfInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Spliterator$OfInt",
	nullptr,
	"java.util.Spliterator$OfPrimitive",
	nullptr,
	_Spliterator$OfInt_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator$OfPrimitive<Ljava/lang/Integer;Ljava/util/function/IntConsumer;Ljava/util/Spliterator$OfInt;>;",
	nullptr,
	_Spliterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterator"
};

$Object* allocate$Spliterator$OfInt($Class* clazz) {
	return $of($alloc(Spliterator$OfInt));
}

void Spliterator$OfInt::forEachRemaining($IntConsumer* action) {
	do {
	} while (tryAdvance(action));
}

bool Spliterator$OfInt::tryAdvance($Consumer* action) {
	if ($instanceOf($IntConsumer, action)) {
		return tryAdvance($cast($IntConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfInt.tryAdvance((IntConsumer) action::accept)"_s);
		}
		return tryAdvance(static_cast<$IntConsumer*>($$new(Spliterator$OfInt$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfInt::forEachRemaining($Consumer* action) {
	if ($instanceOf($IntConsumer, action)) {
		forEachRemaining($cast($IntConsumer, action));
	} else {
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling Spliterator.OfInt.forEachRemaining((IntConsumer) action::accept)"_s);
		}
		forEachRemaining(static_cast<$IntConsumer*>($$new(Spliterator$OfInt$$Lambda$accept, static_cast<$Consumer*>($nc(action)))));
	}
}

void Spliterator$OfInt::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool Spliterator$OfInt::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

$Class* Spliterator$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Spliterator$OfInt$$Lambda$accept::classInfo$.name)) {
			return Spliterator$OfInt$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(Spliterator$OfInt, name, initialize, &_Spliterator$OfInt_ClassInfo_, allocate$Spliterator$OfInt);
	return class$;
}

$Class* Spliterator$OfInt::class$ = nullptr;

	} // util
} // java