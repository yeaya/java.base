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
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BiPredicate$$Lambda$lambda$and$0>());
	}
	BiPredicate* inst$ = nullptr;
	BiPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BiPredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$and$0, inst$)},
	{"other", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$and$0, other)},
	{}
};
$MethodInfo BiPredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiPredicate;Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(BiPredicate$$Lambda$lambda$and$0::*)(BiPredicate*,BiPredicate*)>(&BiPredicate$$Lambda$lambda$and$0::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo BiPredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BiPredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	fieldInfos,
	methodInfos
};
$Class* BiPredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(BiPredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BiPredicate$$Lambda$lambda$negate$1$1>());
	}
	BiPredicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BiPredicate$$Lambda$lambda$negate$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$negate$1$1, inst$)},
	{}
};
$MethodInfo BiPredicate$$Lambda$lambda$negate$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(BiPredicate$$Lambda$lambda$negate$1$1::*)(BiPredicate*)>(&BiPredicate$$Lambda$lambda$negate$1$1::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo BiPredicate$$Lambda$lambda$negate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BiPredicate$$Lambda$lambda$negate$1$1",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	fieldInfos,
	methodInfos
};
$Class* BiPredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$loadClass(BiPredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BiPredicate$$Lambda$lambda$or$2$2>());
	}
	BiPredicate* inst$ = nullptr;
	BiPredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BiPredicate$$Lambda$lambda$or$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$or$2$2, inst$)},
	{"other", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(BiPredicate$$Lambda$lambda$or$2$2, other)},
	{}
};
$MethodInfo BiPredicate$$Lambda$lambda$or$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiPredicate;Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(BiPredicate$$Lambda$lambda$or$2$2::*)(BiPredicate*,BiPredicate*)>(&BiPredicate$$Lambda$lambda$or$2$2::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo BiPredicate$$Lambda$lambda$or$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.BiPredicate$$Lambda$lambda$or$2$2",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	fieldInfos,
	methodInfos
};
$Class* BiPredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$loadClass(BiPredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BiPredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

$CompoundAttribute _BiPredicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _BiPredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/function/BiPredicate;)Ljava/util/function/BiPredicate;", "(Ljava/util/function/BiPredicate<-TT;-TU;>;)Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC},
	{"lambda$and$0", "(Ljava/util/function/BiPredicate;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(BiPredicate::*)(BiPredicate*,Object$*,Object$*)>(&BiPredicate::lambda$and$0))},
	{"lambda$negate$1", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(BiPredicate::*)(Object$*,Object$*)>(&BiPredicate::lambda$negate$1))},
	{"lambda$or$2", "(Ljava/util/function/BiPredicate;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(BiPredicate::*)(BiPredicate*,Object$*,Object$*)>(&BiPredicate::lambda$or$2))},
	{"negate", "()Ljava/util/function/BiPredicate;", "()Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC},
	{"or", "(Ljava/util/function/BiPredicate;)Ljava/util/function/BiPredicate;", "(Ljava/util/function/BiPredicate<-TT;-TU;>;)Ljava/util/function/BiPredicate<TT;TU;>;", $PUBLIC},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TT;TU;)Z", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BiPredicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.BiPredicate",
	nullptr,
	nullptr,
	nullptr,
	_BiPredicate_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_BiPredicate_Annotations_
};

$Object* allocate$BiPredicate($Class* clazz) {
	return $of($alloc(BiPredicate));
}

BiPredicate* BiPredicate::and$(BiPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<BiPredicate*>($new(BiPredicate$$Lambda$lambda$and$0, this, other));
}

BiPredicate* BiPredicate::negate() {
	return static_cast<BiPredicate*>($new(BiPredicate$$Lambda$lambda$negate$1$1, this));
}

BiPredicate* BiPredicate::or$(BiPredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<BiPredicate*>($new(BiPredicate$$Lambda$lambda$or$2$2, this, other));
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
		if (name->equals(BiPredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return BiPredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(BiPredicate$$Lambda$lambda$negate$1$1::classInfo$.name)) {
			return BiPredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals(BiPredicate$$Lambda$lambda$or$2$2::classInfo$.name)) {
			return BiPredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$loadClass(BiPredicate, name, initialize, &_BiPredicate_ClassInfo_, allocate$BiPredicate);
	return class$;
}

$Class* BiPredicate::class$ = nullptr;

		} // function
	} // util
} // java