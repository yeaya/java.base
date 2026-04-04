#include <jdk/internal/jrtfs/JrtFileSystem.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
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
#include <java/util/Arrays.h>
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

#undef APPEND
#undef NOFOLLOW_LINKS
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
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
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
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Pattern = ::java::util::regex::Pattern;
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
	$Pattern* pattern = nullptr;
};
$Class* JrtFileSystem$$Lambda$lambda$getPathMatcher$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, pattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, $PUBLIC, $method(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, init$, void, $Pattern*)},
		{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, matches, bool, $Path*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$getPathMatcher$0",
		"java.lang.Object",
		"java.nio.file.PathMatcher",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileSystem$$Lambda$lambda$getPathMatcher$0);
	});
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
	JrtFileSystem* inst$ = nullptr;
	$JrtPath* path = nullptr;
};
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, inst$)},
		{"path", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jrtfs/JrtFileSystem;Ljdk/internal/jrtfs/JrtPath;)V", nullptr, $PUBLIC, $method(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, init$, void, JrtFileSystem*, $JrtPath*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1);
	});
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
	$DirectoryStream$Filter* filter = nullptr;
};
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljava/nio/file/DirectoryStream$Filter;", nullptr, $PUBLIC, $field(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/DirectoryStream$Filter;)V", nullptr, $PUBLIC, $method(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, init$, void, $DirectoryStream$Filter*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$3$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2);
	});
	return class$;
}
$Class* JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::class$ = nullptr;

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
	$useLocalObjectStack();
	if ($nc(more)->length == 0) {
		return $new($JrtPath, this, first);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(first);
	{
		$var($StringArray, arr$, more);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, path, arr$->get(i$));
			if (!$nc(path)->isEmpty()) {
				if (sb->length() > 0) {
					sb->append(u'/');
				}
				sb->append(path);
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	int32_t pos = $nc(syntaxAndInput)->indexOf(u':');
	if (pos <= 0 || pos == syntaxAndInput->length()) {
		$throwNew($IllegalArgumentException, $$str({"pos is "_s, $$str(pos)}));
	}
	$var($String, syntax, syntaxAndInput->substring(0, pos));
	$var($String, input, syntaxAndInput->substring(pos + 1));
	$var($String, expr, nullptr);
	if (syntax->equalsIgnoreCase("glob"_s)) {
		$assign(expr, $JrtUtils::toRegexPattern(input));
	} else if (syntax->equalsIgnoreCase("regex"_s)) {
		$assign(expr, input);
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Syntax \'"_s, syntax, "\' not recognized"_s}));
	}
	$var($Pattern, pattern, $Pattern::compile(expr));
	return $new(JrtFileSystem$$Lambda$lambda$getPathMatcher$0, pattern);
}

$JrtPath* JrtFileSystem::resolveLink($JrtPath* path) {
	$useLocalObjectStack();
	$var($ImageReader$Node, node, checkNode(path));
	if ($nc(node)->isLink()) {
		$assign(node, node->resolveLink());
		return $new($JrtPath, this, $($nc(node)->getName()));
	}
	return path;
}

$JrtFileAttributes* JrtFileSystem::getFileAttributes($JrtPath* path, $LinkOptionArray* options) {
	$useLocalObjectStack();
	$var($ImageReader$Node, node, checkNode(path));
	bool var$0 = $nc(node)->isLink();
	if (var$0 && followLinks(options)) {
		return $new($JrtFileAttributes, $(node->resolveLink(true)));
	}
	return $new($JrtFileAttributes, node);
}

$Iterator* JrtFileSystem::iteratorOf($JrtPath* path, $DirectoryStream$Filter* filter) {
	$useLocalObjectStack();
	$var($ImageReader$Node, node, $$nc(checkNode(path))->resolveLink(true));
	if (!$nc(node)->isDirectory()) {
		$throwNew($NotDirectoryException, $($nc(path)->getName()));
	}
	if (filter == nullptr) {
		return $$nc($$nc($$nc(node->getChildren())->stream())->map($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, this, path)))->iterator();
	}
	return $$nc($$nc($$nc($$nc(node->getChildren())->stream())->map($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$1$1, this, path)))->filter($$new(JrtFileSystem$$Lambda$lambda$iteratorOf$3$2, filter)))->iterator();
}

