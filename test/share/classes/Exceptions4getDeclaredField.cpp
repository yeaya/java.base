#include <Exceptions4getDeclaredField.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _Exceptions4getDeclaredField_FieldInfo_[] = {
	{"f0", "I", nullptr, 0, $field(Exceptions4getDeclaredField, f0)},
	{"f1", "I", nullptr, $PUBLIC, $field(Exceptions4getDeclaredField, f1)},
	{"f2", "I", nullptr, $PRIVATE, $field(Exceptions4getDeclaredField, f2)},
	{"f4", "I", nullptr, $PROTECTED, $field(Exceptions4getDeclaredField, f4)},
	{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, npe)},
	{"nsfe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, nsfe)},
	{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getDeclaredField, pass)},
	{}
};

$MethodInfo _Exceptions4getDeclaredField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exceptions4getDeclaredField::*)()>(&Exceptions4getDeclaredField::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Exceptions4getDeclaredField::main))},
	{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(static_cast<void(Exceptions4getDeclaredField::*)($String*,$Class*)>(&Exceptions4getDeclaredField::test))},
	{}
};

$ClassInfo _Exceptions4getDeclaredField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4getDeclaredField",
	"java.lang.Object",
	nullptr,
	_Exceptions4getDeclaredField_FieldInfo_,
	_Exceptions4getDeclaredField_MethodInfo_
};

$Object* allocate$Exceptions4getDeclaredField($Class* clazz) {
	return $of($alloc(Exceptions4getDeclaredField));
}

$StringArray* Exceptions4getDeclaredField::npe = nullptr;
$StringArray* Exceptions4getDeclaredField::nsfe = nullptr;
$StringArray* Exceptions4getDeclaredField::pass = nullptr;

void Exceptions4getDeclaredField::init$() {
}

void Exceptions4getDeclaredField::test($String* s, $Class* ex) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getDeclaredField(s);
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

void Exceptions4getDeclaredField::main($StringArray* args) {
	$init(Exceptions4getDeclaredField);
	$var(Exceptions4getDeclaredField, e, $new(Exceptions4getDeclaredField));
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredField::npe)->length; ++i) {
		$load($NullPointerException);
		e->test($nc(Exceptions4getDeclaredField::npe)->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredField::nsfe)->length; ++i) {
		$load($NoSuchFieldException);
		e->test($nc(Exceptions4getDeclaredField::nsfe)->get(i), $NoSuchFieldException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getDeclaredField::pass)->length; ++i) {
		e->test($nc(Exceptions4getDeclaredField::pass)->get(i), nullptr);
	}
}

void clinit$Exceptions4getDeclaredField($Class* class$) {
	$assignStatic(Exceptions4getDeclaredField::npe, $new($StringArray, {($String*)nullptr}));
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
	$loadClass(Exceptions4getDeclaredField, name, initialize, &_Exceptions4getDeclaredField_ClassInfo_, clinit$Exceptions4getDeclaredField, allocate$Exceptions4getDeclaredField);
	return class$;
}

$Class* Exceptions4getDeclaredField::class$ = nullptr;