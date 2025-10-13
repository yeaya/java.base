#include <java/util/ResourceBundle.h>

#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle$1.h>
#include <java/util/ResourceBundle$2.h>
#include <java/util/ResourceBundle$3.h>
#include <java/util/ResourceBundle$4.h>
#include <java/util/ResourceBundle$BundleReference.h>
#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle$CacheKeyReference.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle$ResourceBundleControlProviderHolder.h>
#include <java/util/ResourceBundle$ResourceBundleProviderHelper.h>
#include <java/util/ResourceBundle$SingleFormatControl.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/Predicate.h>
#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_CLASSLOADER_PERMISSION
#undef INITIAL_CACHE_SIZE
#undef INSTANCE
#undef NONEXISTENT_BUNDLE
#undef ROOT
#undef TRACE_ON
#undef TTL_DONT_CACHE
#undef TTL_NO_EXPIRATION_CONTROL
#undef UNKNOWN_FORMAT

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Objects = ::java::util::Objects;
using $ResourceBundle$1 = ::java::util::ResourceBundle$1;
using $ResourceBundle$2 = ::java::util::ResourceBundle$2;
using $ResourceBundle$3 = ::java::util::ResourceBundle$3;
using $ResourceBundle$4 = ::java::util::ResourceBundle$4;
using $ResourceBundle$BundleReference = ::java::util::ResourceBundle$BundleReference;
using $ResourceBundle$CacheKey = ::java::util::ResourceBundle$CacheKey;
using $ResourceBundle$CacheKeyReference = ::java::util::ResourceBundle$CacheKeyReference;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ResourceBundle$ResourceBundleControlProviderHolder = ::java::util::ResourceBundle$ResourceBundleControlProviderHolder;
using $ResourceBundle$ResourceBundleProviderHelper = ::java::util::ResourceBundle$ResourceBundleProviderHelper;
using $ResourceBundle$SingleFormatControl = ::java::util::ResourceBundle$SingleFormatControl;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $Predicate = ::java::util::function::Predicate;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace util {

class ResourceBundle$$Lambda$getClassLoader : public $PrivilegedAction {
	$class(ResourceBundle$$Lambda$getClassLoader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Module* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getClassLoader());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$$Lambda$getClassLoader>());
	}
	$Module* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ResourceBundle$$Lambda$getClassLoader::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResourceBundle$$Lambda$getClassLoader, inst$)},
	{}
};
$MethodInfo ResourceBundle$$Lambda$getClassLoader::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Module;)V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$$Lambda$getClassLoader::*)($Module*)>(&ResourceBundle$$Lambda$getClassLoader::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$$Lambda$getClassLoader::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$$Lambda$getClassLoader",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ResourceBundle$$Lambda$getClassLoader::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$$Lambda$getClassLoader, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$$Lambda$getClassLoader::class$ = nullptr;

class ResourceBundle$$Lambda$lambda$clearCache$0$1 : public $Predicate {
	$class(ResourceBundle$$Lambda$lambda$clearCache$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* caller) {
		this->caller = caller;
	}
	virtual bool test(Object$* key) override {
		 return ResourceBundle::lambda$clearCache$0(caller, $cast($ResourceBundle$CacheKey, key));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$$Lambda$lambda$clearCache$0$1>());
	}
	$Class* caller = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ResourceBundle$$Lambda$lambda$clearCache$0$1::fieldInfos[2] = {
	{"caller", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ResourceBundle$$Lambda$lambda$clearCache$0$1, caller)},
	{}
};
$MethodInfo ResourceBundle$$Lambda$lambda$clearCache$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$$Lambda$lambda$clearCache$0$1::*)($Class*)>(&ResourceBundle$$Lambda$lambda$clearCache$0$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$$Lambda$lambda$clearCache$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$$Lambda$lambda$clearCache$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ResourceBundle$$Lambda$lambda$clearCache$0$1::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$$Lambda$lambda$clearCache$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$$Lambda$lambda$clearCache$0$1::class$ = nullptr;

class ResourceBundle$$Lambda$lambda$clearCache$1$2 : public $Predicate {
	$class(ResourceBundle$$Lambda$lambda$clearCache$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($ClassLoader* loader) {
		$set(this, loader, loader);
	}
	virtual bool test(Object$* key) override {
		 return ResourceBundle::lambda$clearCache$1(loader, $cast($ResourceBundle$CacheKey, key));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$$Lambda$lambda$clearCache$1$2>());
	}
	$ClassLoader* loader = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ResourceBundle$$Lambda$lambda$clearCache$1$2::fieldInfos[2] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ResourceBundle$$Lambda$lambda$clearCache$1$2, loader)},
	{}
};
$MethodInfo ResourceBundle$$Lambda$lambda$clearCache$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$$Lambda$lambda$clearCache$1$2::*)($ClassLoader*)>(&ResourceBundle$$Lambda$lambda$clearCache$1$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$$Lambda$lambda$clearCache$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$$Lambda$lambda$clearCache$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ResourceBundle$$Lambda$lambda$clearCache$1$2::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$$Lambda$lambda$clearCache$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$$Lambda$lambda$clearCache$1$2::class$ = nullptr;

$CompoundAttribute _ResourceBundle_MethodAnnotations_clearCache3[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle9[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle10[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle11[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle12[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle13[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle14[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle15[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _ResourceBundle_MethodAnnotations_getBundle16[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$FieldInfo _ResourceBundle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResourceBundle, $assertionsDisabled)},
	{"INITIAL_CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResourceBundle, INITIAL_CACHE_SIZE)},
	{"NONEXISTENT_BUNDLE", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle, NONEXISTENT_BUNDLE)},
	{"cacheList", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/ResourceBundle$CacheKey;Ljava/util/ResourceBundle$BundleReference;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle, cacheList)},
	{"referenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle, referenceQueue)},
	{"parent", "Ljava/util/ResourceBundle;", nullptr, $PROTECTED, $field(ResourceBundle, parent)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(ResourceBundle, locale)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ResourceBundle, name)},
	{"expired", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ResourceBundle, expired)},
	{"cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $PRIVATE | $VOLATILE, $field(ResourceBundle, cacheKey)},
	{"keySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $VOLATILE, $field(ResourceBundle, keySet$)},
	{"UNKNOWN_FORMAT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle, UNKNOWN_FORMAT)},
	{"TRACE_ON", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle, TRACE_ON)},
	{}
};

$MethodInfo _ResourceBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle::*)()>(&ResourceBundle::init$))},
	{"checkList", "(Ljava/util/List;)Z", "(Ljava/util/List<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*)>(&ResourceBundle::checkList))},
	{"checkNamedModule", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&ResourceBundle::checkNamedModule))},
	{"clearCache", "()V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)()>(&ResourceBundle::clearCache)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_clearCache3},
	{"clearCache", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($ClassLoader*)>(&ResourceBundle::clearCache))},
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"findBundle", "(Ljava/lang/Module;Ljava/lang/Module;Ljava/util/ResourceBundle$CacheKey;Ljava/util/List;Ljava/util/List;ILjava/util/ResourceBundle$Control;Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", "(Ljava/lang/Module;Ljava/lang/Module;Ljava/util/ResourceBundle$CacheKey;Ljava/util/List<Ljava/util/Locale;>;Ljava/util/List<Ljava/lang/String;>;ILjava/util/ResourceBundle$Control;Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($Module*,$Module*,$ResourceBundle$CacheKey*,$List*,$List*,int32_t,$ResourceBundle$Control*,ResourceBundle*)>(&ResourceBundle::findBundle))},
	{"findBundleInCache", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($ResourceBundle$CacheKey*,$ResourceBundle$Control*)>(&ResourceBundle::findBundleInCache))},
	{"getBaseBundleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ResourceBundle*(*)($String*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle9},
	{"getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ResourceBundle*(*)($String*,$ResourceBundle$Control*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle10},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ResourceBundle*(*)($String*,$Locale*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle11},
	{"getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Module*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle12},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$Module*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle13},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$ResourceBundle$Control*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle14},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$ClassLoader*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle15},
	{"getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$ClassLoader*,$ResourceBundle$Control*)>(&ResourceBundle::getBundle)), nullptr, nullptr, _ResourceBundle_MethodAnnotations_getBundle16},
	{"getBundleFromModule", "(Ljava/lang/Class;Ljava/lang/Module;Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", "(Ljava/lang/Class<*>;Ljava/lang/Module;Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($Class*,$Module*,$String*,$Locale*,$ResourceBundle$Control*)>(&ResourceBundle::getBundleFromModule))},
	{"getBundleImpl", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Class;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Class<*>;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$Class*,$ResourceBundle$Control*)>(&ResourceBundle::getBundleImpl))},
	{"getBundleImpl", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Class;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Class<*>;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$Class*,$ClassLoader*,$ResourceBundle$Control*)>(&ResourceBundle::getBundleImpl))},
	{"getBundleImpl", "(Ljava/lang/Module;Ljava/lang/Module;Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($Module*,$Module*,$String*,$Locale*,$ResourceBundle$Control*)>(&ResourceBundle::getBundleImpl))},
	{"getDefaultControl", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle$Control*(*)($Class*,$String*)>(&ResourceBundle::getDefaultControl))},
	{"getDefaultControl", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle$Control*(*)($Module*,$String*)>(&ResourceBundle::getDefaultControl))},
	{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getLoader", "(Ljava/lang/Module;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)($Module*)>(&ResourceBundle::getLoader))},
	{"getLoaderForControl", "(Ljava/lang/Module;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)($Module*)>(&ResourceBundle::getLoaderForControl))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(ResourceBundle::*)($String*)>(&ResourceBundle::getObject))},
	{"getResourceBundleProviderType", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<Ljava/util/spi/ResourceBundleProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*)>(&ResourceBundle::getResourceBundleProviderType))},
	{"getServiceLoader", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ServiceLoader;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$ServiceLoader*(*)($Module*,$String*)>(&ResourceBundle::getServiceLoader))},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(ResourceBundle::*)($String*)>(&ResourceBundle::getString))},
	{"getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$StringArray*(ResourceBundle::*)($String*)>(&ResourceBundle::getStringArray))},
	{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT},
	{"handleKeySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED},
	{"hasValidParentChain", "(Ljava/util/ResourceBundle;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(ResourceBundle*)>(&ResourceBundle::hasValidParentChain))},
	{"isValidBundle", "(Ljava/util/ResourceBundle;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(ResourceBundle*)>(&ResourceBundle::isValidBundle))},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"lambda$clearCache$0", "(Ljava/lang/Class;Ljava/util/ResourceBundle$CacheKey;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*,$ResourceBundle$CacheKey*)>(&ResourceBundle::lambda$clearCache$0))},
	{"lambda$clearCache$1", "(Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$CacheKey;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($ClassLoader*,$ResourceBundle$CacheKey*)>(&ResourceBundle::lambda$clearCache$1))},
	{"loadBundle", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/List;Ljava/util/ResourceBundle$Control;Ljava/lang/Module;Ljava/lang/Module;)Ljava/util/ResourceBundle;", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/List<Ljava/lang/String;>;Ljava/util/ResourceBundle$Control;Ljava/lang/Module;Ljava/lang/Module;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($ResourceBundle$CacheKey*,$List*,$ResourceBundle$Control*,$Module*,$Module*)>(&ResourceBundle::loadBundle))},
	{"loadBundle", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/List;Ljava/util/ResourceBundle$Control;Z)Ljava/util/ResourceBundle;", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/List<Ljava/lang/String;>;Ljava/util/ResourceBundle$Control;Z)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($ResourceBundle$CacheKey*,$List*,$ResourceBundle$Control*,bool)>(&ResourceBundle::loadBundle))},
	{"loadBundleFromProviders", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader;Ljava/util/ResourceBundle$CacheKey;)Ljava/util/ResourceBundle;", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;Ljava/util/ResourceBundle$CacheKey;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($String*,$Locale*,$ServiceLoader*,$ResourceBundle$CacheKey*)>(&ResourceBundle::loadBundleFromProviders))},
	{"putBundleInCache", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/ResourceBundle;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ResourceBundle*(*)($ResourceBundle$CacheKey*,ResourceBundle*,$ResourceBundle$Control*)>(&ResourceBundle::putBundleInCache))},
	{"setExpirationTime", "(Ljava/util/ResourceBundle$CacheKey;Ljava/util/ResourceBundle$Control;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ResourceBundle$CacheKey*,$ResourceBundle$Control*)>(&ResourceBundle::setExpirationTime))},
	{"setParent", "(Ljava/util/ResourceBundle;)V", nullptr, $PROTECTED},
	{"throwMissingResourceException", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Locale*,$Throwable*)>(&ResourceBundle::throwMissingResourceException))},
	{"trace", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&ResourceBundle::trace))},
	{"uncheckedThrow", "(Ljava/lang/Throwable;)V", "<T:Ljava/lang/Throwable;>(Ljava/lang/Throwable;)V^TT;", $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&ResourceBundle::uncheckedThrow)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _ResourceBundle_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$ResourceBundleProviderHelper", "java.util.ResourceBundle", "ResourceBundleProviderHelper", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$NoFallbackControl", "java.util.ResourceBundle", "NoFallbackControl", $PRIVATE | $STATIC | $FINAL},
	{"java.util.ResourceBundle$SingleFormatControl", "java.util.ResourceBundle", "SingleFormatControl", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
	{"java.util.ResourceBundle$ResourceBundleControlProviderHolder", "java.util.ResourceBundle", "ResourceBundleControlProviderHolder", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$BundleReference", "java.util.ResourceBundle", "BundleReference", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$KeyElementReference", "java.util.ResourceBundle", "KeyElementReference", $PRIVATE | $STATIC},
	{"java.util.ResourceBundle$CacheKeyReference", "java.util.ResourceBundle", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.ResourceBundle$CacheKey", "java.util.ResourceBundle", "CacheKey", $PRIVATE | $STATIC | $FINAL},
	{"java.util.ResourceBundle$4", nullptr, nullptr, 0},
	{"java.util.ResourceBundle$3", nullptr, nullptr, 0},
	{"java.util.ResourceBundle$2", nullptr, nullptr, 0},
	{"java.util.ResourceBundle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.ResourceBundle",
	"java.lang.Object",
	nullptr,
	_ResourceBundle_FieldInfo_,
	_ResourceBundle_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceBundle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.ResourceBundle$ResourceBundleProviderHelper,java.util.ResourceBundle$NoFallbackControl,java.util.ResourceBundle$SingleFormatControl,java.util.ResourceBundle$Control,java.util.ResourceBundle$Control$CandidateListCache,java.util.ResourceBundle$Control$2,java.util.ResourceBundle$Control$1,java.util.ResourceBundle$ResourceBundleControlProviderHolder,java.util.ResourceBundle$BundleReference,java.util.ResourceBundle$KeyElementReference,java.util.ResourceBundle$CacheKeyReference,java.util.ResourceBundle$CacheKey,java.util.ResourceBundle$4,java.util.ResourceBundle$3,java.util.ResourceBundle$2,java.util.ResourceBundle$1"
};

$Object* allocate$ResourceBundle($Class* clazz) {
	return $of($alloc(ResourceBundle));
}

bool ResourceBundle::$assertionsDisabled = false;

ResourceBundle* ResourceBundle::NONEXISTENT_BUNDLE = nullptr;

$ConcurrentMap* ResourceBundle::cacheList = nullptr;

$ReferenceQueue* ResourceBundle::referenceQueue = nullptr;
$String* ResourceBundle::UNKNOWN_FORMAT = nullptr;
bool ResourceBundle::TRACE_ON = false;

$String* ResourceBundle::getBaseBundleName() {
	return this->name;
}

void ResourceBundle::init$() {
	$set(this, parent, nullptr);
	$set(this, locale, nullptr);
}

$String* ResourceBundle::getString($String* key) {
	return $cast($String, getObject(key));
}

$StringArray* ResourceBundle::getStringArray($String* key) {
	return $cast($StringArray, getObject(key));
}

$Object* ResourceBundle::getObject($String* key) {
	$var($Object, obj, handleGetObject(key));
	if (obj == nullptr) {
		if (this->parent != nullptr) {
			$assign(obj, $nc(this->parent)->getObject(key));
		}
		if (obj == nullptr) {
			$var($String, var$0, $str({"Can\'t find resource for bundle "_s, $($of(this)->getClass()->getName()), ", key "_s, key}));
			$throwNew($MissingResourceException, var$0, $($of(this)->getClass()->getName()), key);
		}
	}
	return $of(obj);
}

$Locale* ResourceBundle::getLocale() {
	return this->locale;
}

$ClassLoader* ResourceBundle::getLoader($Module* module) {
	$init(ResourceBundle);
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(ResourceBundle$$Lambda$getClassLoader, static_cast<$Module*>($nc(module)))));
	return $cast($ClassLoader, $AccessController::doPrivileged(pa));
}

