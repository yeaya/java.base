#include <IHashCode.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _IHashCode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IHashCode::*)()>(&IHashCode::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IHashCode::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _IHashCode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IHashCode",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IHashCode_MethodInfo_
};

$Object* allocate$IHashCode($Class* clazz) {
	return $of($alloc(IHashCode));
}

void IHashCode::init$() {
}

void IHashCode::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	int32_t test = $System::identityHashCode(nullptr);
	if (test != 0) {
		$throwNew($RuntimeException, $$str({"identityHashCode(null) is "_s, $$str(test)}));
	}
}

IHashCode::IHashCode() {
}

$Class* IHashCode::load$($String* name, bool initialize) {
	$loadClass(IHashCode, name, initialize, &_IHashCode_ClassInfo_, allocate$IHashCode);
	return class$;
}

$Class* IHashCode::class$ = nullptr;