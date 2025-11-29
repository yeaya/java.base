#include <sun/security/provider/MD4$1.h>

#include <java/security/Provider.h>
#include <sun/security/provider/MD4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _MD4$1_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD4$1, serialVersionUID)},
	{}
};

$MethodInfo _MD4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MD4$1::*)($String*,$String*,$String*)>(&MD4$1::init$))},
	{}
};

$EnclosingMethodInfo _MD4$1_EnclosingMethodInfo_ = {
	"sun.security.provider.MD4",
	nullptr,
	nullptr
};

$InnerClassInfo _MD4$1_InnerClassesInfo_[] = {
	{"sun.security.provider.MD4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MD4$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.MD4$1",
	"java.security.Provider",
	nullptr,
	_MD4$1_FieldInfo_,
	_MD4$1_MethodInfo_,
	nullptr,
	&_MD4$1_EnclosingMethodInfo_,
	_MD4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.MD4"
};

$Object* allocate$MD4$1($Class* clazz) {
	return $of($alloc(MD4$1));
}

void MD4$1::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

MD4$1::MD4$1() {
}

$Class* MD4$1::load$($String* name, bool initialize) {
	$loadClass(MD4$1, name, initialize, &_MD4$1_ClassInfo_, allocate$MD4$1);
	return class$;
}

$Class* MD4$1::class$ = nullptr;

		} // provider
	} // security
} // sun