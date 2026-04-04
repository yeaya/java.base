#include <java/util/function/Predicate.h>
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

class Predicate$$Lambda$lambda$and$0 : public Predicate {
	$class(Predicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, Predicate)
public:
	void init$(Predicate* inst, Predicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$and$0(other, t);
	}
	Predicate* inst$ = nullptr;
	Predicate* other = nullptr;
};
$Class* Predicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$and$0, inst$)},
		{"other", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$and$0, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$and$0, init$, void, Predicate*, Predicate*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$and$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Predicate$$Lambda$lambda$and$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Predicate$$Lambda$lambda$and$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate$$Lambda$lambda$and$0);
	});
	return class$;
}
$Class* Predicate$$Lambda$lambda$and$0::class$ = nullptr;

class Predicate$$Lambda$lambda$negate$1$1 : public Predicate {
	$class(Predicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, Predicate)
public:
	void init$(Predicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$negate$1(t);
	}
	Predicate* inst$ = nullptr;
};
$Class* Predicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$negate$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$negate$1$1, init$, void, Predicate*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$negate$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Predicate$$Lambda$lambda$negate$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Predicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate$$Lambda$lambda$negate$1$1);
	});
	return class$;
}
$Class* Predicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class Predicate$$Lambda$lambda$or$2$2 : public Predicate {
	$class(Predicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, Predicate)
public:
	void init$(Predicate* inst, Predicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(Object$* t) override {
		 return $nc(inst$)->lambda$or$2(other, t);
	}
	Predicate* inst$ = nullptr;
	Predicate* other = nullptr;
};
$Class* Predicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$or$2$2, inst$)},
		{"other", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$or$2$2, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$or$2$2, init$, void, Predicate*, Predicate*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$or$2$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Predicate$$Lambda$lambda$or$2$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Predicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate$$Lambda$lambda$or$2$2);
	});
	return class$;
}
$Class* Predicate$$Lambda$lambda$or$2$2::class$ = nullptr;

class Predicate$$Lambda$isNull$3 : public Predicate {
	$class(Predicate$$Lambda$isNull$3, $NO_CLASS_INIT, Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* obj) override {
		 return $Objects::isNull(obj);
	}
};
$Class* Predicate$$Lambda$isNull$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Predicate$$Lambda$isNull$3, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$isNull$3, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Predicate$$Lambda$isNull$3",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Predicate$$Lambda$isNull$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate$$Lambda$isNull$3);
	});
	return class$;
}
$Class* Predicate$$Lambda$isNull$3::class$ = nullptr;

class Predicate$$Lambda$lambda$isEqual$3$4 : public Predicate {
	$class(Predicate$$Lambda$lambda$isEqual$3$4, $NO_CLASS_INIT, Predicate)
public:
	void init$(Object$* targetRef) {
		$set(this, targetRef, targetRef);
	}
	virtual bool test(Object$* object) override {
		 return Predicate::lambda$isEqual$3(targetRef, object);
	}
	$Object* targetRef = nullptr;
};
$Class* Predicate$$Lambda$lambda$isEqual$3$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targetRef", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$isEqual$3$4, targetRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$isEqual$3$4, init$, void, Object$*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$isEqual$3$4, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Predicate$$Lambda$lambda$isEqual$3$4",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Predicate$$Lambda$lambda$isEqual$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate$$Lambda$lambda$isEqual$3$4);
	});
	return class$;
}
$Class* Predicate$$Lambda$lambda$isEqual$3$4::class$ = nullptr;

Predicate* Predicate::and$(Predicate* other) {
	$Objects::requireNonNull(other);
	return $new(Predicate$$Lambda$lambda$and$0, this, other);
}

Predicate* Predicate::negate() {
	return $new(Predicate$$Lambda$lambda$negate$1$1, this);
}

Predicate* Predicate::or$(Predicate* other) {
	$Objects::requireNonNull(other);
	return $new(Predicate$$Lambda$lambda$or$2$2, this, other);
}

Predicate* Predicate::isEqual(Object$* targetRef) {
	return (nullptr == targetRef) ? $cast(Predicate, $new(Predicate$$Lambda$isNull$3)) : $cast(Predicate, $new(Predicate$$Lambda$lambda$isEqual$3$4, targetRef));
}

Predicate* Predicate::not$(Predicate* target) {
	$Objects::requireNonNull(target);
	return target->negate();
}

bool Predicate::lambda$isEqual$3(Object$* targetRef, Object$* object) {
	return $nc($of(targetRef))->equals(object);
}

bool Predicate::lambda$or$2(Predicate* other, Object$* t) {
	bool var$0 = test(t);
	return var$0 || $nc(other)->test(t);
}

bool Predicate::lambda$negate$1(Object$* t) {
	return !test(t);
}

bool Predicate::lambda$and$0(Predicate* other, Object$* t) {
	bool var$0 = test(t);
	return var$0 && $nc(other)->test(t);
}

$Class* Predicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.Predicate$$Lambda$lambda$and$0")) {
			return Predicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.Predicate$$Lambda$lambda$negate$1$1")) {
			return Predicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.Predicate$$Lambda$lambda$or$2$2")) {
			return Predicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
		if (name->equals("java.util.function.Predicate$$Lambda$isNull$3")) {
			return Predicate$$Lambda$isNull$3::load$(name, initialize);
		}
		if (name->equals("java.util.function.Predicate$$Lambda$lambda$isEqual$3$4")) {
			return Predicate$$Lambda$lambda$isEqual$3$4::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"and", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/function/Predicate<TT;>;", $PUBLIC, $virtualMethod(Predicate, and$, Predicate*, Predicate*)},
		{"isEqual", "(Ljava/lang/Object;)Ljava/util/function/Predicate;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;)Ljava/util/function/Predicate<TT;>;", $PUBLIC | $STATIC, $staticMethod(Predicate, isEqual, Predicate*, Object$*)},
		{"lambda$and$0", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Predicate, lambda$and$0, bool, Predicate*, Object$*)},
		{"lambda$isEqual$3", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Predicate, lambda$isEqual$3, bool, Object$*, Object$*)},
		{"lambda$negate$1", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Predicate, lambda$negate$1, bool, Object$*)},
		{"lambda$or$2", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Predicate, lambda$or$2, bool, Predicate*, Object$*)},
		{"negate", "()Ljava/util/function/Predicate;", "()Ljava/util/function/Predicate<TT;>;", $PUBLIC, $virtualMethod(Predicate, negate, Predicate*)},
		{"not", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", "<T:Ljava/lang/Object;>(Ljava/util/function/Predicate<-TT;>;)Ljava/util/function/Predicate<TT;>;", $PUBLIC | $STATIC, $staticMethod(Predicate, not$, Predicate*, Predicate*)},
		{"or", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;", "(Ljava/util/function/Predicate<-TT;>;)Ljava/util/function/Predicate<TT;>;", $PUBLIC, $virtualMethod(Predicate, or$, Predicate*, Predicate*)},
		{"test", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Predicate, test, bool, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.Predicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Predicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate);
	});
	return class$;
}

$Class* Predicate::class$ = nullptr;

		} // function
	} // util
} // java