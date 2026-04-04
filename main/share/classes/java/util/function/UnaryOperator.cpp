#include <java/util/function/UnaryOperator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace util {
		namespace function {

class UnaryOperator$$Lambda$lambda$identity$0 : public UnaryOperator {
	$class(UnaryOperator$$Lambda$lambda$identity$0, $NO_CLASS_INIT, UnaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return UnaryOperator::lambda$identity$0(t);
	}
};
$Class* UnaryOperator$$Lambda$lambda$identity$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnaryOperator$$Lambda$lambda$identity$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UnaryOperator$$Lambda$lambda$identity$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.UnaryOperator$$Lambda$lambda$identity$0",
		"java.lang.Object",
		"java.util.function.UnaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnaryOperator$$Lambda$lambda$identity$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnaryOperator$$Lambda$lambda$identity$0);
	});
	return class$;
}
$Class* UnaryOperator$$Lambda$lambda$identity$0::class$ = nullptr;

UnaryOperator* UnaryOperator::identity() {
	$init(UnaryOperator);
	return $new(UnaryOperator$$Lambda$lambda$identity$0);
}

$Object* UnaryOperator::lambda$identity$0(Object$* t) {
	$init(UnaryOperator);
	return $of(t);
}

$Class* UnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.UnaryOperator$$Lambda$lambda$identity$0")) {
			return UnaryOperator$$Lambda$lambda$identity$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"identity", "()Ljava/util/function/UnaryOperator;", "<T:Ljava/lang/Object;>()Ljava/util/function/UnaryOperator<TT;>;", $PUBLIC | $STATIC, $staticMethod(UnaryOperator, identity, UnaryOperator*)},
		{"lambda$identity$0", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnaryOperator, lambda$identity$0, $Object*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.UnaryOperator",
		nullptr,
		"java.util.function.Function",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Function<TT;TT;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(UnaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnaryOperator);
	});
	return class$;
}

$Class* UnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java