$ClassLoader* ResourceBundle::getLoaderForControl($Module* module) {
	$init(ResourceBundle);
	$beforeCallerSensitive();
	$var($ClassLoader, loader, getLoader(module));
	return loader == nullptr ? $ClassLoader::getPlatformClassLoader() : loader;
}

void ResourceBundle::setParent(ResourceBundle* parent) {
	if (!ResourceBundle::$assertionsDisabled && !(parent != ResourceBundle::NONEXISTENT_BUNDLE)) {
		$throwNew($AssertionError);
	}
	$set(this, parent, parent);
}

ResourceBundle* ResourceBundle::getBundle($String* baseName) {
	$init(ResourceBundle);
	$Class* caller = $Reflection::getCallerClass();
	$var($String, var$0, baseName);
	$var($Locale, var$1, $Locale::getDefault());
	$Class* var$2 = caller;
	return getBundleImpl(var$0, var$1, var$2, $(getDefaultControl(caller, baseName)));
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$Class* caller = $Reflection::getCallerClass();
	$var($Locale, targetLocale, $Locale::getDefault());
	checkNamedModule(caller);
	return getBundleImpl(baseName, targetLocale, caller, control);
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Locale* locale) {
	$init(ResourceBundle);
	$Class* caller = $Reflection::getCallerClass();
	return getBundleImpl(baseName, locale, caller, $(getDefaultControl(caller, baseName)));
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Module* module) {
	$init(ResourceBundle);
	$Class* var$0 = $Reflection::getCallerClass();
	$var($Module, var$1, module);
	$var($String, var$2, baseName);
	$var($Locale, var$3, $Locale::getDefault());
	return getBundleFromModule(var$0, var$1, var$2, var$3, $(getDefaultControl(module, baseName)));
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Locale* targetLocale, $Module* module) {
	$init(ResourceBundle);
	$Class* var$0 = $Reflection::getCallerClass();
	$var($Module, var$1, module);
	$var($String, var$2, baseName);
	$var($Locale, var$3, targetLocale);
	return getBundleFromModule(var$0, var$1, var$2, var$3, $(getDefaultControl(module, baseName)));
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Locale* targetLocale, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$Class* caller = $Reflection::getCallerClass();
	checkNamedModule(caller);
	return getBundleImpl(baseName, targetLocale, caller, control);
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Locale* locale, $ClassLoader* loader) {
	$init(ResourceBundle);
	if (loader == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* caller = $Reflection::getCallerClass();
	return getBundleImpl(baseName, locale, caller, loader, $(getDefaultControl(caller, baseName)));
}

ResourceBundle* ResourceBundle::getBundle($String* baseName, $Locale* targetLocale, $ClassLoader* loader, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	if (loader == nullptr || control == nullptr) {
		$throwNew($NullPointerException);
	}
	$Class* caller = $Reflection::getCallerClass();
	checkNamedModule(caller);
	return getBundleImpl(baseName, targetLocale, caller, loader, control);
}

$ResourceBundle$Control* ResourceBundle::getDefaultControl($Class* caller, $String* baseName) {
	$init(ResourceBundle);
	return getDefaultControl($($nc(caller)->getModule()), baseName);
}

$ResourceBundle$Control* ResourceBundle::getDefaultControl($Module* targetModule, $String* baseName) {
	$init(ResourceBundle);
	$init($ResourceBundle$Control);
	return $nc(targetModule)->isNamed() ? $ResourceBundle$Control::INSTANCE : $ResourceBundle$ResourceBundleControlProviderHolder::getControl(baseName);
}

void ResourceBundle::checkNamedModule($Class* caller) {
	$init(ResourceBundle);
	if ($nc($($nc(caller)->getModule()))->isNamed()) {
		$throwNew($UnsupportedOperationException, "ResourceBundle.Control not supported in named modules"_s);
	}
}

ResourceBundle* ResourceBundle::getBundleImpl($String* baseName, $Locale* locale, $Class* caller, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$beforeCallerSensitive();
	return getBundleImpl(baseName, locale, caller, $($nc(caller)->getClassLoader()), control);
}

ResourceBundle* ResourceBundle::getBundleImpl($String* baseName, $Locale* locale, $Class* caller, $ClassLoader* loader, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	if (caller == nullptr) {
		$throwNew($InternalError, "null caller"_s);
	}
	$var($Module, callerModule, $nc(caller)->getModule());
	bool var$0 = $nc(callerModule)->isNamed();
	if (var$0 && loader == getLoader(callerModule)) {
		return getBundleImpl(callerModule, callerModule, baseName, locale, control);
	}
	$var($Module, unnamedModule, loader != nullptr ? $nc(loader)->getUnnamedModule() : $BootLoader::getUnnamedModule());
	return getBundleImpl(callerModule, unnamedModule, baseName, locale, control);
}

ResourceBundle* ResourceBundle::getBundleFromModule($Class* caller, $Module* module, $String* baseName, $Locale* locale, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$Objects::requireNonNull(module);
	$var($Module, callerModule, $nc(caller)->getModule());
	if (callerModule != module) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($SecurityConstants);
			sm->checkPermission($SecurityConstants::GET_CLASSLOADER_PERMISSION);
		}
	}
	return getBundleImpl(callerModule, module, baseName, locale, control);
}

