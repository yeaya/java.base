#include <Exceptions4ReflectPermission.h>

#include <java/lang/reflect/ReflectPermission.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;

$FieldInfo _Exceptions4ReflectPermission_FieldInfo_[] = {
	{"fail", "I", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4ReflectPermission, fail$)},
	{"pass", "I", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4ReflectPermission, pass$)},
	{"first", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4ReflectPermission, first)},
	{}
};

$MethodInfo _Exceptions4ReflectPermission_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Exceptions4ReflectPermission, init$, void)},
	{"fail", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $STATIC, $staticMethod(Exceptions4ReflectPermission, fail, void, $String*, $Throwable*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Exceptions4ReflectPermission, main, void, $StringArray*)},
	{"pass", "()V", nullptr, $STATIC, $staticMethod(Exceptions4ReflectPermission, pass, void)},
	{}
};

$ClassInfo _Exceptions4ReflectPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4ReflectPermission",
	"java.lang.Object",
	nullptr,
	_Exceptions4ReflectPermission_FieldInfo_,
	_Exceptions4ReflectPermission_MethodInfo_
};

$Object* allocate$Exceptions4ReflectPermission($Class* clazz) {
	return $of($alloc(Exceptions4ReflectPermission));
}

int32_t Exceptions4ReflectPermission::fail$ = 0;
int32_t Exceptions4ReflectPermission::pass$ = 0;
$Throwable* Exceptions4ReflectPermission::first = nullptr;

void Exceptions4ReflectPermission::init$() {
}

void Exceptions4ReflectPermission::pass() {
	$init(Exceptions4ReflectPermission);
	++Exceptions4ReflectPermission::pass$;
}

void Exceptions4ReflectPermission::fail($String* fs, $Throwable* ex) {
	$init(Exceptions4ReflectPermission);
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({"\'"_s, fs, "\': "_s, $($nc($of(ex))->getClass()->getName()), " thrown"_s}));
	if (Exceptions4ReflectPermission::first == nullptr) {
		$assignStatic(Exceptions4ReflectPermission::first, ex);
	}
	$nc($System::err)->println($$str({"FAILED: "_s, s}));
	++Exceptions4ReflectPermission::fail$;
}

void Exceptions4ReflectPermission::main($StringArray* args) {
	$init(Exceptions4ReflectPermission);
	$useLocalCurrentObjectStackCache();
	$var($RuntimeException, re, $new($RuntimeException, "no exception thrown"_s));
	try {
		$new($ReflectPermission, nullptr);
		fail("null"_s, re);
	} catch ($NullPointerException& x) {
		pass();
	} catch ($Exception& x) {
		fail("null"_s, x);
	}
	try {
		$new($ReflectPermission, ""_s);
		fail("\"\""_s, re);
	} catch ($IllegalArgumentException& x) {
		pass();
	} catch ($Exception& x) {
		fail("\"\""_s, x);
	}
	try {
		$new($ReflectPermission, nullptr, nullptr);
		fail("null, null"_s, re);
	} catch ($NullPointerException& x) {
		pass();
	} catch ($Exception& x) {
		fail("null, null"_s, x);
	}
	try {
		$new($ReflectPermission, ""_s, nullptr);
		fail("\"\", null"_s, re);
	} catch ($IllegalArgumentException& x) {
		pass();
	} catch ($Exception& x) {
		fail("\"\", null"_s, x);
	}
	if (Exceptions4ReflectPermission::fail$ != 0) {
		$throwNew($RuntimeException, $$str({$$str((Exceptions4ReflectPermission::fail$ + Exceptions4ReflectPermission::pass$)), " tests: "_s, $$str(Exceptions4ReflectPermission::fail$), " failure(s), first"_s}), Exceptions4ReflectPermission::first);
	} else {
		$nc($System::out)->println($$str({"all "_s, $$str((Exceptions4ReflectPermission::fail$ + Exceptions4ReflectPermission::pass$)), " tests passed"_s}));
	}
}

void clinit$Exceptions4ReflectPermission($Class* class$) {
	Exceptions4ReflectPermission::fail$ = 0;
	Exceptions4ReflectPermission::pass$ = 0;
}

Exceptions4ReflectPermission::Exceptions4ReflectPermission() {
}

$Class* Exceptions4ReflectPermission::load$($String* name, bool initialize) {
	$loadClass(Exceptions4ReflectPermission, name, initialize, &_Exceptions4ReflectPermission_ClassInfo_, clinit$Exceptions4ReflectPermission, allocate$Exceptions4ReflectPermission);
	return class$;
}

$Class* Exceptions4ReflectPermission::class$ = nullptr;