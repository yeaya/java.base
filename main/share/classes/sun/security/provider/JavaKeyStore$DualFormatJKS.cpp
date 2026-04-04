#include <sun/security/provider/JavaKeyStore$DualFormatJKS.h>
#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
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
using $JavaKeyStore$JKS = ::sun::security::provider::JavaKeyStore$JKS;
using $KeyStoreDelegator = ::sun::security::util::KeyStoreDelegator;

namespace sun {
	namespace security {
		namespace provider {

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
	return (int32_t)0xfeedfeed == $nc(dataStream)->readInt();
}

JavaKeyStore$DualFormatJKS::JavaKeyStore$DualFormatJKS() {
}

$Class* JavaKeyStore$DualFormatJKS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaKeyStore$DualFormatJKS, init$, void)},
		{"engineProbe", "(Ljava/io/InputStream;)Z", nullptr, $PUBLIC, $virtualMethod(JavaKeyStore$DualFormatJKS, engineProbe, bool, $InputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.JavaKeyStore$DualFormatJKS", "sun.security.provider.JavaKeyStore", "DualFormatJKS", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.JavaKeyStore$DualFormatJKS",
		"sun.security.util.KeyStoreDelegator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.JavaKeyStore"
	};
	$loadClass(JavaKeyStore$DualFormatJKS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaKeyStore$DualFormatJKS);
	});
	return class$;
}

$Class* JavaKeyStore$DualFormatJKS::class$ = nullptr;

		} // provider
	} // security
} // sun