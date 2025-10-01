#include <jdk/internal/jrtfs/JrtFileSystem.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/ClosedFileSystemException.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jrtfs/JrtFileAttributes.h>
#include <jdk/internal/jrtfs/JrtFileStore.h>
#include <jdk/internal/jrtfs/JrtFileSystem$1.h>
#include <jdk/internal/jrtfs/JrtFileSystemProvider.h>
#include <jdk/internal/jrtfs/JrtPath.h>
#include <jdk/internal/jrtfs/JrtUtils.h>
#include <jdk/internal/jrtfs/SystemImage.h>
#include <jcpp.h>

#undef NOFOLLOW_LINKS
#undef APPEND
#undef WRITE

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Channels = ::java::nio::channels::Channels;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $ClosedFileSystemException = ::java::nio::file::ClosedFileSystemException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $LinkOption = ::java::nio::file::LinkOption;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $ReadOnlyFileSystemException = ::java::nio::file::ReadOnlyFileSystemException;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $WatchService = ::java::nio::file::WatchService;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $JrtFileAttributes = ::jdk::internal::jrtfs::JrtFileAttributes;
using $JrtFileStore = ::jdk::internal::jrtfs::JrtFileStore;
using $JrtFileSystem$1 = ::jdk::internal::jrtfs::JrtFileSystem$1;
using $JrtFileSystemProvider = ::jdk::internal::jrtfs::JrtFileSystemProvider;
using $JrtPath = ::jdk::internal::jrtfs::JrtPath;
using $JrtUtils = ::jdk::internal::jrtfs::JrtUtils;
using $SystemImage = ::jdk::internal::jrtfs::SystemImage;

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystem$$Lambda$lambda$getPathMatcher$0 : public $PathMatcher {
	$class(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, $NO_CLASS_INIT, $PathMatcher)
public:
	void init$($Pattern* pattern) {
		$set(this, pattern, pattern);
	}
	virtual bool matches($Path* path) override {
		 return JrtFileSystem::lambda$getPathMatcher$0(pattern, path);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JrtFileSystem$$Lambda$lambda$getPathMatcher$0>());
	}
	$Pattern* pattern = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JrtFileSystem$$Lambda$lambda$getPathMatcher$0::fieldInfos[2] = {
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, pattern)},
	{}
};
$MethodInfo JrtFileSystem$$Lambda$lambda$getPathMatcher$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, $PUBLIC, $method(static_cast<void(JrtFileSystem$$Lambda$lambda$getPathMatcher$0::*)($Pattern*)>(&JrtFileSystem$$Lambda$lambda$getPathMatcher$0::init$))},
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JrtFileSystem$$Lambda$lambda$getPathMatcher$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$getPathMatcher$0",
	"java.lang.Object",
	"java.nio.file.PathMatcher",
	fieldInfos,
	methodInfos
};
$Class* JrtFileSystem$$Lambda$lambda$getPathMatcher$0::load$($String* name, bool initialize) {
	$loadClass(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JrtFileSystem$$Lambda$lambda$getPathMatcher$0::class$ = nullptr;

class JrtFileSystem$$Lambda$lambda$iteratorOf$1$1 : public $Function {
	$class(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(JrtFileSystem* inst, $JrtPath* path) {
		$set(this, inst$, inst);
		$set(this, path, path);
	}
	virtual $Object* apply(Object$* child) override {
		 return $of($nc(inst$)->lambda$iteratorOf$1(path, $cast($ImageReader$Node, child)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JrtFileSystem$$Lambda$lambda$iteratorOf$1$1>());
	}
	JrtFileSystem* inst$ = nullptr;
	$JrtPath* path = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, inst$)},
	{"path", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, path)},
	{}
};
$MethodInfo JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/jrtfs/JrtFileSystem;Ljdk/internal/jrtfs/JrtPath;)V", nullptr, $PUBLIC, $method(static_cast<void(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::*)(JrtFileSystem*,$JrtPath*)>(&JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::load$($String* name, bool initialize) {
	$loadClass(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::class$ = nullptr;

class JrtFileSystem$$Lambda$lambda$iteratorOf$3$2 : public $Predicate {
	$class(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($DirectoryStream$Filter* filter) {
		$set(this, filter, filter);
	}
	virtual bool test(Object$* p) override {
		 return JrtFileSystem::lambda$iteratorOf$3(filter, $cast($Path, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JrtFileSystem$$Lambda$lambda$iteratorOf$3$2>());
	}
	$DirectoryStream$Filter* filter = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::fieldInfos[2] = {
	{"filter", "Ljava/nio/file/DirectoryStream$Filter;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, filter)},
	{}
};
$MethodInfo JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/DirectoryStream$Filter;)V", nullptr, $PUBLIC, $method(static_cast<void(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::*)($DirectoryStream$Filter*)>(&JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$3$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::load$($String* name, bool initialize) {
	$loadClass(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::class$ = nullptr;

$FieldInfo _JrtFileSystem_FieldInfo_[] = {
	{"provider", "Ljdk/internal/jrtfs/JrtFileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(JrtFileSystem, provider$)},
	{"rootPath", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $PRIVATE | $FINAL, $field(JrtFileSystem, rootPath)},
	{"isOpen", "Z", nullptr, $PRIVATE | $VOLATILE, $field(JrtFileSystem, isOpen$)},
	{"isClosable", "Z", nullptr, $PRIVATE | $VOLATILE, $field(JrtFileSystem, isClosable)},
	{"image", "Ljdk/internal/jrtfs/SystemImage;", nullptr, $PRIVATE, $field(JrtFileSystem, image)},
	{"supportedFileAttributeViews", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JrtFileSystem, supportedFileAttributeViews$)},
	{}
};

$MethodInfo _JrtFileSystem_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jrtfs/JrtFileSystemProvider;Ljava/util/Map;)V", "(Ljdk/internal/jrtfs/JrtFileSystemProvider;Ljava/util/Map<Ljava/lang/String;*>;)V", 0, $method(static_cast<void(JrtFileSystem::*)($JrtFileSystemProvider*,$Map*)>(&JrtFileSystem::init$)), "java.io.IOException"},
	{"checkNode", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, nullptr, "java.io.IOException"},
	{"checkOptions", "(Ljava/util/Set;)V", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;)V", $STATIC, $method(static_cast<void(*)($Set*)>(&JrtFileSystem::checkOptions))},
	{"cleanup", "()V", nullptr, $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"copyFile", "(ZLjdk/internal/jrtfs/JrtPath;Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/CopyOption;)V", nullptr, $FINAL | $TRANSIENT, $method(static_cast<void(JrtFileSystem::*)(bool,$JrtPath*,$JrtPath*,$CopyOptionArray*)>(&JrtFileSystem::copyFile)), "java.io.IOException"},
	{"createDirectory", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $FINAL | $TRANSIENT, $method(static_cast<void(JrtFileSystem::*)($JrtPath*,$FileAttributeArray*)>(&JrtFileSystem::createDirectory)), "java.io.IOException"},
	{"deleteFile", "(Ljdk/internal/jrtfs/JrtPath;Z)V", nullptr, $FINAL, $method(static_cast<void(JrtFileSystem::*)($JrtPath*,bool)>(&JrtFileSystem::deleteFile)), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $FINAL, $method(static_cast<void(JrtFileSystem::*)()>(&JrtFileSystem::ensureOpen)), "java.io.IOException"},
	{"exists", "(Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"followLinks", "([Ljava/nio/file/LinkOption;)Z", nullptr, $STATIC | $TRANSIENT, $method(static_cast<bool(*)($LinkOptionArray*)>(&JrtFileSystem::followLinks))},
	{"getFileAttributes", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/LinkOption;)Ljdk/internal/jrtfs/JrtFileAttributes;", nullptr, $TRANSIENT, nullptr, "java.io.IOException"},
	{"getFileContent", "(Ljdk/internal/jrtfs/JrtPath;)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"getFileStore", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jrtfs/JrtFileStore;", nullptr, $FINAL, $method(static_cast<$JrtFileStore*(JrtFileSystem::*)($JrtPath*)>(&JrtFileSystem::getFileStore))},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC | $FINAL},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/jrtfs/JrtPath;", nullptr, $PUBLIC | $TRANSIENT},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC},
	{"getRootPath", "()Ljdk/internal/jrtfs/JrtPath;", nullptr, $FINAL, $method(static_cast<$JrtPath*(JrtFileSystem::*)()>(&JrtFileSystem::getRootPath))},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC | $FINAL},
	{"isDirectory", "(Ljdk/internal/jrtfs/JrtPath;Z)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"isLink", "(Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isSameFile", "(Ljdk/internal/jrtfs/JrtPath;Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"iteratorOf", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter;)Ljava/util/Iterator;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/util/Iterator<Ljava/nio/file/Path;>;", 0, nullptr, "java.io.IOException"},
	{"lambda$getPathMatcher$0", "(Ljava/util/regex/Pattern;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Pattern*,$Path*)>(&JrtFileSystem::lambda$getPathMatcher$0))},
	{"lambda$iteratorOf$1", "(Ljdk/internal/jrtfs/JrtPath;Ljdk/internal/jimage/ImageReader$Node;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Path*(JrtFileSystem::*)($JrtPath*,$ImageReader$Node*)>(&JrtFileSystem::lambda$iteratorOf$1))},
	{"lambda$iteratorOf$3", "(Ljava/nio/file/DirectoryStream$Filter;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($DirectoryStream$Filter*,$Path*)>(&JrtFileSystem::lambda$iteratorOf$3))},
	{"lookup", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE, $method(static_cast<$ImageReader$Node*(JrtFileSystem::*)($String*)>(&JrtFileSystem::lookup))},
	{"lookupSymbolic", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE, $method(static_cast<$ImageReader$Node*(JrtFileSystem::*)($String*)>(&JrtFileSystem::lookupSymbolic))},
	{"newByteChannel", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $FINAL | $TRANSIENT, $method(static_cast<$SeekableByteChannel*(JrtFileSystem::*)($JrtPath*,$Set*,$FileAttributeArray*)>(&JrtFileSystem::newByteChannel)), "java.io.IOException"},
	{"newFileChannel", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $FINAL | $TRANSIENT, $method(static_cast<$FileChannel*(JrtFileSystem::*)($JrtPath*,$Set*,$FileAttributeArray*)>(&JrtFileSystem::newFileChannel)), "java.io.IOException"},
	{"newInputStream", "(Ljdk/internal/jrtfs/JrtPath;)Ljava/io/InputStream;", nullptr, $FINAL, $method(static_cast<$InputStream*(JrtFileSystem::*)($JrtPath*)>(&JrtFileSystem::newInputStream)), "java.io.IOException"},
	{"newOutputStream", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $FINAL | $TRANSIENT, $method(static_cast<$OutputStream*(JrtFileSystem::*)($JrtPath*,$OpenOptionArray*)>(&JrtFileSystem::newOutputStream)), "java.io.IOException"},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC | $FINAL},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC},
	{"readOnly", "()Ljava/nio/file/ReadOnlyFileSystemException;", nullptr, $STATIC, $method(static_cast<$ReadOnlyFileSystemException*(*)()>(&JrtFileSystem::readOnly))},
	{"resolveLink", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jrtfs/JrtPath;", nullptr, 0, nullptr, "java.io.IOException"},
	{"setTimes", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $FINAL, $method(static_cast<void(JrtFileSystem::*)($JrtPath*,$FileTime*,$FileTime*,$FileTime*)>(&JrtFileSystem::setTimes)), "java.io.IOException"},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $FINAL},
	{"toRealPath", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/LinkOption;)Ljdk/internal/jrtfs/JrtPath;", nullptr, $TRANSIENT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _JrtFileSystem_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JrtFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileSystem",
	"java.nio.file.FileSystem",
	nullptr,
	_JrtFileSystem_FieldInfo_,
	_JrtFileSystem_MethodInfo_,
	nullptr,
	nullptr,
	_JrtFileSystem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileSystem$1"
};

$Object* allocate$JrtFileSystem($Class* clazz) {
	return $of($alloc(JrtFileSystem));
}

$Set* JrtFileSystem::supportedFileAttributeViews$ = nullptr;

void JrtFileSystem::init$($JrtFileSystemProvider* provider, $Map* env) {
	$FileSystem::init$();
	$set(this, rootPath, $new($JrtPath, this, "/"_s));
	$set(this, provider$, provider);
	$set(this, image, $SystemImage::open());
	this->isOpen$ = true;
	this->isClosable = env != nullptr;
}

bool JrtFileSystem::isOpen() {
	return this->isOpen$;
}

void JrtFileSystem::close() {
	if (!this->isClosable) {
		$throwNew($UnsupportedOperationException);
	}
	cleanup();
}

$FileSystemProvider* JrtFileSystem::provider() {
	return this->provider$;
}

$Iterable* JrtFileSystem::getRootDirectories() {
	return $Collections::singleton($(getRootPath()));
}

$Path* JrtFileSystem::getPath($String* first, $StringArray* more) {
	if ($nc(more)->length == 0) {
		return $new($JrtPath, this, first);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(first);
	{
		$var($StringArray, arr$, more);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, path, arr$->get(i$));
			{
				if (!$nc(path)->isEmpty()) {
					if (sb->length() > 0) {
						sb->append(u'/');
					}
					sb->append(path);
				}
			}
		}
	}
	return $new($JrtPath, this, $(sb->toString()));
}

bool JrtFileSystem::isReadOnly() {
	return true;
}

$UserPrincipalLookupService* JrtFileSystem::getUserPrincipalLookupService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$WatchService* JrtFileSystem::newWatchService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Iterable* JrtFileSystem::getFileStores() {
	return $Collections::singleton($(getFileStore($(getRootPath()))));
}

$Set* JrtFileSystem::supportedFileAttributeViews() {
	return JrtFileSystem::supportedFileAttributeViews$;
}

$String* JrtFileSystem::toString() {
	return "jrt:/"_s;
}

$String* JrtFileSystem::getSeparator() {
	return "/"_s;
}

$PathMatcher* JrtFileSystem::getPathMatcher($String* syntaxAndInput) {
	int32_t pos = $nc(syntaxAndInput)->indexOf((int32_t)u':');
	if (pos <= 0 || pos == syntaxAndInput->length()) {
		$throwNew($IllegalArgumentException, $$str({"pos is "_s, $$str(pos)}));
	}
	$var($String, syntax, syntaxAndInput->substring(0, pos));
	$var($String, input, syntaxAndInput->substring(pos + 1));
	$var($String, expr, nullptr);
	if (syntax->equalsIgnoreCase("glob"_s)) {
		$assign(expr, $JrtUtils::toRegexPattern(input));
	} else if ($nc(syntax)->equalsIgnoreCase("regex"_s)) {
		$assign(expr, input);
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Syntax \'"_s, syntax, "\' not recognized"_s}));
	}
	$var($Pattern, pattern, $Pattern::compile(expr));
	return static_cast<$PathMatcher*>($new(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, pattern));
}

$JrtPath* JrtFileSystem::resolveLink($JrtPath* path) {
	$var($ImageReader$Node, node, checkNode(path));
	if ($nc(node)->isLink()) {
		$assign(node, node->resolveLink());
		return $new($JrtPath, this, $($nc(node)->getName()));
	}
	return path;
}

$JrtFileAttributes* JrtFileSystem::getFileAttributes($JrtPath* path, $LinkOptionArray* options) {
	$var($ImageReader$Node, node, checkNode(path));
	bool var$0 = $nc(node)->isLink();
	if (var$0 && followLinks(options)) {
		return $new($JrtFileAttributes, $(node->resolveLink(true)));
	}
	return $new($JrtFileAttributes, node);
}

$Iterator* JrtFileSystem::iteratorOf($JrtPath* path, $DirectoryStream$Filter* filter) {
	$var($ImageReader$Node, node, $nc($(checkNode(path)))->resolveLink(true));
	if (!$nc(node)->isDirectory()) {
		$throwNew($NotDirectoryException, $($nc(path)->getName()));
	}
	if (filter == nullptr) {
		return $nc($($nc($($nc($($nc(node)->getChildren()))->stream()))->map(static_cast<$Function*>($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, this, path)))))->iterator();
	}
	return $nc($($nc($($nc($($nc($($nc(node)->getChildren()))->stream()))->map(static_cast<$Function*>($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, this, path)))))->filter(static_cast<$Predicate*>($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, filter)))))->iterator();
}

$bytes* JrtFileSystem::getFileContent($JrtPath* path) {
	$var($ImageReader$Node, node, checkNode(path));
	if ($nc(node)->isDirectory()) {
		$throwNew($FileSystemException, $$str({path, " is a directory"_s}));
	}
	return $nc(this->image)->getResource(node);
}

$ReadOnlyFileSystemException* JrtFileSystem::readOnly() {
	$init(JrtFileSystem);
	return $new($ReadOnlyFileSystemException);
}

bool JrtFileSystem::followLinks($LinkOptionArray* options) {
	$init(JrtFileSystem);
	if (options != nullptr) {
		{
			$var($LinkOptionArray, arr$, options);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$LinkOption* lo = arr$->get(i$);
				{
					$Objects::requireNonNull(lo);
					$init($LinkOption);
					if (lo == $LinkOption::NOFOLLOW_LINKS) {
						return false;
					} else {
						$throwNew($AssertionError, $of("should not reach here"_s));
					}
				}
			}
		}
	}
	return true;
}

void JrtFileSystem::checkOptions($Set* options) {
	$init(JrtFileSystem);
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($OpenOption, option, $cast($OpenOption, i$->next()));
			{
				$Objects::requireNonNull(option);
				if (!($instanceOf($StandardOpenOption, option))) {
					$throwNew($IllegalArgumentException, $$str({"option class: "_s, $of(option)->getClass()}));
				}
			}
		}
	}
	$init($StandardOpenOption);
	bool var$0 = options->contains($StandardOpenOption::WRITE);
	if (var$0 || options->contains($StandardOpenOption::APPEND)) {
		$throw($(readOnly()));
	}
}

