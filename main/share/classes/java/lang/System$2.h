#ifndef _java_lang_System$2_h_
#define _java_lang_System$2_h_
//$ class java.lang.System$2
//$ extends jdk.internal.access.JavaLangAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaLangAccess.h>

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

namespace java {
	namespace lang {

class System$2 : public ::jdk::internal::access::JavaLangAccess {
	$class(System$2, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaLangAccess)
public:
	System$2();
	void init$();
	virtual ::java::lang::Module* addEnableNativeAccess(::java::lang::Module* m) override;
	virtual void addEnableNativeAccessAllUnnamed() override;
	virtual void addExports(::java::lang::Module* m, $String* pn) override;
	virtual void addExports(::java::lang::Module* m, $String* pn, ::java::lang::Module* other) override;
	virtual void addExportsToAllUnnamed(::java::lang::Module* m, $String* pn) override;
	virtual void addNonExportedPackages(::java::lang::ModuleLayer* layer) override;
	virtual void addOpens(::java::lang::Module* m, $String* pn, ::java::lang::Module* other) override;
	virtual void addOpensToAllUnnamed(::java::lang::Module* m, $String* pn) override;
	virtual void addOpensToAllUnnamed(::java::lang::Module* m, ::java::util::Set* concealedPackages, ::java::util::Set* exportedPackages) override;
	virtual void addReads(::java::lang::Module* m1, ::java::lang::Module* m2) override;
	virtual void addReadsAllUnnamed(::java::lang::Module* m) override;
	virtual void addUses(::java::lang::Module* m, $Class* service) override;
	virtual void bindToLoader(::java::lang::ModuleLayer* layer, ::java::lang::ClassLoader* loader) override;
	virtual void blockedOn(::sun::nio::ch::Interruptible* b) override;
	virtual bool casAnnotationType($Class* klass, ::sun::reflect::annotation::AnnotationType* oldType, ::sun::reflect::annotation::AnnotationType* newType) override;
	virtual $Object* classData($Class* c) override;
	virtual ::java::util::concurrent::ConcurrentHashMap* createOrGetClassLoaderValueMap(::java::lang::ClassLoader* cl) override;
	virtual int32_t decodeASCII($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) override;
	virtual $Class* defineClass(::java::lang::ClassLoader* loader, $String* name, $bytes* b, ::java::security::ProtectionDomain* pd, $String* source) override;
	virtual $Class* defineClass(::java::lang::ClassLoader* loader, $Class* lookup, $String* name, $bytes* b, ::java::security::ProtectionDomain* pd, bool initialize, int32_t flags, Object$* classData) override;
	virtual ::java::lang::Module* defineModule(::java::lang::ClassLoader* loader, ::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* uri) override;
	virtual ::java::lang::Package* definePackage(::java::lang::ClassLoader* cl, $String* name, ::java::lang::Module* module) override;
	virtual ::java::lang::Module* defineUnnamedModule(::java::lang::ClassLoader* loader) override;
	virtual void exit(int32_t statusCode) override;
	virtual $String* fastUUID(int64_t lsb, int64_t msb) override;
	virtual $Class* findBootstrapClassOrNull($String* name) override;
	virtual int64_t findNative(::java::lang::ClassLoader* loader, $String* entry) override;
	virtual ::sun::reflect::annotation::AnnotationType* getAnnotationType($Class* klass) override;
	virtual $bytes* getBytesNoRepl($String* s, ::java::nio::charset::Charset* cs) override;
	virtual $bytes* getBytesUTF8NoRepl($String* s) override;
	virtual ::jdk::internal::reflect::ConstantPool* getConstantPool($Class* klass) override;
	virtual ::java::util::Map* getDeclaredAnnotationMap($Class* klass) override;
	virtual ::java::util::List* getDeclaredPublicMethods($Class* klass, $String* name, $ClassArray* parameterTypes) override;
	virtual $Array<::java::lang::Enum>* getEnumConstantsShared($Class* klass) override;
	virtual $bytes* getRawClassAnnotations($Class* klass) override;
	virtual $bytes* getRawClassTypeAnnotations($Class* klass) override;
	virtual $bytes* getRawExecutableTypeAnnotations(::java::lang::reflect::Executable* executable) override;
	virtual ::jdk::internal::module::ServicesCatalog* getServicesCatalog(::java::lang::ModuleLayer* layer) override;
	virtual void inflateBytesToChars($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) override;
	virtual void invalidatePackageAccessCache() override;
	virtual void invokeFinalize(Object$* o) override;
	virtual bool isEnableNativeAccess(::java::lang::Module* m) override;
	virtual bool isReflectivelyExported(::java::lang::Module* m, $String* pn, ::java::lang::Module* other) override;
	virtual bool isReflectivelyOpened(::java::lang::Module* m, $String* pn, ::java::lang::Module* other) override;
	virtual $String* join($String* prefix, $String* suffix, $String* delimiter, $StringArray* elements, int32_t size) override;
	virtual ::java::util::stream::Stream* layers(::java::lang::ModuleLayer* layer) override;
	virtual ::java::util::stream::Stream* layers(::java::lang::ClassLoader* loader) override;
	virtual $String* newStringNoRepl($bytes* bytes, ::java::nio::charset::Charset* cs) override;
	virtual $String* newStringUTF8NoRepl($bytes* bytes, int32_t off, int32_t len) override;
	virtual $Thread* newThreadWithAcc(::java::lang::Runnable* target, ::java::security::AccessControlContext* acc) override;
	virtual ::java::security::ProtectionDomain* protectionDomain($Class* c) override;
	virtual void registerShutdownHook(int32_t slot, bool registerShutdownInProgress, ::java::lang::Runnable* hook) override;
	virtual void setCause($Throwable* t, $Throwable* cause) override;
	virtual ::java::lang::invoke::MethodHandle* stringConcatHelper($String* name, ::java::lang::invoke::MethodType* methodType) override;
	virtual int64_t stringConcatInitialCoder() override;
	virtual int64_t stringConcatMix(int64_t lengthCoder, $String* constant) override;
};

	} // lang
} // java

#endif // _java_lang_System$2_h_