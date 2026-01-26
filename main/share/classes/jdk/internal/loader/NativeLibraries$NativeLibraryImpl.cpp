#include <jdk/internal/loader/NativeLibraries$NativeLibraryImpl.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/Runnable.h>
#include <jdk/internal/loader/NativeLibraries$Unloader.h>
#include <jdk/internal/loader/NativeLibraries.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $NativeLibraries = ::jdk::internal::loader::NativeLibraries;
using $NativeLibraries$Unloader = ::jdk::internal::loader::NativeLibraries$Unloader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _NativeLibraries$NativeLibraryImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NativeLibraries$NativeLibraryImpl, $assertionsDisabled)},
	{"fromClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(NativeLibraries$NativeLibraryImpl, fromClass)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(NativeLibraries$NativeLibraryImpl, name$)},
	{"isBuiltin", "Z", nullptr, $FINAL, $field(NativeLibraries$NativeLibraryImpl, isBuiltin)},
	{"isJNI", "Z", nullptr, $FINAL, $field(NativeLibraries$NativeLibraryImpl, isJNI)},
	{"handle", "J", nullptr, 0, $field(NativeLibraries$NativeLibraryImpl, handle)},
	{"jniVersion", "I", nullptr, 0, $field(NativeLibraries$NativeLibraryImpl, jniVersion)},
	{}
};

$MethodInfo _NativeLibraries$NativeLibraryImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;ZZ)V", "(Ljava/lang/Class<*>;Ljava/lang/String;ZZ)V", 0, $method(NativeLibraries$NativeLibraryImpl, init$, void, $Class*, $String*, bool, bool)},
	{"find", "(Ljava/lang/String;)J", nullptr, $PUBLIC, $virtualMethod(NativeLibraries$NativeLibraryImpl, find, int64_t, $String*)},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NativeLibraries$NativeLibraryImpl, name, $String*)},
	{"open", "()Z", nullptr, 0, $virtualMethod(NativeLibraries$NativeLibraryImpl, open, bool)},
	{"unloader", "()Ljava/lang/Runnable;", nullptr, 0, $virtualMethod(NativeLibraries$NativeLibraryImpl, unloader, $Runnable*)},
	{}
};

$InnerClassInfo _NativeLibraries$NativeLibraryImpl_InnerClassesInfo_[] = {
	{"jdk.internal.loader.NativeLibraries$NativeLibraryImpl", "jdk.internal.loader.NativeLibraries", "NativeLibraryImpl", $STATIC},
	{}
};

$ClassInfo _NativeLibraries$NativeLibraryImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.NativeLibraries$NativeLibraryImpl",
	"java.lang.Object",
	"jdk.internal.loader.NativeLibrary",
	_NativeLibraries$NativeLibraryImpl_FieldInfo_,
	_NativeLibraries$NativeLibraryImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibraries$NativeLibraryImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.NativeLibraries"
};

$Object* allocate$NativeLibraries$NativeLibraryImpl($Class* clazz) {
	return $of($alloc(NativeLibraries$NativeLibraryImpl));
}

bool NativeLibraries$NativeLibraryImpl::$assertionsDisabled = false;

void NativeLibraries$NativeLibraryImpl::init$($Class* fromClass, $String* name, bool isBuiltin, bool isJNI) {
	if (!NativeLibraries$NativeLibraryImpl::$assertionsDisabled && !(!isBuiltin || isJNI)) {
		$throwNew($AssertionError, $of("a builtin native library must be JNI library"_s));
	}
	$set(this, fromClass, fromClass);
	$set(this, name$, name);
	this->isBuiltin = isBuiltin;
	this->isJNI = isJNI;
}

$String* NativeLibraries$NativeLibraryImpl::name() {
	return this->name$;
}

int64_t NativeLibraries$NativeLibraryImpl::find($String* name) {
	return $NativeLibraries::findEntry0(this, name);
}

$Runnable* NativeLibraries$NativeLibraryImpl::unloader() {
	return $new($NativeLibraries$Unloader, this->name$, this->handle, this->isBuiltin, this->isJNI);
}

bool NativeLibraries$NativeLibraryImpl::open() {
	if (this->handle != 0) {
		$throwNew($InternalError, $$str({"Native library "_s, this->name$, " has been loaded"_s}));
	}
	return $NativeLibraries::load(this, this->name$, this->isBuiltin, this->isJNI);
}

void clinit$NativeLibraries$NativeLibraryImpl($Class* class$) {
	$load($NativeLibraries);
	NativeLibraries$NativeLibraryImpl::$assertionsDisabled = !$NativeLibraries::class$->desiredAssertionStatus();
}

NativeLibraries$NativeLibraryImpl::NativeLibraries$NativeLibraryImpl() {
}

$Class* NativeLibraries$NativeLibraryImpl::load$($String* name, bool initialize) {
	$loadClass(NativeLibraries$NativeLibraryImpl, name, initialize, &_NativeLibraries$NativeLibraryImpl_ClassInfo_, clinit$NativeLibraries$NativeLibraryImpl, allocate$NativeLibraries$NativeLibraryImpl);
	return class$;
}

$Class* NativeLibraries$NativeLibraryImpl::class$ = nullptr;

		} // loader
	} // internal
} // jdk