void JrtFileSystem::cleanup() {
	$synchronized(this) {
		if (this->isOpen$) {
			this->isOpen$ = false;
			$nc(this->image)->close();
			$set(this, image, nullptr);
		}
	}
}

void JrtFileSystem::setTimes($JrtPath* jrtPath, $FileTime* mtime, $FileTime* atime, $FileTime* ctime) {
	$throw($(readOnly()));
}

void JrtFileSystem::createDirectory($JrtPath* jrtPath, $FileAttributeArray* attrs) {
	$throw($(readOnly()));
}

void JrtFileSystem::deleteFile($JrtPath* jrtPath, bool failIfNotExists) {
	$throw($(readOnly()));
}

$OutputStream* JrtFileSystem::newOutputStream($JrtPath* jrtPath, $OpenOptionArray* options) {
	$throw($(readOnly()));
	$shouldNotReachHere();
}

void JrtFileSystem::copyFile(bool deletesrc, $JrtPath* srcPath, $JrtPath* dstPath, $CopyOptionArray* options) {
	$throw($(readOnly()));
}

$FileChannel* JrtFileSystem::newFileChannel($JrtPath* path, $Set* options, $FileAttributeArray* attrs) {
	$throwNew($UnsupportedOperationException, "newFileChannel"_s);
	$shouldNotReachHere();
}

