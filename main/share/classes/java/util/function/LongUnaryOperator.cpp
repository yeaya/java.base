#include <java/util/function/LongUnaryOperator.h>
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

class LongUnaryOperator$$Lambda$lambda$compose$0 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$compose$0, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$(LongUnaryOperator* inst, LongUnaryOperator* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual int64_t applyAsLong(int64_t v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	LongUnaryOperator* inst$ = nullptr;
	LongUnaryOperator* before = nullptr;
};
$Class* LongUnaryOperator$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$compose$0, inst$)},
		{"before", "Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$compose$0, before)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongUnaryOperator;Ljava/util/function/LongUnaryOperator;)V", nullptr, $PUBLIC, $method(LongUnaryOperator$$Lambda$lambda$compose$0, init$, void, LongUnaryOperator*, LongUnaryOperator*)},
		{"applyAsLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(LongUnaryOperator$$Lambda$lambda$compose$0, applyAsLong, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongUnaryOperator$$Lambda$lambda$compose$0",
		"java.lang.Object",
		"java.util.function.LongUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongUnaryOperator$$Lambda$lambda$compose$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongUnaryOperator$$Lambda$lambda$compose$0);
	});
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$compose$0::class$ = nullptr;

class LongUnaryOperator$$Lambda$lambda$andThen$1$1 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$(LongUnaryOperator* inst, LongUnaryOperator* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual int64_t applyAsLong(int64_t t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	LongUnaryOperator* inst$ = nullptr;
	LongUnaryOperator* after = nullptr;
};
$Class* LongUnaryOperator$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$andThen$1$1, inst$)},
		{"after", "Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $field(LongUnaryOperator$$Lambda$lambda$andThen$1$1, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongUnaryOperator;Ljava/util/function/LongUnaryOperator;)V", nullptr, $PUBLIC, $method(LongUnaryOperator$$Lambda$lambda$andThen$1$1, init$, void, LongUnaryOperator*, LongUnaryOperator*)},
		{"applyAsLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(LongUnaryOperator$$Lambda$lambda$andThen$1$1, applyAsLong, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongUnaryOperator$$Lambda$lambda$andThen$1$1",
		"java.lang.Object",
		"java.util.function.LongUnaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongUnaryOperator$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongUnaryOperator$$Lambda$lambda$andThen$1$1);
	});
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class LongUnaryOperator$$Lambda$lambda$identity$2$2 : public LongUnaryOperator {
	$class(LongUnaryOperator$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, LongUnaryOperator)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(int64_t t) override {
		 return LongUnaryOperator::lambda$identity$2(t);
	}
};
$Class* LongUnaryOperator$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LongUnaryOperator$$Lambda$lambda$identity$2$2, init$, void)},
		{"applyAsLong", "(J)J", nullptr, $PUBLIC, $virtualMethod(LongUnaryOperator$$Lambda$lambda$identity$2$2, applyAsLong, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongUnaryOperator$$Lambda$lambda$identity$2$2",
		"java.lang.Object",
		"java.util.function.LongUnaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(LongUnaryOperator$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongUnaryOperator$$Lambda$lambda$identity$2$2);
	});
	return class$;
}
$Class* LongUnaryOperator$$Lambda$lambda$identity$2$2::class$ = nullptr;

LongUnaryOperator* LongUnaryOperator::compose(LongUnaryOperator* before) {
	$Objects::requireNonNull(before);
	return $new(LongUnaryOperator$$Lambda$lambda$compose$0, this, before);
}

LongUnaryOperator* LongUnaryOperator::andThen(LongUnaryOperator* after) {
	$Objects::requireNonNull(after);
	return $new(LongUnaryOperator$$Lambda$lambda$andThen$1$1, this, after);
}

LongUnaryOperator* LongUnaryOperator::identity() {
	return $new(LongUnaryOperator$$Lambda$lambda$identity$2$2);
}

int64_t LongUnaryOperator::lambda$identity$2(int64_t t) {
	return t;
}

int64_t LongUnaryOperator::lambda$andThen$1(LongUnaryOperator* after, int64_t t) {
	return $nc(after)->applyAsLong(applyAsLong(t));
}

int64_t LongUnaryOperator::lambda$compose$0(LongUnaryOperator* before, int64_t v) {
	return applyAsLong($nc(before)->applyAsLong(v));
}

$Class* LongUnaryOperator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.LongUnaryOperator$$Lambda$lambda$compose$0")) {
			return LongUnaryOperator$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.LongUnaryOperator$$Lambda$lambda$andThen$1$1")) {
			return LongUnaryOperator$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.LongUnaryOperator$$Lambda$lambda$identity$2$2")) {
			return LongUnaryOperator$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"andThen", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(LongUnaryOperator, andThen, LongUnaryOperator*, LongUnaryOperator*)},
		{"applyAsLong", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongUnaryOperator, applyAsLong, int64_t, int64_t)},
		{"compose", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC, $virtualMethod(LongUnaryOperator, compose, LongUnaryOperator*, LongUnaryOperator*)},
		{"identity", "()Ljava/util/function/LongUnaryOperator;", nullptr, $PUBLIC | $STATIC, $staticMethod(LongUnaryOperator, identity, LongUnaryOperator*)},
		{"lambda$andThen$1", "(Ljava/util/function/LongUnaryOperator;J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(LongUnaryOperator, lambda$andThen$1, int64_t, LongUnaryOperator*, int64_t)},
		{"lambda$compose$0", "(Ljava/util/function/LongUnaryOperator;J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(LongUnaryOperator, lambda$compose$0, int64_t, LongUnaryOperator*, int64_t)},
		{"lambda$identity$2", "(J)J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LongUnaryOperator, lambda$identity$2, int64_t, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongUnaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongUnaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongUnaryOperator);
	});
	return class$;
}

$Class* LongUnaryOperator::class$ = nullptr;

		} // function
	} // util
} // java