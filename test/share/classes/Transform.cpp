#include <Transform.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

class Transform$$Lambda$lambda$test1$0 : public $Function {
	$class(Transform$$Lambda$lambda$test1$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Transform::lambda$test1$0($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$0::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$0::class$ = nullptr;

class Transform$$Lambda$lambda$test1$1$1 : public $Function {
	$class(Transform$$Lambda$lambda$test1$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Transform::lambda$test1$1($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$1$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$1$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$1$1::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$1$1::class$ = nullptr;

class Transform$$Lambda$lambda$test1$2$2 : public $Function {
	$class(Transform$$Lambda$lambda$test1$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Transform::lambda$test1$2($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$2$2, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$2$2, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$2$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$2$2::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$2$2::class$ = nullptr;

class Transform$$Lambda$lambda$test1$5$3 : public $Function {
	$class(Transform$$Lambda$lambda$test1$5$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* string) override {
		 return $of(Transform::lambda$test1$5($cast($String, string)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$5$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$5$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$5$3, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$5$3, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$5$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$5$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$5$3::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$5$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$5$3::class$ = nullptr;

class Transform$$Lambda$lambda$test1$4$4 : public $Function {
	$class(Transform$$Lambda$lambda$test1$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Transform::lambda$test1$4($cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$4$4, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$4$4, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$4$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$4$4::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$4$4::class$ = nullptr;

class Transform$$Lambda$lambda$test1$3$5 : public $Function {
	$class(Transform$$Lambda$lambda$test1$3$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* t) override {
		 return $of(Transform::lambda$test1$3($cast($String, t)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Transform$$Lambda$lambda$test1$3$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Transform$$Lambda$lambda$test1$3$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform$$Lambda$lambda$test1$3$5, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Transform$$Lambda$lambda$test1$3$5, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Transform$$Lambda$lambda$test1$3$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"Transform$$Lambda$lambda$test1$3$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Transform$$Lambda$lambda$test1$3$5::load$($String* name, bool initialize) {
	$loadClass(Transform$$Lambda$lambda$test1$3$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Transform$$Lambda$lambda$test1$3$5::class$ = nullptr;

$MethodInfo _Transform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transform, init$, void)},
	{"check", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(Transform, check, void, $String*, Object$*, Object$*)},
	{"lambda$test1$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$0, $String*, $String*)},
	{"lambda$test1$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$1, $String*, $String*)},
	{"lambda$test1$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$2, $String*, $String*)},
	{"lambda$test1$3", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$3, $String*, $String*)},
	{"lambda$test1$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$4, $String*, $String*)},
	{"lambda$test1$5", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Transform, lambda$test1$5, $String*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Transform, main, void, $StringArray*)},
	{"simpleTransform", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Function;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/String;>;)V", $STATIC, $staticMethod(Transform, simpleTransform, void, $String*, $String*, $Function*)},
	{"test1", "()V", nullptr, $STATIC, $staticMethod(Transform, test1, void)},
	{}
};

$ClassInfo _Transform_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Transform",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Transform_MethodInfo_
};

$Object* allocate$Transform($Class* clazz) {
	return $of($alloc(Transform));
}

void Transform::init$() {
}

void Transform::main($StringArray* args) {
	test1();
}

void Transform::test1() {
	$useLocalCurrentObjectStackCache();
	simpleTransform("toUpperCase"_s, "abc"_s, static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$0)));
	simpleTransform("toLowerCase"_s, "ABC"_s, static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$1$1)));
	simpleTransform("substring"_s, "John Smith"_s, static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$2$2)));
	$var($String, multiline, "    This is line one\n        This is line two\n            This is line three\n"_s);
	$var($String, expected, "This is line one!\n    This is line two!\n        This is line three!\n"_s);
	check("multiline"_s, $(multiline->transform(static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$5$3)))), expected);
}

void Transform::simpleTransform($String* test, $String* s, $Function* f) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, test);
	$var($Object, var$1, $nc(s)->transform(f));
	check(var$0, var$1, $($nc(f)->apply(s)));
}

void Transform::check($String* test, Object$* output, Object$* expected) {
	if (!$equals(output, expected) && (output == nullptr || !$nc($of(output))->equals(expected))) {
		$nc($System::err)->println($$str({"Testing "_s, test, ": unexpected result"_s}));
		$nc($System::err)->println("Output:"_s);
		$nc($System::err)->println(output);
		$nc($System::err)->println("Expected:"_s);
		$nc($System::err)->println(expected);
		$throwNew($RuntimeException);
	}
}

$String* Transform::lambda$test1$5($String* string) {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($($nc(string)->lines())->map(static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$4$4)))))->collect($($Collectors::joining("\n"_s, ""_s, "\n"_s))));
}

$String* Transform::lambda$test1$4($String* s) {
	return $cast($String, $nc(s)->transform(static_cast<$Function*>($$new(Transform$$Lambda$lambda$test1$3$5))));
}

$String* Transform::lambda$test1$3($String* t) {
	return $str({$($nc(t)->substring(4)), "!"_s});
}

$String* Transform::lambda$test1$2($String* s) {
	return $nc(s)->substring(0, 4);
}

$String* Transform::lambda$test1$1($String* s) {
	return $nc(s)->toLowerCase();
}

$String* Transform::lambda$test1$0($String* s) {
	return $nc(s)->toUpperCase();
}

Transform::Transform() {
}

$Class* Transform::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Transform$$Lambda$lambda$test1$0::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$0::load$(name, initialize);
		}
		if (name->equals(Transform$$Lambda$lambda$test1$1$1::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$1$1::load$(name, initialize);
		}
		if (name->equals(Transform$$Lambda$lambda$test1$2$2::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$2$2::load$(name, initialize);
		}
		if (name->equals(Transform$$Lambda$lambda$test1$5$3::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$5$3::load$(name, initialize);
		}
		if (name->equals(Transform$$Lambda$lambda$test1$4$4::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$4$4::load$(name, initialize);
		}
		if (name->equals(Transform$$Lambda$lambda$test1$3$5::classInfo$.name)) {
			return Transform$$Lambda$lambda$test1$3$5::load$(name, initialize);
		}
	}
	$loadClass(Transform, name, initialize, &_Transform_ClassInfo_, allocate$Transform);
	return class$;
}

$Class* Transform::class$ = nullptr;