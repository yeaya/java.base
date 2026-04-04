#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor$1.h>
#include <java/io/File.h>
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
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TrustStoreManager$TrustStoreDescriptor = ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor;

namespace sun {
	namespace security {
		namespace ssl {

void TrustStoreManager$TrustStoreDescriptor$1::init$() {
}

$Object* TrustStoreManager$TrustStoreDescriptor$1::run() {
	$useLocalObjectStack();
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
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
	return $new($TrustStoreManager$TrustStoreDescriptor, temporaryName, storePropType, storePropProvider, storePropPassword, temporaryFile, temporaryTime);
}

TrustStoreManager$TrustStoreDescriptor$1::TrustStoreManager$TrustStoreDescriptor$1() {
}

$Class* TrustStoreManager$TrustStoreDescriptor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TrustStoreManager$TrustStoreDescriptor$1, init$, void)},
		{"run", "()Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;", nullptr, $PUBLIC, $virtualMethod(TrustStoreManager$TrustStoreDescriptor$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor",
		"createInstance",
		"()Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor", "sun.security.ssl.TrustStoreManager", "TrustStoreDescriptor", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.TrustStoreManager"
	};
	$loadClass(TrustStoreManager$TrustStoreDescriptor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrustStoreManager$TrustStoreDescriptor$1);
	});
	return class$;
}

$Class* TrustStoreManager$TrustStoreDescriptor$1::class$ = nullptr;

		} // ssl
	} // security
} // sun