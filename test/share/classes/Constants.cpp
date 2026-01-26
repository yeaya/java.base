#include <Constants.h>

#include <jcpp.h>

#undef MAX_EXPONENT
#undef MAX_VALUE
#undef MIN_EXPONENT
#undef MIN_NORMAL
#undef MIN_VALUE
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Constants, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Constants, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Constants",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Constants_MethodInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

void Constants::init$() {
}

void Constants::main($StringArray* args) {
	int32_t i = 0;
	do {
	$init($Float);
		if (i == $cast(int32_t, $Float::NaN)) {
			goto case$0;
		}
		if (i == $cast(int32_t, $Float::MIN_VALUE) + 1) {
			goto case$1;
		}
		if (i == $cast(int32_t, $Float::MIN_NORMAL) + 2) {
			goto case$2;
		}
		if (i == $Float::MIN_EXPONENT) {
			goto case$3;
		}
		if (i == $Float::MAX_EXPONENT) {
			goto case$4;
		}
		if (i == $cast(int32_t, $Float::MAX_VALUE) - 1) {
			goto case$5;
		}
		if (i == $cast(int32_t, $Float::POSITIVE_INFINITY)) {
			goto case$6;
		}
		if (i == $cast(int32_t, $Float::NEGATIVE_INFINITY)) {
			goto case$7;
		}
		break;
case$0:
		// (int)Float.NaN
		{
			$nc($System::out)->println("Float.NaN is a constant!"_s);
			break;
		}
case$1:
		// (int)Float.MIN_VALUE + 1
		{
			$nc($System::out)->println("Float.MIN_VALUE is a constant!"_s);
			break;
		}
case$2:
		// (int)Float.MIN_NORMAL + 2
		{
			$nc($System::out)->println("Float.MIN_NORMAL is a constant!"_s);
			break;
		}
case$3:
		// Float.MIN_EXPONENT
		{
			$nc($System::out)->println("Float.MIN_EXPONENT is a constant!"_s);
			break;
		}
case$4:
		// Float.MAX_EXPONENT
		{
			$nc($System::out)->println("Float.MAX_EXPONENT is a constant!"_s);
			break;
		}
case$5:
		// (int)Float.MAX_VALUE - 1
		{
			$nc($System::out)->println("Float.MAX_VALUE is a constant!"_s);
			break;
		}
case$6:
		// (int)Float.POSITIVE_INFINITY
		{
			$nc($System::out)->println("Float.POSITIVE_INFINITY is a constant!"_s);
			break;
		}
case$7:
		// (int)Float.NEGATIVE_INFINITY
		{
			$nc($System::out)->println("Float.NEGATIVE_INFINITY is a constant!"_s);
			break;
		}
	} while (false);
}

Constants::Constants() {
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;