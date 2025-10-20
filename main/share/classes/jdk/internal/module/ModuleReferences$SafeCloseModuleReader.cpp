#include <jdk/internal/module/ModuleReferences$SafeCloseModuleReader.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $Optional = ::java::util::Optional;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $Stream = ::java::util::stream::Stream;
using $ModuleReferences = ::jdk::internal::module::ModuleReferences;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModuleReferences$SafeCloseModuleReader_FieldInfo_[] = {
	{"lock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$SafeCloseModuleReader, lock)},
	{"readLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$SafeCloseModuleReader, readLock)},
	{"writeLock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(ModuleReferences$SafeCloseModuleReader, writeLock)},
	{"closed", "Z", nullptr, $PRIVATE, $field(ModuleReferences$SafeCloseModuleReader, closed)},
	{}
};

$MethodInfo _ModuleReferences$SafeCloseModuleReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ModuleReferences$SafeCloseModuleReader::*)()>(&ModuleReferences$SafeCloseModuleReader::init$))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"implClose", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"implFind", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", $ABSTRACT, nullptr, "java.io.IOException"},
	{"implList", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $ABSTRACT, nullptr, "java.io.IOException"},
	{"implOpen", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", $ABSTRACT, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ModuleReferences$SafeCloseModuleReader_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleReferences$SafeCloseModuleReader", "jdk.internal.module.ModuleReferences", "SafeCloseModuleReader", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ModuleReferences$SafeCloseModuleReader_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.module.ModuleReferences$SafeCloseModuleReader",
	"java.lang.Object",
	"java.lang.module.ModuleReader",
	_ModuleReferences$SafeCloseModuleReader_FieldInfo_,
	_ModuleReferences$SafeCloseModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleReferences$SafeCloseModuleReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleReferences"
};

$Object* allocate$ModuleReferences$SafeCloseModuleReader($Class* clazz) {
	return $of($alloc(ModuleReferences$SafeCloseModuleReader));
}

void ModuleReferences$SafeCloseModuleReader::init$() {
	$set(this, lock, $new($ReentrantReadWriteLock));
	$set(this, readLock, $nc(this->lock)->readLock());
	$set(this, writeLock, $nc(this->lock)->writeLock());
}

$Optional* ModuleReferences$SafeCloseModuleReader::find($String* name) {
	$useLocalCurrentObjectStackCache();
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Optional, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!this->closed) {
				$assign(var$2, implFind(name));
				return$1 = true;
				goto $finally;
			} else {
				$throwNew($IOException, "ModuleReader is closed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Optional* ModuleReferences$SafeCloseModuleReader::open($String* name) {
	$useLocalCurrentObjectStackCache();
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Optional, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!this->closed) {
				$assign(var$2, implOpen(name));
				return$1 = true;
				goto $finally;
			} else {
				$throwNew($IOException, "ModuleReader is closed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Stream* ModuleReferences$SafeCloseModuleReader::list() {
	$useLocalCurrentObjectStackCache();
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Stream, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!this->closed) {
				$assign(var$2, implList());
				return$1 = true;
				goto $finally;
			} else {
				$throwNew($IOException, "ModuleReader is closed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ModuleReferences$SafeCloseModuleReader::close() {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!this->closed) {
				this->closed = true;
				implClose();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

ModuleReferences$SafeCloseModuleReader::ModuleReferences$SafeCloseModuleReader() {
}

$Class* ModuleReferences$SafeCloseModuleReader::load$($String* name, bool initialize) {
	$loadClass(ModuleReferences$SafeCloseModuleReader, name, initialize, &_ModuleReferences$SafeCloseModuleReader_ClassInfo_, allocate$ModuleReferences$SafeCloseModuleReader);
	return class$;
}

$Class* ModuleReferences$SafeCloseModuleReader::class$ = nullptr;

		} // module
	} // internal
} // jdk