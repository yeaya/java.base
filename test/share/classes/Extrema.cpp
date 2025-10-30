#include <Extrema.h>

#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_NORMAL
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Extrema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Extrema::*)()>(&Extrema::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Extrema::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Extrema_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Extrema",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Extrema_MethodInfo_
};

$Object* allocate$Extrema($Class* clazz) {
	return $of($alloc(Extrema));
}

void Extrema::init$() {
}

void Extrema::main($StringArray* args) {
	$init($Double);
	if ($Double::MIN_VALUE != $Double::longBitsToDouble(1)) {
		$throwNew($RuntimeException, "Double.MIN_VALUE is not equal to longBitsToDouble(0x1L)."_s);
	}
	if ($Double::MIN_NORMAL != $Double::longBitsToDouble(0x0010000000000000)) {
		$throwNew($RuntimeException, "Double.MIN_NORMAL is not equal to longBitsToDouble(0x0010000000000000L)."_s);
	}
	if ($Double::MAX_VALUE != $Double::longBitsToDouble(0x7FEFFFFFFFFFFFFF)) {
		$throwNew($RuntimeException, "Double.MAX_VALUE is not equal to longBitsToDouble(0x7fefffffffffffffL)."_s);
	}
}

Extrema::Extrema() {
}

$Class* Extrema::load$($String* name, bool initialize) {
	$loadClass(Extrema, name, initialize, &_Extrema_ClassInfo_, allocate$Extrema);
	return class$;
}

$Class* Extrema::class$ = nullptr;