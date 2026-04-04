#include <java/util/function/LongPredicate.h>
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

class LongPredicate$$Lambda$lambda$and$0 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst, LongPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$and$0(other, value);
	}
	LongPredicate* inst$ = nullptr;
	LongPredicate* other = nullptr;
};
$Class* LongPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$and$0, inst$)},
		{"other", "Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$and$0, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongPredicate;Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(LongPredicate$$Lambda$lambda$and$0, init$, void, LongPredicate*, LongPredicate*)},
		{"test", "(J)Z", nullptr, $PUBLIC, $virtualMethod(LongPredicate$$Lambda$lambda$and$0, test, bool, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongPredicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.function.LongPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongPredicate$$Lambda$lambda$and$0);
	});
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class LongPredicate$$Lambda$lambda$negate$1$1 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$negate$1(value);
	}
	LongPredicate* inst$ = nullptr;
};
$Class* LongPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$negate$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(LongPredicate$$Lambda$lambda$negate$1$1, init$, void, LongPredicate*)},
		{"test", "(J)Z", nullptr, $PUBLIC, $virtualMethod(LongPredicate$$Lambda$lambda$negate$1$1, test, bool, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongPredicate$$Lambda$lambda$negate$1$1",
		"java.lang.Object",
		"java.util.function.LongPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongPredicate$$Lambda$lambda$negate$1$1);
	});
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class LongPredicate$$Lambda$lambda$or$2$2 : public LongPredicate {
	$class(LongPredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, LongPredicate)
public:
	void init$(LongPredicate* inst, LongPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int64_t value) override {
		 return $nc(inst$)->lambda$or$2(other, value);
	}
	LongPredicate* inst$ = nullptr;
	LongPredicate* other = nullptr;
};
$Class* LongPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$or$2$2, inst$)},
		{"other", "Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $field(LongPredicate$$Lambda$lambda$or$2$2, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/LongPredicate;Ljava/util/function/LongPredicate;)V", nullptr, $PUBLIC, $method(LongPredicate$$Lambda$lambda$or$2$2, init$, void, LongPredicate*, LongPredicate*)},
		{"test", "(J)Z", nullptr, $PUBLIC, $virtualMethod(LongPredicate$$Lambda$lambda$or$2$2, test, bool, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.LongPredicate$$Lambda$lambda$or$2$2",
		"java.lang.Object",
		"java.util.function.LongPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LongPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongPredicate$$Lambda$lambda$or$2$2);
	});
	return class$;
}
$Class* LongPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

LongPredicate* LongPredicate::and$(LongPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(LongPredicate$$Lambda$lambda$and$0, this, other);
}

LongPredicate* LongPredicate::negate() {
	return $new(LongPredicate$$Lambda$lambda$negate$1$1, this);
}

LongPredicate* LongPredicate::or$(LongPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(LongPredicate$$Lambda$lambda$or$2$2, this, other);
}

bool LongPredicate::lambda$or$2(LongPredicate* other, int64_t value) {
	bool var$0 = test(value);
	return var$0 || $nc(other)->test(value);
}

bool LongPredicate::lambda$negate$1(int64_t value) {
	return !test(value);
}

bool LongPredicate::lambda$and$0(LongPredicate* other, int64_t value) {
	bool var$0 = test(value);
	return var$0 && $nc(other)->test(value);
}

$Class* LongPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.LongPredicate$$Lambda$lambda$and$0")) {
			return LongPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.LongPredicate$$Lambda$lambda$negate$1$1")) {
			return LongPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.LongPredicate$$Lambda$lambda$or$2$2")) {
			return LongPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $virtualMethod(LongPredicate, and$, LongPredicate*, LongPredicate*)},
		{"lambda$and$0", "(Ljava/util/function/LongPredicate;J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(LongPredicate, lambda$and$0, bool, LongPredicate*, int64_t)},
		{"lambda$negate$1", "(J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(LongPredicate, lambda$negate$1, bool, int64_t)},
		{"lambda$or$2", "(Ljava/util/function/LongPredicate;J)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(LongPredicate, lambda$or$2, bool, LongPredicate*, int64_t)},
		{"negate", "()Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $virtualMethod(LongPredicate, negate, LongPredicate*)},
		{"or", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;", nullptr, $PUBLIC, $virtualMethod(LongPredicate, or$, LongPredicate*, LongPredicate*)},
		{"test", "(J)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongPredicate, test, bool, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongPredicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongPredicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongPredicate);
	});
	return class$;
}

$Class* LongPredicate::class$ = nullptr;

		} // function
	} // util
} // java