#include <java/util/function/IntUnaryOperator.h>
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

class IntUnaryOperator$$Lambda$lambda$compose$0 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$(IntUnaryOperator* inst, IntUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual int32_t applyAsInt(int32_t v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	IntUnaryOperator* inst$ = nullptr;
	IntUnaryOperator* before = nullptr;
};
$Class* IntUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$compose$0, inst$)},
		{"before", "Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$compose$0, before)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntUnaryOperator;Ljava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC, $method(IntUnaryOperator$$Lambda$lambda$compose$0, init$, void, IntUnaryOperator*, IntUnaryOperator*)},
		{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntUnaryOperator$$Lambda$lambda$compose$0, applyAsInt, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntUnaryOperator$$Lambda$lambda$compose$0",
		"java.lang.Object",
		"java.util.function.IntUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntUnaryOperator$$Lambda$lambda$compose$0);
	});
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class IntUnaryOperator$$Lambda$lambda$andThen$1$1 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$(IntUnaryOperator* inst, IntUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual int32_t applyAsInt(int32_t t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	IntUnaryOperator* inst$ = nullptr;
	IntUnaryOperator* after = nullptr;
};
$Class* IntUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
		{"after", "Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $field(IntUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntUnaryOperator;Ljava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC, $method(IntUnaryOperator$$Lambda$lambda$andThen$1$1, init$, void, IntUnaryOperator*, IntUnaryOperator*)},
		{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntUnaryOperator$$Lambda$lambda$andThen$1$1, applyAsInt, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntUnaryOperator$$Lambda$lambda$andThen$1$1",
		"java.lang.Object",
		"java.util.function.IntUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntUnaryOperator$$Lambda$lambda$andThen$1$1);
	});
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class IntUnaryOperator$$Lambda$lambda$identity$2$2 : public IntUnaryOperator {
	$class(IntUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, IntUnaryOperator)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(int32_t t) override {
		 return IntUnaryOperator::lambda$identity$2(t);
	}
};
$Class* IntUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntUnaryOperator$$Lambda$lambda$identity$2$2, init$, void)},
		{"applyAsInt", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntUnaryOperator$$Lambda$lambda$identity$2$2, applyAsInt, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntUnaryOperator$$Lambda$lambda$identity$2$2",
		"java.lang.Object",
		"java.util.function.IntUnaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(IntUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntUnaryOperator$$Lambda$lambda$identity$2$2);
	});
	return class$;
}
$Class* IntUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;

IntUnaryOperator* IntUnaryOperator::compose(IntUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return $new(IntUnaryOperator$$Lambda$lambda$compose$0, this, before);
}

IntUnaryOperator* IntUnaryOperator::andThen(IntUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return $new(IntUnaryOperator$$Lambda$lambda$andThen$1$1, this, after);
}

IntUnaryOperator* IntUnaryOperator::identity() {
	return $new(IntUnaryOperator$$Lambda$lambda$identity$2$2);
}

int32_t IntUnaryOperator::lambda$identity$2(int32_t t) {
	return t;
}

int32_t IntUnaryOperator::lambda$andThen$1(IntUnaryOperator* after, int32_t t) {
	return $nc(after)->applyAsInt(applyAsInt(t));
}

int32_t IntUnaryOperator::lambda$compose$0(IntUnaryOperator* before, int32_t v) {
	return applyAsInt($nc(before)->applyAsInt(v));
}

$Class* IntUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.IntUnaryOperator$$Lambda$lambda$compose$0")) {
			return IntUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.IntUnaryOperator$$Lambda$lambda$andThen$1$1")) {
			return IntUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.IntUnaryOperator$$Lambda$lambda$identity$2$2")) {
			return IntUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"andThen", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(IntUnaryOperator, andThen, IntUnaryOperator*, IntUnaryOperator*)},
		{"applyAsInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntUnaryOperator, applyAsInt, int32_t, int32_t)},
		{"compose", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(IntUnaryOperator, compose, IntUnaryOperator*, IntUnaryOperator*)},
		{"identity", "()Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC | $STATIC, $staticMethod(IntUnaryOperator, identity, IntUnaryOperator*)},
		{"lambda$andThen$1", "(Ljava/util/function/IntUnaryOperator;I)I", nullptr, $PRIVATE | $SYNTHETIC, $method(IntUnaryOperator, lambda$andThen$1, int32_t, IntUnaryOperator*, int32_t)},
		{"lambda$compose$0", "(Ljava/util/function/IntUnaryOperator;I)I", nullptr, $PRIVATE | $SYNTHETIC, $method(IntUnaryOperator, lambda$compose$0, int32_t, IntUnaryOperator*, int32_t)},
		{"lambda$identity$2", "(I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IntUnaryOperator, lambda$identity$2, int32_t, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntUnaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntUnaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntUnaryOperator);
	});
	return class$;
}

$Class* IntUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java