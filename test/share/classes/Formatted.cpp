#include <Formatted.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Formatted_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Formatted::*)()>(&Formatted::init$))},
	{"check", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Formatted::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Formatted::main))},
	{"test1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Formatted::test1))},
	{}
};

$ClassInfo _Formatted_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Formatted",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Formatted_MethodInfo_
};

$Object* allocate$Formatted($Class* clazz) {
	return $of($alloc(Formatted));
}

void Formatted::init$() {
}

void Formatted::main($StringArray* args) {
	test1();
}

void Formatted::test1() {
	$var($String, var$0, "formatted(Object... args)"_s);
	$var($String, var$1, "Test this %s"_s->formatted($$new($ObjectArray, {$of("and that"_s)})));
	check(var$0, var$1, $($String::format("Test this %s"_s, $$new($ObjectArray, {$of("and that"_s)}))));
}

void Formatted::check($String* test, $String* output, $String* expected) {
	if (output != expected && (output == nullptr || !$nc(output)->equals(expected))) {
		$init($System);
		$nc($System::err)->println($$str({"Testing "_s, test, ": unexpected result"_s}));
		$nc($System::err)->println($$str({"Output: "_s, output}));
		$nc($System::err)->println($$str({"Expected: "_s, expected}));
		$throwNew($RuntimeException);
	}
}

Formatted::Formatted() {
}

$Class* Formatted::load$($String* name, bool initialize) {
	$loadClass(Formatted, name, initialize, &_Formatted_ClassInfo_, allocate$Formatted);
	return class$;
}

$Class* Formatted::class$ = nullptr;