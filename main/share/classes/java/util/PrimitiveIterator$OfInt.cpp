#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Tripwire = ::java::util::Tripwire;
using $Consumer = ::java::util::function::Consumer;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

class PrimitiveIterator$OfInt$$Lambda$accept : public $IntConsumer {
	$class(PrimitiveIterator$OfInt$$Lambda$accept, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(int32_t t) override {
		$nc(inst$)->accept($of(t));
	}
	$Consumer* inst$ = nullptr;
};
$Class* PrimitiveIterator$OfInt$$Lambda$accept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrimitiveIterator$OfInt$$Lambda$accept, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(PrimitiveIterator$OfInt$$Lambda$accept, init$, void, $Consumer*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfInt$$Lambda$accept, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.PrimitiveIterator$OfInt$$Lambda$accept",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrimitiveIterator$OfInt$$Lambda$accept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveIterator$OfInt$$Lambda$accept);
	});
	return class$;
}
$Class* PrimitiveIterator$OfInt$$Lambda$accept::class$ = nullptr;

void PrimitiveIterator$OfInt::forEachRemaining($IntConsumer* action) {
	$Objects::requireNonNull(action);
	while (hasNext()) {
		action->accept(nextInt());
	}
}

$Object* PrimitiveIterator$OfInt::next() {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfInt.nextInt()"_s);
	}
	return $of($Integer::valueOf(nextInt()));
}

void PrimitiveIterator$OfInt::forEachRemaining($Consumer* action) {
	if ($instanceOf($IntConsumer, action)) {
		forEachRemaining($cast($IntConsumer, action));
	} else {
		$Objects::requireNonNull(action);
		$init($Tripwire);
		if ($Tripwire::ENABLED) {
			$Tripwire::trip($of(this)->getClass(), "{0} calling PrimitiveIterator.OfInt.forEachRemainingInt(action::accept)"_s);
		}
		forEachRemaining($cast($IntConsumer, $$new(PrimitiveIterator$OfInt$$Lambda$accept, action)));
	}
}

void PrimitiveIterator$OfInt::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

$Class* PrimitiveIterator$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.PrimitiveIterator$OfInt$$Lambda$accept")) {
			return PrimitiveIterator$OfInt$$Lambda$accept::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfInt, forEachRemaining, void, $IntConsumer*)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Integer;>;)V", $PUBLIC, $virtualMethod(PrimitiveIterator$OfInt, forEachRemaining, void, $Consumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrimitiveIterator$OfInt, forEachRemaining, void, Object$*)},
		{"next", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(PrimitiveIterator$OfInt, next, $Object*)},
		{"nextInt", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrimitiveIterator$OfInt, nextInt, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.PrimitiveIterator$OfInt",
		nullptr,
		"java.util.PrimitiveIterator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/PrimitiveIterator<Ljava/lang/Integer;Ljava/util/function/IntConsumer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.PrimitiveIterator"
	};
	$loadClass(PrimitiveIterator$OfInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveIterator$OfInt);
	});
	return class$;
}

$Class* PrimitiveIterator$OfInt::class$ = nullptr;

	} // util
} // java