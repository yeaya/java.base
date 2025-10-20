#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor$1.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TrustStoreManager$TrustStoreDescriptor = ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _TrustStoreManager$TrustStoreDescriptor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TrustStoreManager$TrustStoreDescriptor$1::*)()>(&TrustStoreManager$TrustStoreDescriptor$1::init$))},
	{"run", "()Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TrustStoreManager$TrustStoreDescriptor$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor",
	"createInstance",
	"()Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;"
};

$InnerClassInfo _TrustStoreManager$TrustStoreDescriptor$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor", "sun.security.ssl.TrustStoreManager", "TrustStoreDescriptor", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustStoreManager$TrustStoreDescriptor$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_TrustStoreManager$TrustStoreDescriptor$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;>;",
	&_TrustStoreManager$TrustStoreDescriptor$1_EnclosingMethodInfo_,
	_TrustStoreManager$TrustStoreDescriptor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustStoreManager"
};

$Object* allocate$TrustStoreManager$TrustStoreDescriptor$1($Class* clazz) {
	return $of($alloc(TrustStoreManager$TrustStoreDescriptor$1));
}

void TrustStoreManager$TrustStoreDescriptor$1::init$() {
}

$Object* TrustStoreManager$TrustStoreDescriptor$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($TrustStoreManager$TrustStoreDescriptor);
	$var($String, storePropName, $System::getProperty("javax.net.ssl.trustStore"_s, $TrustStoreManager$TrustStoreDescriptor::jsseDefaultStore));
	$var($String, storePropType, $System::getProperty("javax.net.ssl.trustStoreType"_s, $($KeyStore::getDefaultType())));
	$var($String, storePropProvider, $System::getProperty("javax.net.ssl.trustStoreProvider"_s, ""_s));
	$var($String, storePropPassword, $System::getProperty("javax.net.ssl.trustStorePassword"_s, ""_s));
	$var($String, temporaryName, ""_s);
	$var($File, temporaryFile, nullptr);
	int64_t temporaryTime = 0;
	if (!"NONE"_s->equals(storePropName)) {
		$var($StringArray, fileNames, $new($StringArray, {
			storePropName,
			$TrustStoreManager$TrustStoreDescriptor::defaultStore
		}));
		{
			$var($StringArray, arr$, fileNames);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, fileName, arr$->get(i$));
				{
					$var($File, f, $new($File, fileName));
					bool var$0 = f->isFile();
					if (var$0 && f->canRead()) {
						$assign(temporaryName, fileName);
						$assign(temporaryFile, f);
						temporaryTime = f->lastModified();
						break;
					}
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
						$SSLLogger::fine($$str({"Inaccessible trust store: "_s, fileName}), $$new($ObjectArray, 0));
					}
				}
			}
		}
	} else {
		$assign(temporaryName, storePropName);
	}
	return $of($new($TrustStoreManager$TrustStoreDescriptor, temporaryName, storePropType, storePropProvider, storePropPassword, temporaryFile, temporaryTime));
}

TrustStoreManager$TrustStoreDescriptor$1::TrustStoreManager$TrustStoreDescriptor$1() {
}

$Class* TrustStoreManager$TrustStoreDescriptor$1::load$($String* name, bool initialize) {
	$loadClass(TrustStoreManager$TrustStoreDescriptor$1, name, initialize, &_TrustStoreManager$TrustStoreDescriptor$1_ClassInfo_, allocate$TrustStoreManager$TrustStoreDescriptor$1);
	return class$;
}

$Class* TrustStoreManager$TrustStoreDescriptor$1::class$ = nullptr;

		} // ssl
	} // security
} // sun