#include <comSA/SupBob.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace comSA {

$MethodInfo _SupBob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SupBob::*)()>(&SupBob::init$))},
	{}
};

$ClassInfo _SupBob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"comSA.SupBob",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SupBob_MethodInfo_
};

$Object* allocate$SupBob($Class* clazz) {
	return $of($alloc(SupBob));
}

void SupBob::init$() {
}

void clinit$SupBob($Class* class$) {
	{
		$nc($System::out)->println("comSA.SupBob loaded"_s);
	}
}

SupBob::SupBob() {
}

$Class* SupBob::load$($String* name, bool initialize) {
	$loadClass(SupBob, name, initialize, &_SupBob_ClassInfo_, clinit$SupBob, allocate$SupBob);
	return class$;
}

$Class* SupBob::class$ = nullptr;

} // comSA