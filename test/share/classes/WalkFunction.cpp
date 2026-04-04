#include <WalkFunction.h>
#include <java/io/Serializable.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Optional = ::java::util::Optional;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

class WalkFunction$$Lambda$count : public $Function {
	$class(WalkFunction$$Lambda$count, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Stream, inst$)->count());
	}
};
$Class* WalkFunction$$Lambda$count::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WalkFunction$$Lambda$count, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WalkFunction$$Lambda$count, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WalkFunction$$Lambda$count",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(WalkFunction$$Lambda$count, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WalkFunction$$Lambda$count);
	});
	return class$;
}
$Class* WalkFunction$$Lambda$count::class$ = nullptr;

class WalkFunction$$Lambda$reduce$1 : public $Function {
	$class(WalkFunction$$Lambda$reduce$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* stream) override {
		 return WalkFunction::reduce($cast($Stream, stream));
	}
};
$Class* WalkFunction$$Lambda$reduce$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WalkFunction$$Lambda$reduce$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WalkFunction$$Lambda$reduce$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WalkFunction$$Lambda$reduce$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(WalkFunction$$Lambda$reduce$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WalkFunction$$Lambda$reduce$1);
	});
	return class$;
}
$Class* WalkFunction$$Lambda$reduce$1::class$ = nullptr;

class WalkFunction$$Lambda$lambda$reduce$0$2 : public $BinaryOperator {
	$class(WalkFunction$$Lambda$lambda$reduce$0$2, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* r, Object$* f) override {
		 return WalkFunction::lambda$reduce$0($cast($StackWalker$StackFrame, r), $cast($StackWalker$StackFrame, f));
	}
};
$Class* WalkFunction$$Lambda$lambda$reduce$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WalkFunction$$Lambda$lambda$reduce$0$2, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WalkFunction$$Lambda$lambda$reduce$0$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WalkFunction$$Lambda$lambda$reduce$0$2",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(WalkFunction$$Lambda$lambda$reduce$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WalkFunction$$Lambda$lambda$reduce$0$2);
	});
	return class$;
}
$Class* WalkFunction$$Lambda$lambda$reduce$0$2::class$ = nullptr;

class WalkFunction$$Lambda$function$3 : public $Function {
	$class(WalkFunction$$Lambda$function$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return WalkFunction::function($cast($Stream, s));
	}
};
$Class* WalkFunction$$Lambda$function$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WalkFunction$$Lambda$function$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WalkFunction$$Lambda$function$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WalkFunction$$Lambda$function$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(WalkFunction$$Lambda$function$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WalkFunction$$Lambda$function$3);
	});
	return class$;
}
$Class* WalkFunction$$Lambda$function$3::class$ = nullptr;

$StackWalker* WalkFunction::walker = nullptr;

void WalkFunction::init$() {
}

void WalkFunction::main($StringArray* args) {
	$init(WalkFunction);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	testFunctions();
	testWildcards();
	$nc(WalkFunction::walker)->walk($(counter()));
	WalkFunction::walker->walk($(wildCounter()));
}

void WalkFunction::testFunctions() {
	$init(WalkFunction);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc(WalkFunction::walker)->walk($$new(WalkFunction$$Lambda$count));
	try {
		WalkFunction::walker->walk(nullptr);
		$throwNew($RuntimeException, "NPE expected"_s);
	} catch ($NullPointerException& e) {
	}
	$var($Optional, result, $cast($Optional, WalkFunction::walker->walk($$new(WalkFunction$$Lambda$reduce$1))));
	if (!$$nc($$sure($StackWalker$StackFrame, $nc(result)->get())->getClassName())->equals($(WalkFunction::class$->getName()))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(result->get()));
		var$0->append(" expected: "_s);
		var$0->append($(WalkFunction::class$->getName()));
		$throwNew($RuntimeException, $$str(var$0));
	}
}

$Optional* WalkFunction::reduce($Stream* stream) {
	$init(WalkFunction);
	return $nc(stream)->reduce($$new(WalkFunction$$Lambda$lambda$reduce$0$2));
}

