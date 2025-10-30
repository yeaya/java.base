#include <Exceptions4getField.h>

#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _Exceptions4getField_FieldInfo_[] = {
	{"ok", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4getField, ok)},
	{"f0", "I", nullptr, 0, $field(Exceptions4getField, f0)},
	{"f1", "I", nullptr, $PUBLIC, $field(Exceptions4getField, f1)},
	{"f2", "I", nullptr, $PRIVATE, $field(Exceptions4getField, f2)},
	{"f4", "I", nullptr, $PROTECTED, $field(Exceptions4getField, f4)},
	{"npe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getField, npe)},
	{"nsfe", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getField, nsfe)},
	{"pass", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Exceptions4getField, pass)},
	{}
};

$MethodInfo _Exceptions4getField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exceptions4getField::*)()>(&Exceptions4getField::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Exceptions4getField::main))},
	{"test", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PRIVATE, $method(static_cast<void(Exceptions4getField::*)($String*,$Class*)>(&Exceptions4getField::test))},
	{}
};

$ClassInfo _Exceptions4getField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4getField",
	"java.lang.Object",
	nullptr,
	_Exceptions4getField_FieldInfo_,
	_Exceptions4getField_MethodInfo_
};

$Object* allocate$Exceptions4getField($Class* clazz) {
	return $of($alloc(Exceptions4getField));
}

bool Exceptions4getField::ok = false;
$StringArray* Exceptions4getField::npe = nullptr;
$StringArray* Exceptions4getField::nsfe = nullptr;
$StringArray* Exceptions4getField::pass = nullptr;

void Exceptions4getField::init$() {
}

void Exceptions4getField::test($String* s, $Class* ex) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Throwable, t, nullptr);
	try {
		$of(this)->getClass()->getField(s);
	} catch ($Throwable& x) {
		if ($nc(ex)->isAssignableFrom($of(x)->getClass())) {
			$assign(t, x);
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		Exceptions4getField::ok = false;
		$nc($System::out)->println($$str({"expected "_s, $(ex->getName()), " for "_s, s, " -- FAILED"_s}));
	} else {
		$nc($System::out)->println($$str({s, " -- OK"_s}));
	}
}

void Exceptions4getField::main($StringArray* args) {
	$init(Exceptions4getField);
	$var(Exceptions4getField, e, $new(Exceptions4getField));
	for (int32_t i = 0; i < $nc(Exceptions4getField::npe)->length; ++i) {
		$load($NullPointerException);
		e->test($nc(Exceptions4getField::npe)->get(i), $NullPointerException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getField::nsfe)->length; ++i) {
		$load($NoSuchFieldException);
		e->test($nc(Exceptions4getField::nsfe)->get(i), $NoSuchFieldException::class$);
	}
	for (int32_t i = 0; i < $nc(Exceptions4getField::pass)->length; ++i) {
		e->test($nc(Exceptions4getField::pass)->get(i), nullptr);
	}
	if (!Exceptions4getField::ok) {
		$throwNew($RuntimeException, "some tests failed"_s);
	}
}

void clinit$Exceptions4getField($Class* class$) {
	Exceptions4getField::ok = true;
	$assignStatic(Exceptions4getField::npe, $new($StringArray, {($String*)nullptr}));
	$assignStatic(Exceptions4getField::nsfe, $new($StringArray, {
		"f0"_s,
		"f2"_s,
		"f4"_s,
		"f6"_s
	}));
	$assignStatic(Exceptions4getField::pass, $new($StringArray, {"f1"_s}));
}

Exceptions4getField::Exceptions4getField() {
}

$Class* Exceptions4getField::load$($String* name, bool initialize) {
	$loadClass(Exceptions4getField, name, initialize, &_Exceptions4getField_ClassInfo_, clinit$Exceptions4getField, allocate$Exceptions4getField);
	return class$;
}

$Class* Exceptions4getField::class$ = nullptr;