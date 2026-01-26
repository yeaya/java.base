#include <q/I.h>

#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef I

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace q {

$MethodInfo _I_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(I, init$, void)},
	{"filename", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(I, filename, $String*, $Path*)},
	{}
};

$ClassInfo _I_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"q.I",
	"java.lang.Object",
	nullptr,
	nullptr,
	_I_MethodInfo_
};

$Object* allocate$I($Class* clazz) {
	return $of($alloc(I));
}

void I::init$() {
}

$String* I::filename($Path* file) {
	return $nc(file)->toString();
}

I::I() {
}

$Class* I::load$($String* name, bool initialize) {
	$loadClass(I, name, initialize, &_I_ClassInfo_, allocate$I);
	return class$;
}

$Class* I::class$ = nullptr;

} // q