void WalkFunction::testWildcards() {
	$init(WalkFunction);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Function, f1, $new(WalkFunction$$Lambda$function$3));
	$var($Function, f2, $new(WalkFunction$$Lambda$function$3));
	$var($Function, f3, $new(WalkFunction$$Lambda$function$3));
	$var($Function, f4, $new(WalkFunction$$Lambda$function$3));
	$var($Function, f5, $new(WalkFunction$$Lambda$function$3));
	$var($Function, f6, $new(WalkFunction$$Lambda$function$3));
	$nc(WalkFunction::walker)->walk(f1);
	WalkFunction::walker->walk(f2);
	WalkFunction::walker->walk(f3);
	WalkFunction::walker->walk(f4);
	WalkFunction::walker->walk(f5);
	WalkFunction::walker->walk(f6);
}

$Void* WalkFunction::function($Stream* s) {
	$init(WalkFunction);
	return nullptr;
}

$Function* WalkFunction::wildCounter() {
	$init(WalkFunction);
	return $new(WalkFunction$$Lambda$count);
}

$Function* WalkFunction::counter() {
	$init(WalkFunction);
	return $new(WalkFunction$$Lambda$count);
}

$StackWalker$StackFrame* WalkFunction::lambda$reduce$0($StackWalker$StackFrame* r, $StackWalker$StackFrame* f) {
	$init(WalkFunction);
	$useLocalObjectStack();
	return $$nc($nc(r)->getClassName())->compareTo($($nc(f)->getClassName())) > 0 ? f : r;
}

void WalkFunction::clinit$($Class* clazz) {
	$assignStatic(WalkFunction::walker, $StackWalker::getInstance());
}

WalkFunction::WalkFunction() {
}

$Class* WalkFunction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("WalkFunction$$Lambda$count")) {
			return WalkFunction$$Lambda$count::load$(name, initialize);
		}
		if (name->equals("WalkFunction$$Lambda$reduce$1")) {
			return WalkFunction$$Lambda$reduce$1::load$(name, initialize);
		}
		if (name->equals("WalkFunction$$Lambda$lambda$reduce$0$2")) {
			return WalkFunction$$Lambda$lambda$reduce$0$2::load$(name, initialize);
		}
		if (name->equals("WalkFunction$$Lambda$function$3")) {
			return WalkFunction$$Lambda$function$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WalkFunction, walker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WalkFunction, init$, void)},
		{"counter", "()Ljava/util/function/Function;", "<T:Ljava/lang/Object;>()Ljava/util/function/Function<Ljava/util/stream/Stream<TT;>;Ljava/lang/Long;>;", $PRIVATE | $STATIC, $staticMethod(WalkFunction, counter, $Function*)},
		{"function", "(Ljava/util/stream/Stream;)Ljava/lang/Void;", "(Ljava/util/stream/Stream<*>;)Ljava/lang/Void;", $PRIVATE | $STATIC, $staticMethod(WalkFunction, function, $Void*, $Stream*)},
		{"lambda$reduce$0", "(Ljava/lang/StackWalker$StackFrame;Ljava/lang/StackWalker$StackFrame;)Ljava/lang/StackWalker$StackFrame;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WalkFunction, lambda$reduce$0, $StackWalker$StackFrame*, $StackWalker$StackFrame*, $StackWalker$StackFrame*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(WalkFunction, main, void, $StringArray*), "java.lang.Exception"},
		{"reduce", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", "(Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;)Ljava/util/Optional<Ljava/lang/StackWalker$StackFrame;>;", $STATIC, $staticMethod(WalkFunction, reduce, $Optional*, $Stream*)},
		{"testFunctions", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkFunction, testFunctions, void)},
		{"testWildcards", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WalkFunction, testWildcards, void)},
		{"wildCounter", "()Ljava/util/function/Function;", "()Ljava/util/function/Function<Ljava/util/stream/Stream<*>;Ljava/lang/Long;>;", $PRIVATE | $STATIC, $staticMethod(WalkFunction, wildCounter, $Function*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WalkFunction",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WalkFunction, name, initialize, &classInfo$$, WalkFunction::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WalkFunction);
	});
	return class$;
}

$Class* WalkFunction::class$ = nullptr;