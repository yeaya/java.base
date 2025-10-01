#ifndef _java_security_SecureClassLoader_h_
#define _java_security_SecureClassLoader_h_
//$ class java.security.SecureClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class PermissionCollection;
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace security {

class $export SecureClassLoader : public ::java::lang::ClassLoader {
	$class(SecureClassLoader, $PRELOAD, ::java::lang::ClassLoader)
public:
	SecureClassLoader();
	using ::java::lang::ClassLoader::defineClass;
	void init$(::java::lang::ClassLoader* parent);
	void init$();
	void init$($String* name, ::java::lang::ClassLoader* parent);
	$Class* defineClass($String* name, $bytes* b, int32_t off, int32_t len, ::java::security::CodeSource* cs);
	$Class* defineClass($String* name, ::java::nio::ByteBuffer* b, ::java::security::CodeSource* cs);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource);
	::java::security::ProtectionDomain* getProtectionDomain(::java::security::CodeSource* cs);
	void resetArchivedStates();
	::java::util::Map* pdcache = nullptr;
};

	} // security
} // java

#endif // _java_security_SecureClassLoader_h_