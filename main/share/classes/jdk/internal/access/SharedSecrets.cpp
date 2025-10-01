#include <jdk/internal/access/SharedSecrets.h>

#include <java/io/Console.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FilePermission.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/HttpCookie.h>
#include <java/net/InetAddress.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/Buffer.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/Signature.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <java/util/ResourceBundle.h>
#include <java/util/jar/JarFile.h>
#include <java/util/zip/ZipFile.h>
#include <javax/crypto/SealedObject.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jdk/internal/access/JavaAWTAccess.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jdk/internal/access/JavaBeansAccess.h>
#include <jdk/internal/access/JavaIOAccess.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/JavaIOFilePermissionAccess.h>
#include <jdk/internal/access/JavaIORandomAccessFileAccess.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/JavaLangInvokeAccess.h>
#include <jdk/internal/access/JavaLangModuleAccess.h>
#include <jdk/internal/access/JavaLangRefAccess.h>
#include <jdk/internal/access/JavaLangReflectAccess.h>
#include <jdk/internal/access/JavaNetHttpCookieAccess.h>
#include <jdk/internal/access/JavaNetInetAddressAccess.h>
#include <jdk/internal/access/JavaNetURLAccess.h>
#include <jdk/internal/access/JavaNetUriAccess.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/JavaObjectInputFilterAccess.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/JavaObjectInputStreamReadString.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/JavaSecuritySignatureAccess.h>
#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <jdk/internal/access/JavaUtilCollectionAccess.h>
#include <jdk/internal/access/JavaUtilJarAccess.h>
#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <jdk/internal/access/JavaUtilZipFileAccess.h>
#include <jdk/internal/access/JavaxCryptoSealedObjectAccess.h>
#include <jdk/internal/access/JavaxCryptoSpecAccess.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FilePermission = ::java::io::FilePermission;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $HttpCookie = ::java::net::HttpCookie;
using $InetAddress = ::java::net::InetAddress;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $Buffer = ::java::nio::Buffer;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Signature = ::java::security::Signature;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;
using $ResourceBundle = ::java::util::ResourceBundle;
using $JarFile = ::java::util::jar::JarFile;
using $ZipFile = ::java::util::zip::ZipFile;
using $SealedObject = ::javax::crypto::SealedObject;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $JavaAWTAccess = ::jdk::internal::access::JavaAWTAccess;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;
using $JavaBeansAccess = ::jdk::internal::access::JavaBeansAccess;
using $JavaIOAccess = ::jdk::internal::access::JavaIOAccess;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $JavaIOFilePermissionAccess = ::jdk::internal::access::JavaIOFilePermissionAccess;
using $JavaIORandomAccessFileAccess = ::jdk::internal::access::JavaIORandomAccessFileAccess;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $JavaLangInvokeAccess = ::jdk::internal::access::JavaLangInvokeAccess;
using $JavaLangModuleAccess = ::jdk::internal::access::JavaLangModuleAccess;
using $JavaLangRefAccess = ::jdk::internal::access::JavaLangRefAccess;
using $JavaLangReflectAccess = ::jdk::internal::access::JavaLangReflectAccess;
using $JavaNetHttpCookieAccess = ::jdk::internal::access::JavaNetHttpCookieAccess;
using $JavaNetInetAddressAccess = ::jdk::internal::access::JavaNetInetAddressAccess;
using $JavaNetURLAccess = ::jdk::internal::access::JavaNetURLAccess;
using $JavaNetUriAccess = ::jdk::internal::access::JavaNetUriAccess;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $JavaObjectInputFilterAccess = ::jdk::internal::access::JavaObjectInputFilterAccess;
using $JavaObjectInputStreamAccess = ::jdk::internal::access::JavaObjectInputStreamAccess;
using $JavaObjectInputStreamReadString = ::jdk::internal::access::JavaObjectInputStreamReadString;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $JavaSecuritySignatureAccess = ::jdk::internal::access::JavaSecuritySignatureAccess;
using $JavaSecuritySpecAccess = ::jdk::internal::access::JavaSecuritySpecAccess;
using $JavaUtilCollectionAccess = ::jdk::internal::access::JavaUtilCollectionAccess;
using $JavaUtilJarAccess = ::jdk::internal::access::JavaUtilJarAccess;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;
using $JavaUtilZipFileAccess = ::jdk::internal::access::JavaUtilZipFileAccess;
using $JavaxCryptoSealedObjectAccess = ::jdk::internal::access::JavaxCryptoSealedObjectAccess;
using $JavaxCryptoSpecAccess = ::jdk::internal::access::JavaxCryptoSpecAccess;

