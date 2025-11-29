#include <java/lang/System$2.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Enum.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/Package.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Shutdown.h>
#include <java/lang/StringConcatHelper.h>
#include <java/lang/StringLatin1.h>
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
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $Package = ::java::lang::Package;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $Shutdown = ::java::lang::Shutdown;
using $StringConcatHelper = ::java::lang::StringConcatHelper;
using $StringLatin1 = ::java::lang::StringLatin1;
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

namespace java {
	namespace lang {

$MethodInfo _System$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(System$2::*)()>(&System$2::init$))},
	{"addEnableNativeAccess", "(Ljava/lang/Module;)Ljava/lang/Module;", nullptr, $PUBLIC},
	{"addEnableNativeAccessAllUnnamed", "()V", nullptr, $PUBLIC},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC},
	{"addExportsToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addNonExportedPackages", "(Ljava/lang/ModuleLayer;)V", nullptr, $PUBLIC},
	{"addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)V", nullptr, $PUBLIC},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addOpensToAllUnnamed", "(Ljava/lang/Module;Ljava/util/Set;Ljava/util/Set;)V", "(Ljava/lang/Module;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{"addReads", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC},
	{"addReadsAllUnnamed", "(Ljava/lang/Module;)V", nullptr, $PUBLIC},
	{"addUses", "(Ljava/lang/Module;Ljava/lang/Class;)V", "(Ljava/lang/Module;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"bindToLoader", "(Ljava/lang/ModuleLayer;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC},
	{"blockedOn", "(Lsun/nio/ch/Interruptible;)V", nullptr, $PUBLIC},
	{"casAnnotationType", "(Ljava/lang/Class;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", "(Ljava/lang/Class<*>;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", $PUBLIC},
	{"classData", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC},
	{"createOrGetClassLoaderValueMap", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap;", "(Ljava/lang/ClassLoader;)Ljava/util/concurrent/ConcurrentHashMap<**>;", $PUBLIC},
	{"decodeASCII", "([BI[CII)I", nullptr, $PUBLIC},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;[BLjava/security/ProtectionDomain;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC},
	{"defineClass", "(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/Class<*>;Ljava/lang/String;[BLjava/security/ProtectionDomain;ZILjava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC},
	{"defineModule", "(Ljava/lang/ClassLoader;Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;)Ljava/lang/Module;", nullptr, $PUBLIC},
	{"definePackage", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Package;", nullptr, $PUBLIC},
	{"defineUnnamedModule", "(Ljava/lang/ClassLoader;)Ljava/lang/Module;", nullptr, $PUBLIC},
	{"exit", "(I)V", nullptr, $PUBLIC},
	{"fastUUID", "(JJ)Ljava/lang/String;", nullptr, $PUBLIC},
	{"findBootstrapClassOrNull", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC},
	{"findNative", "(Ljava/lang/ClassLoader;Ljava/lang/String;)J", nullptr, $PUBLIC},
	{"getAnnotationType", "(Ljava/lang/Class;)Lsun/reflect/annotation/AnnotationType;", "(Ljava/lang/Class<*>;)Lsun/reflect/annotation/AnnotationType;", $PUBLIC},
	{"getBytesNoRepl", "(Ljava/lang/String;Ljava/nio/charset/Charset;)[B", nullptr, $PUBLIC, nullptr, "java.nio.charset.CharacterCodingException"},
	{"getBytesUTF8NoRepl", "(Ljava/lang/String;)[B", nullptr, $PUBLIC},
	{"getConstantPool", "(Ljava/lang/Class;)Ljdk/internal/reflect/ConstantPool;", "(Ljava/lang/Class<*>;)Ljdk/internal/reflect/ConstantPool;", $PUBLIC},
	{"getDeclaredAnnotationMap", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $PUBLIC},
	{"getDeclaredPublicMethods", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $PUBLIC | $TRANSIENT},
	{"getEnumConstantsShared", "(Ljava/lang/Class;)[Ljava/lang/Enum;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)[TE;", $PUBLIC},
	{"getRawClassAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC},
	{"getRawClassTypeAnnotations", "(Ljava/lang/Class;)[B", "(Ljava/lang/Class<*>;)[B", $PUBLIC},
	{"getRawExecutableTypeAnnotations", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC},
	{"getServicesCatalog", "(Ljava/lang/ModuleLayer;)Ljdk/internal/module/ServicesCatalog;", nullptr, $PUBLIC},
	{"inflateBytesToChars", "([BI[CII)V", nullptr, $PUBLIC},
	{"invalidatePackageAccessCache", "()V", nullptr, $PUBLIC},
	{"invokeFinalize", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{"isEnableNativeAccess", "(Ljava/lang/Module;)Z", nullptr, $PUBLIC},
	{"isReflectivelyExported", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC},
	{"isReflectivelyOpened", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Z", nullptr, $PUBLIC},
	{"join", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"layers", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream;", "(Ljava/lang/ModuleLayer;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC},
	{"layers", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream;", "(Ljava/lang/ClassLoader;)Ljava/util/stream/Stream<Ljava/lang/ModuleLayer;>;", $PUBLIC},
	{"newStringNoRepl", "([BLjava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.nio.charset.CharacterCodingException"},
	{"newStringUTF8NoRepl", "([BII)Ljava/lang/String;", nullptr, $PUBLIC},
	{"newThreadWithAcc", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{"protectionDomain", "(Ljava/lang/Class;)Ljava/security/ProtectionDomain;", "(Ljava/lang/Class<*>;)Ljava/security/ProtectionDomain;", $PUBLIC},
	{"registerShutdownHook", "(IZLjava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"setCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"stringConcatHelper", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"stringConcatInitialCoder", "()J", nullptr, $PUBLIC},
	{"stringConcatMix", "(JLjava/lang/String;)J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _System$2_EnclosingMethodInfo_ = {
	"java.lang.System",
	"setJavaLangAccess",
	"()V"
};

$InnerClassInfo _System$2_InnerClassesInfo_[] = {
	{"java.lang.System$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _System$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.System$2",
	"java.lang.Object",
	"jdk.internal.access.JavaLangAccess",
	nullptr,
	_System$2_MethodInfo_,
	nullptr,
	&_System$2_EnclosingMethodInfo_,
	_System$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.System"
};

$Object* allocate$System$2($Class* clazz) {
	return $of($alloc(System$2));
}

void System$2::init$() {
}

$List* System$2::getDeclaredPublicMethods($Class* klass, $String* name, $ClassArray* parameterTypes) {
	return $nc(klass)->getDeclaredPublicMethods(name, parameterTypes);
}

$ConstantPool* System$2::getConstantPool($Class* klass) {
	return $nc(klass)->getConstantPool();
}

bool System$2::casAnnotationType($Class* klass, $AnnotationType* oldType, $AnnotationType* newType) {
	return $nc(klass)->casAnnotationType(oldType, newType);
}

$AnnotationType* System$2::getAnnotationType($Class* klass) {
	return $nc(klass)->getAnnotationType();
}

$Map* System$2::getDeclaredAnnotationMap($Class* klass) {
	return $nc(klass)->getDeclaredAnnotationMap();
}

$bytes* System$2::getRawClassAnnotations($Class* klass) {
	return $nc(klass)->getRawAnnotations();
}

$bytes* System$2::getRawClassTypeAnnotations($Class* klass) {
	return $nc(klass)->getRawTypeAnnotations();
}

$bytes* System$2::getRawExecutableTypeAnnotations($Executable* executable) {
	return $Class::getExecutableTypeAnnotationBytes(executable);
}

$EnumArray* System$2::getEnumConstantsShared($Class* klass) {
	return $fcast($EnumArray, $nc(klass)->getEnumConstantsShared());
}

void System$2::blockedOn($Interruptible* b) {
	$Thread::blockedOn(b);
}

void System$2::registerShutdownHook(int32_t slot, bool registerShutdownInProgress, $Runnable* hook) {
	$Shutdown::add(slot, registerShutdownInProgress, hook);
}

$Thread* System$2::newThreadWithAcc($Runnable* target, $AccessControlContext* acc) {
	return $new($Thread, target, acc);
}

void System$2::invokeFinalize(Object$* o) {
	$nc($of(o))->finalize();
}

$ConcurrentHashMap* System$2::createOrGetClassLoaderValueMap($ClassLoader* cl) {
	return $nc(cl)->createOrGetClassLoaderValueMap();
}

$Class* System$2::defineClass($ClassLoader* loader, $String* name, $bytes* b, $ProtectionDomain* pd, $String* source) {
	return $ClassLoader::defineClass1(loader, name, b, 0, $nc(b)->length, pd, source);
}

$Class* System$2::defineClass($ClassLoader* loader, $Class* lookup, $String* name, $bytes* b, $ProtectionDomain* pd, bool initialize, int32_t flags, Object$* classData) {
	return $ClassLoader::defineClass0(loader, lookup, name, b, 0, $nc(b)->length, pd, initialize, flags, classData);
}

$Class* System$2::findBootstrapClassOrNull($String* name) {
	return $ClassLoader::findBootstrapClassOrNull(name);
}

$Package* System$2::definePackage($ClassLoader* cl, $String* name, $Module* module) {
	return $nc(cl)->definePackage(name, module);
}

$String* System$2::fastUUID(int64_t lsb, int64_t msb) {
	return $Long::fastUUID(lsb, msb);
}

void System$2::addNonExportedPackages($ModuleLayer* layer) {
	$SecurityManager::addNonExportedPackages(layer);
}

void System$2::invalidatePackageAccessCache() {
	$SecurityManager::invalidatePackageAccessCache();
}

$Module* System$2::defineModule($ClassLoader* loader, $ModuleDescriptor* descriptor, $URI* uri) {
	return $new($Module, nullptr, loader, descriptor, uri);
}

$Module* System$2::defineUnnamedModule($ClassLoader* loader) {
	return $new($Module, loader);
}

void System$2::addReads($Module* m1, $Module* m2) {
	$nc(m1)->implAddReads(m2);
}

void System$2::addReadsAllUnnamed($Module* m) {
	$nc(m)->implAddReadsAllUnnamed();
}

void System$2::addExports($Module* m, $String* pn) {
	$nc(m)->implAddExports(pn);
}

void System$2::addExports($Module* m, $String* pn, $Module* other) {
	$nc(m)->implAddExports(pn, other);
}

void System$2::addExportsToAllUnnamed($Module* m, $String* pn) {
	$nc(m)->implAddExportsToAllUnnamed(pn);
}

void System$2::addOpens($Module* m, $String* pn, $Module* other) {
	$nc(m)->implAddOpens(pn, other);
}

void System$2::addOpensToAllUnnamed($Module* m, $String* pn) {
	$nc(m)->implAddOpensToAllUnnamed(pn);
}

void System$2::addOpensToAllUnnamed($Module* m, $Set* concealedPackages, $Set* exportedPackages) {
	$nc(m)->implAddOpensToAllUnnamed(concealedPackages, exportedPackages);
}

void System$2::addUses($Module* m, $Class* service) {
	$nc(m)->implAddUses(service);
}

bool System$2::isReflectivelyExported($Module* m, $String* pn, $Module* other) {
	return $nc(m)->isReflectivelyExported(pn, other);
}

bool System$2::isReflectivelyOpened($Module* m, $String* pn, $Module* other) {
	return $nc(m)->isReflectivelyOpened(pn, other);
}

$Module* System$2::addEnableNativeAccess($Module* m) {
	return $nc(m)->implAddEnableNativeAccess();
}

void System$2::addEnableNativeAccessAllUnnamed() {
	$Module::implAddEnableNativeAccessAllUnnamed();
}

bool System$2::isEnableNativeAccess($Module* m) {
	return $nc(m)->implIsEnableNativeAccess();
}

$ServicesCatalog* System$2::getServicesCatalog($ModuleLayer* layer) {
	return $nc(layer)->getServicesCatalog();
}

void System$2::bindToLoader($ModuleLayer* layer, $ClassLoader* loader) {
	$nc(layer)->bindToLoader(loader);
}

$Stream* System$2::layers($ModuleLayer* layer) {
	return $nc(layer)->layers();
}

$Stream* System$2::layers($ClassLoader* loader) {
	return $ModuleLayer::layers(loader);
}

$String* System$2::newStringNoRepl($bytes* bytes, $Charset* cs) {
	return $String::newStringNoRepl(bytes, cs);
}

$bytes* System$2::getBytesNoRepl($String* s, $Charset* cs) {
	return $String::getBytesNoRepl(s, cs);
}

$String* System$2::newStringUTF8NoRepl($bytes* bytes, int32_t off, int32_t len) {
	return $String::newStringUTF8NoRepl(bytes, off, len);
}

$bytes* System$2::getBytesUTF8NoRepl($String* s) {
	return $String::getBytesUTF8NoRepl(s);
}

void System$2::inflateBytesToChars($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) {
	$StringLatin1::inflate(src, srcOff, dst, dstOff, len);
}

int32_t System$2::decodeASCII($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) {
	return $String::decodeASCII(src, srcOff, dst, dstOff, len);
}

void System$2::setCause($Throwable* t, $Throwable* cause) {
	$nc(t)->setCause(cause);
}

$ProtectionDomain* System$2::protectionDomain($Class* c) {
	return $nc(c)->protectionDomain();
}

$MethodHandle* System$2::stringConcatHelper($String* name, $MethodType* methodType) {
	return $StringConcatHelper::lookupStatic(name, methodType);
}

int64_t System$2::stringConcatInitialCoder() {
	return $StringConcatHelper::initialCoder();
}

int64_t System$2::stringConcatMix(int64_t lengthCoder, $String* constant) {
	return $StringConcatHelper::mix(lengthCoder, constant);
}

$String* System$2::join($String* prefix, $String* suffix, $String* delimiter, $StringArray* elements, int32_t size) {
	return $String::join(prefix, suffix, delimiter, elements, size);
}

$Object* System$2::classData($Class* c) {
	return $of($nc(c)->getClassData());
}

int64_t System$2::findNative($ClassLoader* loader, $String* entry) {
	return $ClassLoader::findNative(loader, entry);
}

void System$2::exit(int32_t statusCode) {
	$Shutdown::exit(statusCode);
}

System$2::System$2() {
}

$Class* System$2::load$($String* name, bool initialize) {
	$loadClass(System$2, name, initialize, &_System$2_ClassInfo_, allocate$System$2);
	return class$;
}

$Class* System$2::class$ = nullptr;

	} // lang
} // java