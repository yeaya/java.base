#include <Sanity$Derived$DProtected.h>

#include <Sanity$Derived.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Derived$DProtected_FieldInfo_[] = {
	{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DProtected, this$1)},
	{}
};

$MethodInfo _Sanity$Derived$DProtected_MethodInfo_[] = {
	{"<init>", "(LSanity$Derived;)V", nullptr, $PROTECTED, $method(Sanity$Derived$DProtected, init$, void, $Sanity$Derived*)},
	{}
};

$InnerClassInfo _Sanity$Derived$DProtected_InnerClassesInfo_[] = {
	{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
	{"Sanity$Derived$DProtected", "Sanity$Derived", "DProtected", $PROTECTED},
	{}
};

$ClassInfo _Sanity$Derived$DProtected_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Derived$DProtected",
	"java.lang.Object",
	nullptr,
	_Sanity$Derived$DProtected_FieldInfo_,
	_Sanity$Derived$DProtected_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Derived$DProtected_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Derived$DProtected($Class* clazz) {
	return $of($alloc(Sanity$Derived$DProtected));
}

void Sanity$Derived$DProtected::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DProtected::Sanity$Derived$DProtected() {
}

$Class* Sanity$Derived$DProtected::load$($String* name, bool initialize) {
	$loadClass(Sanity$Derived$DProtected, name, initialize, &_Sanity$Derived$DProtected_ClassInfo_, allocate$Sanity$Derived$DProtected);
	return class$;
}

$Class* Sanity$Derived$DProtected::class$ = nullptr;