#include <ImplicitStringConcat$MyClassNull.h>

#include <ImplicitStringConcat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ImplicitStringConcat$MyClassNull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ImplicitStringConcat$MyClassNull, init$, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImplicitStringConcat$MyClassNull, toString, $String*)},
	{}
};

$InnerClassInfo _ImplicitStringConcat$MyClassNull_InnerClassesInfo_[] = {
	{"ImplicitStringConcat$MyClassNull", "ImplicitStringConcat", "MyClassNull", $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcat$MyClassNull_ClassInfo_ = {
	$ACC_SUPER,
	"ImplicitStringConcat$MyClassNull",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ImplicitStringConcat$MyClassNull_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcat$MyClassNull_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ImplicitStringConcat"
};

$Object* allocate$ImplicitStringConcat$MyClassNull($Class* clazz) {
	return $of($alloc(ImplicitStringConcat$MyClassNull));
}

void ImplicitStringConcat$MyClassNull::init$() {
}

$String* ImplicitStringConcat$MyClassNull::toString() {
	return nullptr;
}

ImplicitStringConcat$MyClassNull::ImplicitStringConcat$MyClassNull() {
}

$Class* ImplicitStringConcat$MyClassNull::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcat$MyClassNull, name, initialize, &_ImplicitStringConcat$MyClassNull_ClassInfo_, allocate$ImplicitStringConcat$MyClassNull);
	return class$;
}

$Class* ImplicitStringConcat$MyClassNull::class$ = nullptr;