ResourceBundle* ResourceBundle::getBundleImpl($Module* callerModule, $Module* module, $String* baseName, $Locale* locale, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	if (locale == nullptr || control == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ResourceBundle$CacheKey, cacheKey, $new($ResourceBundle$CacheKey, baseName, locale, module, callerModule));
	$var(ResourceBundle, bundle, nullptr);
	$var($ResourceBundle$BundleReference, bundleRef, $cast($ResourceBundle$BundleReference, $nc(ResourceBundle::cacheList)->get(cacheKey)));
	if (bundleRef != nullptr) {
		$assign(bundle, $cast(ResourceBundle, bundleRef->get()));
		$assign(bundleRef, nullptr);
	}
	bool var$0 = isValidBundle(bundle);
	if (var$0 && hasValidParentChain(bundle)) {
		return bundle;
	}
	$init($ResourceBundle$Control);
	bool isKnownControl = (control == $ResourceBundle$Control::INSTANCE) || ($instanceOf($ResourceBundle$SingleFormatControl, control));
	$var($List, formats, $nc(control)->getFormats(baseName));
	if (!isKnownControl && !checkList(formats)) {
		$throwNew($IllegalArgumentException, "Invalid Control: getFormats"_s);
	}
	$var(ResourceBundle, baseBundle, nullptr);
	{
		$var($Locale, targetLocale, locale);
		for (; targetLocale != nullptr; $assign(targetLocale, control->getFallbackLocale(baseName, targetLocale))) {
			$var($List, candidateLocales, control->getCandidateLocales(baseName, targetLocale));
			if (!isKnownControl && !checkList(candidateLocales)) {
				$throwNew($IllegalArgumentException, "Invalid Control: getCandidateLocales"_s);
			}
			$assign(bundle, findBundle(callerModule, module, cacheKey, candidateLocales, formats, 0, control, baseBundle));
			if (isValidBundle(bundle)) {
				$init($Locale);
				bool isBaseBundle = $nc($Locale::ROOT)->equals($nc(bundle)->locale);
				bool var$1 = !isBaseBundle || $nc($nc(bundle)->locale)->equals(locale);
				if (!var$1) {
					bool var$2 = $nc(candidateLocales)->size() == 1;
					var$1 = (var$2 && $nc($nc(bundle)->locale)->equals($(candidateLocales->get(0))));
				}
				if (var$1) {
					break;
				}
				if (isBaseBundle && baseBundle == nullptr) {
					$assign(baseBundle, bundle);
				}
			}
		}
	}
	if (bundle == nullptr) {
		if (baseBundle == nullptr) {
			throwMissingResourceException(baseName, locale, $(cacheKey->getCause()));
		}
		$assign(bundle, baseBundle);
	}
	$Reference::reachabilityFence(callerModule);
	$Reference::reachabilityFence(module);
	return bundle;
}

