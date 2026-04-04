#include <sun/nio/ch/FileLockTable$FileLockReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/nio/channels/FileLock.h>
#include <sun/nio/ch/FileKey.h>
#include <sun/nio/ch/FileLockTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $FileLock = ::java::nio::channels::FileLock;
using $FileKey = ::sun::nio::ch::FileKey;

namespace sun {
	namespace nio {
		namespace ch {

void FileLockTable$FileLockReference::init$($FileLock* referent, $ReferenceQueue* queue, $FileKey* key) {
	$WeakReference::init$(referent, queue);
	$set(this, fileKey$, key);
}

$FileKey* FileLockTable$FileLockReference::fileKey() {
	return this->fileKey$;
}

FileLockTable$FileLockReference::FileLockTable$FileLockReference() {
}

$Class* FileLockTable$FileLockReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileKey", "Lsun/nio/ch/FileKey;", nullptr, $PRIVATE, $field(FileLockTable$FileLockReference, fileKey$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileLock;Ljava/lang/ref/ReferenceQueue;Lsun/nio/ch/FileKey;)V", "(Ljava/nio/channels/FileLock;Ljava/lang/ref/ReferenceQueue<Ljava/nio/channels/FileLock;>;Lsun/nio/ch/FileKey;)V", 0, $method(FileLockTable$FileLockReference, init$, void, $FileLock*, $ReferenceQueue*, $FileKey*)},
		{"fileKey", "()Lsun/nio/ch/FileKey;", nullptr, 0, $virtualMethod(FileLockTable$FileLockReference, fileKey, $FileKey*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.FileLockTable$FileLockReference", "sun.nio.ch.FileLockTable", "FileLockReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.FileLockTable$FileLockReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljava/nio/channels/FileLock;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.FileLockTable"
	};
	$loadClass(FileLockTable$FileLockReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileLockTable$FileLockReference);
	});
	return class$;
}

$Class* FileLockTable$FileLockReference::class$ = nullptr;

		} // ch
	} // nio
} // sun