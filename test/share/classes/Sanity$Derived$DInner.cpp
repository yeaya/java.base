#include <Sanity$Derived$DInner.h>

#include <Sanity$Derived.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Sanity$Derived$DInner_FieldInfo_[] = {
	{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DInner, this$1)},
	{}
};

$MethodInfo _Sanity$Derived$DInner_MethodInfo_[] = {
	{"<init>", "(LSanity$Derived;)V", nullptr, $PUBLIC, $method(Sanity$Derived$DInner, init$, void, $Sanity$Derived*)},
	{}
};

$InnerClassInfo _Sanity$Derived$DInner_InnerClassesInfo_[] = {
	{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
	{"Sanity$Derived$DInner", "Sanity$Derived", "DInner", $PUBLIC},
	{}
};

$ClassInfo _Sanity$Derived$DInner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Sanity$Derived$DInner",
	"java.lang.Object",
	nullptr,
	_Sanity$Derived$DInner_FieldInfo_,
	_Sanity$Derived$DInner_MethodInfo_,
	nullptr,
	nullptr,
	_Sanity$Derived$DInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$Derived$DInner($Class* clazz) {
	return $of($alloc(Sanity$Derived$DInner));
}

void Sanity$Derived$DInner::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DInner::Sanity$Derived$DInner() {
}

$Class* Sanity$Derived$DInner::load$($String* name, bool initialize) {
	$loadClass(Sanity$Derived$DInner, name, initialize, &_Sanity$Derived$DInner_ClassInfo_, allocate$Sanity$Derived$DInner);
	return class$;
}

$Class* Sanity$Derived$DInner::class$ = nullptr;