#include <java/util/PrimitiveIterator$OfInt.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
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
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator = ::java::util::PrimitiveIterator;
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
		$nc(inst$)->accept($$of(t));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PrimitiveIterator$OfInt$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PrimitiveIterator$OfInt$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrimitiveIterator$OfInt$$Lambda$accept, inst$)},
	{}
};
$MethodInfo PrimitiveIterator$OfInt$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(PrimitiveIterator$OfInt$$Lambda$accept::*)($Consumer*)>(&PrimitiveIterator$OfInt$$Lambda$accept::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PrimitiveIterator$OfInt$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.PrimitiveIterator$OfInt$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* PrimitiveIterator$OfInt$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(PrimitiveIterator$OfInt$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PrimitiveIterator$OfInt$$Lambda$accept::class$ = nullptr;

$MethodInfo _PrimitiveIterator$OfInt_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/Integer;>;)V", $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"next", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PrimitiveIterator$OfInt_InnerClassesInfo_[] = {
	{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrimitiveIterator$OfInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.PrimitiveIterator$OfInt",
	nullptr,
	"java.util.PrimitiveIterator",
	nullptr,
	_PrimitiveIterator$OfInt_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/PrimitiveIterator<Ljava/lang/Integer;Ljava/util/function/IntConsumer;>;",
	nullptr,
	_PrimitiveIterator$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.PrimitiveIterator"
};

$Object* allocate$PrimitiveIterator$OfInt($Class* clazz) {
	return $of($alloc(PrimitiveIterator$OfInt));
}

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
		forEachRemaining(static_cast<$IntConsumer*>($$new(PrimitiveIterator$OfInt$$Lambda$accept, static_cast<$Consumer*>(action))));
	}
}

void PrimitiveIterator$OfInt::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

$Class* PrimitiveIterator$OfInt::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PrimitiveIterator$OfInt$$Lambda$accept::classInfo$.name)) {
			return PrimitiveIterator$OfInt$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(PrimitiveIterator$OfInt, name, initialize, &_PrimitiveIterator$OfInt_ClassInfo_, allocate$PrimitiveIterator$OfInt);
	return class$;
}

$Class* PrimitiveIterator$OfInt::class$ = nullptr;

	} // util
} // java