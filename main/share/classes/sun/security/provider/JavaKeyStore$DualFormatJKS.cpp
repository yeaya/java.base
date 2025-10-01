#include <sun/security/provider/JavaKeyStore$DualFormatJKS.h>

#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <sun/security/provider/JavaKeyStore$JKS.h>
#include <sun/security/util/KeyStoreDelegator.h>
#include <jcpp.h>

using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;
using $JavaKeyStore$JKS = ::sun::security::provider::JavaKeyStore$JKS;
using $KeyStoreDelegator = ::sun::security::util::KeyStoreDelegator;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _JavaKeyStore$DualFormatJKS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JavaKeyStore$DualFormatJKS::*)()>(&JavaKeyStore$DualFormatJKS::init$))},
	{"engineProbe", "(Ljava/io/InputStream;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JavaKeyStore$DualFormatJKS_InnerClassesInfo_[] = {
	{"sun.security.provider.JavaKeyStore$DualFormatJKS", "sun.security.provider.JavaKeyStore", "DualFormatJKS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JavaKeyStore$DualFormatJKS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.JavaKeyStore$DualFormatJKS",
	"sun.security.util.KeyStoreDelegator",
	nullptr,
	nullptr,
	_JavaKeyStore$DualFormatJKS_MethodInfo_,
	nullptr,
	nullptr,
	_JavaKeyStore$DualFormatJKS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.JavaKeyStore"
};

$Object* allocate$JavaKeyStore$DualFormatJKS($Class* clazz) {
	return $of($alloc(JavaKeyStore$DualFormatJKS));
}

void JavaKeyStore$DualFormatJKS::init$() {
	$load($JavaKeyStore$JKS);
	$load($PKCS12KeyStore);
	$KeyStoreDelegator::init$("JKS"_s, $JavaKeyStore$JKS::class$, "PKCS12"_s, $PKCS12KeyStore::class$);
}

bool JavaKeyStore$DualFormatJKS::engineProbe($InputStream* stream) {
	$var($DataInputStream, dataStream, nullptr);
	if ($instanceOf($DataInputStream, stream)) {
		$assign(dataStream, $cast($DataInputStream, stream));
	} else {
		$assign(dataStream, $new($DataInputStream, stream));
	}
	return (int32_t)0xFEEDFEED == $nc(dataStream)->readInt();
}

JavaKeyStore$DualFormatJKS::JavaKeyStore$DualFormatJKS() {
}

$Class* JavaKeyStore$DualFormatJKS::load$($String* name, bool initialize) {
	$loadClass(JavaKeyStore$DualFormatJKS, name, initialize, &_JavaKeyStore$DualFormatJKS_ClassInfo_, allocate$JavaKeyStore$DualFormatJKS);
	return class$;
}

$Class* JavaKeyStore$DualFormatJKS::class$ = nullptr;

		} // provider
	} // security
} // sun