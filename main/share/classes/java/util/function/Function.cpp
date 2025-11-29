#include <java/util/function/Function.h>

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

class Function$$Lambda$lambda$compose$0 : public Function {
	$class(Function$$Lambda$lambda$compose$0, $NO_CLASS_INIT, Function)
public:
	void init$(Function* inst, Function* before) {
		$set(this, inst$, inst);
		$set(this, before, before);
	}
	virtual $Object* apply(Object$* v) override {
		 return $nc(inst$)->lambda$compose$0(before, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Function$$Lambda$lambda$compose$0>());
	}
	Function* inst$ = nullptr;
	Function* before = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Function$$Lambda$lambda$compose$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$compose$0, inst$)},
	{"before", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$compose$0, before)},
	{}
};
$MethodInfo Function$$Lambda$lambda$compose$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(static_cast<void(Function$$Lambda$lambda$compose$0::*)(Function*,Function*)>(&Function$$Lambda$lambda$compose$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Function$$Lambda$lambda$compose$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Function$$Lambda$lambda$compose$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Function$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$loadClass(Function$$Lambda$lambda$compose$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Function$$Lambda$lambda$compose$0::class$ = nullptr;

class Function$$Lambda$lambda$andThen$1$1 : public Function {
	$class(Function$$Lambda$lambda$andThen$1$1, $NO_CLASS_INIT, Function)
public:
	void init$(Function* inst, Function* after) {
		$set(this, inst$, inst);
		$set(this, after, after);
	}
	virtual $Object* apply(Object$* t) override {
		 return $nc(inst$)->lambda$andThen$1(after, t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Function$$Lambda$lambda$andThen$1$1>());
	}
	Function* inst$ = nullptr;
	Function* after = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Function$$Lambda$lambda$andThen$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$andThen$1$1, inst$)},
	{"after", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$andThen$1$1, after)},
	{}
};
$MethodInfo Function$$Lambda$lambda$andThen$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(static_cast<void(Function$$Lambda$lambda$andThen$1$1::*)(Function*,Function*)>(&Function$$Lambda$lambda$andThen$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Function$$Lambda$lambda$andThen$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Function$$Lambda$lambda$andThen$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Function$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$loadClass(Function$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Function$$Lambda$lambda$andThen$1$1::class$ = nullptr;

class Function$$Lambda$lambda$identity$2$2 : public Function {
	$class(Function$$Lambda$lambda$identity$2$2, $NO_CLASS_INIT, Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return Function::lambda$identity$2(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Function$$Lambda$lambda$identity$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Function$$Lambda$lambda$identity$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Function$$Lambda$lambda$identity$2$2::*)()>(&Function$$Lambda$lambda$identity$2$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Function$$Lambda$lambda$identity$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.function.Function$$Lambda$lambda$identity$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Function$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$loadClass(Function$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Function$$Lambda$lambda$identity$2$2::class$ = nullptr;

$CompoundAttribute _Function_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _Function_MethodInfo_[] = {
	{"andThen", "(Ljava/util/function/Function;)Ljava/util/function/Function;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TR;+TV;>;)Ljava/util/function/Function<TT;TV;>;", $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TR;", $PUBLIC | $ABSTRACT},
	{"compose", "(Ljava/util/function/Function;)Ljava/util/function/Function;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TV;+TT;>;)Ljava/util/function/Function<TV;TR;>;", $PUBLIC},
	{"identity", "()Ljava/util/function/Function;", "<T:Ljava/lang/Object;>()Ljava/util/function/Function<TT;TT;>;", $PUBLIC | $STATIC, $method(static_cast<Function*(*)()>(&Function::identity))},
	{"lambda$andThen$1", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Function::*)(Function*,Object$*)>(&Function::lambda$andThen$1))},
	{"lambda$compose$0", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Function::*)(Function*,Object$*)>(&Function::lambda$compose$0))},
	{"lambda$identity$2", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(Object$*)>(&Function::lambda$identity$2))},
	{}
};

$ClassInfo _Function_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.Function",
	nullptr,
	nullptr,
	nullptr,
	_Function_MethodInfo_,
	"<T:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_Function_Annotations_
};

$Object* allocate$Function($Class* clazz) {
	return $of($alloc(Function));
}

Function* Function::compose(Function* before) {
	$Objects::requireNonNull(before);
	return static_cast<Function*>($new(Function$$Lambda$lambda$compose$0, this, before));
}

Function* Function::andThen(Function* after) {
	$Objects::requireNonNull(after);
	return static_cast<Function*>($new(Function$$Lambda$lambda$andThen$1$1, this, after));
}

Function* Function::identity() {
	return static_cast<Function*>($new(Function$$Lambda$lambda$identity$2$2));
}

$Object* Function::lambda$identity$2(Object$* t) {
	return $of(t);
}

$Object* Function::lambda$andThen$1(Function* after, Object$* t) {
	return $of($nc(after)->apply($(apply(t))));
}

$Object* Function::lambda$compose$0(Function* before, Object$* v) {
	return $of(apply($($nc(before)->apply(v))));
}

$Class* Function::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Function$$Lambda$lambda$compose$0::classInfo$.name)) {
			return Function$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals(Function$$Lambda$lambda$andThen$1$1::classInfo$.name)) {
			return Function$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals(Function$$Lambda$lambda$identity$2$2::classInfo$.name)) {
			return Function$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$loadClass(Function, name, initialize, &_Function_ClassInfo_, allocate$Function);
	return class$;
}

$Class* Function::class$ = nullptr;

		} // function
	} // util
} // java