$InputStream* JrtFileSystem::newInputStream($JrtPath* path) {
	return $new($ByteArrayInputStream, $(getFileContent(path)));
}

$SeekableByteChannel* JrtFileSystem::newByteChannel($JrtPath* path, $Set* options, $FileAttributeArray* attrs) {
	checkOptions(options);
	$var($bytes, buf, getFileContent(path));
	$var($ReadableByteChannel, rbc, $Channels::newChannel(static_cast<$InputStream*>($$new($ByteArrayInputStream, buf))));
	int64_t size = $nc(buf)->length;
	return $new($JrtFileSystem$1, this, rbc, size);
}

$JrtFileStore* JrtFileSystem::getFileStore($JrtPath* path) {
	return $new($JrtFileStore, path);
}

void JrtFileSystem::ensureOpen() {
	if (!isOpen()) {
		$throwNew($ClosedFileSystemException);
	}
}

$JrtPath* JrtFileSystem::getRootPath() {
	return this->rootPath;
}

bool JrtFileSystem::isSameFile($JrtPath* path1, $JrtPath* path2) {
	return checkNode(path1) == checkNode(path2);
}

bool JrtFileSystem::isLink($JrtPath* path) {
	return $nc($(checkNode(path)))->isLink();
}

bool JrtFileSystem::exists($JrtPath* path) {
	try {
		checkNode(path);
	} catch ($NoSuchFileException&) {
		$var($NoSuchFileException, exp, $catch());
		return false;
	}
	return true;
}

