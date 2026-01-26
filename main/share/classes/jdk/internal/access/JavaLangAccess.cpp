#include <jdk/internal/access/JavaLangAccess.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Enum.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/Package.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Executable.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/security/AccessControlContext.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <sun/nio/ch/Interruptible.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $Package = ::java::lang::Package;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $Executable = ::java::lang::reflect::Executable;
using $URI = ::java::net::URI;
using $Charset = ::java::nio::charset::Charset;
using $AccessControlContext = ::java::security::AccessControlContext;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Stream = ::java::util::stream::Stream;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;
using $Interruptible = ::sun::nio::ch::Interruptible;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangAccess_MethodInfo_[] = {
	{"addEnableNativeAccess", "(Ljava/lang/Module;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addEnableNativeAccess, $Module*, $Module*)},
	{"addEnableNativeAccessAllUnnamed", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addEnableNativeAccessAllUnnamed, void)},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addExports, void, $Module*, $String*)},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addExports, void, $Module*, $String*, $Module*)},
	{"addExportsToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addExportsToAllUnnamed, void, $Module*, $String*)},
	{"addNonExportedPackages", "(Ljava/lang/ModuleLayer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addNonExportedPackages, void, $ModuleLayer*)},
	{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addOpens, void, $Module*, $String*, $Module*)},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addOpensToAllUnnamed, void, $Module*, $String*)},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/util/Set;Ljava/util/Set;)V", "(Ljava/lang/Module;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addOpensToAllUnnamed, void, $Module*, $Set*, $Set*)},
	{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addReads, void, $Module*, $Module*)},
	{"addReadsAllUnnamed", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addReadsAllUnnamed, void, $Module*)},
	{"addUses", "(Ljava/lang/Module;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, addUses, void, $Module*, $Class*)},
	{"bindToLoader", "(Ljava/lang/ModuleLayer;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, bindToLoader, void, $ModuleLayer*, $ClassLoader*)},
	{"blockedOn", "(Lsun/nio/ch/Interruptible;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, blockedOn, void, $Interruptible*)},
	{"casAnnotationType", "(Ljava/lang/Class;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", "(Ljava/lang/Class<*>;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, casAnnotationType, bool, $Class*, $AnnotationType*, $AnnotationType*)},
	{"classData", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, classData, $Object*, $Class*)},
	{"createOrGetClassLoaderValueMap", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap;", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap<**>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, createOrGetClassLoaderValueMap, $ConcurrentHashMap*, $ClassLoader*)},
	{"decodeASCII", "([BI[CII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, decodeASCII, int32_t, $bytes*, int32_t, $chars*, int32_t, int32_t)},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, defineClass, $Class*, $ClassLoader*, $String*, $bytes*, $ProtectionDomain*, $String*)},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/Class<*>;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, defineClass, $Class*, $ClassLoader*, $Class*, $String*, $bytes*, $ProtectionDomain*, bool, int32_t, Object$*)},
	{"defineModule", "(Ljava/lang/ClassLoader;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, defineModule, $Module*, $ClassLoader*, $ModuleDescriptor*, $URI*)},
	{"definePackage", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Package;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, definePackage, $Package*, $ClassLoader*, $String*, $Module*)},
	{"defineUnnamedModule", "(Ljava/lang/ClassLoader;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, defineUnnamedModule, $Module*, $ClassLoader*)},
	{"exit", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, exit, void, int32_t)},
	{"fastUUID", "(JJ)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, fastUUID, $String*, int64_t, int64_t)},
	{"findBootstrapClassOrNull", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, findBootstrapClassOrNull, $Class*, $String*)},
	{"findNative", "(Ljava/lang/ClassLoader;Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, findNative, int64_t, $ClassLoader*, $String*)},
	{"getAnnotationType", "(Ljava/lang/Class;)Lsun/reflect/annotation/AnnotationType;", "(Ljava/lang/Class<*>;)Lsun/reflect/annotation/AnnotationType;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getAnnotationType, $AnnotationType*, $Class*)},
	{"getBytesNoRepl", "(Ljava/lang/String;Ljava/nio/charset/Charset;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getBytesNoRepl, $bytes*, $String*, $Charset*), "java.nio.charset.CharacterCodingException"},
	{"getBytesUTF8NoRepl", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getBytesUTF8NoRepl, $bytes*, $String*)},
	{"getConstantPool", "(Ljava/lang/Class;)Ljdk/internal/reflect/ConstantPool;", "(Ljava/lang/Class<*>;)Ljdk/internal/reflect/ConstantPool;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getConstantPool, $ConstantPool*, $Class*)},
	{"getDeclaredAnnotationMap", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getDeclaredAnnotationMap, $Map*, $Class*)},
	{"getDeclaredPublicMethods", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(JavaLangAccess, getDeclaredPublicMethods, $List*, $Class*, $String*, $ClassArray*)},
	{"getEnumConstantsShared", "(Ljava/lang/Class;)[Ljava/lang/Enum;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)[TE;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getEnumConstantsShared, $EnumArray*, $Class*)},
	{"getRawClassAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getRawClassAnnotations, $bytes*, $Class*)},
	{"getRawClassTypeAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getRawClassTypeAnnotations, $bytes*, $Class*)},
	{"getRawExecutableTypeAnnotations", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getRawExecutableTypeAnnotations, $bytes*, $Executable*)},
	{"getServicesCatalog", "(Ljava/lang/ModuleLayer;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, getServicesCatalog, $ServicesCatalog*, $ModuleLayer*)},
	{"inflateBytesToChars", "([BI[CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, inflateBytesToChars, void, $bytes*, int32_t, $chars*, int32_t, int32_t)},
	{"invalidatePackageAccessCache", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, invalidatePackageAccessCache, void)},
	{"invokeFinalize", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, invokeFinalize, void, Object$*), "java.lang.Throwable"},
	{"isEnableNativeAccess", "(Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, isEnableNativeAccess, bool, $Module*)},
	{"isReflectivelyExported", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, isReflectivelyExported, bool, $Module*, $String*, $Module*)},
	{"isReflectivelyOpened", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, isReflectivelyOpened, bool, $Module*, $String*, $Module*)},
	{"join", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, join, $String*, $String*, $String*, $String*, $StringArray*, int32_t)},
	{"layers", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream;", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, layers, $Stream*, $ModuleLayer*)},
	{"layers", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream;", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, layers, $Stream*, $ClassLoader*)},
	{"newStringNoRepl", "([BLjava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, newStringNoRepl, $String*, $bytes*, $Charset*), "java.nio.charset.CharacterCodingException"},
	{"newStringUTF8NoRepl", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, newStringUTF8NoRepl, $String*, $bytes*, int32_t, int32_t)},
	{"newThreadWithAcc", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, newThreadWithAcc, $Thread*, $Runnable*, $AccessControlContext*)},
	{"protectionDomain", "(Ljava/lang/Class;)Ljava/security/ProtectionDomain;", "(Ljava/lang/Class<*>;)Ljava/security/ProtectionDomain;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, protectionDomain, $ProtectionDomain*, $Class*)},
	{"registerShutdownHook", "(IZLjava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, registerShutdownHook, void, int32_t, bool, $Runnable*)},
	{"setCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, setCause, void, $Throwable*, $Throwable*)},
	{"stringConcatHelper", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, stringConcatHelper, $MethodHandle*, $String*, $MethodType*)},
	{"stringConcatInitialCoder", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, stringConcatInitialCoder, int64_t)},
	{"stringConcatMix", "(JLjava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangAccess, stringConcatMix, int64_t, int64_t, $String*)},
	{}
};

$ClassInfo _JavaLangAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaLangAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaLangAccess_MethodInfo_
};

$Object* allocate$JavaLangAccess($Class* clazz) {
	return $of($alloc(JavaLangAccess));
}

$Class* JavaLangAccess::load$($String* name, bool initialize) {
	$loadClass(JavaLangAccess, name, initialize, &_JavaLangAccess_ClassInfo_, allocate$JavaLangAccess);
	return class$;
}

$Class* JavaLangAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk