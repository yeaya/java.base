#include <java/lang/Float2/Extrema.h>

#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_NORMAL
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace Float2 {

$MethodInfo _Extrema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Extrema::*)()>(&Extrema::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Extrema::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Extrema_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Float2.Extrema",
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
	$init($Float);
	if ($Float::MIN_VALUE != $Float::intBitsToFloat(1)) {
		$throwNew($RuntimeException, "Float.MIN_VALUE is not equal to intBitsToFloat(0x1)."_s);
	}
	if ($Float::MIN_NORMAL != $Float::intBitsToFloat(0x00800000)) {
		$throwNew($RuntimeException, "Float.MIN_NORMAL is not equal to intBitsToFloat(0x00800000)."_s);
	}
	if ($Float::MAX_VALUE != $Float::intBitsToFloat(0x7F7FFFFF)) {
		$throwNew($RuntimeException, "Float.MAX_VALUE is not equal to intBitsToFloat(0x7f7fffff)."_s);
	}
}

Extrema::Extrema() {
}

$Class* Extrema::load$($String* name, bool initialize) {
	$loadClass(Extrema, name, initialize, &_Extrema_ClassInfo_, allocate$Extrema);
	return class$;
}

$Class* Extrema::class$ = nullptr;

		} // Float2
	} // lang
} // java