#include <com/sun/crypto/provider/PBES2Parameters$General.h>

#include <com/sun/crypto/provider/PBES2Parameters.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PBES2Parameters = ::com::sun::crypto::provider::PBES2Parameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _PBES2Parameters$General_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBES2Parameters$General::*)()>(&PBES2Parameters$General::init$)), "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _PBES2Parameters$General_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PBES2Parameters$General", "com.sun.crypto.provider.PBES2Parameters", "General", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PBES2Parameters$General_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBES2Parameters$General",
	"com.sun.crypto.provider.PBES2Parameters",
	nullptr,
	nullptr,
	_PBES2Parameters$General_MethodInfo_,
	nullptr,
	nullptr,
	_PBES2Parameters$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PBES2Parameters"
};

$Object* allocate$PBES2Parameters$General($Class* clazz) {
	return $of($alloc(PBES2Parameters$General));
}

void PBES2Parameters$General::init$() {
	$PBES2Parameters::init$();
}

PBES2Parameters$General::PBES2Parameters$General() {
}

$Class* PBES2Parameters$General::load$($String* name, bool initialize) {
	$loadClass(PBES2Parameters$General, name, initialize, &_PBES2Parameters$General_ClassInfo_, allocate$PBES2Parameters$General);
	return class$;
}

$Class* PBES2Parameters$General::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com