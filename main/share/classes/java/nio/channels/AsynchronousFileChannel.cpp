#include <java/nio/channels/AsynchronousFileChannel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/FileLock.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef NO_ATTRIBUTES
#undef MAX_VALUE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $FileLock = ::java::nio::channels::FileLock;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Future = ::java::util::concurrent::Future;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AsynchronousFileChannel_FieldInfo_[] = {
	{"NO_ATTRIBUTES", "[Ljava/nio/file/attribute/FileAttribute;", "[Ljava/nio/file/attribute/FileAttribute<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(AsynchronousFileChannel, NO_ATTRIBUTES)},
	{}
};

$MethodInfo _AsynchronousFileChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AsynchronousFileChannel::*)()>(&AsynchronousFileChannel::init$))},
	{"force", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"lock", "(JJZLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(JJZTA;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/FileLock;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"lock", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(TA;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/FileLock;-TA;>;)V", $PUBLIC | $FINAL, $method(static_cast<void(AsynchronousFileChannel::*)(Object$*,$CompletionHandler*)>(&AsynchronousFileChannel::lock))},
	{"lock", "(JJZ)Ljava/util/concurrent/Future;", "(JJZ)Ljava/util/concurrent/Future<Ljava/nio/channels/FileLock;>;", $PUBLIC | $ABSTRACT},
	{"lock", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/nio/channels/FileLock;>;", $PUBLIC | $FINAL, $method(static_cast<$Future*(AsynchronousFileChannel::*)()>(&AsynchronousFileChannel::lock))},
	{"open", "(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/AsynchronousFileChannel;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<AsynchronousFileChannel*(*)($Path*,$Set*,$ExecutorService*,$FileAttributeArray*)>(&AsynchronousFileChannel::open)), "java.io.IOException"},
	{"open", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<AsynchronousFileChannel*(*)($Path*,$OpenOptionArray*)>(&AsynchronousFileChannel::open)), "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;JTA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"read", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"size", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"truncate", "(J)Ljava/nio/channels/AsynchronousFileChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"tryLock", "(JJZ)Ljava/nio/channels/FileLock;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"tryLock", "()Ljava/nio/channels/FileLock;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$FileLock*(AsynchronousFileChannel::*)()>(&AsynchronousFileChannel::tryLock)), "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;JTA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"write", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AsynchronousFileChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.AsynchronousFileChannel",
	"java.lang.Object",
	"java.nio.channels.AsynchronousChannel",
	_AsynchronousFileChannel_FieldInfo_,
	_AsynchronousFileChannel_MethodInfo_
};

$Object* allocate$AsynchronousFileChannel($Class* clazz) {
	return $of($alloc(AsynchronousFileChannel));
}

$FileAttributeArray* AsynchronousFileChannel::NO_ATTRIBUTES = nullptr;

void AsynchronousFileChannel::init$() {
}

AsynchronousFileChannel* AsynchronousFileChannel::open($Path* file, $Set* options, $ExecutorService* executor, $FileAttributeArray* attrs) {
	$init(AsynchronousFileChannel);
	$var($FileSystemProvider, provider, $nc($($nc(file)->getFileSystem()))->provider());
	return $nc(provider)->newAsynchronousFileChannel(file, options, executor, attrs);
}

AsynchronousFileChannel* AsynchronousFileChannel::open($Path* file, $OpenOptionArray* options) {
	$init(AsynchronousFileChannel);
	$var($Set, set, nullptr);
	if ($nc(options)->length == 0) {
		$assign(set, $Collections::emptySet());
	} else {
		$assign(set, $new($HashSet));
		$Collections::addAll(set, options);
	}
	return open(file, set, nullptr, AsynchronousFileChannel::NO_ATTRIBUTES);
}

void AsynchronousFileChannel::lock(Object$* attachment, $CompletionHandler* handler) {
	lock(0, $Long::MAX_VALUE, false, attachment, handler);
}

$Future* AsynchronousFileChannel::lock() {
	return lock(0, $Long::MAX_VALUE, false);
}

$FileLock* AsynchronousFileChannel::tryLock() {
	return tryLock(0, $Long::MAX_VALUE, false);
}

void clinit$AsynchronousFileChannel($Class* class$) {
	$assignStatic(AsynchronousFileChannel::NO_ATTRIBUTES, $new($FileAttributeArray, 0));
}

AsynchronousFileChannel::AsynchronousFileChannel() {
}

$Class* AsynchronousFileChannel::load$($String* name, bool initialize) {
	$loadClass(AsynchronousFileChannel, name, initialize, &_AsynchronousFileChannel_ClassInfo_, clinit$AsynchronousFileChannel, allocate$AsynchronousFileChannel);
	return class$;
}

$Class* AsynchronousFileChannel::class$ = nullptr;

		} // channels
	} // nio
} // java