bool JrtFileSystem::isDirectory($JrtPath* path, bool resolveLinks) {
	$var($ImageReader$Node, node, checkNode(path));
	return resolveLinks && $nc(node)->isLink() ? $nc($($nc(node)->resolveLink(true)))->isDirectory() : node->isDirectory();
}

$JrtPath* JrtFileSystem::toRealPath($JrtPath* path, $LinkOptionArray* options) {
	$var($ImageReader$Node, node, checkNode(path));
	bool var$0 = followLinks(options);
	if (var$0 && $nc(node)->isLink()) {
		$assign(node, node->resolveLink());
	}
	return $new($JrtPath, this, $($nc(node)->getName()), true);
}

$ImageReader$Node* JrtFileSystem::lookup($String* path) {
	try {
		return $nc(this->image)->findNode(path);
	} catch ($RuntimeException&) {
		$var($Exception, ex, $catch());
		$throwNew($InvalidPathException, path, $(ex->toString()));
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($InvalidPathException, path, $(ex->toString()));
	}
	$shouldNotReachHere();
}

$ImageReader$Node* JrtFileSystem::lookupSymbolic($String* path) {
	int32_t i = 1;
	while (i < $nc(path)->length()) {
		i = path->indexOf((int32_t)u'/', i);
		if (i == -1) {
			break;
		}
		$var($String, prefix, path->substring(0, i));
		$var($ImageReader$Node, node, lookup(prefix));
		if (node == nullptr) {
			break;
		}
		if ($nc(node)->isLink()) {
			$var($ImageReader$Node, link, node->resolveLink(true));
			$var($String, var$0, $($nc(link)->getName()));
			$var($String, resPath, $concat(var$0, $(path->substring(i))));
			$assign(node, lookup(resPath));
			return node != nullptr ? node : lookupSymbolic(resPath);
		}
		++i;
	}
	return nullptr;
}

