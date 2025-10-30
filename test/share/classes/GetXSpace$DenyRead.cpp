#include <GetXSpace$DenyRead.h>

#include <GetXSpace$Deny.h>
#include <GetXSpace.h>
#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $GetXSpace = ::GetXSpace;
using $GetXSpace$Deny = ::GetXSpace$Deny;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

$FieldInfo _GetXSpace$DenyRead_FieldInfo_[] = {
	{"err", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetXSpace$DenyRead, err)},
	{}
};

$MethodInfo _GetXSpace$DenyRead_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GetXSpace$DenyRead::*)()>(&GetXSpace$DenyRead::init$))},
	{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetXSpace$DenyRead_InnerClassesInfo_[] = {
	{"GetXSpace$DenyRead", "GetXSpace", "DenyRead", $PRIVATE | $STATIC},
	{"GetXSpace$Deny", "GetXSpace", "Deny", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GetXSpace$DenyRead_ClassInfo_ = {
	$ACC_SUPER,
	"GetXSpace$DenyRead",
	"GetXSpace$Deny",
	nullptr,
	_GetXSpace$DenyRead_FieldInfo_,
	_GetXSpace$DenyRead_MethodInfo_,
	nullptr,
	nullptr,
	_GetXSpace$DenyRead_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetXSpace"
};

$Object* allocate$GetXSpace$DenyRead($Class* clazz) {
	return $of($alloc(GetXSpace$DenyRead));
}

void GetXSpace$DenyRead::init$() {
	$GetXSpace$Deny::init$();
	$set(this, err, "sorry - checkRead()"_s);
}

void GetXSpace$DenyRead::checkRead($String* file) {
	$throwNew($SecurityException, this->err);
}

GetXSpace$DenyRead::GetXSpace$DenyRead() {
}

$Class* GetXSpace$DenyRead::load$($String* name, bool initialize) {
	$loadClass(GetXSpace$DenyRead, name, initialize, &_GetXSpace$DenyRead_ClassInfo_, allocate$GetXSpace$DenyRead);
	return class$;
}

$Class* GetXSpace$DenyRead::class$ = nullptr;