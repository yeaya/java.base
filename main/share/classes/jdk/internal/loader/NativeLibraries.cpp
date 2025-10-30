#include <jdk/internal/loader/NativeLibraries.h>

#include <java/io/File.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayDeque.h>
#include <java/util/Collection.h>
#include <java/util/Deque.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jdk/internal/loader/ClassLoaderHelper.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/NativeLibraries$1.h>
#include <jdk/internal/loader/NativeLibraries$LibraryPaths.h>
#include <jdk/internal/loader/NativeLibraries$NativeLibraryImpl.h>
#include <jdk/internal/loader/NativeLibrary.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jcpp.h>

#undef SYS_PATHS
#undef USER_PATHS

using $File = ::java::io::File;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Cleaner$Cleanable = ::java::lang::ref::Cleaner$Cleanable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayDeque = ::java::util::ArrayDeque;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ClassLoaderHelper = ::jdk::internal::loader::ClassLoaderHelper;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $NativeLibraries$1 = ::jdk::internal::loader::NativeLibraries$1;
using $NativeLibraries$LibraryPaths = ::jdk::internal::loader::NativeLibraries$LibraryPaths;
using $NativeLibraries$NativeLibraryImpl = ::jdk::internal::loader::NativeLibraries$NativeLibraryImpl;
using $NativeLibrary = ::jdk::internal::loader::NativeLibrary;
using $VM = ::jdk::internal::misc::VM;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _NativeLibraries_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeLibraries, $assertionsDisabled)},
	{"libraries", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/loader/NativeLibraries$NativeLibraryImpl;>;", $PRIVATE | $FINAL, $field(NativeLibraries, libraries)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(NativeLibraries, loader)},
	{"caller", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(NativeLibraries, caller)},
	{"searchJavaLibraryPath", "Z", nullptr, $PRIVATE | $FINAL, $field(NativeLibraries, searchJavaLibraryPath)},
	{"isJNI", "Z", nullptr, $PRIVATE | $FINAL, $field(NativeLibraries, isJNI)},
	{"loadedLibraryNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NativeLibraries, loadedLibraryNames)},
	{"nativeLibraryContext", "Ljava/util/Deque;", "Ljava/util/Deque<Ljdk/internal/loader/NativeLibraries$NativeLibraryImpl;>;", $PRIVATE | $STATIC, $staticField(NativeLibraries, nativeLibraryContext)},
	{}
};

$MethodInfo _NativeLibraries_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(static_cast<void(NativeLibraries::*)($ClassLoader*)>(&NativeLibraries::init$))},
	{"<init>", "(Ljava/lang/Class;Z)V", "(Ljava/lang/Class<*>;Z)V", $PRIVATE, $method(static_cast<void(NativeLibraries::*)($Class*,bool)>(&NativeLibraries::init$))},
	{"find", "(Ljava/lang/String;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(NativeLibraries::*)($String*)>(&NativeLibraries::find))},
	{"findBuiltinLib", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*)>(&NativeLibraries::findBuiltinLib))},
	{"findEntry0", "(Ljdk/internal/loader/NativeLibraries$NativeLibraryImpl;Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($NativeLibraries$NativeLibraryImpl*,$String*)>(&NativeLibraries::findEntry0))},
	{"findFromPaths", "([Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)Ljdk/internal/loader/NativeLibrary;", "([Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;)Ljdk/internal/loader/NativeLibrary;", $PRIVATE, $method(static_cast<$NativeLibrary*(NativeLibraries::*)($StringArray*,$Class*,$String*)>(&NativeLibraries::findFromPaths))},
	{"getFromClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)()>(&NativeLibraries::getFromClass))},
	{"jniNativeLibraries", "(Ljava/lang/ClassLoader;)Ljdk/internal/loader/NativeLibraries;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NativeLibraries*(*)($ClassLoader*)>(&NativeLibraries::jniNativeLibraries))},
	{"load", "(Ljdk/internal/loader/NativeLibraries$NativeLibraryImpl;Ljava/lang/String;ZZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($NativeLibraries$NativeLibraryImpl*,$String*,bool,bool)>(&NativeLibraries::load))},
	{"loadLibrary", "(Ljava/lang/Class;Ljava/io/File;)Ljdk/internal/loader/NativeLibrary;", "(Ljava/lang/Class<*>;Ljava/io/File;)Ljdk/internal/loader/NativeLibrary;", $PUBLIC, $method(static_cast<$NativeLibrary*(NativeLibraries::*)($Class*,$File*)>(&NativeLibraries::loadLibrary))},
	{"loadLibrary", "(Ljava/lang/Class;Ljava/lang/String;Z)Ljdk/internal/loader/NativeLibrary;", "(Ljava/lang/Class<*>;Ljava/lang/String;Z)Ljdk/internal/loader/NativeLibrary;", $PRIVATE, $method(static_cast<$NativeLibrary*(NativeLibraries::*)($Class*,$String*,bool)>(&NativeLibraries::loadLibrary))},
	{"loadLibrary", "(Ljava/lang/String;)Ljdk/internal/loader/NativeLibrary;", nullptr, $PUBLIC, $method(static_cast<$NativeLibrary*(NativeLibraries::*)($String*)>(&NativeLibraries::loadLibrary))},
	{"loadLibrary", "(Ljava/lang/Class;Ljava/lang/String;)Ljdk/internal/loader/NativeLibrary;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljdk/internal/loader/NativeLibrary;", $PUBLIC, $method(static_cast<$NativeLibrary*(NativeLibraries::*)($Class*,$String*)>(&NativeLibraries::loadLibrary))},
	{"rawNativeLibraries", "(Ljava/lang/Class;Z)Ljdk/internal/loader/NativeLibraries;", "(Ljava/lang/Class<*>;Z)Ljdk/internal/loader/NativeLibraries;", $PUBLIC | $STATIC, $method(static_cast<NativeLibraries*(*)($Class*,bool)>(&NativeLibraries::rawNativeLibraries))},
	{"unload", "(Ljdk/internal/loader/NativeLibrary;)V", nullptr, $PUBLIC, $method(static_cast<void(NativeLibraries::*)($NativeLibrary*)>(&NativeLibraries::unload))},
	{"unload", "(Ljava/lang/String;ZZJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*,bool,bool,int64_t)>(&NativeLibraries::unload))},
	{}
};

#define _METHOD_INDEX_findBuiltinLib 3
#define _METHOD_INDEX_findEntry0 4
#define _METHOD_INDEX_load 8
#define _METHOD_INDEX_unload 15

$InnerClassInfo _NativeLibraries_InnerClassesInfo_[] = {
	{"jdk.internal.loader.NativeLibraries$LibraryPaths", "jdk.internal.loader.NativeLibraries", "LibraryPaths", $STATIC},
	{"jdk.internal.loader.NativeLibraries$Unloader", "jdk.internal.loader.NativeLibraries", "Unloader", $STATIC},
	{"jdk.internal.loader.NativeLibraries$NativeLibraryImpl", "jdk.internal.loader.NativeLibraries", "NativeLibraryImpl", $STATIC},
	{"jdk.internal.loader.NativeLibraries$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeLibraries_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.loader.NativeLibraries",
	"java.lang.Object",
	nullptr,
	_NativeLibraries_FieldInfo_,
	_NativeLibraries_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibraries_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.loader.NativeLibraries$LibraryPaths,jdk.internal.loader.NativeLibraries$Unloader,jdk.internal.loader.NativeLibraries$NativeLibraryImpl,jdk.internal.loader.NativeLibraries$1"
};

$Object* allocate$NativeLibraries($Class* clazz) {
	return $of($alloc(NativeLibraries));
}

bool NativeLibraries::$assertionsDisabled = false;
$Set* NativeLibraries::loadedLibraryNames = nullptr;
$Deque* NativeLibraries::nativeLibraryContext = nullptr;

NativeLibraries* NativeLibraries::jniNativeLibraries($ClassLoader* loader) {
	$init(NativeLibraries);
	return $new(NativeLibraries, loader);
}

NativeLibraries* NativeLibraries::rawNativeLibraries($Class* trustedCaller, bool searchJavaLibraryPath) {
	$init(NativeLibraries);
	return $new(NativeLibraries, trustedCaller, searchJavaLibraryPath);
}

void NativeLibraries::init$($ClassLoader* loader) {
	$set(this, libraries, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$set(this, loader, loader);
	$set(this, caller, loader != nullptr ? ($Class*)nullptr : NativeLibraries::class$);
	this->searchJavaLibraryPath = loader != nullptr ? true : false;
	this->isJNI = true;
}

void NativeLibraries::init$($Class* caller, bool searchJavaLibraryPath) {
	$beforeCallerSensitive();
	$set(this, libraries, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$Objects::requireNonNull(caller);
	if (!$VM::isSystemDomainLoader($(caller->getClassLoader()))) {
		$throwNew($IllegalArgumentException, "must be JDK trusted class"_s);
	}
	$set(this, loader, caller->getClassLoader());
	$set(this, caller, caller);
	this->searchJavaLibraryPath = searchJavaLibraryPath;
	this->isJNI = false;
}

int64_t NativeLibraries::find($String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->libraries)->isEmpty()) {
		return 0;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->libraries)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NativeLibrary, lib, $cast($NativeLibrary, i$->next()));
			{
				int64_t entry = $nc(lib)->find(name);
				if (entry != 0) {
					return entry;
				}
			}
		}
	}
	return 0;
}

$NativeLibrary* NativeLibraries::loadLibrary($Class* fromClass, $File* file) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, name, findBuiltinLib($($nc(file)->getName())));
	bool isBuiltin = (name != nullptr);
	if (!isBuiltin) {
		$assign(name, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NativeLibraries$1, this, file)))));
		if (name == nullptr) {
			return nullptr;
		}
	}
	return loadLibrary(fromClass, name, isBuiltin);
}

