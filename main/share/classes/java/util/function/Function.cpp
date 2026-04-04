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
	Function* inst$ = nullptr;
	Function* before = nullptr;
};
$Class* Function$$Lambda$lambda$compose$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$compose$0, inst$)},
		{"before", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$compose$0, before)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Function$$Lambda$lambda$compose$0, init$, void, Function*, Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Function$$Lambda$lambda$compose$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Function$$Lambda$lambda$compose$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Function$$Lambda$lambda$compose$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function$$Lambda$lambda$compose$0);
	});
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
	Function* inst$ = nullptr;
	Function* after = nullptr;
};
$Class* Function$$Lambda$lambda$andThen$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$andThen$1$1, inst$)},
		{"after", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Function$$Lambda$lambda$andThen$1$1, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Function$$Lambda$lambda$andThen$1$1, init$, void, Function*, Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Function$$Lambda$lambda$andThen$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Function$$Lambda$lambda$andThen$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Function$$Lambda$lambda$andThen$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function$$Lambda$lambda$andThen$1$1);
	});
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
};
$Class* Function$$Lambda$lambda$identity$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Function$$Lambda$lambda$identity$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Function$$Lambda$lambda$identity$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.function.Function$$Lambda$lambda$identity$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Function$$Lambda$lambda$identity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function$$Lambda$lambda$identity$2$2);
	});
	return class$;
}
$Class* Function$$Lambda$lambda$identity$2$2::class$ = nullptr;

Function* Function::compose(Function* before) {
	$Objects::requireNonNull(before);
	return $new(Function$$Lambda$lambda$compose$0, this, before);
}

Function* Function::andThen(Function* after) {
	$Objects::requireNonNull(after);
	return $new(Function$$Lambda$lambda$andThen$1$1, this, after);
}

Function* Function::identity() {
	return $new(Function$$Lambda$lambda$identity$2$2);
}

$Object* Function::lambda$identity$2(Object$* t) {
	return $of(t);
}

$Object* Function::lambda$andThen$1(Function* after, Object$* t) {
	return $nc(after)->apply($(apply(t)));
}

$Object* Function::lambda$compose$0(Function* before, Object$* v) {
	return apply($($nc(before)->apply(v)));
}

$Class* Function::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.function.Function$$Lambda$lambda$compose$0")) {
			return Function$$Lambda$lambda$compose$0::load$(name, initialize);
		}
		if (name->equals("java.util.function.Function$$Lambda$lambda$andThen$1$1")) {
			return Function$$Lambda$lambda$andThen$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.function.Function$$Lambda$lambda$identity$2$2")) {
			return Function$$Lambda$lambda$identity$2$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"andThen", "(Ljava/util/function/Function;)Ljava/util/function/Function;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TR;+TV;>;)Ljava/util/function/Function<TT;TV;>;", $PUBLIC, $virtualMethod(Function, andThen, Function*, Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(Function, apply, $Object*, Object$*)},
		{"compose", "(Ljava/util/function/Function;)Ljava/util/function/Function;", "<V:Ljava/lang/Object;>(Ljava/util/function/Function<-TV;+TT;>;)Ljava/util/function/Function<TV;TR;>;", $PUBLIC, $virtualMethod(Function, compose, Function*, Function*)},
		{"identity", "()Ljava/util/function/Function;", "<T:Ljava/lang/Object;>()Ljava/util/function/Function<TT;TT;>;", $PUBLIC | $STATIC, $staticMethod(Function, identity, Function*)},
		{"lambda$andThen$1", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(Function, lambda$andThen$1, $Object*, Function*, Object$*)},
		{"lambda$compose$0", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(Function, lambda$compose$0, $Object*, Function*, Object$*)},
		{"lambda$identity$2", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Function, lambda$identity$2, $Object*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.Function",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Function, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function);
	});
	return class$;
}

$Class* Function::class$ = nullptr;

		} // function
	} // util
} // java