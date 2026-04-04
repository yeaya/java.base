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
	$Comparator* comparator = nullptr;
};
$Class* BinaryOperator$$Lambda$lambda$minBy$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(BinaryOperator$$Lambda$lambda$minBy$0, comparator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(BinaryOperator$$Lambda$lambda$minBy$0, init$, void, $Comparator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BinaryOperator$$Lambda$lambda$minBy$0, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BinaryOperator$$Lambda$lambda$minBy$0",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BinaryOperator$$Lambda$lambda$minBy$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BinaryOperator$$Lambda$lambda$minBy$0);
	});
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
	$Comparator* comparator = nullptr;
};
$Class* BinaryOperator$$Lambda$lambda$maxBy$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(BinaryOperator$$Lambda$lambda$maxBy$1$1, comparator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(BinaryOperator$$Lambda$lambda$maxBy$1$1, init$, void, $Comparator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BinaryOperator$$Lambda$lambda$maxBy$1$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BinaryOperator$$Lambda$lambda$maxBy$1$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BinaryOperator$$Lambda$lambda$maxBy$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BinaryOperator$$Lambda$lambda$maxBy$1$1);
	});
	return class$;
}
$Class* BinaryOperator$$Lambda$lambda$maxBy$1$1::class$ = nullptr;

BinaryOperator* BinaryOperator::minBy($Comparator* comparator) {
	$init(BinaryOperator);
	$Objects::requireNonNull(comparator);
	return $new(BinaryOperator$$Lambda$lambda$minBy$0, comparator);
}

BinaryOperator* BinaryOperator::maxBy($Comparator* comparator) {
	$init(BinaryOperator);
	$Objects::requireNonNull(comparator);
	return $new(BinaryOperator$$Lambda$lambda$maxBy$1$1, comparator);
}

$Object* BinaryOperator::lambda$maxBy$1($Comparator* comparator, Object$* a, Object$* b) {
	$init(BinaryOperator);
	return $nc(comparator)->compare(a, b) >= 0 ? $of(a) : $of(b);
}

$Object* BinaryOperator::lambda$minBy$0($Comparator* comparator, Object$* a, Object$* b) {
	$init(BinaryOperator);
	return $nc(comparator)->compare(a, b) <= 0 ? $of(a) : $of(b);
}

$Class* BinaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.BinaryOperator$$Lambda$lambda$minBy$0")) {
			return BinaryOperator$$Lambda$lambda$minBy$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.BinaryOperator$$Lambda$lambda$maxBy$1$1")) {
			return BinaryOperator$$Lambda$lambda$maxBy$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"lambda$maxBy$1", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BinaryOperator, lambda$maxBy$1, $Object*, $Comparator*, Object$*, Object$*)},
		{"lambda$minBy$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BinaryOperator, lambda$minBy$0, $Object*, $Comparator*, Object$*, Object$*)},
		{"maxBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/function/BinaryOperator<TT;>;", $PUBLIC | $STATIC, $staticMethod(BinaryOperator, maxBy, BinaryOperator*, $Comparator*)},
		{"minBy", "(Ljava/util/Comparator;)Ljava/util/function/BinaryOperator;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/function/BinaryOperator<TT;>;", $PUBLIC | $STATIC, $staticMethod(BinaryOperator, minBy, BinaryOperator*, $Comparator*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.BinaryOperator",
		nullptr,
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/BiFunction<TT;TT;TT;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BinaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BinaryOperator);
	});
	return class$;
}

$Class* BinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java