$NativeLibrary* NativeLibraries::loadLibrary($Class* fromClass, $String* name, bool isBuiltin) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, (fromClass == nullptr) ? ($ClassLoader*)nullptr : $nc(fromClass)->getClassLoader());
	if (this->loader != loader) {
		$throwNew($InternalError, $$str({$(fromClass->getName()), " not allowed to load library"_s}));
	}
	$synchronized(NativeLibraries::loadedLibraryNames) {
		$var($NativeLibrary, cached, $cast($NativeLibrary, $nc(this->libraries)->get(name)));
		if (cached != nullptr) {
			return cached;
		}
		if ($nc(NativeLibraries::loadedLibraryNames)->contains(name)) {
			$throwNew($UnsatisfiedLinkError, $$str({"Native Library "_s, name, " already loaded in another classloader"_s}));
		}
		{
			$var($Iterator, i$, $nc(NativeLibraries::nativeLibraryContext)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NativeLibraries$NativeLibraryImpl, lib, $cast($NativeLibraries$NativeLibraryImpl, i$->next()));
				{
					if ($nc(name)->equals($($nc(lib)->name()))) {
						if (loader == $nc($nc(lib)->fromClass)->getClassLoader()) {
							return lib;
						} else {
							$throwNew($UnsatisfiedLinkError, $$str({"Native Library "_s, name, " is being loaded in another classloader"_s}));
						}
					}
				}
			}
		}
		$var($NativeLibraries$NativeLibraryImpl, lib, $new($NativeLibraries$NativeLibraryImpl, fromClass, name, isBuiltin, this->isJNI));
		$nc(NativeLibraries::nativeLibraryContext)->push(lib);
		{
			$var($Throwable, var$0, nullptr);
			$var($NativeLibrary, var$2, nullptr);
			bool return$1 = false;
			try {
				if (!lib->open()) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				bool var$3 = this->isJNI && !$VM::isSystemDomainLoader(loader);
				bool autoUnload = var$3 && loader != $ClassLoaders::appClassLoader();
				if (autoUnload) {
					$nc($($CleanerFactory::cleaner()))->register$(loader, $(lib->unloader()));
				}
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} $finally: {
				$nc(NativeLibraries::nativeLibraryContext)->pop();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
		$nc(NativeLibraries::loadedLibraryNames)->add(name);
		$nc(this->libraries)->put(name, lib);
		return lib;
	}
}