$bytes* JrtFileSystem::getFileContent($JrtPath* path) {
	$useLocalObjectStack();
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
		$var($LinkOptionArray, arr$, options);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$LinkOption* lo = arr$->get(i$);
			{
				$Objects::requireNonNull(lo);
				if (lo == $LinkOption::NOFOLLOW_LINKS) {
					return false;
				} else {
					$throwNew($AssertionError, $of("should not reach here"_s));
				}
			}
		}
	}
	return true;
}

void JrtFileSystem::checkOptions($Set* options) {
	$init(JrtFileSystem);
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($OpenOption, option, $cast($OpenOption, i$->next()));
			{
				$Objects::requireNonNull(option);
				if (!($instanceOf($StandardOpenOption, option))) {
					$throwNew($IllegalArgumentException, $$str({"option class: "_s, option->getClass()}));
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
	$useLocalObjectStack();
	checkOptions(options);
	$var($bytes, buf, getFileContent(path));
	$var($ReadableByteChannel, rbc, $Channels::newChannel($$new($ByteArrayInputStream, buf)));
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
	return $$nc(checkNode(path))->isLink();
}

bool JrtFileSystem::exists($JrtPath* path) {
	try {
		checkNode(path);
	} catch ($NoSuchFileException& exp) {
		return false;
	}
	return true;
}

bool JrtFileSystem::isDirectory($JrtPath* path, bool resolveLinks) {
	$useLocalObjectStack();
	$var($ImageReader$Node, node, checkNode(path));
	return resolveLinks && $nc(node)->isLink() ? $$nc(node->resolveLink(true))->isDirectory() : $nc(node)->isDirectory();
}

$JrtPath* JrtFileSystem::toRealPath($JrtPath* path, $LinkOptionArray* options) {
	$useLocalObjectStack();
	$var($ImageReader$Node, node, checkNode(path));
	bool var$0 = followLinks(options);
	if (var$0 && $nc(node)->isLink()) {
		$assign(node, node->resolveLink());
	}
	return $new($JrtPath, this, $($nc(node)->getName()), true);
}

$ImageReader$Node* JrtFileSystem::lookup($String* path) {
	$useLocalObjectStack();
	try {
		return $nc(this->image)->findNode(path);
	} catch ($RuntimeException& ex) {
		$throwNew($InvalidPathException, path, $(ex->toString()));
	} catch ($IOException& ex) {
		$throwNew($InvalidPathException, path, $(ex->toString()));
	}
	$shouldNotReachHere();
}

$ImageReader$Node* JrtFileSystem::lookupSymbolic($String* path) {
	$useLocalObjectStack();
	int32_t i = 1;
	while (i < $nc(path)->length()) {
		i = path->indexOf(u'/', i);
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
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($($nc(link)->getName()));
			var$0->append($(path->substring(i)));
			$var($String, resPath, $str(var$0));
			$assign(node, lookup(resPath));
			return node != nullptr ? node : lookupSymbolic(resPath);
		}
		++i;
	}
	return nullptr;
}

$ImageReader$Node* JrtFileSystem::checkNode($JrtPath* path) {
	$useLocalObjectStack();
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
	} catch ($IOException& x) {
	}
	return false;
}

$Path* JrtFileSystem::lambda$iteratorOf$1($JrtPath* path, $ImageReader$Node* child) {
	$useLocalObjectStack();
	return $cast($Path, ($nc(path)->resolve($($$new($JrtPath, this, $($nc(child)->getNameString()))->getFileName()))));
}

bool JrtFileSystem::lambda$getPathMatcher$0($Pattern* pattern, $Path* path) {
	$init(JrtFileSystem);
	$useLocalObjectStack();
	return $$nc($nc(pattern)->matcher($($nc(path)->toString())))->matches();
}

void JrtFileSystem::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JrtFileSystem::supportedFileAttributeViews$, $Collections::unmodifiableSet($$new($HashSet, $($Arrays::asList($$new($StringArray, {
		"basic"_s,
		"jrt"_s
	}))))));
}

JrtFileSystem::JrtFileSystem() {
}

