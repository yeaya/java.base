#include <NullInParamList.h>

#include <A.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $A = ::A;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _NullInParamList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullInParamList::*)()>(&NullInParamList::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullInParamList::main))},
	{}
};

$ClassInfo _NullInParamList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullInParamList",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullInParamList_MethodInfo_
};

$Object* allocate$NullInParamList($Class* clazz) {
	return $of($alloc(NullInParamList));
}

void NullInParamList::init$() {
}

void NullInParamList::main($StringArray* args) {
	$load(NullInParamList);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ClassArray, ca, $new($ClassArray, {($Class*)nullptr}));
		$load($A);
		$var($Method, m, $A::class$->getMethod("m"_s, ca));
	} catch ($NoSuchMethodException& x) {
		return;
	}
	$throwNew($RuntimeException, "FAIL: expected NoSuchMethodException"_s);
}

NullInParamList::NullInParamList() {
}

$Class* NullInParamList::load$($String* name, bool initialize) {
	$loadClass(NullInParamList, name, initialize, &_NullInParamList_ClassInfo_, allocate$NullInParamList);
	return class$;
}

$Class* NullInParamList::class$ = nullptr;