$NativeLibrary* NativeLibraries::loadLibrary($String* name) {
	$init($File);
	if (!NativeLibraries::$assertionsDisabled && !($nc(name)->indexOf((int32_t)$File::separatorChar) < 0)) {
		$throwNew($AssertionError);
	}
	if (!NativeLibraries::$assertionsDisabled && !(this->caller != nullptr)) {
		$throwNew($AssertionError);
	}
	return loadLibrary(this->caller, name);
}

$NativeLibrary* NativeLibraries::loadLibrary($Class* fromClass, $String* name) {
	$init($File);
	if (!NativeLibraries::$assertionsDisabled && !($nc(name)->indexOf((int32_t)$File::separatorChar) < 0)) {
		$throwNew($AssertionError);
	}
	$init($NativeLibraries$LibraryPaths);
	$var($NativeLibrary, lib, findFromPaths($NativeLibraries$LibraryPaths::SYS_PATHS, fromClass, name));
	if (lib == nullptr && this->searchJavaLibraryPath) {
		$assign(lib, findFromPaths($NativeLibraries$LibraryPaths::USER_PATHS, fromClass, name));
	}
	return lib;
}

void NativeLibraries::unload($NativeLibrary* lib) {
	$useLocalCurrentObjectStackCache();
	if (this->isJNI) {
		$throwNew($UnsupportedOperationException, "explicit unloading cannot be used with auto unloading"_s);
	}
	$Objects::requireNonNull(lib);
	$synchronized(NativeLibraries::loadedLibraryNames) {
		$var($NativeLibraries$NativeLibraryImpl, nl, $cast($NativeLibraries$NativeLibraryImpl, $nc(this->libraries)->remove($(lib->name()))));
		if (!$equals(nl, lib)) {
			$throwNew($IllegalArgumentException, $$str({$(lib->name()), " not loaded by this NativeLibraries instance"_s}));
		}
		$nc($($nc(nl)->unloader()))->run();
	}
}

