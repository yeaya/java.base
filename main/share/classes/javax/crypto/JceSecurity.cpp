#include <javax/crypto/JceSecurity.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessController.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/util/AbstractMap.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/crypto/CryptoAllPermission.h>
#include <javax/crypto/CryptoPermission.h>
#include <javax/crypto/CryptoPermissions.h>
#include <javax/crypto/JceSecurity$1.h>
#include <javax/crypto/JceSecurity$2.h>
#include <javax/crypto/JceSecurity$IdentityWrapper.h>
#include <javax/crypto/ProviderVerifier.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef FALSE
#undef INSTANCE
#undef NULL_URL
#undef PROVIDER_VERIFIED
#undef TRUE

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $Closeable = ::java::io::Closeable;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $URL = ::java::net::URL;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Security = ::java::security::Security;
using $AbstractMap = ::java::util::AbstractMap;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CryptoAllPermission = ::javax::crypto::CryptoAllPermission;
using $CryptoPermission = ::javax::crypto::CryptoPermission;
using $CryptoPermissions = ::javax::crypto::CryptoPermissions;
using $JceSecurity$1 = ::javax::crypto::JceSecurity$1;
using $JceSecurity$2 = ::javax::crypto::JceSecurity$2;
using $JceSecurity$IdentityWrapper = ::javax::crypto::JceSecurity$IdentityWrapper;
using $ProviderVerifier = ::javax::crypto::ProviderVerifier;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $Debug = ::sun::security::util::Debug;

namespace javax {
	namespace crypto {

$FieldInfo _JceSecurity_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, debug)},
	{"defaultPolicy", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC, $staticField(JceSecurity, defaultPolicy)},
	{"exemptPolicy", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC, $staticField(JceSecurity, exemptPolicy)},
	{"verificationResults", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/crypto/JceSecurity$IdentityWrapper;Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, verificationResults)},
	{"verifyingProviders", "Ljava/util/Map;", "Ljava/util/Map<Ljava/security/Provider;Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, verifyingProviders)},
	{"isRestricted", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, isRestricted$)},
	{"PROVIDER_VERIFIED", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, PROVIDER_VERIFIED)},
	{"NULL_URL", "Ljava/net/URL;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, NULL_URL)},
	{"codeBaseCacheRef", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/net/URL;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurity, codeBaseCacheRef)},
	{}
};