$Class* JrtFileSystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$getPathMatcher$0")) {
			return JrtFileSystem$$Lambda$lambda$getPathMatcher$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$1$1")) {
			return JrtFileSystem$$Lambda$lambda$iteratorOf$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.jrtfs.JrtFileSystem$$Lambda$lambda$iteratorOf$3$2")) {
			return JrtFileSystem$$Lambda$lambda$iteratorOf$3$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"provider", "Ljdk/internal/jrtfs/JrtFileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(JrtFileSystem, provider$)},
		{"rootPath", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $PRIVATE | $FINAL, $field(JrtFileSystem, rootPath)},
		{"isOpen", "Z", nullptr, $PRIVATE | $VOLATILE, $field(JrtFileSystem, isOpen$)},
		{"isClosable", "Z", nullptr, $PRIVATE | $VOLATILE, $field(JrtFileSystem, isClosable)},
		{"image", "Ljdk/internal/jrtfs/SystemImage;", nullptr, $PRIVATE, $field(JrtFileSystem, image)},
		{"supportedFileAttributeViews", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JrtFileSystem, supportedFileAttributeViews$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jrtfs/JrtFileSystemProvider;Ljava/util/Map;)V", "(Ljdk/internal/jrtfs/JrtFileSystemProvider;Ljava/util/Map<Ljava/lang/String;*>;)V", 0, $method(JrtFileSystem, init$, void, $JrtFileSystemProvider*, $Map*), "java.io.IOException"},
		{"checkNode", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, 0, $virtualMethod(JrtFileSystem, checkNode, $ImageReader$Node*, $JrtPath*), "java.io.IOException"},
		{"checkOptions", "(Ljava/util/Set;)V", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;)V", $STATIC, $staticMethod(JrtFileSystem, checkOptions, void, $Set*)},
		{"cleanup", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(JrtFileSystem, cleanup, void), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem, close, void), "java.io.IOException"},
		{"copyFile", "(ZLjdk/internal/jrtfs/JrtPath;Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/CopyOption;)V", nullptr, $FINAL | $TRANSIENT, $method(JrtFileSystem, copyFile, void, bool, $JrtPath*, $JrtPath*, $CopyOptionArray*), "java.io.IOException"},
		{"createDirectory", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $FINAL | $TRANSIENT, $method(JrtFileSystem, createDirectory, void, $JrtPath*, $FileAttributeArray*), "java.io.IOException"},
		{"deleteFile", "(Ljdk/internal/jrtfs/JrtPath;Z)V", nullptr, $FINAL, $method(JrtFileSystem, deleteFile, void, $JrtPath*, bool), "java.io.IOException"},
		{"ensureOpen", "()V", nullptr, $FINAL, $method(JrtFileSystem, ensureOpen, void), "java.io.IOException"},
		{"exists", "(Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, $virtualMethod(JrtFileSystem, exists, bool, $JrtPath*), "java.io.IOException"},
		{"followLinks", "([Ljava/nio/file/LinkOption;)Z", nullptr, $STATIC | $TRANSIENT, $staticMethod(JrtFileSystem, followLinks, bool, $LinkOptionArray*)},
		{"getFileAttributes", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/LinkOption;)Ljdk/internal/jrtfs/JrtFileAttributes;", nullptr, $TRANSIENT, $virtualMethod(JrtFileSystem, getFileAttributes, $JrtFileAttributes*, $JrtPath*, $LinkOptionArray*), "java.io.IOException"},
		{"getFileContent", "(Ljdk/internal/jrtfs/JrtPath;)[B", nullptr, 0, $virtualMethod(JrtFileSystem, getFileContent, $bytes*, $JrtPath*), "java.io.IOException"},
		{"getFileStore", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jrtfs/JrtFileStore;", nullptr, $FINAL, $method(JrtFileSystem, getFileStore, $JrtFileStore*, $JrtPath*)},
		{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, getFileStores, $Iterable*)},
		{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/jrtfs/JrtPath;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(JrtFileSystem, getPath, $Path*, $String*, $StringArray*)},
		{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem, getPathMatcher, $PathMatcher*, $String*)},
		{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(JrtFileSystem, getRootDirectories, $Iterable*)},
		{"getRootPath", "()Ljdk/internal/jrtfs/JrtPath;", nullptr, $FINAL, $method(JrtFileSystem, getRootPath, $JrtPath*)},
		{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, getSeparator, $String*)},
		{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, getUserPrincipalLookupService, $UserPrincipalLookupService*)},
		{"isDirectory", "(Ljdk/internal/jrtfs/JrtPath;Z)Z", nullptr, 0, $virtualMethod(JrtFileSystem, isDirectory, bool, $JrtPath*, bool), "java.io.IOException"},
		{"isLink", "(Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, $virtualMethod(JrtFileSystem, isLink, bool, $JrtPath*), "java.io.IOException"},
		{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem, isOpen, bool)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, isReadOnly, bool)},
		{"isSameFile", "(Ljdk/internal/jrtfs/JrtPath;Ljdk/internal/jrtfs/JrtPath;)Z", nullptr, 0, $virtualMethod(JrtFileSystem, isSameFile, bool, $JrtPath*, $JrtPath*), "java.io.IOException"},
		{"iteratorOf", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter;)Ljava/util/Iterator;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/util/Iterator<Ljava/nio/file/Path;>;", 0, $virtualMethod(JrtFileSystem, iteratorOf, $Iterator*, $JrtPath*, $DirectoryStream$Filter*), "java.io.IOException"},
		{"lambda$getPathMatcher$0", "(Ljava/util/regex/Pattern;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JrtFileSystem, lambda$getPathMatcher$0, bool, $Pattern*, $Path*)},
		{"lambda$iteratorOf$1", "(Ljdk/internal/jrtfs/JrtPath;Ljdk/internal/jimage/ImageReader$Node;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $SYNTHETIC, $method(JrtFileSystem, lambda$iteratorOf$1, $Path*, $JrtPath*, $ImageReader$Node*)},
		{"lambda$iteratorOf$3", "(Ljava/nio/file/DirectoryStream$Filter;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JrtFileSystem, lambda$iteratorOf$3, bool, $DirectoryStream$Filter*, $Path*)},
		{"lookup", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE, $method(JrtFileSystem, lookup, $ImageReader$Node*, $String*)},
		{"lookupSymbolic", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE, $method(JrtFileSystem, lookupSymbolic, $ImageReader$Node*, $String*)},
		{"newByteChannel", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $FINAL | $TRANSIENT, $method(JrtFileSystem, newByteChannel, $SeekableByteChannel*, $JrtPath*, $Set*, $FileAttributeArray*), "java.io.IOException"},
		{"newFileChannel", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "(Ljdk/internal/jrtfs/JrtPath;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $FINAL | $TRANSIENT, $method(JrtFileSystem, newFileChannel, $FileChannel*, $JrtPath*, $Set*, $FileAttributeArray*), "java.io.IOException"},
		{"newInputStream", "(Ljdk/internal/jrtfs/JrtPath;)Ljava/io/InputStream;", nullptr, $FINAL, $method(JrtFileSystem, newInputStream, $InputStream*, $JrtPath*), "java.io.IOException"},
		{"newOutputStream", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $FINAL | $TRANSIENT, $method(JrtFileSystem, newOutputStream, $OutputStream*, $JrtPath*, $OpenOptionArray*), "java.io.IOException"},
		{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, newWatchService, $WatchService*)},
		{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC, $virtualMethod(JrtFileSystem, provider, $FileSystemProvider*)},
		{"readOnly", "()Ljava/nio/file/ReadOnlyFileSystemException;", nullptr, $STATIC, $staticMethod(JrtFileSystem, readOnly, $ReadOnlyFileSystemException*)},
		{"resolveLink", "(Ljdk/internal/jrtfs/JrtPath;)Ljdk/internal/jrtfs/JrtPath;", nullptr, 0, $virtualMethod(JrtFileSystem, resolveLink, $JrtPath*, $JrtPath*), "java.io.IOException"},
		{"setTimes", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $FINAL, $method(JrtFileSystem, setTimes, void, $JrtPath*, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
		{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, supportedFileAttributeViews, $Set*)},
		{"toRealPath", "(Ljdk/internal/jrtfs/JrtPath;[Ljava/nio/file/LinkOption;)Ljdk/internal/jrtfs/JrtPath;", nullptr, $TRANSIENT, $virtualMethod(JrtFileSystem, toRealPath, $JrtPath*, $JrtPath*, $LinkOptionArray*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileSystem, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtFileSystem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.JrtFileSystem",
		"java.nio.file.FileSystem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.JrtFileSystem$1"
	};
	$loadClass(JrtFileSystem, name, initialize, &classInfo$$, JrtFileSystem::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileSystem);
	});
	return class$;
}

$Class* JrtFileSystem::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk