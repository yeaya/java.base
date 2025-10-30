#include <MethodSupplier.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MethodSupplier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodSupplier::*)()>(&MethodSupplier::init$))},
	{"m", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodSupplier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MethodSupplier",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MethodSupplier_MethodInfo_
};

$Object* allocate$MethodSupplier($Class* clazz) {
	return $of($alloc(MethodSupplier));
}

void MethodSupplier::init$() {
}

void MethodSupplier::m() {
	$nc($System::out)->println("good"_s);
}

MethodSupplier::MethodSupplier() {
}

$Class* MethodSupplier::load$($String* name, bool initialize) {
	$loadClass(MethodSupplier, name, initialize, &_MethodSupplier_ClassInfo_, allocate$MethodSupplier);
	return class$;
}

$Class* MethodSupplier::class$ = nullptr;