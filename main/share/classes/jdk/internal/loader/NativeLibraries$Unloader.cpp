#include <jdk/internal/loader/NativeLibraries$Unloader.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Deque.h>
#include <java/util/Set.h>
#include <jdk/internal/loader/NativeLibraries$NativeLibraryImpl.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jcpp.h>

#undef UNLOADER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Deque = ::java::util::Deque;
using $Set = ::java::util::Set;
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;
using $NativeLibraries$NativeLibraryImpl = ::jdk::internal::loader::NativeLibraries$NativeLibraryImpl;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _NativeLibraries$Unloader_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeLibraries$Unloader, $assertionsDisabled)},
	{"UNLOADER", "Ljdk/internal/loader/NativeLibraries$NativeLibraryImpl;", nullptr, $STATIC | $FINAL, $staticField(NativeLibraries$Unloader, UNLOADER)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(NativeLibraries$Unloader, name)},
	{"handle", "J", nullptr, $FINAL, $field(NativeLibraries$Unloader, handle)},
	{"isBuiltin", "Z", nullptr, $FINAL, $field(NativeLibraries$Unloader, isBuiltin)},
	{"isJNI", "Z", nullptr, $FINAL, $field(NativeLibraries$Unloader, isJNI)},
	{}
};

$MethodInfo _NativeLibraries$Unloader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;JZZ)V", nullptr, 0, $method(static_cast<void(NativeLibraries$Unloader::*)($String*,int64_t,bool,bool)>(&NativeLibraries$Unloader::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NativeLibraries$Unloader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.NativeLibraries$Unloader", "jdk.internal.loader.NativeLibraries", "Unloader", $STATIC},
	{}
};

$ClassInfo _NativeLibraries$Unloader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.NativeLibraries$Unloader",
	"java.lang.Object",
	"java.lang.Runnable",
	_NativeLibraries$Unloader_FieldInfo_,
	_NativeLibraries$Unloader_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibraries$Unloader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.NativeLibraries"
};

$Object* allocate$NativeLibraries$Unloader($Class* clazz) {
	return $of($alloc(NativeLibraries$Unloader));
}

bool NativeLibraries$Unloader::$assertionsDisabled = false;
$NativeLibraries$NativeLibraryImpl* NativeLibraries$Unloader::UNLOADER = nullptr;

void NativeLibraries$Unloader::init$($String* name, int64_t handle, bool isBuiltin, bool isJNI) {
	if (!NativeLibraries$Unloader::$assertionsDisabled && !(!isBuiltin || isJNI)) {
		$throwNew($AssertionError, $of("a builtin native library must be JNI library"_s));
	}
	if (handle == 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid handle for native library "_s, name}));
	}
	$set(this, name, name);
	this->handle = handle;
	this->isBuiltin = isBuiltin;
	this->isJNI = isJNI;
}

void NativeLibraries$Unloader::run() {
	$useLocalCurrentObjectStackCache();
	$init($NativeLibraries);
	$synchronized($NativeLibraries::loadedLibraryNames) {
		if (!$nc($NativeLibraries::loadedLibraryNames)->remove(this->name)) {
			$throwNew($IllegalStateException, $$str({this->name, " has already been unloaded"_s}));
		}
		$nc($NativeLibraries::nativeLibraryContext)->push(NativeLibraries$Unloader::UNLOADER);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$NativeLibraries::unload(this->name, this->isBuiltin, this->isJNI, this->handle);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($NativeLibraries::nativeLibraryContext)->pop();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void clinit$NativeLibraries$Unloader($Class* class$) {
	$load($NativeLibraries);
	NativeLibraries$Unloader::$assertionsDisabled = !$NativeLibraries::class$->desiredAssertionStatus();
	$assignStatic(NativeLibraries$Unloader::UNLOADER, $new($NativeLibraries$NativeLibraryImpl, nullptr, "dummy"_s, false, false));
}

NativeLibraries$Unloader::NativeLibraries$Unloader() {
}

$Class* NativeLibraries$Unloader::load$($String* name, bool initialize) {
	$loadClass(NativeLibraries$Unloader, name, initialize, &_NativeLibraries$Unloader_ClassInfo_, clinit$NativeLibraries$Unloader, allocate$NativeLibraries$Unloader);
	return class$;
}

$Class* NativeLibraries$Unloader::class$ = nullptr;

		} // loader
	} // internal
} // jdk