#include <UnicodeConstructor.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _UnicodeConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeConstructor::*)()>(&UnicodeConstructor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UnicodeConstructor::main))},
	{}
};

$ClassInfo _UnicodeConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UnicodeConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UnicodeConstructor_MethodInfo_
};

$Object* allocate$UnicodeConstructor($Class* clazz) {
	return $of($alloc(UnicodeConstructor));
}

void UnicodeConstructor::init$() {
}

void UnicodeConstructor::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($BigInteger, b1, $new($BigInteger, u"\uff10"_s));
		$nc($System::err)->println($(b1->toString()));
		$var($BigInteger, b2, $new($BigInteger, u"\uff11\uff10\uff11\uff10"_s));
		$nc($System::err)->println($(b2->toString()));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($RuntimeException, "BigInteger is not accepting unicode initializers."_s);
	}
}

UnicodeConstructor::UnicodeConstructor() {
}

$Class* UnicodeConstructor::load$($String* name, bool initialize) {
	$loadClass(UnicodeConstructor, name, initialize, &_UnicodeConstructor_ClassInfo_, allocate$UnicodeConstructor);
	return class$;
}

$Class* UnicodeConstructor::class$ = nullptr;