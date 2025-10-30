#include <indify/Indify$Field.h>

#include <indify/Indify$Member.h>
#include <indify/Indify.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Member = ::indify::Indify$Member;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$MethodInfo _Indify$Field_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indify$Field::*)()>(&Indify$Field::init$))},
	{}
};

$InnerClassInfo _Indify$Field_InnerClassesInfo_[] = {
	{"indify.Indify$Field", "indify.Indify", "Field", $PUBLIC | $STATIC},
	{"indify.Indify$Member", "indify.Indify", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Indify$Field_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"indify.Indify$Field",
	"indify.Indify$Member",
	nullptr,
	nullptr,
	_Indify$Field_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Field($Class* clazz) {
	return $of($alloc(Indify$Field));
}

void Indify$Field::init$() {
	$Indify$Member::init$();
}

Indify$Field::Indify$Field() {
}

$Class* Indify$Field::load$($String* name, bool initialize) {
	$loadClass(Indify$Field, name, initialize, &_Indify$Field_ClassInfo_, allocate$Indify$Field);
	return class$;
}

$Class* Indify$Field::class$ = nullptr;

} // indify