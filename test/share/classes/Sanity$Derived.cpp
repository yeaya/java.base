#include <Sanity$Derived.h>

#include <Sanity$Base.h>
#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Derived_FieldInfo_[] = {
	{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived, this$0)},
	{}
};

$MethodInfo _Sanity$Derived_MethodInfo_[] = {
	{"<init>", "(LSanity;)V", nullptr, $PUBLIC, $method(Sanity$Derived, init$, void, $Sanity*)},
	{}
};

$InnerClassInfo _Sanity$Derived_InnerClassesInfo_[] = {
	{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
	{"Sanity$Base", "Sanity", "Base", $PUBLIC},
	{"Sanity$Derived$DPackage", "Sanity$Derived", "DPackage", 0},
	{"Sanity$Derived$DProtected", "Sanity$Derived", "DProtected", $PROTECTED},
	{"Sanity$Derived$DInner", "Sanity$Derived", "DInner", $PUBLIC},
	{}
};

$ClassInfo _Sanity$Derived_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Derived",
	"Sanity$Base",
	nullptr,
	_Sanity$Derived_FieldInfo_,
	_Sanity$Derived_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Derived_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Derived($Class* clazz) {
	return $of($alloc(Sanity$Derived));
}

void Sanity$Derived::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
	$Sanity$Base::init$(this$0);
}

Sanity$Derived::Sanity$Derived() {
}

$Class* Sanity$Derived::load$($String* name, bool initialize) {
	$loadClass(Sanity$Derived, name, initialize, &_Sanity$Derived_ClassInfo_, allocate$Sanity$Derived);
	return class$;
}

$Class* Sanity$Derived::class$ = nullptr;