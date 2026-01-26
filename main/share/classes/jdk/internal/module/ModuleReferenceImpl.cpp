#include <jdk/internal/module/ModuleReferenceImpl.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/module/ModuleHashes$HashSupplier.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;
using $Objects = ::java::util::Objects;
using $Supplier = ::java::util::function::Supplier;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleHashes$HashSupplier = ::jdk::internal::module::ModuleHashes$HashSupplier;
using $ModulePatcher = ::jdk::internal::module::ModulePatcher;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleReferenceImpl_FieldInfo_[] = {
	{"location", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, location$)},
	{"readerSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/lang/module/ModuleReader;>;", $PRIVATE | $FINAL, $field(ModuleReferenceImpl, readerSupplier)},
	{"patcher", "Ljdk/internal/module/ModulePatcher;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, patcher)},
	{"target", "Ljdk/internal/module/ModuleTarget;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, target)},
	{"recordedHashes", "Ljdk/internal/module/ModuleHashes;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, recordedHashes$)},
	{"hasher", "Ljdk/internal/module/ModuleHashes$HashSupplier;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, hasher$)},
	{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferenceImpl, moduleResolution$)},
	{"cachedHash", "[B", nullptr, $PRIVATE, $field(ModuleReferenceImpl, cachedHash)},
	{"hash", "I", nullptr, $PRIVATE, $field(ModuleReferenceImpl, hash)},
	{}
};

$MethodInfo _ModuleReferenceImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;Ljava/util/function/Supplier;Ljdk/internal/module/ModulePatcher;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleHashes$HashSupplier;Ljdk/internal/module/ModuleResolution;)V", "(Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;Ljava/util/function/Supplier<Ljava/lang/module/ModuleReader;>;Ljdk/internal/module/ModulePatcher;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleHashes$HashSupplier;Ljdk/internal/module/ModuleResolution;)V", $PUBLIC, $method(ModuleReferenceImpl, init$, void, $ModuleDescriptor*, $URI*, $Supplier*, $ModulePatcher*, $ModuleTarget*, $ModuleHashes*, $ModuleHashes$HashSupplier*, $ModuleResolution*)},
	{"computeHash", "(Ljava/lang/String;)[B", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, computeHash, $bytes*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, hashCode, int32_t)},
	{"hasher", "()Ljdk/internal/module/ModuleHashes$HashSupplier;", nullptr, 0, $virtualMethod(ModuleReferenceImpl, hasher, $ModuleHashes$HashSupplier*)},
	{"isPatched", "()Z", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, isPatched, bool)},
	{"moduleResolution", "()Ljdk/internal/module/ModuleResolution;", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, moduleResolution, $ModuleResolution*)},
	{"moduleTarget", "()Ljdk/internal/module/ModuleTarget;", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, moduleTarget, $ModuleTarget*)},
	{"open", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, open, $ModuleReader*), "java.io.IOException"},
	{"recordedHashes", "()Ljdk/internal/module/ModuleHashes;", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, recordedHashes, $ModuleHashes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleReferenceImpl, toString, $String*)},
	{}
};

$ClassInfo _ModuleReferenceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.module.ModuleReferenceImpl",
	"java.lang.module.ModuleReference",
	nullptr,
	_ModuleReferenceImpl_FieldInfo_,
	_ModuleReferenceImpl_MethodInfo_
};

$Object* allocate$ModuleReferenceImpl($Class* clazz) {
	return $of($alloc(ModuleReferenceImpl));
}

void ModuleReferenceImpl::init$($ModuleDescriptor* descriptor, $URI* location, $Supplier* readerSupplier, $ModulePatcher* patcher, $ModuleTarget* target, $ModuleHashes* recordedHashes, $ModuleHashes$HashSupplier* hasher, $ModuleResolution* moduleResolution) {
	$ModuleReference::init$(descriptor, $cast($URI, $Objects::requireNonNull(location)));
	$set(this, location$, location);
	$set(this, readerSupplier, readerSupplier);
	$set(this, patcher, patcher);
	$set(this, target, target);
	$set(this, recordedHashes$, recordedHashes);
	$set(this, hasher$, hasher);
	$set(this, moduleResolution$, moduleResolution);
}

$ModuleReader* ModuleReferenceImpl::open() {
	try {
		return $cast($ModuleReader, $nc(this->readerSupplier)->get());
	} catch ($UncheckedIOException& e) {
		$throw($($cast($IOException, e->getCause())));
	}
	$shouldNotReachHere();
}

bool ModuleReferenceImpl::isPatched() {
	return (this->patcher != nullptr);
}

$ModuleTarget* ModuleReferenceImpl::moduleTarget() {
	return this->target;
}

$ModuleHashes* ModuleReferenceImpl::recordedHashes() {
	return this->recordedHashes$;
}

$ModuleHashes$HashSupplier* ModuleReferenceImpl::hasher() {
	return this->hasher$;
}

$ModuleResolution* ModuleReferenceImpl::moduleResolution() {
	return this->moduleResolution$;
}

$bytes* ModuleReferenceImpl::computeHash($String* algorithm) {
	$var($bytes, result, this->cachedHash);
	if (result != nullptr) {
		return result;
	}
	if (this->hasher$ == nullptr) {
		return nullptr;
	}
	$set(this, cachedHash, ($assign(result, $nc(this->hasher$)->generate(algorithm))));
	return result;
}

int32_t ModuleReferenceImpl::hashCode() {
	int32_t hc = this->hash;
	if (hc == 0) {
		hc = $nc($(descriptor()))->hashCode();
		hc = 43 * hc + $Objects::hashCode(this->location$);
		hc = 43 * hc + $Objects::hashCode(this->patcher);
		if (hc == 0) {
			hc = -1;
		}
		this->hash = hc;
	}
	return hc;
}

bool ModuleReferenceImpl::equals(Object$* ob) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(ModuleReferenceImpl, ob))) {
		return false;
	}
	$var(ModuleReferenceImpl, that, $cast(ModuleReferenceImpl, ob));
	$var($Object, var$2, $of(this->descriptor()));
	bool var$1 = $Objects::equals(var$2, $($nc(that)->descriptor()));
	bool var$0 = var$1 && $Objects::equals(this->location$, $nc(that)->location$);
	return var$0 && $Objects::equals(this->patcher, $nc(that)->patcher);
}

$String* ModuleReferenceImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("[module "_s);
	sb->append($($nc($(descriptor()))->name()));
	sb->append(", location="_s);
	sb->append($of(this->location$));
	if (isPatched()) {
		sb->append(" (patched)"_s);
	}
	sb->append("]"_s);
	return sb->toString();
}

ModuleReferenceImpl::ModuleReferenceImpl() {
}

$Class* ModuleReferenceImpl::load$($String* name, bool initialize) {
	$loadClass(ModuleReferenceImpl, name, initialize, &_ModuleReferenceImpl_ClassInfo_, allocate$ModuleReferenceImpl);
	return class$;
}

$Class* ModuleReferenceImpl::class$ = nullptr;

		} // module
	} // internal
} // jdk