namespace jdk {
	namespace internal {
		namespace access {

$FieldInfo _SharedSecrets_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SharedSecrets, lookup)},
	{"javaAWTAccess", "Ljdk/internal/access/JavaAWTAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaAWTAccess)},
	{"javaAWTFontAccess", "Ljdk/internal/access/JavaAWTFontAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaAWTFontAccess)},
	{"javaBeansAccess", "Ljdk/internal/access/JavaBeansAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaBeansAccess)},
	{"javaLangAccess", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaLangAccess)},
	{"javaLangInvokeAccess", "Ljdk/internal/access/JavaLangInvokeAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaLangInvokeAccess)},
	{"javaLangModuleAccess", "Ljdk/internal/access/JavaLangModuleAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaLangModuleAccess)},
	{"javaLangRefAccess", "Ljdk/internal/access/JavaLangRefAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaLangRefAccess)},
	{"javaLangReflectAccess", "Ljdk/internal/access/JavaLangReflectAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaLangReflectAccess)},
	{"javaIOAccess", "Ljdk/internal/access/JavaIOAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaIOAccess)},
	{"javaIOFileDescriptorAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaIOFileDescriptorAccess)},
	{"javaIOFilePermissionAccess", "Ljdk/internal/access/JavaIOFilePermissionAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaIOFilePermissionAccess)},
	{"javaIORandomAccessFileAccess", "Ljdk/internal/access/JavaIORandomAccessFileAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaIORandomAccessFileAccess)},
	{"javaObjectInputStreamReadString", "Ljdk/internal/access/JavaObjectInputStreamReadString;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaObjectInputStreamReadString)},
	{"javaObjectInputStreamAccess", "Ljdk/internal/access/JavaObjectInputStreamAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaObjectInputStreamAccess)},
	{"javaObjectInputFilterAccess", "Ljdk/internal/access/JavaObjectInputFilterAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaObjectInputFilterAccess)},
	{"javaNetInetAddressAccess", "Ljdk/internal/access/JavaNetInetAddressAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaNetInetAddressAccess)},
	{"javaNetHttpCookieAccess", "Ljdk/internal/access/JavaNetHttpCookieAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaNetHttpCookieAccess)},
	{"javaNetUriAccess", "Ljdk/internal/access/JavaNetUriAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaNetUriAccess)},
	{"javaNetURLAccess", "Ljdk/internal/access/JavaNetURLAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaNetURLAccess)},
	{"javaNioAccess", "Ljdk/internal/access/JavaNioAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaNioAccess)},
	{"javaUtilCollectionAccess", "Ljdk/internal/access/JavaUtilCollectionAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaUtilCollectionAccess)},
	{"javaUtilJarAccess", "Ljdk/internal/access/JavaUtilJarAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaUtilJarAccess$)},
	{"javaUtilZipFileAccess", "Ljdk/internal/access/JavaUtilZipFileAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaUtilZipFileAccess)},
	{"javaUtilResourceBundleAccess", "Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaUtilResourceBundleAccess)},
	{"javaSecurityAccess", "Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaSecurityAccess)},
	{"javaSecuritySignatureAccess", "Ljdk/internal/access/JavaSecuritySignatureAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaSecuritySignatureAccess)},
	{"javaSecuritySpecAccess", "Ljdk/internal/access/JavaSecuritySpecAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaSecuritySpecAccess)},
	{"javaxCryptoSealedObjectAccess", "Ljdk/internal/access/JavaxCryptoSealedObjectAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaxCryptoSealedObjectAccess)},
	{"javaxCryptoSpecAccess", "Ljdk/internal/access/JavaxCryptoSpecAccess;", nullptr, $PRIVATE | $STATIC, $staticField(SharedSecrets, javaxCryptoSpecAccess)},
	{}
};

$MethodInfo _SharedSecrets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SharedSecrets::*)()>(&SharedSecrets::init$))},
	{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&SharedSecrets::ensureClassInitialized))},
	{"getJavaAWTAccess", "()Ljdk/internal/access/JavaAWTAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaAWTAccess*(*)()>(&SharedSecrets::getJavaAWTAccess))},
	{"getJavaAWTFontAccess", "()Ljdk/internal/access/JavaAWTFontAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaAWTFontAccess*(*)()>(&SharedSecrets::getJavaAWTFontAccess))},
	{"getJavaBeansAccess", "()Ljdk/internal/access/JavaBeansAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaBeansAccess*(*)()>(&SharedSecrets::getJavaBeansAccess))},
	{"getJavaIOAccess", "()Ljdk/internal/access/JavaIOAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaIOAccess*(*)()>(&SharedSecrets::getJavaIOAccess))},
	{"getJavaIOFileDescriptorAccess", "()Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaIOFileDescriptorAccess*(*)()>(&SharedSecrets::getJavaIOFileDescriptorAccess))},
	{"getJavaIOFilePermissionAccess", "()Ljdk/internal/access/JavaIOFilePermissionAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaIOFilePermissionAccess*(*)()>(&SharedSecrets::getJavaIOFilePermissionAccess))},
	{"getJavaIORandomAccessFileAccess", "()Ljdk/internal/access/JavaIORandomAccessFileAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaIORandomAccessFileAccess*(*)()>(&SharedSecrets::getJavaIORandomAccessFileAccess))},
	{"getJavaLangAccess", "()Ljdk/internal/access/JavaLangAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaLangAccess*(*)()>(&SharedSecrets::getJavaLangAccess))},
	{"getJavaLangInvokeAccess", "()Ljdk/internal/access/JavaLangInvokeAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaLangInvokeAccess*(*)()>(&SharedSecrets::getJavaLangInvokeAccess))},
	{"getJavaLangModuleAccess", "()Ljdk/internal/access/JavaLangModuleAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaLangModuleAccess*(*)()>(&SharedSecrets::getJavaLangModuleAccess))},
	{"getJavaLangRefAccess", "()Ljdk/internal/access/JavaLangRefAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaLangRefAccess*(*)()>(&SharedSecrets::getJavaLangRefAccess))},
	{"getJavaLangReflectAccess", "()Ljdk/internal/access/JavaLangReflectAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaLangReflectAccess*(*)()>(&SharedSecrets::getJavaLangReflectAccess))},
	{"getJavaNetHttpCookieAccess", "()Ljdk/internal/access/JavaNetHttpCookieAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaNetHttpCookieAccess*(*)()>(&SharedSecrets::getJavaNetHttpCookieAccess))},
	{"getJavaNetInetAddressAccess", "()Ljdk/internal/access/JavaNetInetAddressAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaNetInetAddressAccess*(*)()>(&SharedSecrets::getJavaNetInetAddressAccess))},
	{"getJavaNetURLAccess", "()Ljdk/internal/access/JavaNetURLAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaNetURLAccess*(*)()>(&SharedSecrets::getJavaNetURLAccess))},
	{"getJavaNetUriAccess", "()Ljdk/internal/access/JavaNetUriAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaNetUriAccess*(*)()>(&SharedSecrets::getJavaNetUriAccess))},
	{"getJavaNioAccess", "()Ljdk/internal/access/JavaNioAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaNioAccess*(*)()>(&SharedSecrets::getJavaNioAccess))},
	{"getJavaObjectInputFilterAccess", "()Ljdk/internal/access/JavaObjectInputFilterAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaObjectInputFilterAccess*(*)()>(&SharedSecrets::getJavaObjectInputFilterAccess))},
	{"getJavaObjectInputStreamAccess", "()Ljdk/internal/access/JavaObjectInputStreamAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaObjectInputStreamAccess*(*)()>(&SharedSecrets::getJavaObjectInputStreamAccess))},
	{"getJavaObjectInputStreamReadString", "()Ljdk/internal/access/JavaObjectInputStreamReadString;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaObjectInputStreamReadString*(*)()>(&SharedSecrets::getJavaObjectInputStreamReadString))},
	{"getJavaSecurityAccess", "()Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaSecurityAccess*(*)()>(&SharedSecrets::getJavaSecurityAccess))},
	{"getJavaSecuritySignatureAccess", "()Ljdk/internal/access/JavaSecuritySignatureAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaSecuritySignatureAccess*(*)()>(&SharedSecrets::getJavaSecuritySignatureAccess))},
	{"getJavaSecuritySpecAccess", "()Ljdk/internal/access/JavaSecuritySpecAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaSecuritySpecAccess*(*)()>(&SharedSecrets::getJavaSecuritySpecAccess))},
	{"getJavaUtilCollectionAccess", "()Ljdk/internal/access/JavaUtilCollectionAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaUtilCollectionAccess*(*)()>(&SharedSecrets::getJavaUtilCollectionAccess))},
	{"getJavaUtilResourceBundleAccess", "()Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaUtilResourceBundleAccess*(*)()>(&SharedSecrets::getJavaUtilResourceBundleAccess))},
	{"getJavaUtilZipFileAccess", "()Ljdk/internal/access/JavaUtilZipFileAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaUtilZipFileAccess*(*)()>(&SharedSecrets::getJavaUtilZipFileAccess))},
	{"getJavaxCryptoSealedObjectAccess", "()Ljdk/internal/access/JavaxCryptoSealedObjectAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaxCryptoSealedObjectAccess*(*)()>(&SharedSecrets::getJavaxCryptoSealedObjectAccess))},
	{"getJavaxCryptoSpecAccess", "()Ljdk/internal/access/JavaxCryptoSpecAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaxCryptoSpecAccess*(*)()>(&SharedSecrets::getJavaxCryptoSpecAccess))},
	{"javaUtilJarAccess", "()Ljdk/internal/access/JavaUtilJarAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaUtilJarAccess*(*)()>(&SharedSecrets::javaUtilJarAccess))},
	{"setJavaAWTAccess", "(Ljdk/internal/access/JavaAWTAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaAWTAccess*)>(&SharedSecrets::setJavaAWTAccess))},
	{"setJavaAWTFontAccess", "(Ljdk/internal/access/JavaAWTFontAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaAWTFontAccess*)>(&SharedSecrets::setJavaAWTFontAccess))},
	{"setJavaBeansAccess", "(Ljdk/internal/access/JavaBeansAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaBeansAccess*)>(&SharedSecrets::setJavaBeansAccess))},
	{"setJavaIOAccess", "(Ljdk/internal/access/JavaIOAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaIOAccess*)>(&SharedSecrets::setJavaIOAccess))},
	{"setJavaIOFileDescriptorAccess", "(Ljdk/internal/access/JavaIOFileDescriptorAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaIOFileDescriptorAccess*)>(&SharedSecrets::setJavaIOFileDescriptorAccess))},
	{"setJavaIOFilePermissionAccess", "(Ljdk/internal/access/JavaIOFilePermissionAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaIOFilePermissionAccess*)>(&SharedSecrets::setJavaIOFilePermissionAccess))},
	{"setJavaIORandomAccessFileAccess", "(Ljdk/internal/access/JavaIORandomAccessFileAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaIORandomAccessFileAccess*)>(&SharedSecrets::setJavaIORandomAccessFileAccess))},
	{"setJavaLangAccess", "(Ljdk/internal/access/JavaLangAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaLangAccess*)>(&SharedSecrets::setJavaLangAccess))},
	{"setJavaLangInvokeAccess", "(Ljdk/internal/access/JavaLangInvokeAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaLangInvokeAccess*)>(&SharedSecrets::setJavaLangInvokeAccess))},
	{"setJavaLangModuleAccess", "(Ljdk/internal/access/JavaLangModuleAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaLangModuleAccess*)>(&SharedSecrets::setJavaLangModuleAccess))},
	{"setJavaLangRefAccess", "(Ljdk/internal/access/JavaLangRefAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaLangRefAccess*)>(&SharedSecrets::setJavaLangRefAccess))},
	{"setJavaLangReflectAccess", "(Ljdk/internal/access/JavaLangReflectAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaLangReflectAccess*)>(&SharedSecrets::setJavaLangReflectAccess))},
	{"setJavaNetHttpCookieAccess", "(Ljdk/internal/access/JavaNetHttpCookieAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaNetHttpCookieAccess*)>(&SharedSecrets::setJavaNetHttpCookieAccess))},
	{"setJavaNetInetAddressAccess", "(Ljdk/internal/access/JavaNetInetAddressAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaNetInetAddressAccess*)>(&SharedSecrets::setJavaNetInetAddressAccess))},
	{"setJavaNetURLAccess", "(Ljdk/internal/access/JavaNetURLAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaNetURLAccess*)>(&SharedSecrets::setJavaNetURLAccess))},
	{"setJavaNetUriAccess", "(Ljdk/internal/access/JavaNetUriAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaNetUriAccess*)>(&SharedSecrets::setJavaNetUriAccess))},
	{"setJavaNioAccess", "(Ljdk/internal/access/JavaNioAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaNioAccess*)>(&SharedSecrets::setJavaNioAccess))},
	{"setJavaObjectInputFilterAccess", "(Ljdk/internal/access/JavaObjectInputFilterAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaObjectInputFilterAccess*)>(&SharedSecrets::setJavaObjectInputFilterAccess))},
	{"setJavaObjectInputStreamAccess", "(Ljdk/internal/access/JavaObjectInputStreamAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaObjectInputStreamAccess*)>(&SharedSecrets::setJavaObjectInputStreamAccess))},
	{"setJavaObjectInputStreamReadString", "(Ljdk/internal/access/JavaObjectInputStreamReadString;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaObjectInputStreamReadString*)>(&SharedSecrets::setJavaObjectInputStreamReadString))},
	{"setJavaSecurityAccess", "(Ljdk/internal/access/JavaSecurityAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaSecurityAccess*)>(&SharedSecrets::setJavaSecurityAccess))},
	{"setJavaSecuritySignatureAccess", "(Ljdk/internal/access/JavaSecuritySignatureAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaSecuritySignatureAccess*)>(&SharedSecrets::setJavaSecuritySignatureAccess))},
	{"setJavaSecuritySpecAccess", "(Ljdk/internal/access/JavaSecuritySpecAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaSecuritySpecAccess*)>(&SharedSecrets::setJavaSecuritySpecAccess))},
	{"setJavaUtilCollectionAccess", "(Ljdk/internal/access/JavaUtilCollectionAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaUtilCollectionAccess*)>(&SharedSecrets::setJavaUtilCollectionAccess))},
	{"setJavaUtilJarAccess", "(Ljdk/internal/access/JavaUtilJarAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaUtilJarAccess*)>(&SharedSecrets::setJavaUtilJarAccess))},
	{"setJavaUtilResourceBundleAccess", "(Ljdk/internal/access/JavaUtilResourceBundleAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaUtilResourceBundleAccess*)>(&SharedSecrets::setJavaUtilResourceBundleAccess))},
	{"setJavaUtilZipFileAccess", "(Ljdk/internal/access/JavaUtilZipFileAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaUtilZipFileAccess*)>(&SharedSecrets::setJavaUtilZipFileAccess))},
	{"setJavaxCryptoSealedObjectAccess", "(Ljdk/internal/access/JavaxCryptoSealedObjectAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaxCryptoSealedObjectAccess*)>(&SharedSecrets::setJavaxCryptoSealedObjectAccess))},
	{"setJavaxCryptoSpecAccess", "(Ljdk/internal/access/JavaxCryptoSpecAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JavaxCryptoSpecAccess*)>(&SharedSecrets::setJavaxCryptoSpecAccess))},
	{}
};

$ClassInfo _SharedSecrets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.access.SharedSecrets",
	"java.lang.Object",
	nullptr,
	_SharedSecrets_FieldInfo_,
	_SharedSecrets_MethodInfo_
};

$Object* allocate$SharedSecrets($Class* clazz) {
	return $of($alloc(SharedSecrets));
}

$MethodHandles$Lookup* SharedSecrets::lookup = nullptr;
$JavaAWTAccess* SharedSecrets::javaAWTAccess = nullptr;
$JavaAWTFontAccess* SharedSecrets::javaAWTFontAccess = nullptr;
$JavaBeansAccess* SharedSecrets::javaBeansAccess = nullptr;
$JavaLangAccess* SharedSecrets::javaLangAccess = nullptr;
$JavaLangInvokeAccess* SharedSecrets::javaLangInvokeAccess = nullptr;
$JavaLangModuleAccess* SharedSecrets::javaLangModuleAccess = nullptr;
$JavaLangRefAccess* SharedSecrets::javaLangRefAccess = nullptr;
$JavaLangReflectAccess* SharedSecrets::javaLangReflectAccess = nullptr;
$JavaIOAccess* SharedSecrets::javaIOAccess = nullptr;
$JavaIOFileDescriptorAccess* SharedSecrets::javaIOFileDescriptorAccess = nullptr;
$JavaIOFilePermissionAccess* SharedSecrets::javaIOFilePermissionAccess = nullptr;
$JavaIORandomAccessFileAccess* SharedSecrets::javaIORandomAccessFileAccess = nullptr;
$JavaObjectInputStreamReadString* SharedSecrets::javaObjectInputStreamReadString = nullptr;
$JavaObjectInputStreamAccess* SharedSecrets::javaObjectInputStreamAccess = nullptr;
$JavaObjectInputFilterAccess* SharedSecrets::javaObjectInputFilterAccess = nullptr;
$JavaNetInetAddressAccess* SharedSecrets::javaNetInetAddressAccess = nullptr;
$JavaNetHttpCookieAccess* SharedSecrets::javaNetHttpCookieAccess = nullptr;
$JavaNetUriAccess* SharedSecrets::javaNetUriAccess = nullptr;
$JavaNetURLAccess* SharedSecrets::javaNetURLAccess = nullptr;
$JavaNioAccess* SharedSecrets::javaNioAccess = nullptr;
$JavaUtilCollectionAccess* SharedSecrets::javaUtilCollectionAccess = nullptr;
$JavaUtilJarAccess* SharedSecrets::javaUtilJarAccess$ = nullptr;
$JavaUtilZipFileAccess* SharedSecrets::javaUtilZipFileAccess = nullptr;
$JavaUtilResourceBundleAccess* SharedSecrets::javaUtilResourceBundleAccess = nullptr;
$JavaSecurityAccess* SharedSecrets::javaSecurityAccess = nullptr;
$JavaSecuritySignatureAccess* SharedSecrets::javaSecuritySignatureAccess = nullptr;
$JavaSecuritySpecAccess* SharedSecrets::javaSecuritySpecAccess = nullptr;
$JavaxCryptoSealedObjectAccess* SharedSecrets::javaxCryptoSealedObjectAccess = nullptr;
$JavaxCryptoSpecAccess* SharedSecrets::javaxCryptoSpecAccess = nullptr;

void SharedSecrets::init$() {
}

void SharedSecrets::setJavaUtilCollectionAccess($JavaUtilCollectionAccess* juca) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaUtilCollectionAccess, juca);
}

$JavaUtilCollectionAccess* SharedSecrets::getJavaUtilCollectionAccess() {
	$init(SharedSecrets);
	$beforeCallerSensitive();
	$var($JavaUtilCollectionAccess, access, SharedSecrets::javaUtilCollectionAccess);
	if (access == nullptr) {
		try {
			$Class::forName("java.util.ImmutableCollections$Access"_s, true, nullptr);
			$assign(access, SharedSecrets::javaUtilCollectionAccess);
		} catch ($ClassNotFoundException&) {
			$catch();
		}
	}
	return access;
}

$JavaUtilJarAccess* SharedSecrets::javaUtilJarAccess() {
	$init(SharedSecrets);
	$var($JavaUtilJarAccess, access, SharedSecrets::javaUtilJarAccess$);
	if (access == nullptr) {
		$load($JarFile);
		ensureClassInitialized($JarFile::class$);
		$assign(access, SharedSecrets::javaUtilJarAccess$);
	}
	return access;
}

void SharedSecrets::setJavaUtilJarAccess($JavaUtilJarAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaUtilJarAccess$, access);
}

void SharedSecrets::setJavaLangAccess($JavaLangAccess* jla) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaLangAccess, jla);
}

$JavaLangAccess* SharedSecrets::getJavaLangAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaLangAccess;
}

void SharedSecrets::setJavaLangInvokeAccess($JavaLangInvokeAccess* jlia) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaLangInvokeAccess, jlia);
}

$JavaLangInvokeAccess* SharedSecrets::getJavaLangInvokeAccess() {
	$init(SharedSecrets);
	$beforeCallerSensitive();
	$var($JavaLangInvokeAccess, access, SharedSecrets::javaLangInvokeAccess);
	if (access == nullptr) {
		try {
			$Class::forName("java.lang.invoke.MethodHandleImpl"_s, true, nullptr);
			$assign(access, SharedSecrets::javaLangInvokeAccess);
		} catch ($ClassNotFoundException&) {
			$catch();
		}
	}
	return access;
}

void SharedSecrets::setJavaLangModuleAccess($JavaLangModuleAccess* jlrma) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaLangModuleAccess, jlrma);
}

$JavaLangModuleAccess* SharedSecrets::getJavaLangModuleAccess() {
	$init(SharedSecrets);
	$var($JavaLangModuleAccess, access, SharedSecrets::javaLangModuleAccess);
	if (access == nullptr) {
		$load($ModuleDescriptor);
		ensureClassInitialized($ModuleDescriptor::class$);
		$assign(access, SharedSecrets::javaLangModuleAccess);
	}
	return access;
}

void SharedSecrets::setJavaLangRefAccess($JavaLangRefAccess* jlra) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaLangRefAccess, jlra);
}

$JavaLangRefAccess* SharedSecrets::getJavaLangRefAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaLangRefAccess;
}

void SharedSecrets::setJavaLangReflectAccess($JavaLangReflectAccess* jlra) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaLangReflectAccess, jlra);
}

$JavaLangReflectAccess* SharedSecrets::getJavaLangReflectAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaLangReflectAccess;
}

void SharedSecrets::setJavaNetUriAccess($JavaNetUriAccess* jnua) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaNetUriAccess, jnua);
}

$JavaNetUriAccess* SharedSecrets::getJavaNetUriAccess() {
	$init(SharedSecrets);
	$var($JavaNetUriAccess, access, SharedSecrets::javaNetUriAccess);
	if (access == nullptr) {
		$load($URI);
		ensureClassInitialized($URI::class$);
		$assign(access, SharedSecrets::javaNetUriAccess);
	}
	return access;
}

void SharedSecrets::setJavaNetURLAccess($JavaNetURLAccess* jnua) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaNetURLAccess, jnua);
}

$JavaNetURLAccess* SharedSecrets::getJavaNetURLAccess() {
	$init(SharedSecrets);
	$var($JavaNetURLAccess, access, SharedSecrets::javaNetURLAccess);
	if (access == nullptr) {
		$load($URL);
		ensureClassInitialized($URL::class$);
		$assign(access, SharedSecrets::javaNetURLAccess);
	}
	return access;
}

void SharedSecrets::setJavaNetInetAddressAccess($JavaNetInetAddressAccess* jna) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaNetInetAddressAccess, jna);
}

$JavaNetInetAddressAccess* SharedSecrets::getJavaNetInetAddressAccess() {
	$init(SharedSecrets);
	$var($JavaNetInetAddressAccess, access, SharedSecrets::javaNetInetAddressAccess);
	if (access == nullptr) {
		$load($InetAddress);
		ensureClassInitialized($InetAddress::class$);
		$assign(access, SharedSecrets::javaNetInetAddressAccess);
	}
	return access;
}

void SharedSecrets::setJavaNetHttpCookieAccess($JavaNetHttpCookieAccess* a) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaNetHttpCookieAccess, a);
}

$JavaNetHttpCookieAccess* SharedSecrets::getJavaNetHttpCookieAccess() {
	$init(SharedSecrets);
	$var($JavaNetHttpCookieAccess, access, SharedSecrets::javaNetHttpCookieAccess);
	if (access == nullptr) {
		$load($HttpCookie);
		ensureClassInitialized($HttpCookie::class$);
		$assign(access, SharedSecrets::javaNetHttpCookieAccess);
	}
	return access;
}

void SharedSecrets::setJavaNioAccess($JavaNioAccess* jna) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaNioAccess, jna);
}

$JavaNioAccess* SharedSecrets::getJavaNioAccess() {
	$init(SharedSecrets);
	$var($JavaNioAccess, access, SharedSecrets::javaNioAccess);
	if (access == nullptr) {
		$load($Buffer);
		ensureClassInitialized($Buffer::class$);
		$assign(access, SharedSecrets::javaNioAccess);
	}
	return access;
}

void SharedSecrets::setJavaIOAccess($JavaIOAccess* jia) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaIOAccess, jia);
}

$JavaIOAccess* SharedSecrets::getJavaIOAccess() {
	$init(SharedSecrets);
	$var($JavaIOAccess, access, SharedSecrets::javaIOAccess);
	if (access == nullptr) {
		$load($Console);
		ensureClassInitialized($Console::class$);
		$assign(access, SharedSecrets::javaIOAccess);
	}
	return access;
}

void SharedSecrets::setJavaIOFileDescriptorAccess($JavaIOFileDescriptorAccess* jiofda) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaIOFileDescriptorAccess, jiofda);
}

$JavaIOFilePermissionAccess* SharedSecrets::getJavaIOFilePermissionAccess() {
	$init(SharedSecrets);
	$var($JavaIOFilePermissionAccess, access, SharedSecrets::javaIOFilePermissionAccess);
	if (access == nullptr) {
		$load($FilePermission);
		ensureClassInitialized($FilePermission::class$);
		$assign(access, SharedSecrets::javaIOFilePermissionAccess);
	}
	return access;
}

void SharedSecrets::setJavaIOFilePermissionAccess($JavaIOFilePermissionAccess* jiofpa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaIOFilePermissionAccess, jiofpa);
}

$JavaIOFileDescriptorAccess* SharedSecrets::getJavaIOFileDescriptorAccess() {
	$init(SharedSecrets);
	$var($JavaIOFileDescriptorAccess, access, SharedSecrets::javaIOFileDescriptorAccess);
	if (access == nullptr) {
		$load($FileDescriptor);
		ensureClassInitialized($FileDescriptor::class$);
		$assign(access, SharedSecrets::javaIOFileDescriptorAccess);
	}
	return access;
}

void SharedSecrets::setJavaSecurityAccess($JavaSecurityAccess* jsa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaSecurityAccess, jsa);
}

$JavaSecurityAccess* SharedSecrets::getJavaSecurityAccess() {
	$init(SharedSecrets);
	$var($JavaSecurityAccess, access, SharedSecrets::javaSecurityAccess);
	if (access == nullptr) {
		$load($ProtectionDomain);
		ensureClassInitialized($ProtectionDomain::class$);
		$assign(access, SharedSecrets::javaSecurityAccess);
	}
	return access;
}

$JavaUtilZipFileAccess* SharedSecrets::getJavaUtilZipFileAccess() {
	$init(SharedSecrets);
	$var($JavaUtilZipFileAccess, access, SharedSecrets::javaUtilZipFileAccess);
	if (access == nullptr) {
		$load($ZipFile);
		ensureClassInitialized($ZipFile::class$);
		$assign(access, SharedSecrets::javaUtilZipFileAccess);
	}
	return access;
}

void SharedSecrets::setJavaUtilZipFileAccess($JavaUtilZipFileAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaUtilZipFileAccess, access);
}

void SharedSecrets::setJavaAWTAccess($JavaAWTAccess* jaa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaAWTAccess, jaa);
}

$JavaAWTAccess* SharedSecrets::getJavaAWTAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaAWTAccess;
}

void SharedSecrets::setJavaAWTFontAccess($JavaAWTFontAccess* jafa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaAWTFontAccess, jafa);
}

$JavaAWTFontAccess* SharedSecrets::getJavaAWTFontAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaAWTFontAccess;
}

$JavaBeansAccess* SharedSecrets::getJavaBeansAccess() {
	$init(SharedSecrets);
	return SharedSecrets::javaBeansAccess;
}

void SharedSecrets::setJavaBeansAccess($JavaBeansAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaBeansAccess, access);
}

$JavaUtilResourceBundleAccess* SharedSecrets::getJavaUtilResourceBundleAccess() {
	$init(SharedSecrets);
	$var($JavaUtilResourceBundleAccess, access, SharedSecrets::javaUtilResourceBundleAccess);
	if (access == nullptr) {
		$load($ResourceBundle);
		ensureClassInitialized($ResourceBundle::class$);
		$assign(access, SharedSecrets::javaUtilResourceBundleAccess);
	}
	return access;
}

void SharedSecrets::setJavaUtilResourceBundleAccess($JavaUtilResourceBundleAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaUtilResourceBundleAccess, access);
}

$JavaObjectInputStreamReadString* SharedSecrets::getJavaObjectInputStreamReadString() {
	$init(SharedSecrets);
	$var($JavaObjectInputStreamReadString, access, SharedSecrets::javaObjectInputStreamReadString);
	if (access == nullptr) {
		$load($ObjectInputStream);
		ensureClassInitialized($ObjectInputStream::class$);
		$assign(access, SharedSecrets::javaObjectInputStreamReadString);
	}
	return access;
}

void SharedSecrets::setJavaObjectInputStreamReadString($JavaObjectInputStreamReadString* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaObjectInputStreamReadString, access);
}

$JavaObjectInputStreamAccess* SharedSecrets::getJavaObjectInputStreamAccess() {
	$init(SharedSecrets);
	$var($JavaObjectInputStreamAccess, access, SharedSecrets::javaObjectInputStreamAccess);
	if (access == nullptr) {
		$load($ObjectInputStream);
		ensureClassInitialized($ObjectInputStream::class$);
		$assign(access, SharedSecrets::javaObjectInputStreamAccess);
	}
	return access;
}

void SharedSecrets::setJavaObjectInputStreamAccess($JavaObjectInputStreamAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaObjectInputStreamAccess, access);
}

$JavaObjectInputFilterAccess* SharedSecrets::getJavaObjectInputFilterAccess() {
	$init(SharedSecrets);
	$var($JavaObjectInputFilterAccess, access, SharedSecrets::javaObjectInputFilterAccess);
	if (access == nullptr) {
		$load($ObjectInputFilter$Config);
		ensureClassInitialized($ObjectInputFilter$Config::class$);
		$assign(access, SharedSecrets::javaObjectInputFilterAccess);
	}
	return access;
}

void SharedSecrets::setJavaObjectInputFilterAccess($JavaObjectInputFilterAccess* access) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaObjectInputFilterAccess, access);
}

void SharedSecrets::setJavaIORandomAccessFileAccess($JavaIORandomAccessFileAccess* jirafa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaIORandomAccessFileAccess, jirafa);
}

$JavaIORandomAccessFileAccess* SharedSecrets::getJavaIORandomAccessFileAccess() {
	$init(SharedSecrets);
	$var($JavaIORandomAccessFileAccess, access, SharedSecrets::javaIORandomAccessFileAccess);
	if (access == nullptr) {
		$load($RandomAccessFile);
		ensureClassInitialized($RandomAccessFile::class$);
		$assign(access, SharedSecrets::javaIORandomAccessFileAccess);
	}
	return access;
}

void SharedSecrets::setJavaSecuritySignatureAccess($JavaSecuritySignatureAccess* jssa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaSecuritySignatureAccess, jssa);
}

$JavaSecuritySignatureAccess* SharedSecrets::getJavaSecuritySignatureAccess() {
	$init(SharedSecrets);
	$var($JavaSecuritySignatureAccess, access, SharedSecrets::javaSecuritySignatureAccess);
	if (access == nullptr) {
		$load($Signature);
		ensureClassInitialized($Signature::class$);
		$assign(access, SharedSecrets::javaSecuritySignatureAccess);
	}
	return access;
}

void SharedSecrets::setJavaSecuritySpecAccess($JavaSecuritySpecAccess* jssa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaSecuritySpecAccess, jssa);
}

$JavaSecuritySpecAccess* SharedSecrets::getJavaSecuritySpecAccess() {
	$init(SharedSecrets);
	if (SharedSecrets::javaSecuritySpecAccess == nullptr) {
		$load($EncodedKeySpec);
		ensureClassInitialized($EncodedKeySpec::class$);
	}
	return SharedSecrets::javaSecuritySpecAccess;
}

void SharedSecrets::setJavaxCryptoSpecAccess($JavaxCryptoSpecAccess* jcsa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaxCryptoSpecAccess, jcsa);
}

$JavaxCryptoSpecAccess* SharedSecrets::getJavaxCryptoSpecAccess() {
	$init(SharedSecrets);
	if (SharedSecrets::javaxCryptoSpecAccess == nullptr) {
		$load($SecretKeySpec);
		ensureClassInitialized($SecretKeySpec::class$);
	}
	return SharedSecrets::javaxCryptoSpecAccess;
}

void SharedSecrets::setJavaxCryptoSealedObjectAccess($JavaxCryptoSealedObjectAccess* jcsoa) {
	$init(SharedSecrets);
	$assignStatic(SharedSecrets::javaxCryptoSealedObjectAccess, jcsoa);
}

$JavaxCryptoSealedObjectAccess* SharedSecrets::getJavaxCryptoSealedObjectAccess() {
	$init(SharedSecrets);
	$var($JavaxCryptoSealedObjectAccess, access, SharedSecrets::javaxCryptoSealedObjectAccess);
	if (access == nullptr) {
		$load($SealedObject);
		ensureClassInitialized($SealedObject::class$);
		$assign(access, SharedSecrets::javaxCryptoSealedObjectAccess);
	}
	return access;
}

void SharedSecrets::ensureClassInitialized($Class* c) {
	$init(SharedSecrets);
	$beforeCallerSensitive();
	try {
		$nc($($MethodHandles::lookup()))->ensureInitialized(c);
	} catch ($IllegalAccessException&) {
		$catch();
	}
}

void clinit$SharedSecrets($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(SharedSecrets::lookup, $MethodHandles::lookup());
}

SharedSecrets::SharedSecrets() {
}

$Class* SharedSecrets::load$($String* name, bool initialize) {
	$loadClass(SharedSecrets, name, initialize, &_SharedSecrets_ClassInfo_, clinit$SharedSecrets, allocate$SharedSecrets);
	return class$;
}

$Class* SharedSecrets::class$ = nullptr;

		} // access
	} // internal
} // jdk