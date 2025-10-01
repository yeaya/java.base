#include <Equals2.h>

#include <Equals2A.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Equals2A = ::Equals2A;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _Equals2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Equals2::*)()>(&Equals2::init$))},
	{"m", "()LEquals2;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Equals2::main))},
	{"returnType", "()V", nullptr, $PRIVATE, $method(static_cast<void(Equals2::*)()>(&Equals2::returnType))},
	{}
};

$ClassInfo _Equals2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Equals2",
	"Equals2A",
	nullptr,
	nullptr,
	_Equals2_MethodInfo_
};

$Object* allocate$Equals2($Class* clazz) {
	return $of($alloc(Equals2));
}

void Equals2::init$() {
	$Equals2A::init$();
}

Equals2* Equals2::m() {
	return this;
}

void Equals2::main($StringArray* args) {
	$init(Equals2);
	$var(Equals2, e, $new(Equals2));
	e->returnType();
}

void Equals2::returnType() {
	$beforeCallerSensitive();
	$Class* c = $of(this)->getClass();
	$var($MethodArray, ma, $nc(c)->getMethods());
	$var($Method, m0, nullptr);
	$var($Method, m1, nullptr);
	for (int32_t i = 0; i < $nc(ma)->length; ++i) {
		if ($nc($($nc(ma->get(i))->getName()))->equals("m"_s)) {
			if (m0 == nullptr) {
				$assign(m0, ma->get(i));
				continue;
			} else {
				$assign(m1, ma->get(i));
				break;
			}
		}
	}
	if (m0 == nullptr || m1 == nullptr) {
		$throwNew($RuntimeException, "Can\'t find bridge methods"_s);
	}
	if ($nc(m0)->equals(m1)) {
		$throwNew($RuntimeException, "Return types not compared"_s);
	}
	$init($System);
	$nc($System::out)->println($$str({"\""_s, m0, "\" and \""_s, m1, "\" are different"_s}));
}

Equals2::Equals2() {
}

$Class* Equals2::load$($String* name, bool initialize) {
	$loadClass(Equals2, name, initialize, &_Equals2_ClassInfo_, allocate$Equals2);
	return class$;
}

$Class* Equals2::class$ = nullptr;