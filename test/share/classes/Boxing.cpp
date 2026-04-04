#include <Boxing.h>
#include <Boxing$Test.h>
#include <Boxing$TestHandler.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef REPS

using $Boxing$Test = ::Boxing$Test;
using $Boxing$TestHandler = ::Boxing$TestHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::lang::reflect::Proxy;
using $Random = ::java::util::Random;

void Boxing::init$() {
}

void Boxing::main($StringArray* args) {
	($$new(Boxing))->run();
	$nc($System::err)->println("TEST PASSED"_s);
}

void Boxing::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Random, random, $new($Random, 42));
	$load($Boxing$Test);
	$var($ClassLoader, var$0, $Boxing$Test::class$->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {$Boxing$Test::class$}));
	$var($Boxing$Test, proxy, $cast($Boxing$Test, $Proxy::newProxyInstance(var$0, var$1, $$new($Boxing$TestHandler, this))));
	for (int32_t rep = 0; rep < Boxing::REPS; ++rep) {
		this->b = (int8_t)random->nextInt();
		this->c = (char16_t)random->nextInt();
		this->d = random->nextDouble();
		this->f = random->nextFloat();
		this->i = random->nextInt();
		this->j = random->nextLong();
		this->s = (int16_t)random->nextInt();
		this->z = random->nextBoolean();
		$nc(proxy)->m(this->b, this->c, this->d, this->f, this->i, this->j, this->s, this->z);
	}
}

$String* Boxing::identityToString(Object$* obj) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc($of(obj))->toString()));
	var$0->append("@"_s);
	var$0->append($System::identityHashCode(obj));
	return $str(var$0);
}

Boxing::Boxing() {
}

$Class* Boxing::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Boxing, REPS)},
		{"b", "B", nullptr, $PRIVATE, $field(Boxing, b)},
		{"c", "C", nullptr, $PRIVATE, $field(Boxing, c)},
		{"d", "D", nullptr, $PRIVATE, $field(Boxing, d)},
		{"f", "F", nullptr, $PRIVATE, $field(Boxing, f)},
		{"i", "I", nullptr, $PRIVATE, $field(Boxing, i)},
		{"j", "J", nullptr, $PRIVATE, $field(Boxing, j)},
		{"s", "S", nullptr, $PRIVATE, $field(Boxing, s)},
		{"z", "Z", nullptr, $PRIVATE, $field(Boxing, z)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Boxing, init$, void)},
		{"identityToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Boxing, identityToString, $String*, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Boxing, main, void, $StringArray*)},
		{"run", "()V", nullptr, $PRIVATE, $method(Boxing, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Boxing$TestHandler", "Boxing", "TestHandler", $PRIVATE},
		{"Boxing$Test", "Boxing", "Test", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Boxing",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Boxing$TestHandler,Boxing$Test"
	};
	$loadClass(Boxing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Boxing);
	});
	return class$;
}

$Class* Boxing::class$ = nullptr;