$MethodInfo _JceSecurity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JceSecurity::*)()>(&JceSecurity::init$))},
	{"canUseProvider", "(Ljava/security/Provider;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Provider*)>(&JceSecurity::canUseProvider))},
	{"getCodeBase", "(Ljava/lang/Class;)Ljava/net/URL;", "(Ljava/lang/Class<*>;)Ljava/net/URL;", $STATIC, $method(static_cast<$URL*(*)($Class*)>(&JceSecurity::getCodeBase))},
	{"getDefaultPolicy", "()Ljavax/crypto/CryptoPermissions;", nullptr, $STATIC, $method(static_cast<$CryptoPermissions*(*)()>(&JceSecurity::getDefaultPolicy))},
	{"getExemptPolicy", "()Ljavax/crypto/CryptoPermissions;", nullptr, $STATIC, $method(static_cast<$CryptoPermissions*(*)()>(&JceSecurity::getExemptPolicy))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,$String*)>(&JceSecurity::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,$Provider*)>(&JceSecurity::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*)>(&JceSecurity::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getVerificationResult", "(Ljava/security/Provider;)Ljava/lang/Exception;", nullptr, $STATIC, $method(static_cast<$Exception*(*)($Provider*)>(&JceSecurity::getVerificationResult))},
	{"isRestricted", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JceSecurity::isRestricted))},
	{"setupJurisdictionPolicies", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JceSecurity::setupJurisdictionPolicies)), "java.lang.Exception"},
	{"verifyExemptJar", "(Ljava/net/URL;)Ljavax/crypto/CryptoPermissions;", nullptr, $STATIC, $method(static_cast<$CryptoPermissions*(*)($URL*)>(&JceSecurity::verifyExemptJar)), "java.lang.Exception"},
	{"verifyProvider", "(Ljava/net/URL;Ljava/security/Provider;)V", nullptr, $STATIC, $method(static_cast<void(*)($URL*,$Provider*)>(&JceSecurity::verifyProvider)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JceSecurity_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurity$IdentityWrapper", "javax.crypto.JceSecurity", "IdentityWrapper", $PRIVATE | $STATIC | $FINAL},
	{"javax.crypto.JceSecurity$2", nullptr, nullptr, 0},
	{"javax.crypto.JceSecurity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JceSecurity_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.JceSecurity",
	"java.lang.Object",
	nullptr,
	_JceSecurity_FieldInfo_,
	_JceSecurity_MethodInfo_,
	nullptr,
	nullptr,
	_JceSecurity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurity$IdentityWrapper,javax.crypto.JceSecurity$2,javax.crypto.JceSecurity$1"
};

$Object* allocate$JceSecurity($Class* clazz) {
	return $of($alloc(JceSecurity));
}

$Debug* JceSecurity::debug = nullptr;
$CryptoPermissions* JceSecurity::defaultPolicy = nullptr;
$CryptoPermissions* JceSecurity::exemptPolicy = nullptr;
$Map* JceSecurity::verificationResults = nullptr;
$Map* JceSecurity::verifyingProviders = nullptr;
bool JceSecurity::isRestricted$ = false;
$Object* JceSecurity::PROVIDER_VERIFIED = nullptr;
$URL* JceSecurity::NULL_URL = nullptr;
$Map* JceSecurity::codeBaseCacheRef = nullptr;

void JceSecurity::init$() {
}

$GetInstance$Instance* JceSecurity::getInstance($String* type, $Class* clazz, $String* algorithm, $String* provider) {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$var($Provider$Service, s, $GetInstance::getService(type, algorithm, provider));
	$var($Exception, ve, getVerificationResult($($nc(s)->getProvider())));
	if (ve != nullptr) {
		$var($String, msg, $str({"JCE cannot authenticate the provider "_s, provider}));
		$throw($cast($NoSuchProviderException, $($$new($NoSuchProviderException, msg)->initCause(ve))));
	}
	return $GetInstance::getInstance(s, clazz);
}

$GetInstance$Instance* JceSecurity::getInstance($String* type, $Class* clazz, $String* algorithm, $Provider* provider) {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$var($Provider$Service, s, $GetInstance::getService(type, algorithm, provider));
	$var($Exception, ve, JceSecurity::getVerificationResult(provider));
	if (ve != nullptr) {
		$var($String, msg, $str({"JCE cannot authenticate the provider "_s, $($nc(provider)->getName())}));
		$throwNew($SecurityException, msg, ve);
	}
	return $GetInstance::getInstance(s, clazz);
}

$GetInstance$Instance* JceSecurity::getInstance($String* type, $Class* clazz, $String* algorithm) {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$var($List, services, $GetInstance::getServices(type, algorithm));
	$var($NoSuchAlgorithmException, failure, nullptr);
	{
		$var($Iterator, i$, $nc(services)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Provider$Service, s, $cast($Provider$Service, i$->next()));
			{
				if (canUseProvider($($nc(s)->getProvider())) == false) {
					continue;
				}
				try {
					$var($GetInstance$Instance, instance, $GetInstance::getInstance(s, clazz));
					return instance;
				} catch ($NoSuchAlgorithmException&) {
					$var($NoSuchAlgorithmException, e, $catch());
					$assign(failure, e);
				}
			}
		}
	}
	$throwNew($NoSuchAlgorithmException, $$str({"Algorithm "_s, algorithm, " not available"_s}), failure);
	$shouldNotReachHere();
}

$CryptoPermissions* JceSecurity::verifyExemptJar($URL* codeBase) {
	$init(JceSecurity);
	$var($ProviderVerifier, pv, $new($ProviderVerifier, codeBase, true));
	pv->verify();
	return pv->getPermissions();
}

void JceSecurity::verifyProvider($URL* codeBase, $Provider* p) {
	$init(JceSecurity);
	$var($ProviderVerifier, pv, $new($ProviderVerifier, codeBase, p, false));
	pv->verify();
}

$Exception* JceSecurity::getVerificationResult($Provider* p) {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$var($JceSecurity$IdentityWrapper, pKey, $new($JceSecurity$IdentityWrapper, p));
	$var($Object, o, $nc(JceSecurity::verificationResults)->get(pKey));
	if (o == nullptr) {
		$synchronized(JceSecurity::class$) {
			$assign(o, $nc(JceSecurity::verificationResults)->get(pKey));
			if (o == nullptr) {
				if ($nc(JceSecurity::verifyingProviders)->get(p) != nullptr) {
					return $new($NoSuchProviderException, "Recursion during verification"_s);
				}
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$init($Boolean);
							$nc(JceSecurity::verifyingProviders)->put(p, $Boolean::FALSE);
							$var($URL, providerURL, getCodeBase($nc($of(p))->getClass()));
							verifyProvider(providerURL, p);
							$assign(o, JceSecurity::PROVIDER_VERIFIED);
						} catch ($Exception&) {
							$var($Exception, e, $catch());
							$assign(o, e);
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$nc(JceSecurity::verifyingProviders)->remove(p);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				$nc(JceSecurity::verificationResults)->put(pKey, o);
				if (JceSecurity::debug != nullptr) {
					$nc(JceSecurity::debug)->println($$str({"Provider "_s, $($nc(p)->getName()), " verification result: "_s, o}));
				}
			}
		}
	}
	return ($equals(o, JceSecurity::PROVIDER_VERIFIED) ? ($Exception*)nullptr : $cast($Exception, o));
}

bool JceSecurity::canUseProvider($Provider* p) {
	$init(JceSecurity);
	return getVerificationResult(p) == nullptr;
}

$URL* JceSecurity::getCodeBase($Class* clazz) {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(JceSecurity::codeBaseCacheRef) {
		$var($URL, url, $cast($URL, $nc(JceSecurity::codeBaseCacheRef)->get(clazz)));
		if (url == nullptr) {
			$assign(url, $cast($URL, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JceSecurity$2, clazz)))));
			$nc(JceSecurity::codeBaseCacheRef)->put(clazz, url);
		}
		return (url == JceSecurity::NULL_URL) ? ($URL*)nullptr : url;
	}
}

