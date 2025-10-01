#include <sun/security/provider/JavaKeyStore$CaseExactJKS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _JavaKeyStore$CaseExactJKS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaKeyStore$CaseExactJKS::*)()>(&JavaKeyStore$CaseExactJKS::init$))},
	{"convertAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _JavaKeyStore$CaseExactJKS_InnerClassesInfo_[] = {
	{"sun.security.provider.JavaKeyStore$CaseExactJKS", "sun.security.provider.JavaKeyStore", "CaseExactJKS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JavaKeyStore$CaseExactJKS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.JavaKeyStore$CaseExactJKS",
	"sun.security.provider.JavaKeyStore",
	nullptr,
	nullptr,
	_JavaKeyStore$CaseExactJKS_MethodInfo_,
	nullptr,
	nullptr,
	_JavaKeyStore$CaseExactJKS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.JavaKeyStore"
};

$Object* allocate$JavaKeyStore$CaseExactJKS($Class* clazz) {
	return $of($alloc(JavaKeyStore$CaseExactJKS));
}

void JavaKeyStore$CaseExactJKS::init$() {
	$JavaKeyStore::init$();
}

$String* JavaKeyStore$CaseExactJKS::convertAlias($String* alias) {
	return alias;
}

JavaKeyStore$CaseExactJKS::JavaKeyStore$CaseExactJKS() {
}

$Class* JavaKeyStore$CaseExactJKS::load$($String* name, bool initialize) {
	$loadClass(JavaKeyStore$CaseExactJKS, name, initialize, &_JavaKeyStore$CaseExactJKS_ClassInfo_, allocate$JavaKeyStore$CaseExactJKS);
	return class$;
}

$Class* JavaKeyStore$CaseExactJKS::class$ = nullptr;

		} // provider
	} // security
} // sun