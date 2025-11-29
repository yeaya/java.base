#include <java/util/function/BinaryOperator.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace function {

class BinaryOperator$$Lambda$lambda$minBy$0 : public BinaryOperator {
	$class(BinaryOperator$$Lambda$lambda$minBy$0, $NO_CLASS_INIT, BinaryOperator)
public:
	void init$($Comparator* comparator) {
		$set(this, comparator, comparator);
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return BinaryOperator::lambda$minBy$0(comparator, a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BinaryOperator$$Lambda$lambda$minBy$0>());
	}
	$Comparator* comparator = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BinaryOperator$$Lambda$lambda$minBy$0::fieldInfos[2] = {
	{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(BinaryOperator$$Lambda$lambda$minBy$0, comparator)},
	{}
};
$MethodInfo BinaryOperator$$Lambda$lambda$minBy$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(static_cast<void(BinaryOperator$$Lambda$lambda$minBy$0::*)($Comparator*)>(&BinaryOperator$$Lambda$lambda$minBy$0::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BinaryOperator$$Lambda$lambda$minBy$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BinaryOperator$$Lambda$lambda$minBy$0",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* BinaryOperator$$Lambda$lambda$minBy$0::load$($String* name, bool initialize) {
	$loadClass(BinaryOperator$$Lambda$lambda$minBy$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BinaryOperator$$Lambda$lambda$minBy$0::class$ = nullptr;

class BinaryOperator$$Lambda$lambda$maxBy$1$1 : public BinaryOperator {
	$class(BinaryOperator$$Lambda$lambda$maxBy$1$1, $NO_CLASS_INIT, BinaryOperator)
public:
	void init$($Comparator* comparator) {
		$set(this, comparator, comparator);
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return BinaryOperator::lambda$maxBy$1(comparator, a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BinaryOperator$$Lambda$lambda$maxBy$1$1>());
	}
	$Comparator* comparator = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BinaryOperator$$Lambda$lambda$maxBy$1$1::fieldInfos[2] = {
	{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(BinaryOperator$$Lambda$lambda$maxBy$1$1, comparator)},
	{}
};
$MethodInfo BinaryOperator$$Lambda$lambda$maxBy$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(static_cast<void(BinaryOperator$$Lambda$lambda$maxBy$1$1::*)($Comparator*)>(&BinaryOperator$$Lambda$lambda$maxBy$1$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BinaryOperator$$Lambda$lambda$maxBy$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BinaryOperator$$Lambda$lambda$maxBy$1$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	fieldInfos,
	methodInfos
};
$Class* BinaryOperator$$Lambda$lambda$maxBy$1$1::load$($String* name, bool initialize) {
	$loadClass(BinaryOperator$$Lambda$lambda$maxBy$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BinaryOperator$$Lambda$lambda$maxBy$1$1::class$ = nullptr;

$CompoundAttribute _BinaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _BinaryOperator_MethodInfo_[] = {
	{"lambda$maxBy$1", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Comparator*,Object$*,Object$*)>(&BinaryOperator::lambda$maxBy$1))},
	{"lambda$minBy$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Comparator*,Object$*,Object$*)>(&BinaryOperator::lambda$minBy$0))},
	{"maxBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/function/BinaryOperator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<BinaryOperator*(*)($Comparator*)>(&BinaryOperator::maxBy))},
	{"minBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/function/BinaryOperator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<BinaryOperator*(*)($Comparator*)>(&BinaryOperator::minBy))},
	{}
};

$ClassInfo _BinaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.BinaryOperator",
	nullptr,
	"java.util.function.BiFunction",
	nullptr,
	_BinaryOperator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/BiFunction<TT;TT;TT;>;",
	nullptr,
	nullptr,
	_BinaryOperator_Annotations_
};

$Object* allocate$BinaryOperator($Class* clazz) {
	return $of($alloc(BinaryOperator));
}

BinaryOperator* BinaryOperator::minBy($Comparator* comparator) {
	$init(BinaryOperator);
	$Objects::requireNonNull(comparator);
	return static_cast<BinaryOperator*>($new(BinaryOperator$$Lambda$lambda$minBy$0, comparator));
}

BinaryOperator* BinaryOperator::maxBy($Comparator* comparator) {
	$init(BinaryOperator);
	$Objects::requireNonNull(comparator);
	return static_cast<BinaryOperator*>($new(BinaryOperator$$Lambda$lambda$maxBy$1$1, comparator));
}

$Object* BinaryOperator::lambda$maxBy$1($Comparator* comparator, Object$* a, Object$* b) {
	$init(BinaryOperator);
	return $of($nc(comparator)->compare(a, b) >= 0 ? $of(a) : $of(b));
}

$Object* BinaryOperator::lambda$minBy$0($Comparator* comparator, Object$* a, Object$* b) {
	$init(BinaryOperator);
	return $of($nc(comparator)->compare(a, b) <= 0 ? $of(a) : $of(b));
}

$Class* BinaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BinaryOperator$$Lambda$lambda$minBy$0::classInfo$.name)) {
			return BinaryOperator$$Lambda$lambda$minBy$0::load$(name, initialize);
		}
		if (name->equals(BinaryOperator$$Lambda$lambda$maxBy$1$1::classInfo$.name)) {
			return BinaryOperator$$Lambda$lambda$maxBy$1$1::load$(name, initialize);
		}
	}
	$loadClass(BinaryOperator, name, initialize, &_BinaryOperator_ClassInfo_, allocate$BinaryOperator);
	return class$;
}

$Class* BinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java