bool ResourceBundle::checkList($List* a) {
	$init(ResourceBundle);
	bool valid = (a != nullptr && !a->isEmpty());
	if (valid) {
		int32_t size = a->size();
		for (int32_t i = 0; valid && i < size; ++i) {
			valid = (a->get(i) != nullptr);
		}
	}
	return valid;
}

ResourceBundle* ResourceBundle::findBundle($Module* callerModule, $Module* module, $ResourceBundle$CacheKey* cacheKey, $List* candidateLocales, $List* formats, int32_t index, $ResourceBundle$Control* control, ResourceBundle* baseBundle) {
	$init(ResourceBundle);
	$var($Locale, targetLocale, $cast($Locale, $nc(candidateLocales)->get(index)));
	$var(ResourceBundle, parent, nullptr);
	if (index != candidateLocales->size() - 1) {
		$assign(parent, findBundle(callerModule, module, cacheKey, candidateLocales, formats, index + 1, control, baseBundle));
	} else {
		$init($Locale);
		if (baseBundle != nullptr && $nc($Locale::ROOT)->equals(targetLocale)) {
			return baseBundle;
		}
	}
	$var($Object, ref, nullptr);
	while (($assign(ref, $nc(ResourceBundle::referenceQueue)->poll())) != nullptr) {
		$nc(ResourceBundle::cacheList)->remove($($nc(($cast($ResourceBundle$CacheKeyReference, ref)))->getCacheKey()));
	}
	bool expiredBundle = false;
	$nc(cacheKey)->setLocale(targetLocale);
	$var(ResourceBundle, bundle, findBundleInCache(cacheKey, control));
	if (isValidBundle(bundle)) {
		expiredBundle = $nc(bundle)->expired;
		if (!expiredBundle) {
			if (bundle->parent == parent) {
				return bundle;
			}
			$var($ResourceBundle$BundleReference, bundleRef, $cast($ResourceBundle$BundleReference, $nc(ResourceBundle::cacheList)->get(cacheKey)));
			if (bundleRef != nullptr && bundleRef->refersTo(bundle)) {
				$nc(ResourceBundle::cacheList)->remove(cacheKey, bundleRef);
			}
		}
	}
	if (bundle != ResourceBundle::NONEXISTENT_BUNDLE) {
		trace("findBundle: %d %s %s formats: %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(index))),
			$of(candidateLocales),
			$of(cacheKey),
			$of(formats)
		}));
		if ($nc(module)->isNamed()) {
			$assign(bundle, loadBundle(cacheKey, formats, control, module, callerModule));
		} else {
			$assign(bundle, loadBundle(cacheKey, formats, control, expiredBundle));
		}
		if (bundle != nullptr) {
			if (bundle->parent == nullptr) {
				bundle->setParent(parent);
			}
			$set(bundle, locale, targetLocale);
			$assign(bundle, putBundleInCache(cacheKey, bundle, control));
			return bundle;
		}
		putBundleInCache(cacheKey, ResourceBundle::NONEXISTENT_BUNDLE, control);
	}
	return parent;
}