$NativeLibrary* NativeLibraries::findFromPaths($StringArray* paths, $Class* fromClass, $String* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, paths);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, path, arr$->get(i$));
			{
				$var($File, libfile, $new($File, path, $($System::mapLibraryName(name))));
				$var($NativeLibrary, nl, loadLibrary(fromClass, libfile));
				if (nl != nullptr) {
					return nl;
				}
				$assign(libfile, $ClassLoaderHelper::mapAlternativeName(libfile));
				if (libfile != nullptr) {
					$assign(nl, loadLibrary(fromClass, libfile));
					if (nl != nullptr) {
						return nl;
					}
				}
			}
		}
	}
	return nullptr;
}

$Class* NativeLibraries::getFromClass() {
	$init(NativeLibraries);
	if ($nc(NativeLibraries::nativeLibraryContext)->isEmpty()) {
		return $Object::class$;
	}
	return $nc(($cast($NativeLibraries$NativeLibraryImpl, $($nc(NativeLibraries::nativeLibraryContext)->peek()))))->fromClass;
}

bool NativeLibraries::load($NativeLibraries$NativeLibraryImpl* impl, $String* name, bool isBuiltin, bool isJNI) {
	$init(NativeLibraries);
	bool $ret = false;
	$prepareNativeStatic(NativeLibraries, load, bool, $NativeLibraries$NativeLibraryImpl* impl, $String* name, bool isBuiltin, bool isJNI);
	$ret = $invokeNativeStatic(NativeLibraries, load, impl, name, isBuiltin, isJNI);
	$finishNativeStatic();
	return $ret;
}

void NativeLibraries::unload($String* name, bool isBuiltin, bool isJNI, int64_t handle) {
	$init(NativeLibraries);
	$prepareNativeStatic(NativeLibraries, unload, void, $String* name, bool isBuiltin, bool isJNI, int64_t handle);
	$invokeNativeStatic(NativeLibraries, unload, name, isBuiltin, isJNI, handle);
	$finishNativeStatic();
}

$String* NativeLibraries::findBuiltinLib($String* name) {
	$init(NativeLibraries);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(NativeLibraries, findBuiltinLib, $String*, $String* name);
	$assign($ret, $invokeNativeStatic(NativeLibraries, findBuiltinLib, name));
	$finishNativeStatic();
	return $ret;
}

int64_t NativeLibraries::findEntry0($NativeLibraries$NativeLibraryImpl* lib, $String* name) {
	$init(NativeLibraries);
	int64_t $ret = 0;
	$prepareNativeStatic(NativeLibraries, findEntry0, int64_t, $NativeLibraries$NativeLibraryImpl* lib, $String* name);
	$ret = $invokeNativeStatic(NativeLibraries, findEntry0, lib, name);
	$finishNativeStatic();
	return $ret;
}

void clinit$NativeLibraries($Class* class$) {
	NativeLibraries::$assertionsDisabled = !NativeLibraries::class$->desiredAssertionStatus();
	$assignStatic(NativeLibraries::loadedLibraryNames, $new($HashSet));
	$assignStatic(NativeLibraries::nativeLibraryContext, $new($ArrayDeque, 8));
}

NativeLibraries::NativeLibraries() {
}

$Class* NativeLibraries::load$($String* name, bool initialize) {
	$loadClass(NativeLibraries, name, initialize, &_NativeLibraries_ClassInfo_, clinit$NativeLibraries, allocate$NativeLibraries);
	return class$;
}

$Class* NativeLibraries::class$ = nullptr;

		} // loader
	} // internal
} // jdk