$ImageReader$Node* JrtFileSystem::checkNode($JrtPath* path) {
	ensureOpen();
	$var($String, p, $nc(path)->getResolvedPath());
	$var($ImageReader$Node, node, lookup(p));
	if (node == nullptr) {
		$assign(node, lookupSymbolic(p));
		if (node == nullptr) {
			$throwNew($NoSuchFileException, p);
		}
	}
	return node;
}

bool JrtFileSystem::lambda$iteratorOf$3($DirectoryStream$Filter* filter, $Path* p) {
	$init(JrtFileSystem);
	try {
		return $nc(filter)->accept(p);
	} catch ($IOException&) {
		$catch();
	}
	return false;
}

$Path* JrtFileSystem::lambda$iteratorOf$1($JrtPath* path, $ImageReader$Node* child) {
	return static_cast<$Path*>(($nc(path)->resolve($(static_cast<$Path*>($$new($JrtPath, this, $($nc(child)->getNameString()))->getFileName())))));
}

bool JrtFileSystem::lambda$getPathMatcher$0($Pattern* pattern, $Path* path) {
	$init(JrtFileSystem);
	return $nc($($nc(pattern)->matcher($($nc(path)->toString()))))->matches();
}

void clinit$JrtFileSystem($Class* class$) {
	$assignStatic(JrtFileSystem::supportedFileAttributeViews$, $Collections::unmodifiableSet($$new($HashSet, $(static_cast<$Collection*>($Arrays::asList($$new($StringArray, {
		"basic"_s,
		"jrt"_s
	})))))));
}

JrtFileSystem::JrtFileSystem() {
}

$Class* JrtFileSystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JrtFileSystem$$Lambda$lambda$getPathMatcher$0::classInfo$.name)) {
			return JrtFileSystem$$Lambda$lambda$getPathMatcher$0::load$(name, initialize);
		}
		if (name->equals(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::classInfo$.name)) {
			return JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::load$(name, initialize);
		}
		if (name->equals(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::classInfo$.name)) {
			return JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::load$(name, initialize);
		}
	}
	$loadClass(JrtFileSystem, name, initialize, &_JrtFileSystem_ClassInfo_, clinit$JrtFileSystem, allocate$JrtFileSystem);
	return class$;
}

$Class* JrtFileSystem::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk