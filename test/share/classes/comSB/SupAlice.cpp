#include <comSB/SupAlice.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace comSB {

$MethodInfo _SupAlice_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SupAlice::*)()>(&SupAlice::init$))},
	{}
};

$ClassInfo _SupAlice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"comSB.SupAlice",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SupAlice_MethodInfo_
};

$Object* allocate$SupAlice($Class* clazz) {
	return $of($alloc(SupAlice));
}

void SupAlice::init$() {
}

void clinit$SupAlice($Class* class$) {
	{
		$nc($System::out)->println("comSB.SupAlice loaded"_s);
	}
}

SupAlice::SupAlice() {
}

$Class* SupAlice::load$($String* name, bool initialize) {
	$loadClass(SupAlice, name, initialize, &_SupAlice_ClassInfo_, clinit$SupAlice, allocate$SupAlice);
	return class$;
}

$Class* SupAlice::class$ = nullptr;

} // comSB