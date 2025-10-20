#include <Test8009222.h>

#include <Intf.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef TYPE

using $Intf = ::Intf;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Objects = ::java::util::Objects;

$MethodInfo _Test8009222_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8009222::*)()>(&Test8009222::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8009222::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Test8009222_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8009222",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test8009222_MethodInfo_
};

$Object* allocate$Test8009222($Class* clazz) {
	return $of($alloc(Test8009222));
}

void Test8009222::init$() {
}

void Test8009222::main($StringArray* args) {
	$load(Test8009222);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Intf);
	$init($Integer);
	$Objects::requireNonNull($($nc($($MethodHandles::lookup()))->findStaticGetter($Intf::class$, "i"_s, $Integer::TYPE)));
	$init($System);
	$nc($System::out)->println("TEST PASSED"_s);
}

Test8009222::Test8009222() {
}

$Class* Test8009222::load$($String* name, bool initialize) {
	$loadClass(Test8009222, name, initialize, &_Test8009222_ClassInfo_, allocate$Test8009222);
	return class$;
}

$Class* Test8009222::class$ = nullptr;