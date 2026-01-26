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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Predicate$$Lambda$lambda$and$0>());
	}
	Predicate* inst$ = nullptr;
	Predicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Predicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$and$0, inst$)},
	{"other", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$and$0, other)},
	{}
};
$MethodInfo Predicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$and$0, init$, void, Predicate*, Predicate*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$and$0, test, bool, Object$*)},
	{}
};
$ClassInfo Predicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Predicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Predicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(Predicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Predicate$$Lambda$lambda$negate$1$1>());
	}
	Predicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Predicate$$Lambda$lambda$negate$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$negate$1$1, inst$)},
	{}
};
$MethodInfo Predicate$$Lambda$lambda$negate$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$negate$1$1, init$, void, Predicate*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$negate$1$1, test, bool, Object$*)},
	{}
};
$ClassInfo Predicate$$Lambda$lambda$negate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Predicate$$Lambda$lambda$negate$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Predicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$loadClass(Predicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Predicate$$Lambda$lambda$or$2$2>());
	}
	Predicate* inst$ = nullptr;
	Predicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Predicate$$Lambda$lambda$or$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$or$2$2, inst$)},
	{"other", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$or$2$2, other)},
	{}
};
$MethodInfo Predicate$$Lambda$lambda$or$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Predicate;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$or$2$2, init$, void, Predicate*, Predicate*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$or$2$2, test, bool, Object$*)},
	{}
};
$ClassInfo Predicate$$Lambda$lambda$or$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Predicate$$Lambda$lambda$or$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Predicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$loadClass(Predicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Predicate$$Lambda$isNull$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Predicate$$Lambda$isNull$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Predicate$$Lambda$isNull$3, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$isNull$3, test, bool, Object$*)},
	{}
};
$ClassInfo Predicate$$Lambda$isNull$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Predicate$$Lambda$isNull$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Predicate$$Lambda$isNull$3::load$($String* name, bool initialize) {
	$loadClass(Predicate$$Lambda$isNull$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Predicate$$Lambda$lambda$isEqual$3$4>());
	}
	$Object* targetRef = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Predicate$$Lambda$lambda$isEqual$3$4::fieldInfos[2] = {
	{"targetRef", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Predicate$$Lambda$lambda$isEqual$3$4, targetRef)},
	{}
};
$MethodInfo Predicate$$Lambda$lambda$isEqual$3$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Predicate$$Lambda$lambda$isEqual$3$4, init$, void, Object$*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Predicate$$Lambda$lambda$isEqual$3$4, test, bool, Object$*)},
	{}
};
$ClassInfo Predicate$$Lambda$lambda$isEqual$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Predicate$$Lambda$lambda$isEqual$3$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Predicate$$Lambda$lambda$isEqual$3$4::load$($String* name, bool initialize) {
	$loadClass(Predicate$$Lambda$lambda$isEqual$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Predicate$$Lambda$lambda$isEqual$3$4::class$ = nullptr;

$CompoundAttribute _Predicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _Predicate_MethodInfo_[] = {
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

$ClassInfo _Predicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.Predicate",
	nullptr,
	nullptr,
	nullptr,
	_Predicate_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Predicate_Annotations_
};

$Object* allocate$Predicate($Class* clazz) {
	return $of($alloc(Predicate));
}

Predicate* Predicate::and$(Predicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<Predicate*>($new(Predicate$$Lambda$lambda$and$0, this, other));
}

Predicate* Predicate::negate() {
	return static_cast<Predicate*>($new(Predicate$$Lambda$lambda$negate$1$1, this));
}

Predicate* Predicate::or$(Predicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<Predicate*>($new(Predicate$$Lambda$lambda$or$2$2, this, other));
}

Predicate* Predicate::isEqual(Object$* targetRef) {
	return (nullptr == targetRef) ? static_cast<Predicate*>($new(Predicate$$Lambda$isNull$3)) : static_cast<Predicate*>($new(Predicate$$Lambda$lambda$isEqual$3$4, targetRef));
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
		if (name->equals(Predicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return Predicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(Predicate$$Lambda$lambda$negate$1$1::classInfo$.name)) {
			return Predicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals(Predicate$$Lambda$lambda$or$2$2::classInfo$.name)) {
			return Predicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
		if (name->equals(Predicate$$Lambda$isNull$3::classInfo$.name)) {
			return Predicate$$Lambda$isNull$3::load$(name, initialize);
		}
		if (name->equals(Predicate$$Lambda$lambda$isEqual$3$4::classInfo$.name)) {
			return Predicate$$Lambda$lambda$isEqual$3$4::load$(name, initialize);
		}
	}
	$loadClass(Predicate, name, initialize, &_Predicate_ClassInfo_, allocate$Predicate);
	return class$;
}

$Class* Predicate::class$ = nullptr;

		} // function
	} // util
} // java