#include <Exceptions4getDeclaredMethod.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$StringArray* Exceptions4getDeclaredMethod::npe = nullptr;
$StringArray* Exceptions4getDeclaredMethod::nsme = nullptr;
$StringArray* Exceptions4getDeclaredMethod::pass = nullptr;

void Exceptions4getDeclaredMethod::init$() {
}

void Exceptions4getDeclaredMethod::m0() {
}

void Exceptions4getDeclaredMethod::m1() {
}

void Exceptions4getDeclaredMethod::m2() {
}

void Exceptions4getDeclaredMethod::m4() {
}

void Exceptions4getDeclaredMethod::test($String* s, $Class* ex) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getDeclaredMethod(s, $$new($ClassArray, 0));
	} catch ($Throwable& x) {
		if ($nc(ex)->isAssignableFrom(x->getClass())) {
			$assign(t, x);
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		$throwNew($RuntimeException, $$str({"expected "_s, $(ex->getName()), " for "_s, s}));
	} else {
		$nc($System::out)->println($$str({s, " OK"_s}));
	}
}

void Exceptions4getDeclaredMethod::main($StringArray* args) {
	$init(Exceptions4getDeclaredMethod);
	$var(Exceptions4getDeclaredMethod, e, $new(Exceptions4getDeclaredMethod));
	for (int32_t i = 0; i < Exceptions4getDeclaredMethod::npe->length; ++i) {
		e->test(Exceptions4getDeclaredMethod::npe->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < Exceptions4getDeclaredMethod::nsme->length; ++i) {
		$load($NoSuchMethodException);
		e->test(Exceptions4getDeclaredMethod::nsme->get(i), $NoSuchMethodException::class$);
	}
	for (int32_t i = 0; i < Exceptions4getDeclaredMethod::pass->length; ++i) {
		e->test(Exceptions4getDeclaredMethod::pass->get(i), nullptr);
	}
}

void Exceptions4getDeclaredMethod::clinit$($Class* clazz) {
	$assignStatic(Exceptions4getDeclaredMethod::npe, $new($StringArray, {nullptr}));
	$assignStatic(Exceptions4getDeclaredMethod::nsme, $new($StringArray, {"m6"_s}));
	$assignStatic(Exceptions4getDeclaredMethod::pass, $new($StringArray, {
		"m0"_s,
		"m1"_s,
		"m2"_s,
		"m4"_s
	}));
}

Exceptions4getDeclaredMethod::Exceptions4getDeclaredMethod() {
}

$Class* Exceptions4getDeclaredMethod::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, npe)},
		{"nsme", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, nsme)},
		{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, pass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Exceptions4getDeclaredMethod, init$, void)},
		{"m0", "()V", nullptr, 0, $virtualMethod(Exceptions4getDeclaredMethod, m0, void)},
		{"m1", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4getDeclaredMethod, m1, void)},
		{"m2", "()V", nullptr, $PRIVATE, $method(Exceptions4getDeclaredMethod, m2, void)},
		{"m4", "()V", nullptr, $PROTECTED, $virtualMethod(Exceptions4getDeclaredMethod, m4, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Exceptions4getDeclaredMethod, main, void, $StringArray*)},
		{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(Exceptions4getDeclaredMethod, test, void, $String*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Exceptions4getDeclaredMethod",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Exceptions4getDeclaredMethod, name, initialize, &classInfo$$, Exceptions4getDeclaredMethod::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4getDeclaredMethod);
	});
	return class$;
}

$Class* Exceptions4getDeclaredMethod::class$ = nullptr;