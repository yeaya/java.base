#include <sun/security/provider/FileInputStreamPool.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/security/provider/FileInputStreamPool$StreamRef.h>
#include <sun/security/provider/FileInputStreamPool$UnclosableInputStream.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $FileInputStreamPool$StreamRef = ::sun::security::provider::FileInputStreamPool$StreamRef;
using $FileInputStreamPool$UnclosableInputStream = ::sun::security::provider::FileInputStreamPool$UnclosableInputStream;

namespace sun {
	namespace security {
		namespace provider {

$ConcurrentMap* FileInputStreamPool::pool = nullptr;
$ReferenceQueue* FileInputStreamPool::refQueue = nullptr;

void FileInputStreamPool::init$() {
}

$InputStream* FileInputStreamPool::getInputStream($File* file) {
	$init(FileInputStreamPool);
	$useLocalObjectStack();
	$var($FileInputStreamPool$StreamRef, oldRref, nullptr);
	while (($assign(oldRref, $cast($FileInputStreamPool$StreamRef, FileInputStreamPool::refQueue->poll()))) != nullptr) {
		FileInputStreamPool::pool->remove($nc(oldRref)->file, oldRref);
	}
	$var($File, cfile, $nc(file)->getCanonicalFile());
	$assign(oldRref, $cast($FileInputStreamPool$StreamRef, FileInputStreamPool::pool->get(cfile)));
	$var($FileInputStreamPool$UnclosableInputStream, oldStream, (oldRref == nullptr) ? ($FileInputStreamPool$UnclosableInputStream*)nullptr : $cast($FileInputStreamPool$UnclosableInputStream, oldRref->get()));
	$var($FileInputStreamPool$StreamRef, newRef, nullptr);
	$var($FileInputStreamPool$UnclosableInputStream, newStream, nullptr);
	while (true) {
		if (oldStream != nullptr) {
			if (newStream != nullptr) {
				try {
					$$nc(newStream->getWrappedStream())->close();
				} catch ($IOException& ignore) {
				}
			}
			return oldStream;
		} else {
			if (newStream == nullptr) {
				$assign(newStream, $new($FileInputStreamPool$UnclosableInputStream, $$new($FileInputStream, cfile)));
				$assign(newRef, $new($FileInputStreamPool$StreamRef, cfile, newStream, FileInputStreamPool::refQueue));
			}
			if (oldRref == nullptr) {
				$assign(oldRref, $cast($FileInputStreamPool$StreamRef, FileInputStreamPool::pool->putIfAbsent(cfile, newRef)));
			} else {
				$assign(oldRref, FileInputStreamPool::pool->replace(cfile, oldRref, newRef) ? ($FileInputStreamPool$StreamRef*)nullptr : $cast($FileInputStreamPool$StreamRef, FileInputStreamPool::pool->get(cfile)));
			}
			if (oldRref == nullptr) {
				return newStream;
			} else {
				$assign(oldStream, $cast($FileInputStreamPool$UnclosableInputStream, oldRref->get()));
			}
		}
	}
}

void FileInputStreamPool::clinit$($Class* clazz) {
	$assignStatic(FileInputStreamPool::pool, $new($ConcurrentHashMap));
	$assignStatic(FileInputStreamPool::refQueue, $new($ReferenceQueue));
}

FileInputStreamPool::FileInputStreamPool() {
}

$Class* FileInputStreamPool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pool", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/io/File;Lsun/security/provider/FileInputStreamPool$StreamRef;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FileInputStreamPool, pool)},
		{"refQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lsun/security/provider/FileInputStreamPool$UnclosableInputStream;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FileInputStreamPool, refQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileInputStreamPool, init$, void)},
		{"getInputStream", "(Ljava/io/File;)Ljava/io/InputStream;", nullptr, $STATIC, $staticMethod(FileInputStreamPool, getInputStream, $InputStream*, $File*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.FileInputStreamPool$UnclosableInputStream", "sun.security.provider.FileInputStreamPool", "UnclosableInputStream", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.provider.FileInputStreamPool$StreamRef", "sun.security.provider.FileInputStreamPool", "StreamRef", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.FileInputStreamPool",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.FileInputStreamPool$UnclosableInputStream,sun.security.provider.FileInputStreamPool$StreamRef"
	};
	$loadClass(FileInputStreamPool, name, initialize, &classInfo$$, FileInputStreamPool::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileInputStreamPool);
	});
	return class$;
}

$Class* FileInputStreamPool::class$ = nullptr;

		} // provider
	} // security
} // sun