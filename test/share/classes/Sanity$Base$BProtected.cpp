#include <Sanity$Base$BProtected.h>

#include <Sanity$Base.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Base$BProtected_FieldInfo_[] = {
	{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BProtected, this$1)},
	{}
};

$MethodInfo _Sanity$Base$BProtected_MethodInfo_[] = {
	{"<init>", "(LSanity$Base;)V", nullptr, $PROTECTED, $method(Sanity$Base$BProtected, init$, void, $Sanity$Base*)},
	{}
};

$InnerClassInfo _Sanity$Base$BProtected_InnerClassesInfo_[] = {
	{"Sanity$Base", "Sanity", "Base", $PUBLIC},
	{"Sanity$Base$BProtected", "Sanity$Base", "BProtected", $PROTECTED},
	{}
};

$ClassInfo _Sanity$Base$BProtected_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Base$BProtected",
	"java.lang.Object",
	nullptr,
	_Sanity$Base$BProtected_FieldInfo_,
	_Sanity$Base$BProtected_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Base$BProtected_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Base$BProtected($Class* clazz) {
	return $of($alloc(Sanity$Base$BProtected));
}

void Sanity$Base$BProtected::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BProtected::Sanity$Base$BProtected() {
}

$Class* Sanity$Base$BProtected::load$($String* name, bool initialize) {
	$loadClass(Sanity$Base$BProtected, name, initialize, &_Sanity$Base$BProtected_ClassInfo_, allocate$Sanity$Base$BProtected);
	return class$;
}

$Class* Sanity$Base$BProtected::class$ = nullptr;