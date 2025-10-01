#include <Boxing.h>

#include <Boxing$Test.h>
#include <Boxing$TestHandler.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef REPS

using $Boxing$Test = ::Boxing$Test;
using $Boxing$TestHandler = ::Boxing$TestHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $Random = ::java::util::Random;

$FieldInfo _Boxing_FieldInfo_[] = {
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

$MethodInfo _Boxing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Boxing::*)()>(&Boxing::init$))},
	{"identityToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&Boxing::identityToString))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Boxing::main))},
	{"run", "()V", nullptr, $PRIVATE, $method(static_cast<void(Boxing::*)()>(&Boxing::run))},
	{}
};

$InnerClassInfo _Boxing_InnerClassesInfo_[] = {
	{"Boxing$TestHandler", "Boxing", "TestHandler", $PRIVATE},
	{"Boxing$Test", "Boxing", "Test", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Boxing_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Boxing",
	"java.lang.Object",
	nullptr,
	_Boxing_FieldInfo_,
	_Boxing_MethodInfo_,
	nullptr,
	nullptr,
	_Boxing_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Boxing$TestHandler,Boxing$Test"
};

$Object* allocate$Boxing($Class* clazz) {
	return $of($alloc(Boxing));
}

void Boxing::init$() {
}

void Boxing::main($StringArray* args) {
	($$new(Boxing))->run();
	$init($System);
	$nc($System::err)->println("TEST PASSED"_s);
}

void Boxing::run() {
	$beforeCallerSensitive();
	$var($Random, random, $new($Random, 42));
	$load($Boxing$Test);
	$var($ClassLoader, var$0, $Boxing$Test::class$->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {$Boxing$Test::class$}));
	$var($Boxing$Test, proxy, $cast($Boxing$Test, $Proxy::newProxyInstance(var$0, var$1, static_cast<$InvocationHandler*>($$new($Boxing$TestHandler, this)))));
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
	$var($String, var$0, $$str({$($nc($of(obj))->toString()), "@"_s}));
	return $concat(var$0, $$str($System::identityHashCode(obj)));
}

Boxing::Boxing() {
}

$Class* Boxing::load$($String* name, bool initialize) {
	$loadClass(Boxing, name, initialize, &_Boxing_ClassInfo_, allocate$Boxing);
	return class$;
}

$Class* Boxing::class$ = nullptr;