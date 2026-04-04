#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/ScopedMemoryAccess$BufferAccess.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jdk/internal/vm/vector/VectorSupport$LoadOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

#undef INSTANCE
#undef UNSAFE

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess$BufferAccess = ::jdk::internal::misc::ScopedMemoryAccess$BufferAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$ScopedAccessError = ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$LoadOperation = ::jdk::internal::vm::vector::VectorSupport$LoadOperation;
using $VectorSupport$StoreVectorOperation = ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace misc {

$Unsafe* ScopedMemoryAccess::UNSAFE = nullptr;
ScopedMemoryAccess* ScopedMemoryAccess::theScopedMemoryAccess = nullptr;

void ScopedMemoryAccess::registerNatives() {
	$init(ScopedMemoryAccess);
	$prepareNativeStatic(registerNatives, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

bool ScopedMemoryAccess::closeScope($ScopedMemoryAccess$Scope* scope) {
	$init($ScopedMemoryAccess$Scope$ScopedAccessError);
	return closeScope0(scope, $ScopedMemoryAccess$Scope$ScopedAccessError::INSTANCE);
}

bool ScopedMemoryAccess::closeScope0($ScopedMemoryAccess$Scope* scope, $ScopedMemoryAccess$Scope$ScopedAccessError* exception) {
	$prepareNative(closeScope0, bool, $ScopedMemoryAccess$Scope* scope, $ScopedMemoryAccess$Scope$ScopedAccessError* exception);
	bool $ret = $invokeNative(scope, exception);
	$finishNative();
	return $ret;
}

void ScopedMemoryAccess::init$() {
}

ScopedMemoryAccess* ScopedMemoryAccess::getScopedMemoryAccess() {
	$init(ScopedMemoryAccess);
	return ScopedMemoryAccess::theScopedMemoryAccess;
}

void ScopedMemoryAccess::copyMemory($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	try {
		copyMemoryInternal(srcScope, dstScope, srcBase, srcOffset, destBase, destOffset, bytes);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::copyMemoryInternal($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	$var($Throwable, var$0, nullptr);
	try {
		if (srcScope != nullptr) {
			srcScope->checkValidState();
		}
		if (dstScope != nullptr) {
			dstScope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->copyMemory(srcBase, srcOffset, destBase, destOffset, bytes);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(srcScope);
		$Reference::reachabilityFence(dstScope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ScopedMemoryAccess::copySwapMemory($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	try {
		copySwapMemoryInternal(srcScope, dstScope, srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::copySwapMemoryInternal($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	$var($Throwable, var$0, nullptr);
	try {
		if (srcScope != nullptr) {
			srcScope->checkValidState();
		}
		if (dstScope != nullptr) {
			dstScope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->copySwapMemory(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(srcScope);
		$Reference::reachabilityFence(dstScope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ScopedMemoryAccess::setMemory($ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	try {
		setMemoryInternal(scope, o, offset, bytes, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::setMemoryInternal($ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->setMemory(o, offset, bytes, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t ScopedMemoryAccess::vectorizedMismatch($ScopedMemoryAccess$Scope* aScope, $ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale) {
	try {
		return vectorizedMismatchInternal(aScope, bScope, a, aOffset, b, bOffset, length, log2ArrayIndexScale);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::vectorizedMismatchInternal($ScopedMemoryAccess$Scope* aScope, $ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (aScope != nullptr) {
			aScope->checkValidState();
		}
		if (bScope != nullptr) {
			bScope->checkValidState();
		}
		var$2 = $ArraysSupport::vectorizedMismatch(a, aOffset, b, bOffset, length, log2ArrayIndexScale);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(aScope);
		$Reference::reachabilityFence(bScope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::isLoaded($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		return isLoadedInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::isLoadedInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $$nc($SharedSecrets::getJavaNioAccess())->isLoaded(address, isSync, size);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::load($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		loadInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::loadInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$$nc($SharedSecrets::getJavaNioAccess())->load(address, isSync, size);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ScopedMemoryAccess::unload($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		unloadInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::unloadInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$$nc($SharedSecrets::getJavaNioAccess())->unload(address, isSync, size);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ScopedMemoryAccess::force($ScopedMemoryAccess$Scope* scope, $FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length) {
	try {
		forceInternal(scope, fd, address, isSync, index, length);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::forceInternal($ScopedMemoryAccess$Scope* scope, $FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$$nc($SharedSecrets::getJavaNioAccess())->force(fd, address, isSync, index, length);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$VectorSupport$Vector* ScopedMemoryAccess::loadFromByteBuffer($Class* vmClass, $Class* e, int32_t length, $ByteBuffer* bb, int32_t offset, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	try {
		return loadFromByteBufferScoped($($ScopedMemoryAccess$BufferAccess::scope(bb)), vmClass, e, length, bb, offset, s, defaultImpl);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

$VectorSupport$Vector* ScopedMemoryAccess::loadFromByteBufferScoped($ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, $ByteBuffer* bb, int32_t offset, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	$var($VectorSupport$Vector, var$2, nullptr);
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$var($Object, var$3, $ScopedMemoryAccess$BufferAccess::bufferBase(bb));
		$assign(var$2, $cast($VectorSupport$Vector, $VectorSupport::load(vmClass, e, length, var$3, $ScopedMemoryAccess$BufferAccess::bufferAddress(bb, offset), bb, offset, s, defaultImpl)));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::storeIntoByteBuffer($Class* vmClass, $Class* e, int32_t length, $VectorSupport$Vector* v, $ByteBuffer* bb, int32_t offset, $VectorSupport$StoreVectorOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	try {
		storeIntoByteBufferScoped($($ScopedMemoryAccess$BufferAccess::scope(bb)), vmClass, e, length, v, bb, offset, defaultImpl);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::storeIntoByteBufferScoped($ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, $VectorSupport$Vector* v, $ByteBuffer* bb, int32_t offset, $VectorSupport$StoreVectorOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$var($Object, var$1, $ScopedMemoryAccess$BufferAccess::bufferBase(bb));
		$VectorSupport::store(vmClass, e, length, var$1, $ScopedMemoryAccess$BufferAccess::bufferAddress(bb, offset), v, bb, offset, defaultImpl);
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int8_t ScopedMemoryAccess::getByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByte(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putByte(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int8_t ScopedMemoryAccess::getByteVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putByteVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int8_t ScopedMemoryAccess::getByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putByteRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int8_t ScopedMemoryAccess::getByteOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putByteOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int8_t ScopedMemoryAccess::getAndAddByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByte(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByteAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByteRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByte(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByteAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByteRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByte(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByteAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByteRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByte(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByteAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	$var($Throwable, var$0, nullptr);
	int8_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByteRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShort(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putShort(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int16_t ScopedMemoryAccess::getShortUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getShortUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortUnaligned(base, offset, be);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be) {
	try {
		putShortUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putShortUnaligned(base, offset, value, be);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int16_t ScopedMemoryAccess::getShortVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putShortVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int16_t ScopedMemoryAccess::getShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putShortRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int16_t ScopedMemoryAccess::getShortOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putShortOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int16_t ScopedMemoryAccess::getAndAddShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShort(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShortAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShortRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShort(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShortAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShortRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShort(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShortAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShortRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShort(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShortAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	$var($Throwable, var$0, nullptr);
	int16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShortRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getChar(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putChar(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

char16_t ScopedMemoryAccess::getCharUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getCharUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharUnaligned(base, offset, be);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be) {
	try {
		putCharUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putCharUnaligned(base, offset, value, be);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

char16_t ScopedMemoryAccess::getCharVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putCharVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

char16_t ScopedMemoryAccess::getCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putCharRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

char16_t ScopedMemoryAccess::getCharOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putCharOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

char16_t ScopedMemoryAccess::getAndAddChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddChar(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddCharAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddCharRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrChar(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrCharAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrCharRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndChar(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndCharAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndCharRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorChar(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorCharAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	$var($Throwable, var$0, nullptr);
	char16_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorCharRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getInt(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putInt(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t ScopedMemoryAccess::getIntUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getIntUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntUnaligned(base, offset, be);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be) {
	try {
		putIntUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putIntUnaligned(base, offset, value, be);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t ScopedMemoryAccess::getIntVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putIntVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t ScopedMemoryAccess::getIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putIntRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int32_t ScopedMemoryAccess::getIntOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putIntOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ScopedMemoryAccess::compareAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndSetIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetInt(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeInt(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeIntAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeIntRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntPlain(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetInt(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetInt(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetIntAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetIntRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddInt(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddIntAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddIntRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrInt(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrIntAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrIntRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndInt(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndIntAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndIntRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorInt(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorIntAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorIntRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLong(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putLong(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t ScopedMemoryAccess::getLongUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getLongUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongUnaligned(base, offset, be);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be) {
	try {
		putLongUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putLongUnaligned(base, offset, value, be);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t ScopedMemoryAccess::getLongVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putLongVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t ScopedMemoryAccess::getLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putLongRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

int64_t ScopedMemoryAccess::getLongOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putLongOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ScopedMemoryAccess::compareAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndSetLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetLong(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLong(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLongAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLongRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongPlain(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLong(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLong(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLongAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLongRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLong(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLongAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLongRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLong(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLongAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLongRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLong(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLongAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLongRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLong(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLongAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLongRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloat(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putFloat(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

float ScopedMemoryAccess::getFloatVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putFloatVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

float ScopedMemoryAccess::getFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putFloatRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

float ScopedMemoryAccess::getFloatOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putFloatOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ScopedMemoryAccess::compareAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndSetFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetFloat(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloat(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloatAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloatRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatPlain(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloat(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloat(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloatAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloatRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloat(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloatAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	$var($Throwable, var$0, nullptr);
	float var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloatRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDouble(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putDouble(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

double ScopedMemoryAccess::getDoubleVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleVolatile(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putDoubleVolatile(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

double ScopedMemoryAccess::getDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleAcquire(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putDoubleRelease(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

double ScopedMemoryAccess::getDoubleOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleOpaque(base, offset);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		$nc(ScopedMemoryAccess::UNSAFE)->putDoubleOpaque(base, offset, value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ScopedMemoryAccess::compareAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndSetDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetDouble(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDouble(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDoubleAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDoubleRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoublePlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoublePlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoublePlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoublePlain(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDouble(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoubleAcquire(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoubleRelease(base, offset, expected, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDouble(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDoubleAcquire(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDoubleRelease(base, offset, value);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDouble(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDoubleAcquire(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	$var($Throwable, var$0, nullptr);
	double var$2 = 0.0;
	bool return$1 = false;
	try {
		if (scope != nullptr) {
			scope->checkValidState();
		}
		var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDoubleRelease(base, offset, delta);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$Reference::reachabilityFence(scope);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::clinit$($Class* clazz) {
	$assignStatic(ScopedMemoryAccess::UNSAFE, $Unsafe::getUnsafe());
	{
		ScopedMemoryAccess::registerNatives();
	}
	$assignStatic(ScopedMemoryAccess::theScopedMemoryAccess, $new(ScopedMemoryAccess));
}

ScopedMemoryAccess::ScopedMemoryAccess() {
}

$Class* ScopedMemoryAccess::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScopedMemoryAccess, UNSAFE)},
		{"theScopedMemoryAccess", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScopedMemoryAccess, theScopedMemoryAccess)},
		{}
	};
	$CompoundAttribute compareAndExchangeDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute copyMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute copyMemoryInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute copySwapMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute copySwapMemoryInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute forcemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute forceInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getByteOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getCharOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getCharUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getFloatOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getIntOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getIntUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getLongOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getLongUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getShortOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getShortUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute getShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute isLoadedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute isLoadedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute loadmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute loadFromByteBuffermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute loadFromByteBufferScopedmethodAnnotations$$[] = {
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute loadInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putByteOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putCharOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putCharUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putFloatOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putIntOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putIntUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putLongOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putLongUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putShortOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortOpaqueInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putShortUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortUnalignedInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute putShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortVolatileInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute setMemorymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setMemoryInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute storeIntoByteBuffermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute storeIntoByteBufferScopedmethodAnnotations$$[] = {
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute unloadmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute unloadInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute vectorizedMismatchmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute vectorizedMismatchInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoublePlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoublePlainInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatPlainInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntPlainInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongAcquireInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongPlainInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongReleaseInternalmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, init$, void)},
		{"closeScope", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, closeScope, bool, $ScopedMemoryAccess$Scope*)},
		{"closeScope0", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError;)Z", nullptr, $NATIVE, $virtualMethod(ScopedMemoryAccess, closeScope0, bool, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope$ScopedAccessError*)},
		{"compareAndExchangeDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeDouble, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoublemethodAnnotations$$},
		{"compareAndExchangeDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeDoubleAcquire, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleAcquiremethodAnnotations$$},
		{"compareAndExchangeDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeDoubleAcquireInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleAcquireInternalmethodAnnotations$$},
		{"compareAndExchangeDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeDoubleInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleInternalmethodAnnotations$$},
		{"compareAndExchangeDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeDoubleRelease, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleReleasemethodAnnotations$$},
		{"compareAndExchangeDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeDoubleReleaseInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleReleaseInternalmethodAnnotations$$},
		{"compareAndExchangeFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeFloat, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatmethodAnnotations$$},
		{"compareAndExchangeFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeFloatAcquire, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatAcquiremethodAnnotations$$},
		{"compareAndExchangeFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeFloatAcquireInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatAcquireInternalmethodAnnotations$$},
		{"compareAndExchangeFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeFloatInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatInternalmethodAnnotations$$},
		{"compareAndExchangeFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeFloatRelease, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatReleasemethodAnnotations$$},
		{"compareAndExchangeFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeFloatReleaseInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatReleaseInternalmethodAnnotations$$},
		{"compareAndExchangeInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntmethodAnnotations$$},
		{"compareAndExchangeIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntAcquiremethodAnnotations$$},
		{"compareAndExchangeIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntAcquireInternalmethodAnnotations$$},
		{"compareAndExchangeIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntInternalmethodAnnotations$$},
		{"compareAndExchangeIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntReleasemethodAnnotations$$},
		{"compareAndExchangeIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntReleaseInternalmethodAnnotations$$},
		{"compareAndExchangeLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongmethodAnnotations$$},
		{"compareAndExchangeLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongAcquiremethodAnnotations$$},
		{"compareAndExchangeLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongAcquireInternalmethodAnnotations$$},
		{"compareAndExchangeLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongInternalmethodAnnotations$$},
		{"compareAndExchangeLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndExchangeLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongReleasemethodAnnotations$$},
		{"compareAndExchangeLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndExchangeLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongReleaseInternalmethodAnnotations$$},
		{"compareAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndSetDouble, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndSetDoublemethodAnnotations$$},
		{"compareAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndSetDoubleInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndSetDoubleInternalmethodAnnotations$$},
		{"compareAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndSetFloat, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndSetFloatmethodAnnotations$$},
		{"compareAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndSetFloatInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndSetFloatInternalmethodAnnotations$$},
		{"compareAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndSetInt, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndSetIntmethodAnnotations$$},
		{"compareAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndSetIntInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndSetIntInternalmethodAnnotations$$},
		{"compareAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, compareAndSetLong, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndSetLongmethodAnnotations$$},
		{"compareAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, compareAndSetLongInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndSetLongInternalmethodAnnotations$$},
		{"copyMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, copyMemory, void, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, copyMemorymethodAnnotations$$},
		{"copyMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, copyMemoryInternal, void, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, copyMemoryInternalmethodAnnotations$$},
		{"copySwapMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, copySwapMemory, void, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, copySwapMemorymethodAnnotations$$},
		{"copySwapMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, copySwapMemoryInternal, void, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, copySwapMemoryInternalmethodAnnotations$$},
		{"force", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, force, void, $ScopedMemoryAccess$Scope*, $FileDescriptor*, int64_t, bool, int64_t, int64_t), nullptr, nullptr, forcemethodAnnotations$$},
		{"forceInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, forceInternal, void, $ScopedMemoryAccess$Scope*, $FileDescriptor*, int64_t, bool, int64_t, int64_t), nullptr, nullptr, forceInternalmethodAnnotations$$},
		{"getAndAddByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddByte, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddBytemethodAnnotations$$},
		{"getAndAddByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddByteAcquire, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteAcquiremethodAnnotations$$},
		{"getAndAddByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddByteAcquireInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteAcquireInternalmethodAnnotations$$},
		{"getAndAddByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddByteInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteInternalmethodAnnotations$$},
		{"getAndAddByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddByteRelease, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteReleasemethodAnnotations$$},
		{"getAndAddByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddByteReleaseInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteReleaseInternalmethodAnnotations$$},
		{"getAndAddChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddChar, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharmethodAnnotations$$},
		{"getAndAddCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddCharAcquire, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharAcquiremethodAnnotations$$},
		{"getAndAddCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddCharAcquireInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharAcquireInternalmethodAnnotations$$},
		{"getAndAddCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddCharInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharInternalmethodAnnotations$$},
		{"getAndAddCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddCharRelease, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharReleasemethodAnnotations$$},
		{"getAndAddCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddCharReleaseInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharReleaseInternalmethodAnnotations$$},
		{"getAndAddDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddDouble, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoublemethodAnnotations$$},
		{"getAndAddDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddDoubleAcquire, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleAcquiremethodAnnotations$$},
		{"getAndAddDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddDoubleAcquireInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleAcquireInternalmethodAnnotations$$},
		{"getAndAddDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddDoubleInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleInternalmethodAnnotations$$},
		{"getAndAddDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddDoubleRelease, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleReleasemethodAnnotations$$},
		{"getAndAddDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddDoubleReleaseInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleReleaseInternalmethodAnnotations$$},
		{"getAndAddFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddFloat, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatmethodAnnotations$$},
		{"getAndAddFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddFloatAcquire, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatAcquiremethodAnnotations$$},
		{"getAndAddFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddFloatAcquireInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatAcquireInternalmethodAnnotations$$},
		{"getAndAddFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddFloatInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatInternalmethodAnnotations$$},
		{"getAndAddFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddFloatRelease, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatReleasemethodAnnotations$$},
		{"getAndAddFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddFloatReleaseInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatReleaseInternalmethodAnnotations$$},
		{"getAndAddInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntmethodAnnotations$$},
		{"getAndAddIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntAcquiremethodAnnotations$$},
		{"getAndAddIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntAcquireInternalmethodAnnotations$$},
		{"getAndAddIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntInternalmethodAnnotations$$},
		{"getAndAddIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntReleasemethodAnnotations$$},
		{"getAndAddIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntReleaseInternalmethodAnnotations$$},
		{"getAndAddLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongmethodAnnotations$$},
		{"getAndAddLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongAcquiremethodAnnotations$$},
		{"getAndAddLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongAcquireInternalmethodAnnotations$$},
		{"getAndAddLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongInternalmethodAnnotations$$},
		{"getAndAddLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongReleasemethodAnnotations$$},
		{"getAndAddLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongReleaseInternalmethodAnnotations$$},
		{"getAndAddShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddShort, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortmethodAnnotations$$},
		{"getAndAddShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddShortAcquire, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortAcquiremethodAnnotations$$},
		{"getAndAddShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddShortAcquireInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortAcquireInternalmethodAnnotations$$},
		{"getAndAddShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddShortInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortInternalmethodAnnotations$$},
		{"getAndAddShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndAddShortRelease, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortReleasemethodAnnotations$$},
		{"getAndAddShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndAddShortReleaseInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseAndByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndByte, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndBytemethodAnnotations$$},
		{"getAndBitwiseAndByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndByteAcquire, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteAcquiremethodAnnotations$$},
		{"getAndBitwiseAndByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndByteAcquireInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseAndByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndByteInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteInternalmethodAnnotations$$},
		{"getAndBitwiseAndByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndByteRelease, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteReleasemethodAnnotations$$},
		{"getAndBitwiseAndByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndByteReleaseInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseAndChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndChar, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharmethodAnnotations$$},
		{"getAndBitwiseAndCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndCharAcquire, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharAcquiremethodAnnotations$$},
		{"getAndBitwiseAndCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndCharAcquireInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseAndCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndCharInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharInternalmethodAnnotations$$},
		{"getAndBitwiseAndCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndCharRelease, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharReleasemethodAnnotations$$},
		{"getAndBitwiseAndCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndCharReleaseInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseAndInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntmethodAnnotations$$},
		{"getAndBitwiseAndIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntAcquiremethodAnnotations$$},
		{"getAndBitwiseAndIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseAndIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntInternalmethodAnnotations$$},
		{"getAndBitwiseAndIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntReleasemethodAnnotations$$},
		{"getAndBitwiseAndIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseAndLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongmethodAnnotations$$},
		{"getAndBitwiseAndLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongAcquiremethodAnnotations$$},
		{"getAndBitwiseAndLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseAndLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongInternalmethodAnnotations$$},
		{"getAndBitwiseAndLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongReleasemethodAnnotations$$},
		{"getAndBitwiseAndLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseAndShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndShort, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortmethodAnnotations$$},
		{"getAndBitwiseAndShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndShortAcquire, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortAcquiremethodAnnotations$$},
		{"getAndBitwiseAndShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndShortAcquireInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseAndShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndShortInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortInternalmethodAnnotations$$},
		{"getAndBitwiseAndShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseAndShortRelease, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortReleasemethodAnnotations$$},
		{"getAndBitwiseAndShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseAndShortReleaseInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseOrByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrByte, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrBytemethodAnnotations$$},
		{"getAndBitwiseOrByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrByteAcquire, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteAcquiremethodAnnotations$$},
		{"getAndBitwiseOrByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrByteAcquireInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseOrByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrByteInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteInternalmethodAnnotations$$},
		{"getAndBitwiseOrByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrByteRelease, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteReleasemethodAnnotations$$},
		{"getAndBitwiseOrByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrByteReleaseInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseOrChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrChar, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharmethodAnnotations$$},
		{"getAndBitwiseOrCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrCharAcquire, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharAcquiremethodAnnotations$$},
		{"getAndBitwiseOrCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrCharAcquireInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseOrCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrCharInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharInternalmethodAnnotations$$},
		{"getAndBitwiseOrCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrCharRelease, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharReleasemethodAnnotations$$},
		{"getAndBitwiseOrCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrCharReleaseInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseOrInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntmethodAnnotations$$},
		{"getAndBitwiseOrIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntAcquiremethodAnnotations$$},
		{"getAndBitwiseOrIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseOrIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntInternalmethodAnnotations$$},
		{"getAndBitwiseOrIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntReleasemethodAnnotations$$},
		{"getAndBitwiseOrIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseOrLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongmethodAnnotations$$},
		{"getAndBitwiseOrLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongAcquiremethodAnnotations$$},
		{"getAndBitwiseOrLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseOrLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongInternalmethodAnnotations$$},
		{"getAndBitwiseOrLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongReleasemethodAnnotations$$},
		{"getAndBitwiseOrLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseOrShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrShort, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortmethodAnnotations$$},
		{"getAndBitwiseOrShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrShortAcquire, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortAcquiremethodAnnotations$$},
		{"getAndBitwiseOrShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrShortAcquireInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseOrShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrShortInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortInternalmethodAnnotations$$},
		{"getAndBitwiseOrShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseOrShortRelease, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortReleasemethodAnnotations$$},
		{"getAndBitwiseOrShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseOrShortReleaseInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseXorByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorByte, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorBytemethodAnnotations$$},
		{"getAndBitwiseXorByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorByteAcquire, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteAcquiremethodAnnotations$$},
		{"getAndBitwiseXorByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorByteAcquireInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseXorByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorByteInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteInternalmethodAnnotations$$},
		{"getAndBitwiseXorByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorByteRelease, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteReleasemethodAnnotations$$},
		{"getAndBitwiseXorByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorByteReleaseInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseXorChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorChar, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharmethodAnnotations$$},
		{"getAndBitwiseXorCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorCharAcquire, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharAcquiremethodAnnotations$$},
		{"getAndBitwiseXorCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorCharAcquireInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseXorCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorCharInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharInternalmethodAnnotations$$},
		{"getAndBitwiseXorCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorCharRelease, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharReleasemethodAnnotations$$},
		{"getAndBitwiseXorCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorCharReleaseInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseXorInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntmethodAnnotations$$},
		{"getAndBitwiseXorIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntAcquiremethodAnnotations$$},
		{"getAndBitwiseXorIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseXorIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntInternalmethodAnnotations$$},
		{"getAndBitwiseXorIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntReleasemethodAnnotations$$},
		{"getAndBitwiseXorIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseXorLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongmethodAnnotations$$},
		{"getAndBitwiseXorLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongAcquiremethodAnnotations$$},
		{"getAndBitwiseXorLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseXorLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongInternalmethodAnnotations$$},
		{"getAndBitwiseXorLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongReleasemethodAnnotations$$},
		{"getAndBitwiseXorLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongReleaseInternalmethodAnnotations$$},
		{"getAndBitwiseXorShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorShort, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortmethodAnnotations$$},
		{"getAndBitwiseXorShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorShortAcquire, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortAcquiremethodAnnotations$$},
		{"getAndBitwiseXorShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorShortAcquireInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortAcquireInternalmethodAnnotations$$},
		{"getAndBitwiseXorShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorShortInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortInternalmethodAnnotations$$},
		{"getAndBitwiseXorShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndBitwiseXorShortRelease, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortReleasemethodAnnotations$$},
		{"getAndBitwiseXorShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndBitwiseXorShortReleaseInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortReleaseInternalmethodAnnotations$$},
		{"getAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetDouble, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoublemethodAnnotations$$},
		{"getAndSetDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetDoubleAcquire, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleAcquiremethodAnnotations$$},
		{"getAndSetDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetDoubleAcquireInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleAcquireInternalmethodAnnotations$$},
		{"getAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetDoubleInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleInternalmethodAnnotations$$},
		{"getAndSetDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetDoubleRelease, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleReleasemethodAnnotations$$},
		{"getAndSetDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetDoubleReleaseInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleReleaseInternalmethodAnnotations$$},
		{"getAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetFloat, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatmethodAnnotations$$},
		{"getAndSetFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetFloatAcquire, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatAcquiremethodAnnotations$$},
		{"getAndSetFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetFloatAcquireInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatAcquireInternalmethodAnnotations$$},
		{"getAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetFloatInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatInternalmethodAnnotations$$},
		{"getAndSetFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetFloatRelease, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatReleasemethodAnnotations$$},
		{"getAndSetFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetFloatReleaseInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatReleaseInternalmethodAnnotations$$},
		{"getAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntmethodAnnotations$$},
		{"getAndSetIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntAcquiremethodAnnotations$$},
		{"getAndSetIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntAcquireInternalmethodAnnotations$$},
		{"getAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntInternalmethodAnnotations$$},
		{"getAndSetIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetIntRelease, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntReleasemethodAnnotations$$},
		{"getAndSetIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetIntReleaseInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntReleaseInternalmethodAnnotations$$},
		{"getAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongmethodAnnotations$$},
		{"getAndSetLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongAcquiremethodAnnotations$$},
		{"getAndSetLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongAcquireInternalmethodAnnotations$$},
		{"getAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongInternalmethodAnnotations$$},
		{"getAndSetLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getAndSetLongRelease, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongReleasemethodAnnotations$$},
		{"getAndSetLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getAndSetLongReleaseInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongReleaseInternalmethodAnnotations$$},
		{"getByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getByte, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getBytemethodAnnotations$$},
		{"getByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getByteAcquire, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteAcquiremethodAnnotations$$},
		{"getByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getByteAcquireInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteAcquireInternalmethodAnnotations$$},
		{"getByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getByteInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteInternalmethodAnnotations$$},
		{"getByteOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getByteOpaque, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteOpaquemethodAnnotations$$},
		{"getByteOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getByteOpaqueInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteOpaqueInternalmethodAnnotations$$},
		{"getByteVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getByteVolatile, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteVolatilemethodAnnotations$$},
		{"getByteVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getByteVolatileInternal, int8_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getByteVolatileInternalmethodAnnotations$$},
		{"getChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getChar, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharmethodAnnotations$$},
		{"getCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getCharAcquire, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharAcquiremethodAnnotations$$},
		{"getCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getCharAcquireInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharAcquireInternalmethodAnnotations$$},
		{"getCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getCharInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharInternalmethodAnnotations$$},
		{"getCharOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getCharOpaque, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharOpaquemethodAnnotations$$},
		{"getCharOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getCharOpaqueInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharOpaqueInternalmethodAnnotations$$},
		{"getCharUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getCharUnaligned, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getCharUnalignedmethodAnnotations$$},
		{"getCharUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getCharUnalignedInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getCharUnalignedInternalmethodAnnotations$$},
		{"getCharVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getCharVolatile, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharVolatilemethodAnnotations$$},
		{"getCharVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getCharVolatileInternal, char16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getCharVolatileInternalmethodAnnotations$$},
		{"getDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getDouble, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoublemethodAnnotations$$},
		{"getDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getDoubleAcquire, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleAcquiremethodAnnotations$$},
		{"getDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getDoubleAcquireInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleAcquireInternalmethodAnnotations$$},
		{"getDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getDoubleInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleInternalmethodAnnotations$$},
		{"getDoubleOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getDoubleOpaque, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleOpaquemethodAnnotations$$},
		{"getDoubleOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getDoubleOpaqueInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleOpaqueInternalmethodAnnotations$$},
		{"getDoubleVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getDoubleVolatile, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleVolatilemethodAnnotations$$},
		{"getDoubleVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getDoubleVolatileInternal, double, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getDoubleVolatileInternalmethodAnnotations$$},
		{"getFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getFloat, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatmethodAnnotations$$},
		{"getFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getFloatAcquire, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatAcquiremethodAnnotations$$},
		{"getFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getFloatAcquireInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatAcquireInternalmethodAnnotations$$},
		{"getFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getFloatInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatInternalmethodAnnotations$$},
		{"getFloatOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getFloatOpaque, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatOpaquemethodAnnotations$$},
		{"getFloatOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getFloatOpaqueInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatOpaqueInternalmethodAnnotations$$},
		{"getFloatVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getFloatVolatile, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatVolatilemethodAnnotations$$},
		{"getFloatVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getFloatVolatileInternal, float, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getFloatVolatileInternalmethodAnnotations$$},
		{"getInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getInt, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntmethodAnnotations$$},
		{"getIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getIntAcquire, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntAcquiremethodAnnotations$$},
		{"getIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getIntAcquireInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntAcquireInternalmethodAnnotations$$},
		{"getIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getIntInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntInternalmethodAnnotations$$},
		{"getIntOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getIntOpaque, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntOpaquemethodAnnotations$$},
		{"getIntOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getIntOpaqueInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntOpaqueInternalmethodAnnotations$$},
		{"getIntUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getIntUnaligned, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getIntUnalignedmethodAnnotations$$},
		{"getIntUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getIntUnalignedInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getIntUnalignedInternalmethodAnnotations$$},
		{"getIntVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getIntVolatile, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntVolatilemethodAnnotations$$},
		{"getIntVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getIntVolatileInternal, int32_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getIntVolatileInternalmethodAnnotations$$},
		{"getLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getLong, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongmethodAnnotations$$},
		{"getLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getLongAcquire, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongAcquiremethodAnnotations$$},
		{"getLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getLongAcquireInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongAcquireInternalmethodAnnotations$$},
		{"getLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getLongInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongInternalmethodAnnotations$$},
		{"getLongOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getLongOpaque, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongOpaquemethodAnnotations$$},
		{"getLongOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getLongOpaqueInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongOpaqueInternalmethodAnnotations$$},
		{"getLongUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getLongUnaligned, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getLongUnalignedmethodAnnotations$$},
		{"getLongUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getLongUnalignedInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getLongUnalignedInternalmethodAnnotations$$},
		{"getLongVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getLongVolatile, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongVolatilemethodAnnotations$$},
		{"getLongVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getLongVolatileInternal, int64_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getLongVolatileInternalmethodAnnotations$$},
		{"getScopedMemoryAccess", "()Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $PUBLIC | $STATIC, $staticMethod(ScopedMemoryAccess, getScopedMemoryAccess, ScopedMemoryAccess*)},
		{"getShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getShort, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortmethodAnnotations$$},
		{"getShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getShortAcquire, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortAcquiremethodAnnotations$$},
		{"getShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getShortAcquireInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortAcquireInternalmethodAnnotations$$},
		{"getShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getShortInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortInternalmethodAnnotations$$},
		{"getShortOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getShortOpaque, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortOpaquemethodAnnotations$$},
		{"getShortOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getShortOpaqueInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortOpaqueInternalmethodAnnotations$$},
		{"getShortUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getShortUnaligned, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getShortUnalignedmethodAnnotations$$},
		{"getShortUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getShortUnalignedInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t, bool), nullptr, nullptr, getShortUnalignedInternalmethodAnnotations$$},
		{"getShortVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, getShortVolatile, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortVolatilemethodAnnotations$$},
		{"getShortVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(ScopedMemoryAccess, getShortVolatileInternal, int16_t, $ScopedMemoryAccess$Scope*, Object$*, int64_t), nullptr, nullptr, getShortVolatileInternalmethodAnnotations$$},
		{"isLoaded", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, isLoaded, bool, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, isLoadedmethodAnnotations$$},
		{"isLoadedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, isLoadedInternal, bool, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, isLoadedInternalmethodAnnotations$$},
		{"load", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, load, void, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, loadmethodAnnotations$$},
		{"loadFromByteBuffer", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadOperation;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ILjava/nio/ByteBuffer;ITS;Ljdk/internal/vm/vector/VectorSupport$LoadOperation<Ljava/nio/ByteBuffer;TV;TE;TS;>;)TV;", $PUBLIC | $STATIC, $staticMethod(ScopedMemoryAccess, loadFromByteBuffer, $VectorSupport$Vector*, $Class*, $Class*, int32_t, $ByteBuffer*, int32_t, $VectorSupport$VectorSpecies*, $VectorSupport$LoadOperation*), nullptr, nullptr, loadFromByteBuffermethodAnnotations$$},
		{"loadFromByteBufferScoped", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class;Ljava/lang/Class;ILjava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadOperation;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ILjava/nio/ByteBuffer;ITS;Ljdk/internal/vm/vector/VectorSupport$LoadOperation<Ljava/nio/ByteBuffer;TV;TE;TS;>;)TV;", $PRIVATE | $STATIC, $staticMethod(ScopedMemoryAccess, loadFromByteBufferScoped, $VectorSupport$Vector*, $ScopedMemoryAccess$Scope*, $Class*, $Class*, int32_t, $ByteBuffer*, int32_t, $VectorSupport$VectorSpecies*, $VectorSupport$LoadOperation*), nullptr, nullptr, loadFromByteBufferScopedmethodAnnotations$$},
		{"loadInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, loadInternal, void, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, loadInternalmethodAnnotations$$},
		{"putByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putByte, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putBytemethodAnnotations$$},
		{"putByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putByteInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteInternalmethodAnnotations$$},
		{"putByteOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putByteOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteOpaquemethodAnnotations$$},
		{"putByteOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putByteOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteOpaqueInternalmethodAnnotations$$},
		{"putByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putByteRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteReleasemethodAnnotations$$},
		{"putByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putByteReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteReleaseInternalmethodAnnotations$$},
		{"putByteVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putByteVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteVolatilemethodAnnotations$$},
		{"putByteVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putByteVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int8_t), nullptr, nullptr, putByteVolatileInternalmethodAnnotations$$},
		{"putChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putChar, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharmethodAnnotations$$},
		{"putCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putCharInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharInternalmethodAnnotations$$},
		{"putCharOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putCharOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharOpaquemethodAnnotations$$},
		{"putCharOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putCharOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharOpaqueInternalmethodAnnotations$$},
		{"putCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putCharRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharReleasemethodAnnotations$$},
		{"putCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putCharReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharReleaseInternalmethodAnnotations$$},
		{"putCharUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JCZ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putCharUnaligned, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t, bool), nullptr, nullptr, putCharUnalignedmethodAnnotations$$},
		{"putCharUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JCZ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putCharUnalignedInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t, bool), nullptr, nullptr, putCharUnalignedInternalmethodAnnotations$$},
		{"putCharVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putCharVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharVolatilemethodAnnotations$$},
		{"putCharVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putCharVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, char16_t), nullptr, nullptr, putCharVolatileInternalmethodAnnotations$$},
		{"putDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putDouble, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoublemethodAnnotations$$},
		{"putDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putDoubleInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleInternalmethodAnnotations$$},
		{"putDoubleOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putDoubleOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleOpaquemethodAnnotations$$},
		{"putDoubleOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putDoubleOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleOpaqueInternalmethodAnnotations$$},
		{"putDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putDoubleRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleReleasemethodAnnotations$$},
		{"putDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putDoubleReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleReleaseInternalmethodAnnotations$$},
		{"putDoubleVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putDoubleVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleVolatilemethodAnnotations$$},
		{"putDoubleVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putDoubleVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double), nullptr, nullptr, putDoubleVolatileInternalmethodAnnotations$$},
		{"putFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putFloat, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatmethodAnnotations$$},
		{"putFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putFloatInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatInternalmethodAnnotations$$},
		{"putFloatOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putFloatOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatOpaquemethodAnnotations$$},
		{"putFloatOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putFloatOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatOpaqueInternalmethodAnnotations$$},
		{"putFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putFloatRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatReleasemethodAnnotations$$},
		{"putFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putFloatReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatReleaseInternalmethodAnnotations$$},
		{"putFloatVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putFloatVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatVolatilemethodAnnotations$$},
		{"putFloatVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putFloatVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float), nullptr, nullptr, putFloatVolatileInternalmethodAnnotations$$},
		{"putInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putInt, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntmethodAnnotations$$},
		{"putIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putIntInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntInternalmethodAnnotations$$},
		{"putIntOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putIntOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntOpaquemethodAnnotations$$},
		{"putIntOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putIntOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntOpaqueInternalmethodAnnotations$$},
		{"putIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putIntRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntReleasemethodAnnotations$$},
		{"putIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putIntReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntReleaseInternalmethodAnnotations$$},
		{"putIntUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JIZ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putIntUnaligned, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, bool), nullptr, nullptr, putIntUnalignedmethodAnnotations$$},
		{"putIntUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JIZ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putIntUnalignedInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, bool), nullptr, nullptr, putIntUnalignedInternalmethodAnnotations$$},
		{"putIntVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putIntVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntVolatilemethodAnnotations$$},
		{"putIntVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putIntVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t), nullptr, nullptr, putIntVolatileInternalmethodAnnotations$$},
		{"putLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putLong, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongmethodAnnotations$$},
		{"putLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putLongInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongInternalmethodAnnotations$$},
		{"putLongOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putLongOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongOpaquemethodAnnotations$$},
		{"putLongOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putLongOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongOpaqueInternalmethodAnnotations$$},
		{"putLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putLongRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongReleasemethodAnnotations$$},
		{"putLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putLongReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongReleaseInternalmethodAnnotations$$},
		{"putLongUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJZ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putLongUnaligned, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, putLongUnalignedmethodAnnotations$$},
		{"putLongUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJZ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putLongUnalignedInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, putLongUnalignedInternalmethodAnnotations$$},
		{"putLongVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putLongVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongVolatilemethodAnnotations$$},
		{"putLongVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putLongVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t), nullptr, nullptr, putLongVolatileInternalmethodAnnotations$$},
		{"putShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putShort, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortmethodAnnotations$$},
		{"putShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putShortInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortInternalmethodAnnotations$$},
		{"putShortOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putShortOpaque, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortOpaquemethodAnnotations$$},
		{"putShortOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putShortOpaqueInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortOpaqueInternalmethodAnnotations$$},
		{"putShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putShortRelease, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortReleasemethodAnnotations$$},
		{"putShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putShortReleaseInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortReleaseInternalmethodAnnotations$$},
		{"putShortUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JSZ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putShortUnaligned, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t, bool), nullptr, nullptr, putShortUnalignedmethodAnnotations$$},
		{"putShortUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JSZ)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putShortUnalignedInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t, bool), nullptr, nullptr, putShortUnalignedInternalmethodAnnotations$$},
		{"putShortVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, putShortVolatile, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortVolatilemethodAnnotations$$},
		{"putShortVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, putShortVolatileInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int16_t), nullptr, nullptr, putShortVolatileInternalmethodAnnotations$$},
		{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ScopedMemoryAccess, registerNatives, void)},
		{"setMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, setMemory, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int8_t), nullptr, nullptr, setMemorymethodAnnotations$$},
		{"setMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJB)V", nullptr, $PRIVATE, $method(ScopedMemoryAccess, setMemoryInternal, void, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int8_t), nullptr, nullptr, setMemoryInternalmethodAnnotations$$},
		{"storeIntoByteBuffer", "(Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation;)V", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ITV;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation<Ljava/nio/ByteBuffer;TV;>;)V", $PUBLIC | $STATIC, $staticMethod(ScopedMemoryAccess, storeIntoByteBuffer, void, $Class*, $Class*, int32_t, $VectorSupport$Vector*, $ByteBuffer*, int32_t, $VectorSupport$StoreVectorOperation*), nullptr, nullptr, storeIntoByteBuffermethodAnnotations$$},
		{"storeIntoByteBufferScoped", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation;)V", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;>(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ITV;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation<Ljava/nio/ByteBuffer;TV;>;)V", $PRIVATE | $STATIC, $staticMethod(ScopedMemoryAccess, storeIntoByteBufferScoped, void, $ScopedMemoryAccess$Scope*, $Class*, $Class*, int32_t, $VectorSupport$Vector*, $ByteBuffer*, int32_t, $VectorSupport$StoreVectorOperation*), nullptr, nullptr, storeIntoByteBufferScopedmethodAnnotations$$},
		{"unload", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, unload, void, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, unloadmethodAnnotations$$},
		{"unloadInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, unloadInternal, void, $ScopedMemoryAccess$Scope*, int64_t, bool, int64_t), nullptr, nullptr, unloadInternalmethodAnnotations$$},
		{"vectorizedMismatch", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JII)I", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, vectorizedMismatch, int32_t, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, vectorizedMismatchmethodAnnotations$$},
		{"vectorizedMismatchInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JII)I", nullptr, $PRIVATE, $method(ScopedMemoryAccess, vectorizedMismatchInternal, int32_t, $ScopedMemoryAccess$Scope*, $ScopedMemoryAccess$Scope*, Object$*, int64_t, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, vectorizedMismatchInternalmethodAnnotations$$},
		{"weakCompareAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetDouble, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoublemethodAnnotations$$},
		{"weakCompareAndSetDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetDoubleAcquire, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleAcquiremethodAnnotations$$},
		{"weakCompareAndSetDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetDoubleAcquireInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleAcquireInternalmethodAnnotations$$},
		{"weakCompareAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetDoubleInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleInternalmethodAnnotations$$},
		{"weakCompareAndSetDoublePlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetDoublePlain, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoublePlainmethodAnnotations$$},
		{"weakCompareAndSetDoublePlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetDoublePlainInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoublePlainInternalmethodAnnotations$$},
		{"weakCompareAndSetDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetDoubleRelease, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleReleasemethodAnnotations$$},
		{"weakCompareAndSetDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetDoubleReleaseInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleReleaseInternalmethodAnnotations$$},
		{"weakCompareAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetFloat, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatmethodAnnotations$$},
		{"weakCompareAndSetFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetFloatAcquire, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatAcquiremethodAnnotations$$},
		{"weakCompareAndSetFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetFloatAcquireInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatAcquireInternalmethodAnnotations$$},
		{"weakCompareAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetFloatInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatInternalmethodAnnotations$$},
		{"weakCompareAndSetFloatPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetFloatPlain, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatPlainmethodAnnotations$$},
		{"weakCompareAndSetFloatPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetFloatPlainInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatPlainInternalmethodAnnotations$$},
		{"weakCompareAndSetFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetFloatRelease, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatReleasemethodAnnotations$$},
		{"weakCompareAndSetFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetFloatReleaseInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatReleaseInternalmethodAnnotations$$},
		{"weakCompareAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetInt, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntmethodAnnotations$$},
		{"weakCompareAndSetIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetIntAcquire, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntAcquiremethodAnnotations$$},
		{"weakCompareAndSetIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetIntAcquireInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntAcquireInternalmethodAnnotations$$},
		{"weakCompareAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetIntInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntInternalmethodAnnotations$$},
		{"weakCompareAndSetIntPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetIntPlain, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntPlainmethodAnnotations$$},
		{"weakCompareAndSetIntPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetIntPlainInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntPlainInternalmethodAnnotations$$},
		{"weakCompareAndSetIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetIntRelease, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntReleasemethodAnnotations$$},
		{"weakCompareAndSetIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetIntReleaseInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntReleaseInternalmethodAnnotations$$},
		{"weakCompareAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetLong, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongmethodAnnotations$$},
		{"weakCompareAndSetLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetLongAcquire, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongAcquiremethodAnnotations$$},
		{"weakCompareAndSetLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetLongAcquireInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongAcquireInternalmethodAnnotations$$},
		{"weakCompareAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetLongInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongInternalmethodAnnotations$$},
		{"weakCompareAndSetLongPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetLongPlain, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongPlainmethodAnnotations$$},
		{"weakCompareAndSetLongPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetLongPlainInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongPlainInternalmethodAnnotations$$},
		{"weakCompareAndSetLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, $virtualMethod(ScopedMemoryAccess, weakCompareAndSetLongRelease, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongReleasemethodAnnotations$$},
		{"weakCompareAndSetLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(ScopedMemoryAccess, weakCompareAndSetLongReleaseInternal, bool, $ScopedMemoryAccess$Scope*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongReleaseInternalmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$BufferAccess", "jdk.internal.misc.ScopedMemoryAccess", "BufferAccess", $STATIC | $FINAL},
		{"jdk.internal.misc.ScopedMemoryAccess$Scoped", "jdk.internal.misc.ScopedMemoryAccess", "Scoped", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.misc.ScopedMemoryAccess",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.misc.ScopedMemoryAccess$BufferAccess,jdk.internal.misc.ScopedMemoryAccess$Scoped,jdk.internal.misc.ScopedMemoryAccess$Scope,jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError,jdk.internal.misc.ScopedMemoryAccess$Scope$Handle"
	};
	$loadClass(ScopedMemoryAccess, name, initialize, &classInfo$$, ScopedMemoryAccess::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess);
	});
	return class$;
}

$Class* ScopedMemoryAccess::class$ = nullptr;

		} // misc
	} // internal
} // jdk