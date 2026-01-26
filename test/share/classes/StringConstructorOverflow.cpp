#include <StringConstructorOverflow.h>

#include <java/lang/OutOfMemoryError.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef ONE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _StringConstructorOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringConstructorOverflow, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringConstructorOverflow, main, void, $StringArray*)},
	{"makeLongHexString", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringConstructorOverflow, makeLongHexString, $String*)},
	{}
};

$ClassInfo _StringConstructorOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringConstructorOverflow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringConstructorOverflow_MethodInfo_
};

$Object* allocate$StringConstructorOverflow($Class* clazz) {
	return $of($alloc(StringConstructorOverflow));
}

void StringConstructorOverflow::init$() {
}

$String* StringConstructorOverflow::makeLongHexString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'1');
	for (int32_t i = 0; i < (1 << 30) - 1; ++i) {
		sb->append(u'0');
	}
	sb->append(u'1');
	return sb->toString();
}

void StringConstructorOverflow::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($BigInteger, bi, $new($BigInteger, $(makeLongHexString()), 16));
		$init($BigInteger);
		if (bi->compareTo($BigInteger::ONE) <= 0) {
			$throwNew($RuntimeException, $$str({"Incorrect result "_s, $(bi->toString())}));
		}
	} catch ($ArithmeticException& e) {
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError& e) {
		$nc($System::err)->println("StringConstructorOverflow skipped: OutOfMemoryError"_s);
		$nc($System::err)->println("Run jtreg with -javaoption:-Xmx8g"_s);
	}
}

StringConstructorOverflow::StringConstructorOverflow() {
}

$Class* StringConstructorOverflow::load$($String* name, bool initialize) {
	$loadClass(StringConstructorOverflow, name, initialize, &_StringConstructorOverflow_ClassInfo_, allocate$StringConstructorOverflow);
	return class$;
}

$Class* StringConstructorOverflow::class$ = nullptr;