ResourceBundle* ResourceBundle::loadBundle($ResourceBundle$CacheKey* cacheKey, $List* formats, $ResourceBundle$Control* control, $Module* module, $Module* callerModule) {
	$init(ResourceBundle);
	$var($String, baseName, $nc(cacheKey)->getName());
	$var($Locale, targetLocale, cacheKey->getLocale());
	$var(ResourceBundle, bundle, nullptr);
	if (cacheKey->hasProviders()) {
		if (callerModule == module) {
			$assign(bundle, loadBundleFromProviders(baseName, targetLocale, $(cacheKey->getProviders()), cacheKey));
		} else {
			$var($ClassLoader, loader, getLoader(module));
			$Class* svc = getResourceBundleProviderType(baseName, loader);
			bool var$0 = svc != nullptr && $Reflection::verifyModuleAccess(callerModule, svc);
			if (var$0 && $nc(callerModule)->canUse(svc)) {
				$assign(bundle, loadBundleFromProviders(baseName, targetLocale, $(cacheKey->getProviders()), cacheKey));
			}
		}
		if (bundle != nullptr) {
			cacheKey->setFormat(ResourceBundle::UNKNOWN_FORMAT);
		}
	}
	if (bundle == nullptr && !cacheKey->callerHasProvider()) {
		{
			$var($Iterator, i$, $nc(formats)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, format, $cast($String, i$->next()));
				{
					try {
						$var($String, s80502$, format);
						int32_t tmp80502$ = -1;
						switch ($nc(s80502$)->hashCode()) {
						case (int32_t)0x95829EAC:
							{
								if (s80502$->equals("java.class"_s)) {
									tmp80502$ = 0;
								}
								break;
							}
						case 0x2E7DB87F:
							{
								if (s80502$->equals("java.properties"_s)) {
									tmp80502$ = 1;
								}
								break;
							}
						}

						$var(ResourceBundle, var$1, nullptr)
						switch (tmp80502$) {
						case 0:
							{
								$assign(var$1, $ResourceBundle$ResourceBundleProviderHelper::loadResourceBundle(callerModule, module, baseName, targetLocale));
								break;
							}
						case 1:
							{
								$assign(var$1, $ResourceBundle$ResourceBundleProviderHelper::loadPropertyResourceBundle(callerModule, module, baseName, targetLocale));
								break;
							}
						default:
							{
								$throwNew($InternalError, $$str({"unexpected format: "_s, format}));
							}
						}
						$assign(bundle, var$1);
						if (bundle != nullptr) {
							cacheKey->setFormat(format);
							break;
						}
					} catch ($LinkageError&) {
						$var($Throwable, e, $catch());
						cacheKey->setCause(e);
					} catch ($Exception&) {
						$var($Throwable, e, $catch());
						cacheKey->setCause(e);
					}
				}
			}
		}
	}
	return bundle;
}