void JceSecurity::setupJurisdictionPolicies() {
	$init(JceSecurity);
	$useLocalCurrentObjectStackCache();
	$var($String, cryptoPolicyProperty, $Security::getProperty("crypto.policy"_s));
	if (cryptoPolicyProperty == nullptr) {
		$assign(cryptoPolicyProperty, "unlimited"_s);
		if (JceSecurity::debug != nullptr) {
			$nc(JceSecurity::debug)->println($$str({"Security Property \'crypto.policy\' not found: using \'"_s, cryptoPolicyProperty, "\' as fallback"_s}));
		}
	}
	$var($Path, cpPath, $Paths::get(cryptoPolicyProperty, $$new($StringArray, 0)));
	bool var$0 = ($nc(cpPath)->getNameCount() != 1);
	if (var$0 || ($nc(cpPath)->compareTo($(cpPath->getFileName())) != 0)) {
		$throwNew($SecurityException, $$str({"Invalid policy directory name format: "_s, cryptoPolicyProperty}));
	}
	$var($String, javaHomeProperty, $StaticProperty::javaHome());
	$var($Path, javaHomePolicyPath, $nc($($Paths::get(javaHomeProperty, $$new($StringArray, {
		"conf"_s,
		"security"_s,
		"policy"_s
	}))))->normalize());
	$var($Path, cryptoPolicyPath, $nc($($Paths::get(javaHomeProperty, $$new($StringArray, {
		"conf"_s,
		"security"_s,
		"policy"_s,
		cryptoPolicyProperty
	}))))->normalize());
	if ($nc($($nc(cryptoPolicyPath)->getParent()))->compareTo(javaHomePolicyPath) != 0) {
		$throwNew($SecurityException, $$str({"Invalid cryptographic jurisdiction policy directory path: "_s, cryptoPolicyProperty}));
	}
	bool var$1 = !$Files::isDirectory(cryptoPolicyPath, $$new($LinkOptionArray, 0));
	if (var$1 || !$Files::isReadable(cryptoPolicyPath)) {
		$throwNew($SecurityException, $$str({"Can\'t read cryptographic policy directory: "_s, cryptoPolicyProperty}));
	}
	try {
		$var($DirectoryStream, stream, $Files::newDirectoryStream(cryptoPolicyPath, "{default,exempt}_*.policy"_s));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					{
						$var($Iterator, i$, $nc(stream)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Path, entry, $cast($Path, i$->next()));
							{
								try {
									$var($InputStream, is, $new($BufferedInputStream, $($Files::newInputStream(entry, $$new($OpenOptionArray, 0)))));
									{
										$var($Throwable, var$3, nullptr);
										try {
											try {
												$var($String, filename, $nc($($nc(entry)->getFileName()))->toString());
												$var($CryptoPermissions, tmpPerms, $new($CryptoPermissions));
												tmpPerms->load(is);
												if ($nc(filename)->startsWith("default_"_s)) {
													$assignStatic(JceSecurity::defaultPolicy, (JceSecurity::defaultPolicy == nullptr) ? tmpPerms : $nc(JceSecurity::defaultPolicy)->getMinimum(tmpPerms));
												} else if (filename->startsWith("exempt_"_s)) {
													$assignStatic(JceSecurity::exemptPolicy, (JceSecurity::exemptPolicy == nullptr) ? tmpPerms : $nc(JceSecurity::exemptPolicy)->getMinimum(tmpPerms));
												} else {
													$throwNew($SecurityException, $$str({"Unexpected jurisdiction policy files in : "_s, cryptoPolicyProperty}));
												}
											} catch ($Throwable&) {
												$var($Throwable, t$, $catch());
												try {
													is->close();
												} catch ($Throwable&) {
													$var($Throwable, x2, $catch());
													t$->addSuppressed(x2);
												}
												$throw(t$);
											}
										} catch ($Throwable&) {
											$assign(var$3, $catch());
										} /*finally*/ {
											is->close();
										}
										if (var$3 != nullptr) {
											$throw(var$3);
										}
									}
								} catch ($Exception&) {
									$var($Exception, e, $catch());
									$throwNew($SecurityException, $$str({"Couldn\'t parse jurisdiction policy files in: "_s, cryptoPolicyProperty}));
								}
							}
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (stream != nullptr) {
						try {
							stream->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				if (stream != nullptr) {
					stream->close();
				}
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} catch ($DirectoryIteratorException&) {
		$var($DirectoryIteratorException, ex, $catch());
		$throwNew($SecurityException, $$str({"Couldn\'t iterate through the jurisdiction policy files: "_s, cryptoPolicyProperty}));
	}
	if ((JceSecurity::defaultPolicy == nullptr) || $nc(JceSecurity::defaultPolicy)->isEmpty()) {
		$throwNew($SecurityException, $$str({"Missing mandatory jurisdiction policy files: "_s, cryptoPolicyProperty}));
	}
	if ((JceSecurity::exemptPolicy != nullptr) && $nc(JceSecurity::exemptPolicy)->isEmpty()) {
		$assignStatic(JceSecurity::exemptPolicy, nullptr);
	}
}

$CryptoPermissions* JceSecurity::getDefaultPolicy() {
	$init(JceSecurity);
	return JceSecurity::defaultPolicy;
}

$CryptoPermissions* JceSecurity::getExemptPolicy() {
	$init(JceSecurity);
	return JceSecurity::exemptPolicy;
}

bool JceSecurity::isRestricted() {
	$init(JceSecurity);
	return JceSecurity::isRestricted$;
}

void clinit$JceSecurity($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(JceSecurity::debug, $Debug::getInstance("jca"_s));
	$assignStatic(JceSecurity::defaultPolicy, nullptr);
	$assignStatic(JceSecurity::exemptPolicy, nullptr);
	$assignStatic(JceSecurity::verificationResults, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$assignStatic(JceSecurity::verifyingProviders, $new($IdentityHashMap));
	{
		try {
			$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($JceSecurity$1)));
			$init($CryptoAllPermission);
			JceSecurity::isRestricted$ = $nc(JceSecurity::defaultPolicy)->implies($CryptoAllPermission::INSTANCE) ? false : true;
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($SecurityException, "Can not initialize cryptographic mechanism"_s, e);
		}
	}
	$init($Boolean);
	$assignStatic(JceSecurity::PROVIDER_VERIFIED, $Boolean::TRUE);
	{
		try {
			$assignStatic(JceSecurity::NULL_URL, $new($URL, "http://null.oracle.com/"_s));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
	$assignStatic(JceSecurity::codeBaseCacheRef, $new($WeakHashMap));
}

JceSecurity::JceSecurity() {
}

$Class* JceSecurity::load$($String* name, bool initialize) {
	$loadClass(JceSecurity, name, initialize, &_JceSecurity_ClassInfo_, clinit$JceSecurity, allocate$JceSecurity);
	return class$;
}

$Class* JceSecurity::class$ = nullptr;

	} // crypto
} // javax