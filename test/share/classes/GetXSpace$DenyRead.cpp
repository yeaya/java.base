#include <GetXSpace$DenyRead.h>
#include <GetXSpace$Deny.h>
#include <GetXSpace.h>
#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $GetXSpace$Deny = ::GetXSpace$Deny;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

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
	$FieldInfo fieldInfos$$[] = {
		{"err", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GetXSpace$DenyRead, err)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GetXSpace$DenyRead, init$, void)},
		{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$DenyRead, checkRead, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetXSpace$DenyRead", "GetXSpace", "DenyRead", $PRIVATE | $STATIC},
		{"GetXSpace$Deny", "GetXSpace", "Deny", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetXSpace$DenyRead",
		"GetXSpace$Deny",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetXSpace"
	};
	$loadClass(GetXSpace$DenyRead, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetXSpace$DenyRead);
	});
	return class$;
}

$Class* GetXSpace$DenyRead::class$ = nullptr;