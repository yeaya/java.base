#include <MyInt.h>

#include <jcpp.h>

using $Int = ::Int;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MyInt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MyInt::*)()>(&MyInt::init$))},
	{"main", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MyInt_ClassInfo_ = {
	$ACC_SUPER,
	"MyInt",
	"java.lang.Object",
	"Int",
	nullptr,
	_MyInt_MethodInfo_
};

$Object* allocate$MyInt($Class* clazz) {
	return $of($alloc(MyInt));
}

void MyInt::init$() {
}

void MyInt::main() {
	$nc($System::out)->println("Hello, world!"_s);
}

MyInt::MyInt() {
}

$Class* MyInt::load$($String* name, bool initialize) {
	$loadClass(MyInt, name, initialize, &_MyInt_ClassInfo_, allocate$MyInt);
	return class$;
}

$Class* MyInt::class$ = nullptr;