$ServiceLoader* ResourceBundle::getServiceLoader($Module* module, $String* baseName) {
	$init(ResourceBundle);
	if (!$nc(module)->isNamed()) {
		return nullptr;
	}
	$var($ClassLoader, loader, getLoader(module));
	$Class* service = getResourceBundleProviderType(baseName, loader);
	if (service != nullptr && $Reflection::verifyModuleAccess(module, service)) {
		try {
			return $ServiceLoader::load(service, loader, module);
		} catch ($ServiceConfigurationError&) {
			$var($ServiceConfigurationError, e, $catch());
			return nullptr;
		}
	}
	return nullptr;
}

$Class* ResourceBundle::getResourceBundleProviderType($String* baseName, $ClassLoader* loader) {
	$init(ResourceBundle);
	$beforeCallerSensitive();
	int32_t i = $nc(baseName)->lastIndexOf((int32_t)u'.');
	if (i <= 0) {
		return nullptr;
	}
	$var($String, name, $str({$(baseName->substring(i + 1, baseName->length())), "Provider"_s}));
	$var($String, providerName, $str({$(baseName->substring(0, i)), ".spi."_s, name}));
	return $cast($Class, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ResourceBundle$3, providerName, loader))));
}

ResourceBundle* ResourceBundle::loadBundleFromProviders($String* baseName, $Locale* locale, $ServiceLoader* providers, $ResourceBundle$CacheKey* cacheKey) {
	$init(ResourceBundle);
	$beforeCallerSensitive();
	if (providers == nullptr) {
		return nullptr;
	}
	return $cast(ResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ResourceBundle$4, providers, cacheKey, baseName, locale))));
}

ResourceBundle* ResourceBundle::loadBundle($ResourceBundle$CacheKey* cacheKey, $List* formats, $ResourceBundle$Control* control, bool reload) {
	$init(ResourceBundle);
	$var($Locale, targetLocale, $nc(cacheKey)->getLocale());
	$var($Module, module, cacheKey->getModule());
	if (module == nullptr) {
		$throwNew($InternalError, $$str({"Module for cache key: "_s, cacheKey, " has been GCed."_s}));
	}
	$var($ClassLoader, loader, getLoaderForControl(module));
	$var(ResourceBundle, bundle, nullptr);
	{
		$var($Iterator, i$, $nc(formats)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, format, $cast($String, i$->next()));
			{
				try {
					$assign(bundle, $nc(control)->newBundle($(cacheKey->getName()), targetLocale, format, loader, reload));
				} catch ($LinkageError&) {
					$var($Throwable, error, $catch());
					cacheKey->setCause(error);
				} catch ($Exception&) {
					$var($Throwable, error, $catch());
					cacheKey->setCause(error);
				}
				if (bundle != nullptr) {
					cacheKey->setFormat(format);
					$set(bundle, name, cacheKey->getName());
					$set(bundle, locale, targetLocale);
					bundle->expired = false;
					break;
				}
			}
		}
	}
	return bundle;
}

