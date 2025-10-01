#ifndef _jdk_internal_access_SharedSecrets_h_
#define _jdk_internal_access_SharedSecrets_h_
//$ class jdk.internal.access.SharedSecrets
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaAWTAccess;
			class JavaAWTFontAccess;
			class JavaBeansAccess;
			class JavaIOAccess;
			class JavaIOFileDescriptorAccess;
			class JavaIOFilePermissionAccess;
			class JavaIORandomAccessFileAccess;
			class JavaLangAccess;
			class JavaLangInvokeAccess;
			class JavaLangModuleAccess;
			class JavaLangRefAccess;
			class JavaLangReflectAccess;
			class JavaNetHttpCookieAccess;
			class JavaNetInetAddressAccess;
			class JavaNetURLAccess;
			class JavaNetUriAccess;
			class JavaNioAccess;
			class JavaObjectInputFilterAccess;
			class JavaObjectInputStreamAccess;
			class JavaObjectInputStreamReadString;
			class JavaSecurityAccess;
			class JavaSecuritySignatureAccess;
			class JavaSecuritySpecAccess;
			class JavaUtilCollectionAccess;
			class JavaUtilJarAccess;
			class JavaUtilResourceBundleAccess;
			class JavaUtilZipFileAccess;
			class JavaxCryptoSealedObjectAccess;
			class JavaxCryptoSpecAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export SharedSecrets : public ::java::lang::Object {
	$class(SharedSecrets, $PRELOAD, ::java::lang::Object)
public:
	SharedSecrets();
	void init$();
	static void ensureClassInitialized($Class* c);
	static ::jdk::internal::access::JavaAWTAccess* getJavaAWTAccess();
	static ::jdk::internal::access::JavaAWTFontAccess* getJavaAWTFontAccess();
	static ::jdk::internal::access::JavaBeansAccess* getJavaBeansAccess();
	static ::jdk::internal::access::JavaIOAccess* getJavaIOAccess();
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* getJavaIOFileDescriptorAccess();
	static ::jdk::internal::access::JavaIOFilePermissionAccess* getJavaIOFilePermissionAccess();
	static ::jdk::internal::access::JavaIORandomAccessFileAccess* getJavaIORandomAccessFileAccess();
	static ::jdk::internal::access::JavaLangAccess* getJavaLangAccess();
	static ::jdk::internal::access::JavaLangInvokeAccess* getJavaLangInvokeAccess();
	static ::jdk::internal::access::JavaLangModuleAccess* getJavaLangModuleAccess();
	static ::jdk::internal::access::JavaLangRefAccess* getJavaLangRefAccess();
	static ::jdk::internal::access::JavaLangReflectAccess* getJavaLangReflectAccess();
	static ::jdk::internal::access::JavaNetHttpCookieAccess* getJavaNetHttpCookieAccess();
	static ::jdk::internal::access::JavaNetInetAddressAccess* getJavaNetInetAddressAccess();
	static ::jdk::internal::access::JavaNetURLAccess* getJavaNetURLAccess();
	static ::jdk::internal::access::JavaNetUriAccess* getJavaNetUriAccess();
	static ::jdk::internal::access::JavaNioAccess* getJavaNioAccess();
	static ::jdk::internal::access::JavaObjectInputFilterAccess* getJavaObjectInputFilterAccess();
	static ::jdk::internal::access::JavaObjectInputStreamAccess* getJavaObjectInputStreamAccess();
	static ::jdk::internal::access::JavaObjectInputStreamReadString* getJavaObjectInputStreamReadString();
	static ::jdk::internal::access::JavaSecurityAccess* getJavaSecurityAccess();
	static ::jdk::internal::access::JavaSecuritySignatureAccess* getJavaSecuritySignatureAccess();
	static ::jdk::internal::access::JavaSecuritySpecAccess* getJavaSecuritySpecAccess();
	static ::jdk::internal::access::JavaUtilCollectionAccess* getJavaUtilCollectionAccess();
	static ::jdk::internal::access::JavaUtilResourceBundleAccess* getJavaUtilResourceBundleAccess();
	static ::jdk::internal::access::JavaUtilZipFileAccess* getJavaUtilZipFileAccess();
	static ::jdk::internal::access::JavaxCryptoSealedObjectAccess* getJavaxCryptoSealedObjectAccess();
	static ::jdk::internal::access::JavaxCryptoSpecAccess* getJavaxCryptoSpecAccess();
	static ::jdk::internal::access::JavaUtilJarAccess* javaUtilJarAccess();
	static void setJavaAWTAccess(::jdk::internal::access::JavaAWTAccess* jaa);
	static void setJavaAWTFontAccess(::jdk::internal::access::JavaAWTFontAccess* jafa);
	static void setJavaBeansAccess(::jdk::internal::access::JavaBeansAccess* access);
	static void setJavaIOAccess(::jdk::internal::access::JavaIOAccess* jia);
	static void setJavaIOFileDescriptorAccess(::jdk::internal::access::JavaIOFileDescriptorAccess* jiofda);
	static void setJavaIOFilePermissionAccess(::jdk::internal::access::JavaIOFilePermissionAccess* jiofpa);
	static void setJavaIORandomAccessFileAccess(::jdk::internal::access::JavaIORandomAccessFileAccess* jirafa);
	static void setJavaLangAccess(::jdk::internal::access::JavaLangAccess* jla);
	static void setJavaLangInvokeAccess(::jdk::internal::access::JavaLangInvokeAccess* jlia);
	static void setJavaLangModuleAccess(::jdk::internal::access::JavaLangModuleAccess* jlrma);
	static void setJavaLangRefAccess(::jdk::internal::access::JavaLangRefAccess* jlra);
	static void setJavaLangReflectAccess(::jdk::internal::access::JavaLangReflectAccess* jlra);
	static void setJavaNetHttpCookieAccess(::jdk::internal::access::JavaNetHttpCookieAccess* a);
	static void setJavaNetInetAddressAccess(::jdk::internal::access::JavaNetInetAddressAccess* jna);
	static void setJavaNetURLAccess(::jdk::internal::access::JavaNetURLAccess* jnua);
	static void setJavaNetUriAccess(::jdk::internal::access::JavaNetUriAccess* jnua);
	static void setJavaNioAccess(::jdk::internal::access::JavaNioAccess* jna);
	static void setJavaObjectInputFilterAccess(::jdk::internal::access::JavaObjectInputFilterAccess* access);
	static void setJavaObjectInputStreamAccess(::jdk::internal::access::JavaObjectInputStreamAccess* access);
	static void setJavaObjectInputStreamReadString(::jdk::internal::access::JavaObjectInputStreamReadString* access);
	static void setJavaSecurityAccess(::jdk::internal::access::JavaSecurityAccess* jsa);
	static void setJavaSecuritySignatureAccess(::jdk::internal::access::JavaSecuritySignatureAccess* jssa);
	static void setJavaSecuritySpecAccess(::jdk::internal::access::JavaSecuritySpecAccess* jssa);
	static void setJavaUtilCollectionAccess(::jdk::internal::access::JavaUtilCollectionAccess* juca);
	static void setJavaUtilJarAccess(::jdk::internal::access::JavaUtilJarAccess* access);
	static void setJavaUtilResourceBundleAccess(::jdk::internal::access::JavaUtilResourceBundleAccess* access);
	static void setJavaUtilZipFileAccess(::jdk::internal::access::JavaUtilZipFileAccess* access);
	static void setJavaxCryptoSealedObjectAccess(::jdk::internal::access::JavaxCryptoSealedObjectAccess* jcsoa);
	static void setJavaxCryptoSpecAccess(::jdk::internal::access::JavaxCryptoSpecAccess* jcsa);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static ::jdk::internal::access::JavaAWTAccess* javaAWTAccess;
	static ::jdk::internal::access::JavaAWTFontAccess* javaAWTFontAccess;
	static ::jdk::internal::access::JavaBeansAccess* javaBeansAccess;
	static ::jdk::internal::access::JavaLangAccess* javaLangAccess;
	static ::jdk::internal::access::JavaLangInvokeAccess* javaLangInvokeAccess;
	static ::jdk::internal::access::JavaLangModuleAccess* javaLangModuleAccess;
	static ::jdk::internal::access::JavaLangRefAccess* javaLangRefAccess;
	static ::jdk::internal::access::JavaLangReflectAccess* javaLangReflectAccess;
	static ::jdk::internal::access::JavaIOAccess* javaIOAccess;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* javaIOFileDescriptorAccess;
	static ::jdk::internal::access::JavaIOFilePermissionAccess* javaIOFilePermissionAccess;
	static ::jdk::internal::access::JavaIORandomAccessFileAccess* javaIORandomAccessFileAccess;
	static ::jdk::internal::access::JavaObjectInputStreamReadString* javaObjectInputStreamReadString;
	static ::jdk::internal::access::JavaObjectInputStreamAccess* javaObjectInputStreamAccess;
	static ::jdk::internal::access::JavaObjectInputFilterAccess* javaObjectInputFilterAccess;
	static ::jdk::internal::access::JavaNetInetAddressAccess* javaNetInetAddressAccess;
	static ::jdk::internal::access::JavaNetHttpCookieAccess* javaNetHttpCookieAccess;
	static ::jdk::internal::access::JavaNetUriAccess* javaNetUriAccess;
	static ::jdk::internal::access::JavaNetURLAccess* javaNetURLAccess;
	static ::jdk::internal::access::JavaNioAccess* javaNioAccess;
	static ::jdk::internal::access::JavaUtilCollectionAccess* javaUtilCollectionAccess;
	static ::jdk::internal::access::JavaUtilJarAccess* javaUtilJarAccess$;
	static ::jdk::internal::access::JavaUtilZipFileAccess* javaUtilZipFileAccess;
	static ::jdk::internal::access::JavaUtilResourceBundleAccess* javaUtilResourceBundleAccess;
	static ::jdk::internal::access::JavaSecurityAccess* javaSecurityAccess;
	static ::jdk::internal::access::JavaSecuritySignatureAccess* javaSecuritySignatureAccess;
	static ::jdk::internal::access::JavaSecuritySpecAccess* javaSecuritySpecAccess;
	static ::jdk::internal::access::JavaxCryptoSealedObjectAccess* javaxCryptoSealedObjectAccess;
	static ::jdk::internal::access::JavaxCryptoSpecAccess* javaxCryptoSpecAccess;
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_SharedSecrets_h_