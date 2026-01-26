#include <e1/CrackM5Access.h>

#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace e1 {

$MethodInfo _CrackM5Access_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CrackM5Access, init$, void)},
	{"addReads", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CrackM5Access, addReads, void, $Module*)},
	{"packageMethod", "()V", nullptr, $STATIC, $staticMethod(CrackM5Access, packageMethod, void)},
	{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CrackM5Access, privateMethod, void)},
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