bool ResourceBundle::isValidBundle(ResourceBundle* bundle) {
	$init(ResourceBundle);
	return bundle != nullptr && bundle != ResourceBundle::NONEXISTENT_BUNDLE;
}

bool ResourceBundle::hasValidParentChain(ResourceBundle* bundle$renamed) {
	$init(ResourceBundle);
	$var(ResourceBundle, bundle, bundle$renamed);
	int64_t now = $System::currentTimeMillis();
	while (bundle != nullptr) {
		if (bundle->expired) {
			return false;
		}
		$var($ResourceBundle$CacheKey, key, bundle->cacheKey);
		if (key != nullptr) {
			int64_t expirationTime = key->expirationTime;
			if (expirationTime >= 0 && expirationTime <= now) {
				return false;
			}
		}
		$assign(bundle, bundle->parent);
	}
	return true;
}

void ResourceBundle::throwMissingResourceException($String* baseName, $Locale* locale, $Throwable* cause$renamed) {
	$init(ResourceBundle);
	$var($Throwable, cause, cause$renamed);
	if ($instanceOf($MissingResourceException, cause)) {
		$assign(cause, nullptr);
	}
	$var($String, var$0, $str({"Can\'t find bundle for base name "_s, baseName, ", locale "_s, locale}));
	$throwNew($MissingResourceException, var$0, $$str({baseName, "_"_s, locale}), ""_s, cause);
}

ResourceBundle* ResourceBundle::findBundleInCache($ResourceBundle$CacheKey* cacheKey, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$var($ResourceBundle$BundleReference, bundleRef, $cast($ResourceBundle$BundleReference, $nc(ResourceBundle::cacheList)->get(cacheKey)));
	if (bundleRef == nullptr) {
		return nullptr;
	}
	$var(ResourceBundle, bundle, $cast(ResourceBundle, $nc(bundleRef)->get()));
	if (bundle == nullptr) {
		return nullptr;
	}
	$var(ResourceBundle, p, $nc(bundle)->parent);
	if (!ResourceBundle::$assertionsDisabled && !(p != ResourceBundle::NONEXISTENT_BUNDLE)) {
		$throwNew($AssertionError);
	}
	if (p != nullptr && p->expired) {
		if (!ResourceBundle::$assertionsDisabled && !(bundle != ResourceBundle::NONEXISTENT_BUNDLE)) {
			$throwNew($AssertionError);
		}
		bundle->expired = true;
		$set(bundle, cacheKey, nullptr);
		$nc(ResourceBundle::cacheList)->remove(cacheKey, bundleRef);
		$assign(bundle, nullptr);
	} else {
		$var($ResourceBundle$CacheKey, key, bundleRef->getCacheKey());
		int64_t expirationTime = $nc(key)->expirationTime;
		if (!bundle->expired && expirationTime >= 0 && expirationTime <= $System::currentTimeMillis()) {
			if (bundle != ResourceBundle::NONEXISTENT_BUNDLE) {
				$synchronized(bundle) {
					expirationTime = key->expirationTime;
					if (!bundle->expired && expirationTime >= 0 && expirationTime <= $System::currentTimeMillis()) {
						try {
							$var($Module, module, $nc(cacheKey)->getModule());
							bool var$0 = module == nullptr;
							if (!var$0) {
								$var($String, var$1, key->getName());
								$var($Locale, var$2, key->getLocale());
								$var($String, var$3, key->getFormat());
								var$0 = $nc(control)->needsReload(var$1, var$2, var$3, $(getLoaderForControl(module)), bundle, key->loadTime);
							}
							bundle->expired = var$0;
						} catch ($Exception&) {
							$var($Exception, e, $catch());
							$nc(cacheKey)->setCause(e);
						}
						if (bundle->expired) {
							$set(bundle, cacheKey, nullptr);
							$nc(ResourceBundle::cacheList)->remove(cacheKey, bundleRef);
						} else {
							setExpirationTime(key, control);
						}
					}
				}
			} else {
				$nc(ResourceBundle::cacheList)->remove(cacheKey, bundleRef);
				$assign(bundle, nullptr);
			}
		}
	}
	return bundle;
}

ResourceBundle* ResourceBundle::putBundleInCache($ResourceBundle$CacheKey* cacheKey, ResourceBundle* bundle$renamed, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$var(ResourceBundle, bundle, bundle$renamed);
	setExpirationTime(cacheKey, control);
	if ($nc(cacheKey)->expirationTime != $ResourceBundle$Control::TTL_DONT_CACHE) {
		$var($ResourceBundle$CacheKey, key, $new($ResourceBundle$CacheKey, cacheKey));
		$var($ResourceBundle$BundleReference, bundleRef, $new($ResourceBundle$BundleReference, bundle, ResourceBundle::referenceQueue, key));
		$set($nc(bundle), cacheKey, key);
		$var($ResourceBundle$BundleReference, result, $cast($ResourceBundle$BundleReference, $nc(ResourceBundle::cacheList)->putIfAbsent(key, bundleRef)));
		if (result != nullptr) {
			$var(ResourceBundle, rb, $cast(ResourceBundle, result->get()));
			if (rb != nullptr && !rb->expired) {
				$set(bundle, cacheKey, nullptr);
				$assign(bundle, rb);
				bundleRef->clear();
			} else {
				$nc(ResourceBundle::cacheList)->put(key, bundleRef);
			}
		}
	}
	return bundle;
}

