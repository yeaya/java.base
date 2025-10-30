#include <java/lang/constant/DirectMethodHandleDesc.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/DirectMethodHandleDesc$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $DirectMethodHandleDesc$Kind = ::java::lang::constant::DirectMethodHandleDesc$Kind;
using $MethodHandleDesc = ::java::lang::constant::MethodHandleDesc;

namespace java {
	namespace lang {
		namespace constant {

$MethodInfo _DirectMethodHandleDesc_MethodInfo_[] = {
	{"isOwnerInterface", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"kind", "()Ljava/lang/constant/DirectMethodHandleDesc$Kind;", nullptr, $PUBLIC | $ABSTRACT},
	{"lookupDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"methodName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"owner", "()Ljava/lang/constant/ClassDesc;", nullptr, $PUBLIC | $ABSTRACT},
	{"refKind", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DirectMethodHandleDesc_InnerClassesInfo_[] = {
	{"java.lang.constant.DirectMethodHandleDesc$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.constant.DirectMethodHandleDesc$Kind", "java.lang.constant.DirectMethodHandleDesc", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DirectMethodHandleDesc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.constant.DirectMethodHandleDesc",
	nullptr,
	"java.lang.constant.MethodHandleDesc",
	nullptr,
	_DirectMethodHandleDesc_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandleDesc_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.constant.DirectMethodHandleDesc$1,java.lang.constant.DirectMethodHandleDesc$Kind"
};

$Object* allocate$DirectMethodHandleDesc($Class* clazz) {
	return $of($alloc(DirectMethodHandleDesc));
}

$Class* DirectMethodHandleDesc::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandleDesc, name, initialize, &_DirectMethodHandleDesc_ClassInfo_, allocate$DirectMethodHandleDesc);
	return class$;
}

$Class* DirectMethodHandleDesc::class$ = nullptr;

		} // constant
	} // lang
} // java