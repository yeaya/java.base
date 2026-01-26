#include <ResolveFrom.h>

#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _ResolveFrom_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ResolveFrom, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolveFrom, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ResolveFrom_InnerClassesInfo_[] = {
	{"ResolveFrom$Inner", "ResolveFrom", "Inner", $PRIVATE},
	{}
};

$ClassInfo _ResolveFrom_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ResolveFrom",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ResolveFrom_MethodInfo_,
	nullptr,
	nullptr,
	_ResolveFrom_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ResolveFrom$Inner"
};

$Object* allocate$ResolveFrom($Class* clazz) {
	return $of($alloc(ResolveFrom));
}

void ResolveFrom::init$() {
}

void ResolveFrom::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$load(ResolveFrom);
	int32_t m = ResolveFrom::class$->getModifiers();
	$nc($System::out)->println($$str({"ResolveFrom has modifiers = "_s, $($Modifier::toString(m))}));
}

ResolveFrom::ResolveFrom() {
}

$Class* ResolveFrom::load$($String* name, bool initialize) {
	$loadClass(ResolveFrom, name, initialize, &_ResolveFrom_ClassInfo_, allocate$ResolveFrom);
	return class$;
}

$Class* ResolveFrom::class$ = nullptr;