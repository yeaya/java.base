#include <java/util/function/DoublePredicate.h>

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

class DoublePredicate$$Lambda$lambda$and$0 : public DoublePredicate {
	$class(DoublePredicate$$Lambda$lambda$and$0, $NO_CLASS_INIT, DoublePredicate)
public:
	void init$(DoublePredicate* inst, DoublePredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(double value) override {
		 return $nc(inst$)->lambda$and$0(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoublePredicate$$Lambda$lambda$and$0>());
	}
	DoublePredicate* inst$ = nullptr;
	DoublePredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoublePredicate$$Lambda$lambda$and$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoublePredicate$$Lambda$lambda$and$0, inst$)},
	{"other", "Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $field(DoublePredicate$$Lambda$lambda$and$0, other)},
	{}
};
$MethodInfo DoublePredicate$$Lambda$lambda$and$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoublePredicate;Ljava/util/function/DoublePredicate;)V", nullptr, $PUBLIC, $method(DoublePredicate$$Lambda$lambda$and$0, init$, void, DoublePredicate*, DoublePredicate*)},
	{"test", "(D)Z", nullptr, $PUBLIC, $virtualMethod(DoublePredicate$$Lambda$lambda$and$0, test, bool, double)},
	{}
};
$ClassInfo DoublePredicate$$Lambda$lambda$and$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoublePredicate$$Lambda$lambda$and$0",
	"java.lang.Object",
	"java.util.function.DoublePredicate",
	fieldInfos,
	methodInfos
};
$Class* DoublePredicate$$Lambda$lambda$and$0::load$($String* name, bool initialize) {
	$loadClass(DoublePredicate$$Lambda$lambda$and$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoublePredicate$$Lambda$lambda$and$0::class$ = nullptr;

class DoublePredicate$$Lambda$lambda$negate$1$1 : public DoublePredicate {
	$class(DoublePredicate$$Lambda$lambda$negate$1$1, $NO_CLASS_INIT, DoublePredicate)
public:
	void init$(DoublePredicate* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(double value) override {
		 return $nc(inst$)->lambda$negate$1(value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoublePredicate$$Lambda$lambda$negate$1$1>());
	}
	DoublePredicate* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoublePredicate$$Lambda$lambda$negate$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoublePredicate$$Lambda$lambda$negate$1$1, inst$)},
	{}
};
$MethodInfo DoublePredicate$$Lambda$lambda$negate$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoublePredicate;)V", nullptr, $PUBLIC, $method(DoublePredicate$$Lambda$lambda$negate$1$1, init$, void, DoublePredicate*)},
	{"test", "(D)Z", nullptr, $PUBLIC, $virtualMethod(DoublePredicate$$Lambda$lambda$negate$1$1, test, bool, double)},
	{}
};
$ClassInfo DoublePredicate$$Lambda$lambda$negate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoublePredicate$$Lambda$lambda$negate$1$1",
	"java.lang.Object",
	"java.util.function.DoublePredicate",
	fieldInfos,
	methodInfos
};
$Class* DoublePredicate$$Lambda$lambda$negate$1$1::load$($String* name, bool initialize) {
	$loadClass(DoublePredicate$$Lambda$lambda$negate$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoublePredicate$$Lambda$lambda$negate$1$1::class$ = nullptr;

class DoublePredicate$$Lambda$lambda$or$2$2 : public DoublePredicate {
	$class(DoublePredicate$$Lambda$lambda$or$2$2, $NO_CLASS_INIT, DoublePredicate)
public:
	void init$(DoublePredicate* inst, DoublePredicate* other) {
		$set(this, inst$, inst);
		$set(this, other, other);
	}
	virtual bool test(double value) override {
		 return $nc(inst$)->lambda$or$2(other, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DoublePredicate$$Lambda$lambda$or$2$2>());
	}
	DoublePredicate* inst$ = nullptr;
	DoublePredicate* other = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DoublePredicate$$Lambda$lambda$or$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DoublePredicate$$Lambda$lambda$or$2$2, inst$)},
	{"other", "Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $field(DoublePredicate$$Lambda$lambda$or$2$2, other)},
	{}
};
$MethodInfo DoublePredicate$$Lambda$lambda$or$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/DoublePredicate;Ljava/util/function/DoublePredicate;)V", nullptr, $PUBLIC, $method(DoublePredicate$$Lambda$lambda$or$2$2, init$, void, DoublePredicate*, DoublePredicate*)},
	{"test", "(D)Z", nullptr, $PUBLIC, $virtualMethod(DoublePredicate$$Lambda$lambda$or$2$2, test, bool, double)},
	{}
};
$ClassInfo DoublePredicate$$Lambda$lambda$or$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.DoublePredicate$$Lambda$lambda$or$2$2",
	"java.lang.Object",
	"java.util.function.DoublePredicate",
	fieldInfos,
	methodInfos
};
$Class* DoublePredicate$$Lambda$lambda$or$2$2::load$($String* name, bool initialize) {
	$loadClass(DoublePredicate$$Lambda$lambda$or$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DoublePredicate$$Lambda$lambda$or$2$2::class$ = nullptr;

$CompoundAttribute _DoublePredicate_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoublePredicate_MethodInfo_[] = {
	{"and", "(Ljava/util/function/DoublePredicate;)Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $virtualMethod(DoublePredicate, and$, DoublePredicate*, DoublePredicate*)},
	{"lambda$and$0", "(Ljava/util/function/DoublePredicate;D)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(DoublePredicate, lambda$and$0, bool, DoublePredicate*, double)},
	{"lambda$negate$1", "(D)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(DoublePredicate, lambda$negate$1, bool, double)},
	{"lambda$or$2", "(Ljava/util/function/DoublePredicate;D)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(DoublePredicate, lambda$or$2, bool, DoublePredicate*, double)},
	{"negate", "()Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $virtualMethod(DoublePredicate, negate, DoublePredicate*)},
	{"or", "(Ljava/util/function/DoublePredicate;)Ljava/util/function/DoublePredicate;", nullptr, $PUBLIC, $virtualMethod(DoublePredicate, or$, DoublePredicate*, DoublePredicate*)},
	{"test", "(D)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoublePredicate, test, bool, double)},
	{}
};

$ClassInfo _DoublePredicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoublePredicate",
	nullptr,
	nullptr,
	nullptr,
	_DoublePredicate_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoublePredicate_Annotations_
};

$Object* allocate$DoublePredicate($Class* clazz) {
	return $of($alloc(DoublePredicate));
}

DoublePredicate* DoublePredicate::and$(DoublePredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<DoublePredicate*>($new(DoublePredicate$$Lambda$lambda$and$0, this, other));
}

DoublePredicate* DoublePredicate::negate() {
	return static_cast<DoublePredicate*>($new(DoublePredicate$$Lambda$lambda$negate$1$1, this));
}

DoublePredicate* DoublePredicate::or$(DoublePredicate* other) {
	$Objects::requireNonNull(other);
	return static_cast<DoublePredicate*>($new(DoublePredicate$$Lambda$lambda$or$2$2, this, other));
}

bool DoublePredicate::lambda$or$2(DoublePredicate* other, double value) {
	bool var$0 = test(value);
	return var$0 || $nc(other)->test(value);
}

bool DoublePredicate::lambda$negate$1(double value) {
	return !test(value);
}

bool DoublePredicate::lambda$and$0(DoublePredicate* other, double value) {
	bool var$0 = test(value);
	return var$0 && $nc(other)->test(value);
}

$Class* DoublePredicate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DoublePredicate$$Lambda$lambda$and$0::classInfo$.name)) {
			return DoublePredicate$$Lambda$lambda$and$0::load$(name, initialize);
		}
		if (name->equals(DoublePredicate$$Lambda$lambda$negate$1$1::classInfo$.name)) {
			return DoublePredicate$$Lambda$lambda$negate$1$1::load$(name, initialize);
		}
		if (name->equals(DoublePredicate$$Lambda$lambda$or$2$2::classInfo$.name)) {
			return DoublePredicate$$Lambda$lambda$or$2$2::load$(name, initialize);
		}
	}
	$loadClass(DoublePredicate, name, initialize, &_DoublePredicate_ClassInfo_, allocate$DoublePredicate);
	return class$;
}

$Class* DoublePredicate::class$ = nullptr;

		} // function
	} // util
} // java