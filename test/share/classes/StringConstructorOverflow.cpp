#include <StringConstructorOverflow.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringConstructorOverflow::*)()>(&StringConstructorOverflow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringConstructorOverflow::main))},
	{"makeLongHexString", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&StringConstructorOverflow::makeLongHexString))},
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
	try {
		$var($BigInteger, bi, $new($BigInteger, $(makeLongHexString()), 16));
		$init($BigInteger);
		if (bi->compareTo($BigInteger::ONE) <= 0) {
			$throwNew($RuntimeException, $$str({"Incorrect result "_s, $(bi->toString())}));
		}
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, e, $catch());
		$init($System);
		$nc($System::out)->println("Overflow is reported by ArithmeticException, as expected"_s);
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, e, $catch());
		$init($System);
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