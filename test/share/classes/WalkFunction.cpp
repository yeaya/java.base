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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WalkFunction$$Lambda$count>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WalkFunction$$Lambda$count::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WalkFunction$$Lambda$count::*)()>(&WalkFunction$$Lambda$count::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WalkFunction$$Lambda$count::classInfo$ = {
	$PUBLIC | $FINAL,
	"WalkFunction$$Lambda$count",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* WalkFunction$$Lambda$count::load$($String* name, bool initialize) {
	$loadClass(WalkFunction$$Lambda$count, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WalkFunction$$Lambda$count::class$ = nullptr;

class WalkFunction$$Lambda$reduce$1 : public $Function {
	$class(WalkFunction$$Lambda$reduce$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* stream) override {
		 return $of(WalkFunction::reduce($cast($Stream, stream)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WalkFunction$$Lambda$reduce$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WalkFunction$$Lambda$reduce$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WalkFunction$$Lambda$reduce$1::*)()>(&WalkFunction$$Lambda$reduce$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WalkFunction$$Lambda$reduce$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"WalkFunction$$Lambda$reduce$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* WalkFunction$$Lambda$reduce$1::load$($String* name, bool initialize) {
	$loadClass(WalkFunction$$Lambda$reduce$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WalkFunction$$Lambda$reduce$1::class$ = nullptr;

class WalkFunction$$Lambda$lambda$reduce$0$2 : public $BinaryOperator {
	$class(WalkFunction$$Lambda$lambda$reduce$0$2, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* r, Object$* f) override {
		 return $of(WalkFunction::lambda$reduce$0($cast($StackWalker$StackFrame, r), $cast($StackWalker$StackFrame, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WalkFunction$$Lambda$lambda$reduce$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WalkFunction$$Lambda$lambda$reduce$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WalkFunction$$Lambda$lambda$reduce$0$2::*)()>(&WalkFunction$$Lambda$lambda$reduce$0$2::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WalkFunction$$Lambda$lambda$reduce$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"WalkFunction$$Lambda$lambda$reduce$0$2",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* WalkFunction$$Lambda$lambda$reduce$0$2::load$($String* name, bool initialize) {
	$loadClass(WalkFunction$$Lambda$lambda$reduce$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WalkFunction$$Lambda$lambda$reduce$0$2::class$ = nullptr;

class WalkFunction$$Lambda$function$3 : public $Function {
	$class(WalkFunction$$Lambda$function$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(WalkFunction::function($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WalkFunction$$Lambda$function$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WalkFunction$$Lambda$function$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WalkFunction$$Lambda$function$3::*)()>(&WalkFunction$$Lambda$function$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WalkFunction$$Lambda$function$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"WalkFunction$$Lambda$function$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* WalkFunction$$Lambda$function$3::load$($String* name, bool initialize) {
	$loadClass(WalkFunction$$Lambda$function$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WalkFunction$$Lambda$function$3::class$ = nullptr;

$FieldInfo _WalkFunction_FieldInfo_[] = {
	{"walker", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WalkFunction, walker)},
	{}
};

$MethodInfo _WalkFunction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WalkFunction::*)()>(&WalkFunction::init$))},
	{"counter", "()Ljava/util/function/Function;", "<T:Ljava/lang/Object;>()Ljava/util/function/Function<Ljava/util/stream/Stream<TT;>;Ljava/lang/Long;>;", $PRIVATE | $STATIC, $method(static_cast<$Function*(*)()>(&WalkFunction::counter))},
	{"function", "(Ljava/util/stream/Stream;)Ljava/lang/Void;", "(Ljava/util/stream/Stream<*>;)Ljava/lang/Void;", $PRIVATE | $STATIC, $method(static_cast<$Void*(*)($Stream*)>(&WalkFunction::function))},
	{"lambda$reduce$0", "(Ljava/lang/StackWalker$StackFrame;Ljava/lang/StackWalker$StackFrame;)Ljava/lang/StackWalker$StackFrame;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StackWalker$StackFrame*(*)($StackWalker$StackFrame*,$StackWalker$StackFrame*)>(&WalkFunction::lambda$reduce$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&WalkFunction::main)), "java.lang.Exception"},
	{"reduce", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", "(Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;)Ljava/util/Optional<Ljava/lang/StackWalker$StackFrame;>;", $STATIC, $method(static_cast<$Optional*(*)($Stream*)>(&WalkFunction::reduce))},
	{"testFunctions", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WalkFunction::testFunctions))},
	{"testWildcards", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WalkFunction::testWildcards))},
	{"wildCounter", "()Ljava/util/function/Function;", "()Ljava/util/function/Function<Ljava/util/stream/Stream<*>;Ljava/lang/Long;>;", $PRIVATE | $STATIC, $method(static_cast<$Function*(*)()>(&WalkFunction::wildCounter))},
	{}
};

$ClassInfo _WalkFunction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WalkFunction",
	"java.lang.Object",
	nullptr,
	_WalkFunction_FieldInfo_,
	_WalkFunction_MethodInfo_
};

$Object* allocate$WalkFunction($Class* clazz) {
	return $of($alloc(WalkFunction));
}

$StackWalker* WalkFunction::walker = nullptr;

void WalkFunction::init$() {
}

void WalkFunction::main($StringArray* args) {
	$init(WalkFunction);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	testFunctions();
	testWildcards();
	$nc(WalkFunction::walker)->walk($(counter()));
	$nc(WalkFunction::walker)->walk($(wildCounter()));
}

void WalkFunction::testFunctions() {
	$init(WalkFunction);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(WalkFunction::walker)->walk(static_cast<$Function*>($$new(WalkFunction$$Lambda$count)));
	try {
		$nc(WalkFunction::walker)->walk(nullptr);
		$throwNew($RuntimeException, "NPE expected"_s);
	} catch ($NullPointerException& e) {
	}
	$var($Optional, result, $cast($Optional, $nc(WalkFunction::walker)->walk(static_cast<$Function*>($$new(WalkFunction$$Lambda$reduce$1)))));
	if (!$nc($($nc(($cast($StackWalker$StackFrame, $($nc(result)->get()))))->getClassName()))->equals($(WalkFunction::class$->getName()))) {
		$var($String, var$0, $$str({$(result->get()), " expected: "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $(WalkFunction::class$->getName())));
	}
}

$Optional* WalkFunction::reduce($Stream* stream) {
	$init(WalkFunction);
	return $nc(stream)->reduce(static_cast<$BinaryOperator*>($$new(WalkFunction$$Lambda$lambda$reduce$0$2)));
}

void WalkFunction::testWildcards() {
	$init(WalkFunction);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Function, f1, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$var($Function, f2, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$var($Function, f3, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$var($Function, f4, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$var($Function, f5, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$var($Function, f6, static_cast<$Function*>($new(WalkFunction$$Lambda$function$3)));
	$nc(WalkFunction::walker)->walk(f1);
	$nc(WalkFunction::walker)->walk(f2);
	$nc(WalkFunction::walker)->walk(f3);
	$nc(WalkFunction::walker)->walk(f4);
	$nc(WalkFunction::walker)->walk(f5);
	$nc(WalkFunction::walker)->walk(f6);
}

$Void* WalkFunction::function($Stream* s) {
	$init(WalkFunction);
	return nullptr;
}

$Function* WalkFunction::wildCounter() {
	$init(WalkFunction);
	return static_cast<$Function*>($new(WalkFunction$$Lambda$count));
}

$Function* WalkFunction::counter() {
	$init(WalkFunction);
	return static_cast<$Function*>($new(WalkFunction$$Lambda$count));
}

$StackWalker$StackFrame* WalkFunction::lambda$reduce$0($StackWalker$StackFrame* r, $StackWalker$StackFrame* f) {
	$init(WalkFunction);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(r)->getClassName()))->compareTo($($nc(f)->getClassName())) > 0 ? f : r;
}

void clinit$WalkFunction($Class* class$) {
	$assignStatic(WalkFunction::walker, $StackWalker::getInstance());
}

WalkFunction::WalkFunction() {
}

$Class* WalkFunction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WalkFunction$$Lambda$count::classInfo$.name)) {
			return WalkFunction$$Lambda$count::load$(name, initialize);
		}
		if (name->equals(WalkFunction$$Lambda$reduce$1::classInfo$.name)) {
			return WalkFunction$$Lambda$reduce$1::load$(name, initialize);
		}
		if (name->equals(WalkFunction$$Lambda$lambda$reduce$0$2::classInfo$.name)) {
			return WalkFunction$$Lambda$lambda$reduce$0$2::load$(name, initialize);
		}
		if (name->equals(WalkFunction$$Lambda$function$3::classInfo$.name)) {
			return WalkFunction$$Lambda$function$3::load$(name, initialize);
		}
	}
	$loadClass(WalkFunction, name, initialize, &_WalkFunction_ClassInfo_, clinit$WalkFunction, allocate$WalkFunction);
	return class$;
}

$Class* WalkFunction::class$ = nullptr;