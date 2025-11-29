#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor.h>

#include <java/io/File.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Date.h>
#include <java/util/Objects.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor$1.h>
#include <sun/security/ssl/TrustStoreManager.h>
#include <sun/security/util/FilePaths.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Date = ::java::util::Date;
using $Objects = ::java::util::Objects;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TrustStoreManager$TrustStoreDescriptor$1 = ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor$1;
using $FilePaths = ::sun::security::util::FilePaths;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TrustStoreManager$TrustStoreDescriptor_FieldInfo_[] = {
	{"fileSep", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager$TrustStoreDescriptor, fileSep)},
	{"defaultStorePath", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager$TrustStoreDescriptor, defaultStorePath)},
	{"defaultStore", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager$TrustStoreDescriptor, defaultStore)},
	{"jsseDefaultStore", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager$TrustStoreDescriptor, jsseDefaultStore)},
	{"storeName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, storeName)},
	{"storeType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, storeType)},
	{"storeProvider", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, storeProvider)},
	{"storePassword", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, storePassword)},
	{"storeFile", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, storeFile)},
	{"lastModified", "J", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustStoreDescriptor, lastModified)},
	{}
};

$MethodInfo _TrustStoreManager$TrustStoreDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;J)V", nullptr, $PRIVATE, $method(static_cast<void(TrustStoreManager$TrustStoreDescriptor::*)($String*,$String*,$String*,$String*,$File*,int64_t)>(&TrustStoreManager$TrustStoreDescriptor::init$))},
	{"createInstance", "()Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;", nullptr, $STATIC, $method(static_cast<TrustStoreManager$TrustStoreDescriptor*(*)()>(&TrustStoreManager$TrustStoreDescriptor::createInstance))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TrustStoreManager$TrustStoreDescriptor_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor", "sun.security.ssl.TrustStoreManager", "TrustStoreDescriptor", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustStoreManager$TrustStoreDescriptor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor",
	"java.lang.Object",
	nullptr,
	_TrustStoreManager$TrustStoreDescriptor_FieldInfo_,
	_TrustStoreManager$TrustStoreDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	_TrustStoreManager$TrustStoreDescriptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustStoreManager"
};

$Object* allocate$TrustStoreManager$TrustStoreDescriptor($Class* clazz) {
	return $of($alloc(TrustStoreManager$TrustStoreDescriptor));
}

$String* TrustStoreManager$TrustStoreDescriptor::fileSep = nullptr;
$String* TrustStoreManager$TrustStoreDescriptor::defaultStorePath = nullptr;
$String* TrustStoreManager$TrustStoreDescriptor::defaultStore = nullptr;
$String* TrustStoreManager$TrustStoreDescriptor::jsseDefaultStore = nullptr;

void TrustStoreManager$TrustStoreDescriptor::init$($String* storeName, $String* storeType, $String* storeProvider, $String* storePassword, $File* storeFile, int64_t lastModified) {
	$useLocalCurrentObjectStackCache();
	$set(this, storeName, storeName);
	$set(this, storeType, storeType);
	$set(this, storeProvider, storeProvider);
	$set(this, storePassword, storePassword);
	$set(this, storeFile, storeFile);
	this->lastModified = lastModified;
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
		$SSLLogger::fine($$str({"trustStore is: "_s, storeName, "\ntrustStore type is: "_s, storeType, "\ntrustStore provider is: "_s, storeProvider, "\nthe last modified time is: "_s, ($$new($Date, lastModified))}), $$new($ObjectArray, 0));
	}
}

TrustStoreManager$TrustStoreDescriptor* TrustStoreManager$TrustStoreDescriptor::createInstance() {
	$init(TrustStoreManager$TrustStoreDescriptor);
	$beforeCallerSensitive();
	return $cast(TrustStoreManager$TrustStoreDescriptor, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($TrustStoreManager$TrustStoreDescriptor$1))));
}

bool TrustStoreManager$TrustStoreDescriptor::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(TrustStoreManager$TrustStoreDescriptor, obj)) {
		$var(TrustStoreManager$TrustStoreDescriptor, that, $cast(TrustStoreManager$TrustStoreDescriptor, obj));
		bool var$1 = (this->lastModified == $nc(that)->lastModified) && $Objects::equals(this->storeName, that->storeName);
		bool var$0 = var$1 && $Objects::equals(this->storeType, that->storeType);
		return (var$0 && $Objects::equals(this->storeProvider, that->storeProvider));
	}
	return false;
}

int32_t TrustStoreManager$TrustStoreDescriptor::hashCode() {
	int32_t result = 17;
	if (this->storeName != nullptr && !$nc(this->storeName)->isEmpty()) {
		result = 31 * result + $nc(this->storeName)->hashCode();
	}
	if (this->storeType != nullptr && !$nc(this->storeType)->isEmpty()) {
		result = 31 * result + $nc(this->storeType)->hashCode();
	}
	if (this->storeProvider != nullptr && !$nc(this->storeProvider)->isEmpty()) {
		result = 31 * result + $nc(this->storeProvider)->hashCode();
	}
	if (this->storeFile != nullptr) {
		result = 31 * result + $nc(this->storeFile)->hashCode();
	}
	if (this->lastModified != (int64_t)0) {
		result = (int32_t)(31 * result + this->lastModified);
	}
	return result;
}

void clinit$TrustStoreManager$TrustStoreDescriptor($Class* class$) {
	$init($File);
	$assignStatic(TrustStoreManager$TrustStoreDescriptor::fileSep, $File::separator);
	$assignStatic(TrustStoreManager$TrustStoreDescriptor::defaultStorePath, $str({$($GetPropertyAction::privilegedGetProperty("java.home"_s)), TrustStoreManager$TrustStoreDescriptor::fileSep, "lib"_s, TrustStoreManager$TrustStoreDescriptor::fileSep, "security"_s}));
	$assignStatic(TrustStoreManager$TrustStoreDescriptor::defaultStore, $FilePaths::cacerts());
	$assignStatic(TrustStoreManager$TrustStoreDescriptor::jsseDefaultStore, $str({TrustStoreManager$TrustStoreDescriptor::defaultStorePath, TrustStoreManager$TrustStoreDescriptor::fileSep, "jssecacerts"_s}));
}

TrustStoreManager$TrustStoreDescriptor::TrustStoreManager$TrustStoreDescriptor() {
}

$Class* TrustStoreManager$TrustStoreDescriptor::load$($String* name, bool initialize) {
	$loadClass(TrustStoreManager$TrustStoreDescriptor, name, initialize, &_TrustStoreManager$TrustStoreDescriptor_ClassInfo_, clinit$TrustStoreManager$TrustStoreDescriptor, allocate$TrustStoreManager$TrustStoreDescriptor);
	return class$;
}

$Class* TrustStoreManager$TrustStoreDescriptor::class$ = nullptr;

		} // ssl
	} // security
} // sun