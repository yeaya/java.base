#include <Transfers$Failure.h>

#include <Transfers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Transfers$Failure_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(static_cast<void(Transfers$Failure::*)($Exception*)>(&Transfers$Failure::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Transfers$Failure::*)($String*)>(&Transfers$Failure::init$))},
	{}
};

$InnerClassInfo _Transfers$Failure_InnerClassesInfo_[] = {
	{"Transfers$Failure", "Transfers", "Failure", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Transfers$Failure_ClassInfo_ = {
	$ACC_SUPER,
	"Transfers$Failure",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_Transfers$Failure_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers$Failure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Transfers"
};

$Object* allocate$Transfers$Failure($Class* clazz) {
	return $of($alloc(Transfers$Failure));
}

void Transfers$Failure::init$($Exception* x) {
	$RuntimeException::init$(static_cast<$Throwable*>(x));
}

void Transfers$Failure::init$($String* s) {
	$RuntimeException::init$(s);
}

Transfers$Failure::Transfers$Failure() {
}

Transfers$Failure::Transfers$Failure(const Transfers$Failure& e) : $RuntimeException(e) {
}

void Transfers$Failure::throw$() {
	throw *this;
}

$Class* Transfers$Failure::load$($String* name, bool initialize) {
	$loadClass(Transfers$Failure, name, initialize, &_Transfers$Failure_ClassInfo_, allocate$Transfers$Failure);
	return class$;
}

$Class* Transfers$Failure::class$ = nullptr;