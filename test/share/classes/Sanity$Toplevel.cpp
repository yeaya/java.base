#include <Sanity$Toplevel.h>

#include <Sanity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Sanity$Toplevel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Sanity$Toplevel, init$, void)},
	{}
};

$InnerClassInfo _Sanity$Toplevel_InnerClassesInfo_[] = {
	{"Sanity$Toplevel", "Sanity", "Toplevel", $STATIC},
	{}
};

$ClassInfo _Sanity$Toplevel_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$Toplevel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Sanity$Toplevel_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Toplevel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Toplevel($Class* clazz) {
	return $of($alloc(Sanity$Toplevel));
}

void Sanity$Toplevel::init$() {
}

Sanity$Toplevel::Sanity$Toplevel() {
}

$Class* Sanity$Toplevel::load$($String* name, bool initialize) {
	$loadClass(Sanity$Toplevel, name, initialize, &_Sanity$Toplevel_ClassInfo_, allocate$Sanity$Toplevel);
	return class$;
}

$Class* Sanity$Toplevel::class$ = nullptr;