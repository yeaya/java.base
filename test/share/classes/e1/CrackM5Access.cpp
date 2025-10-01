#include <e1/CrackM5Access.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace e1 {

$MethodInfo _CrackM5Access_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CrackM5Access::*)()>(&CrackM5Access::init$))},
	{"addReads", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Module*)>(&CrackM5Access::addReads))},
	{"packageMethod", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&CrackM5Access::packageMethod))},
	{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CrackM5Access::privateMethod))},
	{}
};

$ClassInfo _CrackM5Access_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"e1.CrackM5Access",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CrackM5Access_MethodInfo_
};

$Object* allocate$CrackM5Access($Class* clazz) {
	return $of($alloc(CrackM5Access));
}

void CrackM5Access::init$() {
}

void CrackM5Access::privateMethod() {
}

void CrackM5Access::packageMethod() {
}

void CrackM5Access::addReads($Module* m) {
	$load(CrackM5Access);
	$beforeCallerSensitive();
	$nc($(CrackM5Access::class$->getModule()))->addReads(m);
}

CrackM5Access::CrackM5Access() {
}

$Class* CrackM5Access::load$($String* name, bool initialize) {
	$loadClass(CrackM5Access, name, initialize, &_CrackM5Access_ClassInfo_, allocate$CrackM5Access);
	return class$;
}

$Class* CrackM5Access::class$ = nullptr;

} // e1