#include <Exceptions4getDeclaredField.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$StringArray* Exceptions4getDeclaredField::npe = nullptr;
$StringArray* Exceptions4getDeclaredField::nsfe = nullptr;
$StringArray* Exceptions4getDeclaredField::pass = nullptr;

void Exceptions4getDeclaredField::init$() {
}

void Exceptions4getDeclaredField::test($String* s, $Class* ex) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getDeclaredField(s);
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

void Exceptions4getDeclaredField::main($StringArray* args) {
	$init(Exceptions4getDeclaredField);
	$var(Exceptions4getDeclaredField, e, $new(Exceptions4getDeclaredField));
	for (int32_t i = 0; i < Exceptions4getDeclaredField::npe->length; ++i) {
		e->test(Exceptions4getDeclaredField::npe->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < Exceptions4getDeclaredField::nsfe->length; ++i) {
		$load($NoSuchFieldException);
		e->test(Exceptions4getDeclaredField::nsfe->get(i), $NoSuchFieldException::class$);
	}
	for (int32_t i = 0; i < Exceptions4getDeclaredField::pass->length; ++i) {
		e->test(Exceptions4getDeclaredField::pass->get(i), nullptr);
	}
}

void Exceptions4getDeclaredField::clinit$($Class* clazz) {
	$assignStatic(Exceptions4getDeclaredField::npe, $new($StringArray, {nullptr}));
	$assignStatic(Exceptions4getDeclaredField::nsfe, $new($StringArray, {"f6"_s}));
	$assignStatic(Exceptions4getDeclaredField::pass, $new($StringArray, {
		"f0"_s,
		"f1"_s,
		"f2"_s,
		"f4"_s
	}));
}

Exceptions4getDeclaredField::Exceptions4getDeclaredField() {
}

$Class* Exceptions4getDeclaredField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f0", "I", nullptr, 0, $field(Exceptions4getDeclaredField, f0)},
		{"f1", "I", nullptr, $PUBLIC, $field(Exceptions4getDeclaredField, f1)},
		{"f2", "I", nullptr, $PRIVATE, $field(Exceptions4getDeclaredField, f2)},
		{"f4", "I", nullptr, $PROTECTED, $field(Exceptions4getDeclaredField, f4)},
		{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, npe)},
		{"nsfe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, nsfe)},
		{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, pass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Exceptions4getDeclaredField, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Exceptions4getDeclaredField, main, void, $StringArray*)},
		{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(Exceptions4getDeclaredField, test, void, $String*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Exceptions4getDeclaredField",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Exceptions4getDeclaredField, name, initialize, &classInfo$$, Exceptions4getDeclaredField::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4getDeclaredField);
	});
	return class$;
}

$Class* Exceptions4getDeclaredField::class$ = nullptr;