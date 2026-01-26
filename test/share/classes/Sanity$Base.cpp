#include <Sanity$Base.h>

#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Base_FieldInfo_[] = {
	{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base, this$0)},
	{}
};

$MethodInfo _Sanity$Base_MethodInfo_[] = {
	{"<init>", "(LSanity;)V", nullptr, $PUBLIC, $method(Sanity$Base, init$, void, $Sanity*)},
	{}
};

$InnerClassInfo _Sanity$Base_InnerClassesInfo_[] = {
	{"Sanity$Base", "Sanity", "Base", $PUBLIC},
	{"Sanity$Base$BPackage", "Sanity$Base", "BPackage", 0},
	{"Sanity$Base$BProtected", "Sanity$Base", "BProtected", $PROTECTED},
	{"Sanity$Base$BInner", "Sanity$Base", "BInner", $PUBLIC},
	{}
};

$ClassInfo _Sanity$Base_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Base",
	"java.lang.Object",
	nullptr,
	_Sanity$Base_FieldInfo_,
	_Sanity$Base_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Base_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Base($Class* clazz) {
	return $of($alloc(Sanity$Base));
}

void Sanity$Base::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
}

Sanity$Base::Sanity$Base() {
}

$Class* Sanity$Base::load$($String* name, bool initialize) {
	$loadClass(Sanity$Base, name, initialize, &_Sanity$Base_ClassInfo_, allocate$Sanity$Base);
	return class$;
}

$Class* Sanity$Base::class$ = nullptr;