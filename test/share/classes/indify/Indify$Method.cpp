#include <indify/Indify$Method.h>

#include <indify/Indify$Attr.h>
#include <indify/Indify$Code.h>
#include <indify/Indify$Instruction.h>
#include <indify/Indify$Member.h>
#include <indify/Indify$Outer.h>
#include <indify/Indify.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Attr = ::indify::Indify$Attr;
using $Indify$Code = ::indify::Indify$Code;
using $Indify$Instruction = ::indify::Indify$Instruction;
using $Indify$Member = ::indify::Indify$Member;
using $Indify$Outer = ::indify::Indify$Outer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$MethodInfo _Indify$Method_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indify$Method::*)()>(&Indify$Method::init$))},
	{"code", "()Lindify/Indify$Code;", nullptr, $PUBLIC},
	{"instructions", "()Lindify/Indify$Instruction;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Indify$Method_InnerClassesInfo_[] = {
	{"indify.Indify$Method", "indify.Indify", "Method", $PUBLIC | $STATIC},
	{"indify.Indify$Member", "indify.Indify", "Member", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Indify$Method_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"indify.Indify$Method",
	"indify.Indify$Member",
	nullptr,
	nullptr,
	_Indify$Method_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Method_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Method($Class* clazz) {
	return $of($alloc(Indify$Method));
}

void Indify$Method::init$() {
	$Indify$Member::init$();
}

$Indify$Code* Indify$Method::code() {
	$var($Indify$Attr, a, findAttr("Code"_s));
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($Indify$Code, $nc(a)->item);
}

$Indify$Instruction* Indify$Method::instructions() {
	$var($Indify$Code, code, this->code());
	if (code == nullptr) {
		return nullptr;
	}
	return $nc(code)->instructions();
}

Indify$Method::Indify$Method() {
}

$Class* Indify$Method::load$($String* name, bool initialize) {
	$loadClass(Indify$Method, name, initialize, &_Indify$Method_ClassInfo_, allocate$Indify$Method);
	return class$;
}

$Class* Indify$Method::class$ = nullptr;

} // indify