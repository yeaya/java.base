#include <sun/security/provider/JavaKeyStore$JKS.h>

#include <java/util/Locale.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _JavaKeyStore$JKS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaKeyStore$JKS::*)()>(&JavaKeyStore$JKS::init$))},
	{"convertAlias", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _JavaKeyStore$JKS_InnerClassesInfo_[] = {
	{"sun.security.provider.JavaKeyStore$JKS", "sun.security.provider.JavaKeyStore", "JKS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JavaKeyStore$JKS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.JavaKeyStore$JKS",
	"sun.security.provider.JavaKeyStore",
	nullptr,
	nullptr,
	_JavaKeyStore$JKS_MethodInfo_,
	nullptr,
	nullptr,
	_JavaKeyStore$JKS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.JavaKeyStore"
};

$Object* allocate$JavaKeyStore$JKS($Class* clazz) {
	return $of($alloc(JavaKeyStore$JKS));
}

void JavaKeyStore$JKS::init$() {
	$JavaKeyStore::init$();
}

$String* JavaKeyStore$JKS::convertAlias($String* alias) {
	$init($Locale);
	return $nc(alias)->toLowerCase($Locale::ENGLISH);
}

JavaKeyStore$JKS::JavaKeyStore$JKS() {
}

$Class* JavaKeyStore$JKS::load$($String* name, bool initialize) {
	$loadClass(JavaKeyStore$JKS, name, initialize, &_JavaKeyStore$JKS_ClassInfo_, allocate$JavaKeyStore$JKS);
	return class$;
}

$Class* JavaKeyStore$JKS::class$ = nullptr;

		} // provider
	} // security
} // sun