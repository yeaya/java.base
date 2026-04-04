#include <java/util/function/DoubleUnaryOperator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace function {

class DoubleUnaryOperator$$Lambda$lambda$compose$0 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$(DoubleUnaryOperator* inst, DoubleUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual double applyAsDouble(double v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	DoubleUnaryOperator* inst$ = nullptr;
	DoubleUnaryOperator* before = nullptr;
};
$Class* DoubleUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$compose$0, inst$)},
		{"before", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$compose$0, before)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V", nullptr, $PUBLIC, $method(DoubleUnaryOperator$$Lambda$lambda$compose$0, init$, void, DoubleUnaryOperator*, DoubleUnaryOperator*)},
		{"applyAsDouble", "(D)D", nullptr, $PUBLIC, $virtualMethod(DoubleUnaryOperator$$Lambda$lambda$compose$0, applyAsDouble, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.DoubleUnaryOperator$$Lambda$lambda$compose$0",
		"java.lang.Object",
		"java.util.function.DoubleUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleUnaryOperator$$Lambda$lambda$compose$0);
	});
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class DoubleUnaryOperator$$Lambda$lambda$andThen$1$1 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$(DoubleUnaryOperator* inst, DoubleUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual double applyAsDouble(double t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	DoubleUnaryOperator* inst$ = nullptr;
	DoubleUnaryOperator* after = nullptr;
};
$Class* DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
		{"after", "Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $field(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V", nullptr, $PUBLIC, $method(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, init$, void, DoubleUnaryOperator*, DoubleUnaryOperator*)},
		{"applyAsDouble", "(D)D", nullptr, $PUBLIC, $virtualMethod(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, applyAsDouble, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.DoubleUnaryOperator$$Lambda$lambda$andThen$1$1",
		"java.lang.Object",
		"java.util.function.DoubleUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1);
	});
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class DoubleUnaryOperator$$Lambda$lambda$identity$2$2 : public DoubleUnaryOperator {
	$class(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, DoubleUnaryOperator)
public:
	void init$() {
	}
	virtual double applyAsDouble(double t) override {
		 return DoubleUnaryOperator::lambda$identity$2(t);
	}
};
$Class* DoubleUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, init$, void)},
		{"applyAsDouble", "(D)D", nullptr, $PUBLIC, $virtualMethod(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, applyAsDouble, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.DoubleUnaryOperator$$Lambda$lambda$identity$2$2",
		"java.lang.Object",
		"java.util.function.DoubleUnaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(DoubleUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleUnaryOperator$$Lambda$lambda$identity$2$2);
	});
	return class$;
}
$Class* DoubleUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;

DoubleUnaryOperator* DoubleUnaryOperator::compose(DoubleUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return $new(DoubleUnaryOperator$$Lambda$lambda$compose$0, this, before);
}

DoubleUnaryOperator* DoubleUnaryOperator::andThen(DoubleUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return $new(DoubleUnaryOperator$$Lambda$lambda$andThen$1$1, this, after);
}

DoubleUnaryOperator* DoubleUnaryOperator::identity() {
	return $new(DoubleUnaryOperator$$Lambda$lambda$identity$2$2);
}

double DoubleUnaryOperator::lambda$identity$2(double t) {
	return t;
}

double DoubleUnaryOperator::lambda$andThen$1(DoubleUnaryOperator* after, double t) {
	return $nc(after)->applyAsDouble(applyAsDouble(t));
}

double DoubleUnaryOperator::lambda$compose$0(DoubleUnaryOperator* before, double v) {
	return applyAsDouble($nc(before)->applyAsDouble(v));
}

$Class* DoubleUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.DoubleUnaryOperator$$Lambda$lambda$compose$0")) {
			return DoubleUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.DoubleUnaryOperator$$Lambda$lambda$andThen$1$1")) {
			return DoubleUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.DoubleUnaryOperator$$Lambda$lambda$identity$2$2")) {
			return DoubleUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"andThen", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(DoubleUnaryOperator, andThen, DoubleUnaryOperator*, DoubleUnaryOperator*)},
		{"applyAsDouble", "(D)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleUnaryOperator, applyAsDouble, double, double)},
		{"compose", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(DoubleUnaryOperator, compose, DoubleUnaryOperator*, DoubleUnaryOperator*)},
		{"identity", "()Ljava/util/function/DoubleUnaryOperator;", nullptr, $PUBLIC | $STATIC, $staticMethod(DoubleUnaryOperator, identity, DoubleUnaryOperator*)},
		{"lambda$andThen$1", "(Ljava/util/function/DoubleUnaryOperator;D)D", nullptr, $PRIVATE | $SYNTHETIC, $method(DoubleUnaryOperator, lambda$andThen$1, double, DoubleUnaryOperator*, double)},
		{"lambda$compose$0", "(Ljava/util/function/DoubleUnaryOperator;D)D", nullptr, $PRIVATE | $SYNTHETIC, $method(DoubleUnaryOperator, lambda$compose$0, double, DoubleUnaryOperator*, double)},
		{"lambda$identity$2", "(D)D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DoubleUnaryOperator, lambda$identity$2, double, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleUnaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleUnaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleUnaryOperator);
	});
	return class$;
}

$Class* DoubleUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java