void ResourceBundle::setExpirationTime($ResourceBundle$CacheKey* cacheKey, $ResourceBundle$Control* control) {
	$init(ResourceBundle);
	$var($String, var$0, $nc(cacheKey)->getName());
	int64_t ttl = $nc(control)->getTimeToLive(var$0, $(cacheKey->getLocale()));
	if (ttl >= 0) {
		int64_t now = $System::currentTimeMillis();
		$nc(cacheKey)->loadTime = now;
		cacheKey->expirationTime = now + ttl;
	} else if (ttl >= $ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL) {
		$nc(cacheKey)->expirationTime = ttl;
	} else {
		$throwNew($IllegalArgumentException, $$str({"Invalid Control: TTL="_s, $$str(ttl)}));
	}
}

void ResourceBundle::clearCache() {
	$init(ResourceBundle);
	$Class* caller = $Reflection::getCallerClass();
	$nc($($nc(ResourceBundle::cacheList)->keySet()))->removeIf(static_cast<$Predicate*>($$new(ResourceBundle$$Lambda$lambda$clearCache$0$1, caller)));
}

void ResourceBundle::clearCache($ClassLoader* loader) {
	$init(ResourceBundle);
	$Objects::requireNonNull(loader);
	$nc($($nc(ResourceBundle::cacheList)->keySet()))->removeIf(static_cast<$Predicate*>($$new(ResourceBundle$$Lambda$lambda$clearCache$1$2, loader)));
}

bool ResourceBundle::containsKey($String* key) {
	if (key == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var(ResourceBundle, rb, this);
		for (; rb != nullptr; $assign(rb, rb->parent)) {
			if ($nc($($nc(rb)->handleKeySet()))->contains(key)) {
				return true;
			}
		}
	}
	return false;
}

$Set* ResourceBundle::keySet() {
	$var($Set, keys, $new($HashSet));
	{
		$var(ResourceBundle, rb, this);
		for (; rb != nullptr; $assign(rb, rb->parent)) {
			keys->addAll($($nc(rb)->handleKeySet()));
		}
	}
	return keys;
}

$Set* ResourceBundle::handleKeySet() {
	if (this->keySet$ == nullptr) {
		$synchronized(this) {
			if (this->keySet$ == nullptr) {
				$var($Set, keys, $new($HashSet));
				$var($Enumeration, enumKeys, getKeys());
				while ($nc(enumKeys)->hasMoreElements()) {
					$var($String, key, $cast($String, enumKeys->nextElement()));
					if (handleGetObject(key) != nullptr) {
						keys->add(key);
					}
				}
				$set(this, keySet$, keys);
			}
		}
	}
	return this->keySet$;
}

void ResourceBundle::uncheckedThrow($Throwable* t) {
	$init(ResourceBundle);
	if (t != nullptr) {
		$throw(t);
	} else {
		$throwNew($Error, "Unknown Exception"_s);
	}
}

void ResourceBundle::trace($String* format, $ObjectArray* params) {
	$init(ResourceBundle);
	if (ResourceBundle::TRACE_ON) {
		$init($System);
		$nc($System::out)->format(format, params);
	}
}

bool ResourceBundle::lambda$clearCache$1($ClassLoader* loader, $ResourceBundle$CacheKey* key) {
	$init(ResourceBundle);
	$var($Module, m, nullptr);
	bool var$0 = ($assign(m, $nc(key)->getModule())) != nullptr;
	return var$0 && getLoader(m) == loader;
}

bool ResourceBundle::lambda$clearCache$0($Class* caller, $ResourceBundle$CacheKey* key) {
	$init(ResourceBundle);
	return $nc(key)->getCallerModule() == $nc(caller)->getModule();
}

void clinit$ResourceBundle($Class* class$) {
	$assignStatic(ResourceBundle::UNKNOWN_FORMAT, ""_s);
	ResourceBundle::$assertionsDisabled = !ResourceBundle::class$->desiredAssertionStatus();
	{
		$SharedSecrets::setJavaUtilResourceBundleAccess($$new($ResourceBundle$1));
	}
	$assignStatic(ResourceBundle::NONEXISTENT_BUNDLE, $new($ResourceBundle$2));
	$assignStatic(ResourceBundle::cacheList, $new($ConcurrentHashMap, ResourceBundle::INITIAL_CACHE_SIZE));
	$assignStatic(ResourceBundle::referenceQueue, $new($ReferenceQueue));
	ResourceBundle::TRACE_ON = $nc($($Boolean::valueOf($($GetPropertyAction::privilegedGetProperty("resource.bundle.debug"_s, "false"_s)))))->booleanValue();
}

ResourceBundle::ResourceBundle() {
}

$Class* ResourceBundle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ResourceBundle$$Lambda$getClassLoader::classInfo$.name)) {
			return ResourceBundle$$Lambda$getClassLoader::load$(name, initialize);
		}
		if (name->equals(ResourceBundle$$Lambda$lambda$clearCache$0$1::classInfo$.name)) {
			return ResourceBundle$$Lambda$lambda$clearCache$0$1::load$(name, initialize);
		}
		if (name->equals(ResourceBundle$$Lambda$lambda$clearCache$1$2::classInfo$.name)) {
			return ResourceBundle$$Lambda$lambda$clearCache$1$2::load$(name, initialize);
		}
	}
	$loadClass(ResourceBundle, name, initialize, &_ResourceBundle_ClassInfo_, clinit$ResourceBundle, allocate$ResourceBundle);
	return class$;
}

$Class* ResourceBundle::class$ = nullptr;

	} // util
} // java