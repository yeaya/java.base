#include <Sanity$Base$BInner.h>

#include <Sanity$Base.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Base$BInner_FieldInfo_[] = {
	{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BInner, this$1)},
	{}
};

$MethodInfo _Sanity$Base$BInner_MethodInfo_[] = {
	{"<init>", "(LSanity$Base;)V", nullptr, $PUBLIC, $method(static_cast<void(Sanity$Base$BInner::*)($Sanity$Base*)>(&Sanity$Base$BInner::init$))},
	{}
};

$InnerClassInfo _Sanity$Base$BInner_InnerClassesInfo_[] = {
	{"Sanity$Base", "Sanity", "Base", $PUBLIC},
	{"Sanity$Base$BInner", "Sanity$Base", "BInner", $PUBLIC},
	{}
};

$ClassInfo _Sanity$Base$BInner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Base$BInner",
	"java.lang.Object",
	nullptr,
	_Sanity$Base$BInner_FieldInfo_,
	_Sanity$Base$BInner_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Base$BInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Base$BInner($Class* clazz) {
	return $of($alloc(Sanity$Base$BInner));
}

void Sanity$Base$BInner::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BInner::Sanity$Base$BInner() {
}

$Class* Sanity$Base$BInner::load$($String* name, bool initialize) {
	$loadClass(Sanity$Base$BInner, name, initialize, &_Sanity$Base$BInner_ClassInfo_, allocate$Sanity$Base$BInner);
	return class$;
}

$Class* Sanity$Base$BInner::class$ = nullptr;