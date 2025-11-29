#include <jdk/internal/access/JavaLangAccess.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Enum.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/Package.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangAccess_MethodInfo_[] = {
	{"addEnableNativeAccess", "(Ljava/lang/Module;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT},
	{"addEnableNativeAccessAllUnnamed", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addExportsToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addNonExportedPackages", "(Ljava/lang/ModuleLayer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/util/Set;Ljava/util/Set;)V", "(Ljava/lang/Module;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addReadsAllUnnamed", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addUses", "(Ljava/lang/Module;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT},
	{"bindToLoader", "(Ljava/lang/ModuleLayer;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"blockedOn", "(Lsun/nio/ch/Interruptible;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"casAnnotationType", "(Ljava/lang/Class;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", "(Ljava/lang/Class<*>;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", $PUBLIC | $ABSTRACT},
	{"classData", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT},
	{"createOrGetClassLoaderValueMap", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap;", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap<**>;", $PUBLIC | $ABSTRACT},
	{"decodeASCII", "([BI[CII)I", nullptr, $PUBLIC | $ABSTRACT},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/Class<*>;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"defineModule", "(Ljava/lang/ClassLoader;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT},
	{"definePackage", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Package;", nullptr, $PUBLIC | $ABSTRACT},
	{"defineUnnamedModule", "(Ljava/lang/ClassLoader;)Ljava/lang/Module;", nullptr, $PUBLIC | $ABSTRACT},
	{"exit", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fastUUID", "(JJ)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"findBootstrapClassOrNull", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"findNative", "(Ljava/lang/ClassLoader;Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationType", "(Ljava/lang/Class;)Lsun/reflect/annotation/AnnotationType;", "(Ljava/lang/Class<*>;)Lsun/reflect/annotation/AnnotationType;", $PUBLIC | $ABSTRACT},
	{"getBytesNoRepl", "(Ljava/lang/String;Ljava/nio/charset/Charset;)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.nio.charset.CharacterCodingException"},
	{"getBytesUTF8NoRepl", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstantPool", "(Ljava/lang/Class;)Ljdk/internal/reflect/ConstantPool;", "(Ljava/lang/Class<*>;)Ljdk/internal/reflect/ConstantPool;", $PUBLIC | $ABSTRACT},
	{"getDeclaredAnnotationMap", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PUBLIC | $ABSTRACT},
	{"getDeclaredPublicMethods", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getEnumConstantsShared", "(Ljava/lang/Class;)[Ljava/lang/Enum;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)[TE;", $PUBLIC | $ABSTRACT},
	{"getRawClassAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC | $ABSTRACT},
	{"getRawClassTypeAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC | $ABSTRACT},
	{"getRawExecutableTypeAnnotations", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getServicesCatalog", "(Ljava/lang/ModuleLayer;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC | $ABSTRACT},
	{"inflateBytesToChars", "([BI[CII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"invalidatePackageAccessCache", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"invokeFinalize", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"isEnableNativeAccess", "(Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReflectivelyExported", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReflectivelyOpened", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"join", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"layers", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream;", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC | $ABSTRACT},
	{"layers", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream;", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC | $ABSTRACT},
	{"newStringNoRepl", "([BLjava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.nio.charset.CharacterCodingException"},
	{"newStringUTF8NoRepl", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"newThreadWithAcc", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT},
	{"protectionDomain", "(Ljava/lang/Class;)Ljava/security/ProtectionDomain;", "(Ljava/lang/Class<*>;)Ljava/security/ProtectionDomain;", $PUBLIC | $ABSTRACT},
	{"registerShutdownHook", "(IZLjava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"stringConcatHelper", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"stringConcatInitialCoder", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"stringConcatMix", "(JLjava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT},
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