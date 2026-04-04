#include <java/util/function/IntPredicate.h>
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

class IntPredicate$$Lambda$lambda$and$0 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst, IntPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$and$0(other, value);
	}
	IntPredicate* inst$ = nullptr;
	IntPredicate* other = nullptr;
};
$Class* IntPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$and$0, inst$)},
		{"other", "Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$and$0, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntPredicate;Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(IntPredicate$$Lambda$lambda$and$0, init$, void, IntPredicate*, IntPredicate*)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(IntPredicate$$Lambda$lambda$and$0, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntPredicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntPredicate$$Lambda$lambda$and$0);
	});
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class IntPredicate$$Lambda$lambda$negate$1$1 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$negate$1(value);
	}
	IntPredicate* inst$ = nullptr;
};
$Class* IntPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$negate$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(IntPredicate$$Lambda$lambda$negate$1$1, init$, void, IntPredicate*)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(IntPredicate$$Lambda$lambda$negate$1$1, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntPredicate$$Lambda$lambda$negate$1$1",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntPredicate$$Lambda$lambda$negate$1$1);
	});
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class IntPredicate$$Lambda$lambda$or$2$2 : public IntPredicate {
	$class(IntPredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, IntPredicate)
public:
	void init$(IntPredicate* inst, IntPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(int32_t value) override {
		 return $nc(inst$)->lambda$or$2(other, value);
	}
	IntPredicate* inst$ = nullptr;
	IntPredicate* other = nullptr;
};
$Class* IntPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$or$2$2, inst$)},
		{"other", "Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $field(IntPredicate$$Lambda$lambda$or$2$2, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/IntPredicate;Ljava/util/function/IntPredicate;)V", nullptr, $PUBLIC, $method(IntPredicate$$Lambda$lambda$or$2$2, init$, void, IntPredicate*, IntPredicate*)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(IntPredicate$$Lambda$lambda$or$2$2, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.IntPredicate$$Lambda$lambda$or$2$2",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntPredicate$$Lambda$lambda$or$2$2);
	});
	return class$;
}
$Class* IntPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

IntPredicate* IntPredicate::and$(IntPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(IntPredicate$$Lambda$lambda$and$0, this, other);
}

IntPredicate* IntPredicate::negate() {
	return $new(IntPredicate$$Lambda$lambda$negate$1$1, this);
}

IntPredicate* IntPredicate::or$(IntPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(IntPredicate$$Lambda$lambda$or$2$2, this, other);
}

bool IntPredicate::lambda$or$2(IntPredicate* other, int32_t value) {
	bool var$0 = test(value);
	return var$0 || $nc(other)->test(value);
}

bool IntPredicate::lambda$negate$1(int32_t value) {
	return !test(value);
}

bool IntPredicate::lambda$and$0(IntPredicate* other, int32_t value) {
	bool var$0 = test(value);
	return var$0 && $nc(other)->test(value);
}

$Class* IntPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.IntPredicate$$Lambda$lambda$and$0")) {
			return IntPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.IntPredicate$$Lambda$lambda$negate$1$1")) {
			return IntPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.IntPredicate$$Lambda$lambda$or$2$2")) {
			return IntPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $virtualMethod(IntPredicate, and$, IntPredicate*, IntPredicate*)},
		{"lambda$and$0", "(Ljava/util/function/IntPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(IntPredicate, lambda$and$0, bool, IntPredicate*, int32_t)},
		{"lambda$negate$1", "(I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(IntPredicate, lambda$negate$1, bool, int32_t)},
		{"lambda$or$2", "(Ljava/util/function/IntPredicate;I)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(IntPredicate, lambda$or$2, bool, IntPredicate*, int32_t)},
		{"negate", "()Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $virtualMethod(IntPredicate, negate, IntPredicate*)},
		{"or", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;", nullptr, $PUBLIC, $virtualMethod(IntPredicate, or$, IntPredicate*, IntPredicate*)},
		{"test", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntPredicate, test, bool, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntPredicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntPredicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntPredicate);
	});
	return class$;
}

$Class* IntPredicate::class$ = nullptr;

		} // function
	} // util
} // java