#include <java/util/function/BiPredicate.h>
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

class BiPredicate$$Lambda$lambda$and$0 : public BiPredicate {
	$class(BiPredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, BiPredicate)
public:
	void init$(BiPredicate* inst, BiPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(Object$* t, Object$* u) override {
		 return $nc(inst$)->lambda$and$0(other, t, u);
	}
	BiPredicate* inst$ = nullptr;
	BiPredicate* other = nullptr;
};
$Class* BiPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$and$0, inst$)},
		{"other", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$and$0, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiPredicate;Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(BiPredicate$$Lambda$lambda$and$0, init$, void, BiPredicate*, BiPredicate*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BiPredicate$$Lambda$lambda$and$0, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BiPredicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BiPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiPredicate$$Lambda$lambda$and$0);
	});
	return class$;
}
$Class* BiPredicate$$Lambda$lambda$and$0::class$ = nullptr;

class BiPredicate$$Lambda$lambda$negate$1$1 : public BiPredicate {
	$class(BiPredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, BiPredicate)
public:
	void init$(BiPredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* t, Object$* u) override {
		 return $nc(inst$)->lambda$negate$1(t, u);
	}
	BiPredicate* inst$ = nullptr;
};
$Class* BiPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$negate$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(BiPredicate$$Lambda$lambda$negate$1$1, init$, void, BiPredicate*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BiPredicate$$Lambda$lambda$negate$1$1, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BiPredicate$$Lambda$lambda$negate$1$1",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BiPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiPredicate$$Lambda$lambda$negate$1$1);
	});
	return class$;
}
$Class* BiPredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class BiPredicate$$Lambda$lambda$or$2$2 : public BiPredicate {
	$class(BiPredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, BiPredicate)
public:
	void init$(BiPredicate* inst, BiPredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(Object$* t, Object$* u) override {
		 return $nc(inst$)->lambda$or$2(other, t, u);
	}
	BiPredicate* inst$ = nullptr;
	BiPredicate* other = nullptr;
};
$Class* BiPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$or$2$2, inst$)},
		{"other", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$or$2$2, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiPredicate;Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(BiPredicate$$Lambda$lambda$or$2$2, init$, void, BiPredicate*, BiPredicate*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BiPredicate$$Lambda$lambda$or$2$2, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.BiPredicate$$Lambda$lambda$or$2$2",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BiPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiPredicate$$Lambda$lambda$or$2$2);
	});
	return class$;
}
$Class* BiPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

BiPredicate* BiPredicate::and$(BiPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(BiPredicate$$Lambda$lambda$and$0, this, other);
}

BiPredicate* BiPredicate::negate() {
	return $new(BiPredicate$$Lambda$lambda$negate$1$1, this);
}

BiPredicate* BiPredicate::or$(BiPredicate* other) {
	$Objects::requireNonNull(other);
	return $new(BiPredicate$$Lambda$lambda$or$2$2, this, other);
}

bool BiPredicate::lambda$or$2(BiPredicate* other, Object$* t, Object$* u) {
	bool var$0 = test(t, u);
	return var$0 || $nc(other)->test(t, u);
}

bool BiPredicate::lambda$negate$1(Object$* t, Object$* u) {
	return !test(t, u);
}

bool BiPredicate::lambda$and$0(BiPredicate* other, Object$* t, Object$* u) {
	bool var$0 = test(t, u);
	return var$0 && $nc(other)->test(t, u);
}

$Class* BiPredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.BiPredicate$$Lambda$lambda$and$0")) {
			return BiPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.BiPredicate$$Lambda$lambda$negate$1$1")) {
			return BiPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.BiPredicate$$Lambda$lambda$or$2$2")) {
			return BiPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/function/BiPredicate;)Ljava/util/function/BiPredicate;", "(Ljava/util/function/BiPredicate<-TT;-TU;>;)Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC, $virtualMethod(BiPredicate, and$, BiPredicate*, BiPredicate*)},
		{"lambda$and$0", "(Ljava/util/function/BiPredicate;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(BiPredicate, lambda$and$0, bool, BiPredicate*, Object$*, Object$*)},
		{"lambda$negate$1", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(BiPredicate, lambda$negate$1, bool, Object$*, Object$*)},
		{"lambda$or$2", "(Ljava/util/function/BiPredicate;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(BiPredicate, lambda$or$2, bool, BiPredicate*, Object$*, Object$*)},
		{"negate", "()Ljava/util/function/BiPredicate;", "()Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC, $virtualMethod(BiPredicate, negate, BiPredicate*)},
		{"or", "(Ljava/util/function/BiPredicate;)Ljava/util/function/BiPredicate;", "(Ljava/util/function/BiPredicate<-TT;-TU;>;)Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC, $virtualMethod(BiPredicate, or$, BiPredicate*, BiPredicate*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TU;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(BiPredicate, test, bool, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.BiPredicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BiPredicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BiPredicate);
	});
	return class$;
}

$Class* BiPredicate::class$ = nullptr;

		} // function
	} // util
} // java