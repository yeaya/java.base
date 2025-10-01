#include <Sanity$Derived$DPackage.h>

#include <Sanity$Derived.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Derived$DPackage_FieldInfo_[] = {
	{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DPackage, this$1)},
	{}
};

$MethodInfo _Sanity$Derived$DPackage_MethodInfo_[] = {
	{"<init>", "(LSanity$Derived;)V", nullptr, 0, $method(static_cast<void(Sanity$Derived$DPackage::*)($Sanity$Derived*)>(&Sanity$Derived$DPackage::init$))},
	{}
};

$InnerClassInfo _Sanity$Derived$DPackage_InnerClassesInfo_[] = {
	{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
	{"Sanity$Derived$DPackage", "Sanity$Derived", "DPackage", 0},
	{}
};

$ClassInfo _Sanity$Derived$DPackage_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$Derived$DPackage",
	"java.lang.Object",
	nullptr,
	_Sanity$Derived$DPackage_FieldInfo_,
	_Sanity$Derived$DPackage_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Derived$DPackage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Derived$DPackage($Class* clazz) {
	return $of($alloc(Sanity$Derived$DPackage));
}

void Sanity$Derived$DPackage::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DPackage::Sanity$Derived$DPackage() {
}

$Class* Sanity$Derived$DPackage::load$($String* name, bool initialize) {
	$loadClass(Sanity$Derived$DPackage, name, initialize, &_Sanity$Derived$DPackage_ClassInfo_, allocate$Sanity$Derived$DPackage);
	return class$;
}

$Class* Sanity$Derived$DPackage::class$ = nullptr;