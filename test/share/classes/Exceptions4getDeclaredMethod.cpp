#include <Exceptions4getDeclaredMethod.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _Exceptions4getDeclaredMethod_FieldInfo_[] = {
	{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, npe)},
	{"nsme", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, nsme)},
	{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredMethod, pass)},
	{}
};

$MethodInfo _Exceptions4getDeclaredMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exceptions4getDeclaredMethod::*)()>(&Exceptions4getDeclaredMethod::init$))},
	{"m0", "()V", nullptr, 0},
	{"m1", "()V", nullptr, $PUBLIC},
	{"m2", "()V", nullptr, $PRIVATE, $method(static_cast<void(Exceptions4getDeclaredMethod::*)()>(&Exceptions4getDeclaredMethod::m2))},
	{"m4", "()V", nullptr, $PROTECTED},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Exceptions4getDeclaredMethod::main))},
	{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(static_cast<void(Exceptions4getDeclaredMethod::*)($String*,$Class*)>(&Exceptions4getDeclaredMethod::test))},
	{}
};

$ClassInfo _Exceptions4getDeclaredMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4getDeclaredMethod",
	"java.lang.Object",
	nullptr,
	_Exceptions4getDeclaredMethod_FieldInfo_,
	_Exceptions4getDeclaredMethod_MethodInfo_
};

$Object* allocate$Exceptions4getDeclaredMethod($Class* clazz) {
	return $of($alloc(Exceptions4getDeclaredMethod));
}

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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getDeclaredMethod(s, $$new($ClassArray, 0));
	} catch ($Throwable&) {
		$var($Throwable, x, $catch());
		if ($nc(ex)->isAssignableFrom($of(x)->getClass())) {
			$assign(t, x);
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		$throwNew($RuntimeException, $$str({"expected "_s, $(ex->getName()), " for "_s, s}));
	} else {
		$init($System);
		$nc($System::out)->println($$str({s, " OK"_s}));
	}
}

void Exceptions4getDeclaredMethod::main($StringArray* args) {
	$init(Exceptions4getDeclaredMethod);
	$var(Exceptions4getDeclaredMethod, e, $new(Exceptions4getDeclaredMethod));
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredMethod::npe)->length; ++i) {
		$load($NullPointerException);
		e->test($nc(Exceptions4getDeclaredMethod::npe)->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredMethod::nsme)->length; ++i) {
		$load($NoSuchMethodException);
		e->test($nc(Exceptions4getDeclaredMethod::nsme)->get(i), $NoSuchMethodException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredMethod::pass)->length; ++i) {
		e->test($nc(Exceptions4getDeclaredMethod::pass)->get(i), nullptr);
	}
}

void clinit$Exceptions4getDeclaredMethod($Class* class$) {
	$assignStatic(Exceptions4getDeclaredMethod::npe, $new($StringArray, {($String*)nullptr}));
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
	$loadClass(Exceptions4getDeclaredMethod, name, initialize, &_Exceptions4getDeclaredMethod_ClassInfo_, clinit$Exceptions4getDeclaredMethod, allocate$Exceptions4getDeclaredMethod);
	return class$;
}

$Class* Exceptions4getDeclaredMethod::class$ = nullptr;