#include <Exceptions4getMethod.h>

#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _Exceptions4getMethod_FieldInfo_[] = {
	{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getMethod, npe)},
	{"nsme", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getMethod, nsme)},
	{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getMethod, pass)},
	{}
};

$MethodInfo _Exceptions4getMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Exceptions4getMethod, init$, void)},
	{"m0", "()V", nullptr, 0, $virtualMethod(Exceptions4getMethod, m0, void)},
	{"m1", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4getMethod, m1, void)},
	{"m2", "()V", nullptr, $PRIVATE, $method(Exceptions4getMethod, m2, void)},
	{"m4", "()V", nullptr, $PROTECTED, $virtualMethod(Exceptions4getMethod, m4, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Exceptions4getMethod, main, void, $StringArray*)},
	{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(Exceptions4getMethod, test, void, $String*, $Class*)},
	{}
};

$ClassInfo _Exceptions4getMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4getMethod",
	"java.lang.Object",
	nullptr,
	_Exceptions4getMethod_FieldInfo_,
	_Exceptions4getMethod_MethodInfo_
};

$Object* allocate$Exceptions4getMethod($Class* clazz) {
	return $of($alloc(Exceptions4getMethod));
}

$StringArray* Exceptions4getMethod::npe = nullptr;
$StringArray* Exceptions4getMethod::nsme = nullptr;
$StringArray* Exceptions4getMethod::pass = nullptr;

void Exceptions4getMethod::init$() {
}

void Exceptions4getMethod::m0() {
}

void Exceptions4getMethod::m1() {
}

void Exceptions4getMethod::m2() {
}

void Exceptions4getMethod::m4() {
}

void Exceptions4getMethod::test($String* s, $Class* ex) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getMethod(s, $$new($ClassArray, 0));
	} catch ($Throwable& x) {
		if ($nc(ex)->isAssignableFrom($of(x)->getClass())) {
			$assign(t, x);
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		$throwNew($RuntimeException, $$str({"expected "_s, $(ex->getName()), " for "_s, s}));
	} else {
		$nc($System::out)->println($$str({s, " OK"_s}));
	}
}

void Exceptions4getMethod::main($StringArray* args) {
	$init(Exceptions4getMethod);
	$var(Exceptions4getMethod, e, $new(Exceptions4getMethod));
	for (int32_t i = 0; i < $nc(Exceptions4getMethod::npe)->length; ++i) {
		$load($NullPointerException);
		e->test($nc(Exceptions4getMethod::npe)->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getMethod::nsme)->length; ++i) {
		$load($NoSuchMethodException);
		e->test($nc(Exceptions4getMethod::nsme)->get(i), $NoSuchMethodException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getMethod::pass)->length; ++i) {
		e->test($nc(Exceptions4getMethod::pass)->get(i), nullptr);
	}
}

void clinit$Exceptions4getMethod($Class* class$) {
	$assignStatic(Exceptions4getMethod::npe, $new($StringArray, {($String*)nullptr}));
	$assignStatic(Exceptions4getMethod::nsme, $new($StringArray, {
		"m0"_s,
		"m2"_s,
		"m4"_s,
		"m6"_s
	}));
	$assignStatic(Exceptions4getMethod::pass, $new($StringArray, {"m1"_s}));
}

Exceptions4getMethod::Exceptions4getMethod() {
}

$Class* Exceptions4getMethod::load$($String* name, bool initialize) {
	$loadClass(Exceptions4getMethod, name, initialize, &_Exceptions4getMethod_ClassInfo_, clinit$Exceptions4getMethod, allocate$Exceptions4getMethod);
	return class$;
}

$Class* Exceptions4getMethod::class$ = nullptr;