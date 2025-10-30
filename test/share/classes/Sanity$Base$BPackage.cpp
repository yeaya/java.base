#include <Sanity$Base$BPackage.h>

#include <Sanity$Base.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Base$BPackage_FieldInfo_[] = {
	{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BPackage, this$1)},
	{}
};

$MethodInfo _Sanity$Base$BPackage_MethodInfo_[] = {
	{"<init>", "(LSanity$Base;)V", nullptr, 0, $method(static_cast<void(Sanity$Base$BPackage::*)($Sanity$Base*)>(&Sanity$Base$BPackage::init$))},
	{}
};

$InnerClassInfo _Sanity$Base$BPackage_InnerClassesInfo_[] = {
	{"Sanity$Base", "Sanity", "Base", $PUBLIC},
	{"Sanity$Base$BPackage", "Sanity$Base", "BPackage", 0},
	{}
};

$ClassInfo _Sanity$Base$BPackage_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$Base$BPackage",
	"java.lang.Object",
	nullptr,
	_Sanity$Base$BPackage_FieldInfo_,
	_Sanity$Base$BPackage_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Base$BPackage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Base$BPackage($Class* clazz) {
	return $of($alloc(Sanity$Base$BPackage));
}

void Sanity$Base$BPackage::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BPackage::Sanity$Base$BPackage() {
}

$Class* Sanity$Base$BPackage::load$($String* name, bool initialize) {
	$loadClass(Sanity$Base$BPackage, name, initialize, &_Sanity$Base$BPackage_ClassInfo_, allocate$Sanity$Base$BPackage);
	return class$;
}

$Class* Sanity$Base$BPackage::class$ = nullptr;