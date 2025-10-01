#ifndef _java_lang_ClassLoader_h_
#define _java_lang_ClassLoader_h_
//$ class java.lang.ClassLoader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class AssertionStatusDirectives;
		class Module;
		class NamedPackage;
		class Package;
		class Void;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class ProtectionDomain;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Enumeration;
		class Map;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class NativeLibraries;
			class NativeLibrary;
		}
	}
}

namespace java {
	namespace lang {

class $import ClassLoader : public ::java::lang::Object {
	$class(ClassLoader, $PRELOAD, ::java::lang::Object)
public:
	ClassLoader();
	void init$(::java::lang::Void* unused, $String* name, ::java::lang::ClassLoader* parent);
	void init$($String* name, ::java::lang::ClassLoader* parent);
	void init$(::java::lang::ClassLoader* parent);
	void init$();
	virtual void addClass($Class* c);
	void checkCerts($String* name, ::java::security::CodeSource* cs);
	static void checkClassLoaderPermission(::java::lang::ClassLoader* cl, $Class* caller);
	static ::java::lang::Void* checkCreateClassLoader();
	static ::java::lang::Void* checkCreateClassLoader($String* name);
	static bool checkName($String* name);
	void checkPackageAccess($Class* cls, ::java::security::ProtectionDomain* pd);
	virtual void clearAssertionStatus();
	bool compareCerts($Array<::java::security::cert::Certificate>* pcerts, $Array<::java::security::cert::Certificate>* certs);
	virtual ::java::util::concurrent::ConcurrentHashMap* createOrGetClassLoaderValueMap();
	$Class* defineClass($bytes* b, int32_t off, int32_t len);
	$Class* defineClass($String* name, $bytes* b, int32_t off, int32_t len);
	$Class* defineClass($String* name, $bytes* b, int32_t off, int32_t len, ::java::security::ProtectionDomain* protectionDomain);
	$Class* defineClass($String* name, ::java::nio::ByteBuffer* b, ::java::security::ProtectionDomain* protectionDomain);
	static $Class* defineClass0(::java::lang::ClassLoader* loader, $Class* lookup, $String* name, $bytes* b, int32_t off, int32_t len, ::java::security::ProtectionDomain* pd, bool initialize, int32_t flags, Object$* classData);
	static $Class* defineClass1(::java::lang::ClassLoader* loader, $String* name, $bytes* b, int32_t off, int32_t len, ::java::security::ProtectionDomain* pd, $String* source);
	static $Class* defineClass2(::java::lang::ClassLoader* loader, $String* name, ::java::nio::ByteBuffer* b, int32_t off, int32_t len, ::java::security::ProtectionDomain* pd, $String* source);
	$String* defineClassSourceLocation(::java::security::ProtectionDomain* pd);
	virtual ::java::lang::Package* definePackage($Class* c);
	virtual ::java::lang::Package* definePackage($String* name, ::java::lang::Module* m);
	virtual ::java::lang::Package* definePackage($String* name, $String* specTitle, $String* specVersion, $String* specVendor, $String* implTitle, $String* implVersion, $String* implVendor, ::java::net::URL* sealBase);
	virtual bool desiredAssertionStatus($String* className);
	static $Class* findBootstrapClass($String* name);
	static $Class* findBootstrapClassOrNull($String* name);
	virtual $Class* findClass($String* name);
	virtual $Class* findClass($String* moduleName, $String* name);
	virtual $String* findLibrary($String* libname);
	$Class* findLoadedClass($String* name);
	$Class* findLoadedClass0($String* name);
	static int64_t findNative(::java::lang::ClassLoader* loader, $String* entryName);
	virtual ::java::net::URL* findResource($String* moduleName, $String* name);
	virtual ::java::net::URL* findResource($String* name);
	virtual ::java::util::Enumeration* findResources($String* name);
	$Class* findSystemClass($String* name);
	static ::java::lang::ClassLoader* getBuiltinAppClassLoader();
	static ::java::lang::ClassLoader* getBuiltinPlatformClassLoader();
	static ::java::lang::ClassLoader* getClassLoader($Class* caller);
	virtual $Object* getClassLoadingLock($String* className);
	::java::lang::Package* getDefinedPackage($String* name);
	$Array<::java::lang::Package>* getDefinedPackages();
	virtual $String* getName();
	::java::lang::NamedPackage* getNamedPackage($String* pn, ::java::lang::Module* m);
	virtual ::java::lang::Package* getPackage($String* name);
	virtual $Array<::java::lang::Package>* getPackages();
	::java::lang::ClassLoader* getParent();
	static ::java::lang::ClassLoader* getPlatformClassLoader();
	virtual ::java::net::URL* getResource($String* name);
	virtual ::java::io::InputStream* getResourceAsStream($String* name);
	virtual ::java::util::Enumeration* getResources($String* name);
	static ::java::lang::ClassLoader* getSystemClassLoader();
	static ::java::net::URL* getSystemResource($String* name);
	static ::java::io::InputStream* getSystemResourceAsStream($String* name);
	static ::java::util::Enumeration* getSystemResources($String* name);
	::java::lang::Module* getUnnamedModule();
	static ::java::lang::ClassLoader* initSystemClassLoader();
	void initializeJavaAssertionMaps();
	virtual bool isAncestor(::java::lang::ClassLoader* cl);
	bool isRegisteredAsParallelCapable();
	::java::lang::NamedPackage* lambda$definePackage$1(::java::lang::Module* m, $String* n, ::java::lang::NamedPackage* p);
	static $Array<::java::lang::Package>* lambda$getDefinedPackages$2(int32_t x$0);
	::java::lang::Package* lambda$packages$4(::java::lang::NamedPackage* p);
	::java::util::Spliterator* lambda$resources$0($String* name, int32_t characteristics);
	virtual $Class* loadClass($String* name);
	virtual $Class* loadClass($String* name, bool resolve);
	$Class* loadClass(::java::lang::Module* module, $String* name);
	static ::jdk::internal::loader::NativeLibrary* loadLibrary($Class* fromClass, ::java::io::File* file);
	static ::jdk::internal::loader::NativeLibrary* loadLibrary($Class* fromClass, $String* name);
	$String* name();
	static $String* nameAndId(::java::lang::ClassLoader* ld);
	static bool needsClassLoaderPermissionCheck(::java::lang::ClassLoader* from, ::java::lang::ClassLoader* to);
	virtual ::java::util::stream::Stream* packages();
	void postDefineClass($Class* c, ::java::security::ProtectionDomain* pd);
	::java::security::ProtectionDomain* preDefineClass($String* name, ::java::security::ProtectionDomain* pd);
	static bool registerAsParallelCapable();
	static void registerNatives();
	void resetArchivedStates();
	void resolveClass($Class* c);
	virtual ::java::util::stream::Stream* resources($String* name);
	static ::java::lang::AssertionStatusDirectives* retrieveDirectives();
	virtual void setClassAssertionStatus($String* className, bool enabled);
	virtual void setDefaultAssertionStatus(bool enabled);
	virtual void setPackageAssertionStatus($String* packageName, bool enabled);
	void setSigners($Class* c, $ObjectArray* signers);
	::java::lang::Package* toPackage($String* name, ::java::lang::NamedPackage* p, ::java::lang::Module* m);
	bool trySetObjectField($String* name, Object$* obj);
	static bool $assertionsDisabled;
	::java::lang::ClassLoader* parent = nullptr;
	$String* name$ = nullptr;
	::java::lang::Module* unnamedModule = nullptr;
	$String* nameAndId$ = nullptr;
	::java::util::concurrent::ConcurrentHashMap* parallelLockMap = nullptr;
	::java::util::concurrent::ConcurrentHashMap* package2certs = nullptr;
	static $Array<::java::security::cert::Certificate>* nocerts;
	::java::util::ArrayList* classes = nullptr;
	::java::security::ProtectionDomain* defaultDomain = nullptr;
	::java::util::concurrent::ConcurrentHashMap* packages$ = nullptr;
	static $volatile(::java::lang::ClassLoader*) scl;
	::jdk::internal::loader::NativeLibraries* libraries = nullptr;
	$Object* assertionLock = nullptr;
	bool defaultAssertionStatus = false;
	::java::util::Map* packageAssertionStatus = nullptr;
	::java::util::Map* classAssertionStatus = nullptr;
	$volatile(::java::util::concurrent::ConcurrentHashMap*) classLoaderValueMap = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ClassLoader_h_