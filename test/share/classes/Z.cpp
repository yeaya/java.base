#include <Z.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef Z

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Z_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Z::*)()>(&Z::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Z::main))},
	{}
};

$ClassInfo _Z_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Z",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Z_MethodInfo_
};

$Object* allocate$Z($Class* clazz) {
	return $of($alloc(Z));
}

void Z::init$() {
}

void Z::main($StringArray* argv) {
	$init($System);
	$nc($System::out)->println("Hello world."_s);
}

Z::Z() {
}

$Class* Z::load$($String* name, bool initialize) {
	$loadClass(Z, name, initialize, &_Z_ClassInfo_, allocate$Z);
	return class$;
}

$Class* Z::class$ = nullptr;