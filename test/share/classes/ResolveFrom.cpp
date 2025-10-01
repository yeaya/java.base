#include <ResolveFrom.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _ResolveFrom_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResolveFrom::*)()>(&ResolveFrom::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ResolveFrom::main)), "java.lang.Exception"},
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
	$load(ResolveFrom);
	int32_t m = ResolveFrom::class$->getModifiers();
	$init($System);
	$nc($System::out)->println($$str({"ResolveFrom has modifiers = "_s, $($Modifier::toString(m))}));
}

ResolveFrom::ResolveFrom() {
}

$Class* ResolveFrom::load$($String* name, bool initialize) {
	$loadClass(ResolveFrom, name, initialize, &_ResolveFrom_ClassInfo_, allocate$ResolveFrom);
	return class$;
}

$Class* ResolveFrom::class$ = nullptr;