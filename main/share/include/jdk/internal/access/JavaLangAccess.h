#ifndef _jdk_internal_access_JavaLangAccess_h_
#define _jdk_internal_access_JavaLangAccess_h_
//$ interface jdk.internal.access.JavaLangAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Enum;
		class Module;
		class ModuleLayer;
		class Package;
		class Runnable;
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Executable;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
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
		namespace module {
			class ServicesCatalog;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Interruptible;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class AnnotationType;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaLangAccess : public ::java::lang::Object {
	$interface(JavaLangAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Module* addEnableNativeAccess(::java::lang::Module* m) {return nullptr;}
	virtual void addEnableNativeAccessAllUnnamed() {}
	virtual void addExports(::java::lang::Module* m1, $String* pkg) {}
	virtual void addExports(::java::lang::Module* m1, $String* pkg, ::java::lang::Module* m2) {}
	virtual void addExportsToAllUnnamed(::java::lang::Module* m, $String* pkg) {}
	virtual void addNonExportedPackages(::java::lang::ModuleLayer* layer) {}
	virtual void addOpens(::java::lang::Module* m1, $String* pkg, ::java::lang::Module* m2) {}
	virtual void addOpensToAllUnnamed(::java::lang::Module* m, $String* pkg) {}
	virtual void addOpensToAllUnnamed(::java::lang::Module* m, ::java::util::Set* concealedPkgs, ::java::util::Set* exportedPkgs) {}
	virtual void addReads(::java::lang::Module* m1, ::java::lang::Module* m2) {}
	virtual void addReadsAllUnnamed(::java::lang::Module* m) {}
	virtual void addUses(::java::lang::Module* m, $Class* service) {}
	virtual void bindToLoader(::java::lang::ModuleLayer* layer, ::java::lang::ClassLoader* loader) {}
	virtual void blockedOn(::sun::nio::ch::Interruptible* b) {}
	virtual bool casAnnotationType($Class* klass, ::sun::reflect::annotation::AnnotationType* oldType, ::sun::reflect::annotation::AnnotationType* newType) {return false;}
	virtual $Object* classData($Class* c) {return nullptr;}
	virtual ::java::util::concurrent::ConcurrentHashMap* createOrGetClassLoaderValueMap(::java::lang::ClassLoader* cl) {return nullptr;}
	virtual int32_t decodeASCII($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) {return 0;}
	virtual $Class* defineClass(::java::lang::ClassLoader* cl, $String* name, $bytes* b, ::java::security::ProtectionDomain* pd, $String* source) {return nullptr;}
	virtual $Class* defineClass(::java::lang::ClassLoader* cl, $Class* lookup, $String* name, $bytes* b, ::java::security::ProtectionDomain* pd, bool initialize, int32_t flags, Object$* classData) {return nullptr;}
	virtual ::java::lang::Module* defineModule(::java::lang::ClassLoader* loader, ::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* uri) {return nullptr;}
	virtual ::java::lang::Package* definePackage(::java::lang::ClassLoader* cl, $String* name, ::java::lang::Module* module) {return nullptr;}
	virtual ::java::lang::Module* defineUnnamedModule(::java::lang::ClassLoader* loader) {return nullptr;}
	virtual void exit(int32_t statusCode) {}
	virtual $String* fastUUID(int64_t lsb, int64_t msb) {return nullptr;}
	virtual $Class* findBootstrapClassOrNull($String* name) {return nullptr;}
	virtual int64_t findNative(::java::lang::ClassLoader* loader, $String* entry) {return 0;}
	virtual ::sun::reflect::annotation::AnnotationType* getAnnotationType($Class* klass) {return nullptr;}
	virtual $bytes* getBytesNoRepl($String* s, ::java::nio::charset::Charset* cs) {return nullptr;}
	virtual $bytes* getBytesUTF8NoRepl($String* s) {return nullptr;}
	virtual ::jdk::internal::reflect::ConstantPool* getConstantPool($Class* klass) {return nullptr;}
	virtual ::java::util::Map* getDeclaredAnnotationMap($Class* klass) {return nullptr;}
	virtual ::java::util::List* getDeclaredPublicMethods($Class* klass, $String* name, $ClassArray* parameterTypes) {return nullptr;}
	virtual $Array<::java::lang::Enum>* getEnumConstantsShared($Class* klass) {return nullptr;}
	virtual $bytes* getRawClassAnnotations($Class* klass) {return nullptr;}
	virtual $bytes* getRawClassTypeAnnotations($Class* klass) {return nullptr;}
	virtual $bytes* getRawExecutableTypeAnnotations(::java::lang::reflect::Executable* executable) {return nullptr;}
	virtual ::jdk::internal::module::ServicesCatalog* getServicesCatalog(::java::lang::ModuleLayer* layer) {return nullptr;}
	virtual void inflateBytesToChars($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) {}
	virtual void invalidatePackageAccessCache() {}
	virtual void invokeFinalize(Object$* o) {}
	virtual bool isEnableNativeAccess(::java::lang::Module* m) {return false;}
	virtual bool isReflectivelyExported(::java::lang::Module* module, $String* pn, ::java::lang::Module* other) {return false;}
	virtual bool isReflectivelyOpened(::java::lang::Module* module, $String* pn, ::java::lang::Module* other) {return false;}
	virtual $String* join($String* prefix, $String* suffix, $String* delimiter, $StringArray* elements, int32_t size) {return nullptr;}
	virtual ::java::util::stream::Stream* layers(::java::lang::ModuleLayer* layer) {return nullptr;}
	virtual ::java::util::stream::Stream* layers(::java::lang::ClassLoader* loader) {return nullptr;}
	virtual $String* newStringNoRepl($bytes* bytes, ::java::nio::charset::Charset* cs) {return nullptr;}
	virtual $String* newStringUTF8NoRepl($bytes* bytes, int32_t off, int32_t len) {return nullptr;}
	virtual $Thread* newThreadWithAcc(::java::lang::Runnable* target, ::java::security::AccessControlContext* acc) {return nullptr;}
	virtual ::java::security::ProtectionDomain* protectionDomain($Class* c) {return nullptr;}
	virtual void registerShutdownHook(int32_t slot, bool registerShutdownInProgress, ::java::lang::Runnable* hook) {}
	virtual void setCause($Throwable* t, $Throwable* cause) {}
	virtual ::java::lang::invoke::MethodHandle* stringConcatHelper($String* name, ::java::lang::invoke::MethodType* methodType) {return nullptr;}
	virtual int64_t stringConcatInitialCoder() {return 0;}
	virtual int64_t stringConcatMix(int64_t lengthCoder, $String* constant) {return 0;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaLangAccess_h_