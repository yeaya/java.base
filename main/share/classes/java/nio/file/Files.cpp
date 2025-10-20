#include <java/nio/file/Files.h>

#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/InterruptibleChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyMoveHelper.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileChannelLinesSpliterator.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileTreeIterator.h>
#include <java/nio/file/FileTreeWalker$Event.h>
#include <java/nio/file/FileTreeWalker$EventType.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files$1.h>
#include <java/nio/file/Files$2.h>
#include <java/nio/file/Files$3.h>
#include <java/nio/file/Files$AcceptAllFilter.h>
#include <java/nio/file/Files$FileTypeDetectors.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/TempFileHelper.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/nio/cs/Unicode.h>
#include <sun/nio/fs/AbstractFileSystemProvider.h>
#include <jcpp.h>

#undef BUFFER_SIZE
#undef CONTINUE
#undef CREATE_NEW
#undef DEFAULT_CREATE_OPTIONS
#undef DISTINCT
#undef EXECUTE
#undef FILTER
#undef INSTANCE
#undef JLA
#undef MAX_VALUE
#undef NOFOLLOW_LINKS
#undef READ
#undef REPLACE_EXISTING
#undef SKIP_SIBLINGS
#undef SKIP_SUBTREE
#undef SUPPORTED_CHARSET_NAMES
#undef TERMINATE
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $Channel = ::java::nio::channels::Channel;
using $Channels = ::java::nio::channels::Channels;
using $FileChannel = ::java::nio::channels::FileChannel;
using $InterruptibleChannel = ::java::nio::channels::InterruptibleChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AccessMode = ::java::nio::file::AccessMode;
using $CopyMoveHelper = ::java::nio::file::CopyMoveHelper;
using $CopyOption = ::java::nio::file::CopyOption;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileChannelLinesSpliterator = ::java::nio::file::FileChannelLinesSpliterator;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileTreeIterator = ::java::nio::file::FileTreeIterator;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;
using $FileTreeWalker$Event = ::java::nio::file::FileTreeWalker$Event;
using $FileTreeWalker$EventType = ::java::nio::file::FileTreeWalker$EventType;
using $FileVisitOption = ::java::nio::file::FileVisitOption;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files$1 = ::java::nio::file::Files$1;
using $Files$2 = ::java::nio::file::Files$2;
using $Files$3 = ::java::nio::file::Files$3;
using $Files$AcceptAllFilter = ::java::nio::file::Files$AcceptAllFilter;
using $Files$FileTypeDetectors = ::java::nio::file::Files$FileTypeDetectors;
using $LinkOption = ::java::nio::file::LinkOption;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $TempFileHelper = ::java::nio::file::TempFileHelper;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $Unicode = ::sun::nio::cs::Unicode;
using $AbstractFileSystemProvider = ::sun::nio::fs::AbstractFileSystemProvider;

namespace java {
	namespace nio {
		namespace file {

class Files$$Lambda$lambda$asUncheckedRunnable$0 : public $Runnable {
	$class(Files$$Lambda$lambda$asUncheckedRunnable$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Closeable* c) {
		$set(this, c, c);
	}
	virtual void run() override {
		Files::lambda$asUncheckedRunnable$0(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Files$$Lambda$lambda$asUncheckedRunnable$0>());
	}
	$Closeable* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Files$$Lambda$lambda$asUncheckedRunnable$0::fieldInfos[2] = {
	{"c", "Ljava/io/Closeable;", nullptr, $PUBLIC, $field(Files$$Lambda$lambda$asUncheckedRunnable$0, c)},
	{}
};
$MethodInfo Files$$Lambda$lambda$asUncheckedRunnable$0::methodInfos[3] = {
	{"<init>", "(Ljava/io/Closeable;)V", nullptr, $PUBLIC, $method(static_cast<void(Files$$Lambda$lambda$asUncheckedRunnable$0::*)($Closeable*)>(&Files$$Lambda$lambda$asUncheckedRunnable$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Files$$Lambda$lambda$asUncheckedRunnable$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.file.Files$$Lambda$lambda$asUncheckedRunnable$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Files$$Lambda$lambda$asUncheckedRunnable$0::load$($String* name, bool initialize) {
	$loadClass(Files$$Lambda$lambda$asUncheckedRunnable$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Files$$Lambda$lambda$asUncheckedRunnable$0::class$ = nullptr;

class Files$$Lambda$close$1 : public $Runnable {
	$class(Files$$Lambda$close$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FileTreeIterator* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Files$$Lambda$close$1>());
	}
	$FileTreeIterator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Files$$Lambda$close$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Files$$Lambda$close$1, inst$)},
	{}
};
$MethodInfo Files$$Lambda$close$1::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/FileTreeIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(Files$$Lambda$close$1::*)($FileTreeIterator*)>(&Files$$Lambda$close$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Files$$Lambda$close$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.file.Files$$Lambda$close$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Files$$Lambda$close$1::load$($String* name, bool initialize) {
	$loadClass(Files$$Lambda$close$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Files$$Lambda$close$1::class$ = nullptr;

class Files$$Lambda$lambda$walk$1$2 : public $Function {
	$class(Files$$Lambda$lambda$walk$1$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* entry) override {
		 return $of(Files::lambda$walk$1($cast($FileTreeWalker$Event, entry)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Files$$Lambda$lambda$walk$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Files$$Lambda$lambda$walk$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Files$$Lambda$lambda$walk$1$2::*)()>(&Files$$Lambda$lambda$walk$1$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Files$$Lambda$lambda$walk$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.file.Files$$Lambda$lambda$walk$1$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Files$$Lambda$lambda$walk$1$2::load$($String* name, bool initialize) {
	$loadClass(Files$$Lambda$lambda$walk$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Files$$Lambda$lambda$walk$1$2::class$ = nullptr;

class Files$$Lambda$lambda$find$2$3 : public $Predicate {
	$class(Files$$Lambda$lambda$find$2$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($BiPredicate* matcher) {
		$set(this, matcher, matcher);
	}
	virtual bool test(Object$* entry) override {
		 return Files::lambda$find$2(matcher, $cast($FileTreeWalker$Event, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Files$$Lambda$lambda$find$2$3>());
	}
	$BiPredicate* matcher = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Files$$Lambda$lambda$find$2$3::fieldInfos[2] = {
	{"matcher", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(Files$$Lambda$lambda$find$2$3, matcher)},
	{}
};
$MethodInfo Files$$Lambda$lambda$find$2$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiPredicate;)V", nullptr, $PUBLIC, $method(static_cast<void(Files$$Lambda$lambda$find$2$3::*)($BiPredicate*)>(&Files$$Lambda$lambda$find$2$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Files$$Lambda$lambda$find$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.file.Files$$Lambda$lambda$find$2$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Files$$Lambda$lambda$find$2$3::load$($String* name, bool initialize) {
	$loadClass(Files$$Lambda$lambda$find$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Files$$Lambda$lambda$find$2$3::class$ = nullptr;

class Files$$Lambda$lambda$createFileChannelLinesStream$4$4 : public $Runnable {
	$class(Files$$Lambda$lambda$createFileChannelLinesStream$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FileChannelLinesSpliterator* fcls) {
		$set(this, fcls, fcls);
	}
	virtual void run() override {
		Files::lambda$createFileChannelLinesStream$4(fcls);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Files$$Lambda$lambda$createFileChannelLinesStream$4$4>());
	}
	$FileChannelLinesSpliterator* fcls = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Files$$Lambda$lambda$createFileChannelLinesStream$4$4::fieldInfos[2] = {
	{"fcls", "Ljava/nio/file/FileChannelLinesSpliterator;", nullptr, $PUBLIC, $field(Files$$Lambda$lambda$createFileChannelLinesStream$4$4, fcls)},
	{}
};
$MethodInfo Files$$Lambda$lambda$createFileChannelLinesStream$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/FileChannelLinesSpliterator;)V", nullptr, $PUBLIC, $method(static_cast<void(Files$$Lambda$lambda$createFileChannelLinesStream$4$4::*)($FileChannelLinesSpliterator*)>(&Files$$Lambda$lambda$createFileChannelLinesStream$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Files$$Lambda$lambda$createFileChannelLinesStream$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.file.Files$$Lambda$lambda$createFileChannelLinesStream$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Files$$Lambda$lambda$createFileChannelLinesStream$4$4::load$($String* name, bool initialize) {
	$loadClass(Files$$Lambda$lambda$createFileChannelLinesStream$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Files$$Lambda$lambda$createFileChannelLinesStream$4$4::class$ = nullptr;

$FieldInfo _Files_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Files, $assertionsDisabled)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Files, BUFFER_SIZE)},
	{"DEFAULT_CREATE_OPTIONS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/OpenOption;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Files, DEFAULT_CREATE_OPTIONS)},
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Files, JLA)},
	{}
};

$MethodInfo _Files_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Files::*)()>(&Files::init$))},
	{"asUncheckedRunnable", "(Ljava/io/Closeable;)Ljava/lang/Runnable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Runnable*(*)($Closeable*)>(&Files::asUncheckedRunnable))},
	{"copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$Path*,$CopyOptionArray*)>(&Files::copy)), "java.io.IOException"},
	{"copy", "(Ljava/io/InputStream;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)J", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<int64_t(*)($InputStream*,$Path*,$CopyOptionArray*)>(&Files::copy)), "java.io.IOException"},
	{"copy", "(Ljava/nio/file/Path;Ljava/io/OutputStream;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Path*,$OutputStream*)>(&Files::copy)), "java.io.IOException"},
	{"createAndCheckIsDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($Path*,$FileAttributeArray*)>(&Files::createAndCheckIsDirectory)), "java.io.IOException"},
	{"createBufferedReaderLinesStream", "(Ljava/io/BufferedReader;)Ljava/util/stream/Stream;", "(Ljava/io/BufferedReader;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Stream*(*)($BufferedReader*)>(&Files::createBufferedReaderLinesStream))},
	{"createDirectories", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$FileAttributeArray*)>(&Files::createDirectories)), "java.io.IOException"},
	{"createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$FileAttributeArray*)>(&Files::createDirectory)), "java.io.IOException"},
	{"createFile", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$FileAttributeArray*)>(&Files::createFile)), "java.io.IOException"},
	{"createFileChannelLinesStream", "(Ljava/nio/channels/FileChannel;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream;", "(Ljava/nio/channels/FileChannel;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Stream*(*)($FileChannel*,$Charset*)>(&Files::createFileChannelLinesStream)), "java.io.IOException"},
	{"createLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$Path*)>(&Files::createLink)), "java.io.IOException"},
	{"createSymbolicLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$Path*,$FileAttributeArray*)>(&Files::createSymbolicLink)), "java.io.IOException"},
	{"createTempDirectory", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$String*,$FileAttributeArray*)>(&Files::createTempDirectory)), "java.io.IOException"},
	{"createTempDirectory", "(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($String*,$FileAttributeArray*)>(&Files::createTempDirectory)), "java.io.IOException"},
	{"createTempFile", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$String*,$String*,$FileAttributeArray*)>(&Files::createTempFile)), "java.io.IOException"},
	{"createTempFile", "(Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($String*,$String*,$FileAttributeArray*)>(&Files::createTempFile)), "java.io.IOException"},
	{"delete", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Path*)>(&Files::delete$)), "java.io.IOException"},
	{"deleteIfExists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::deleteIfExists)), "java.io.IOException"},
	{"exists", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Path*,$LinkOptionArray*)>(&Files::exists))},
	{"find", "(Ljava/nio/file/Path;ILjava/util/function/BiPredicate;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;ILjava/util/function/BiPredicate<Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;>;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Stream*(*)($Path*,int32_t,$BiPredicate*,$FileVisitOptionArray*)>(&Files::find)), "java.io.IOException"},
	{"followLinks", "([Ljava/nio/file/LinkOption;)Z", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($LinkOptionArray*)>(&Files::followLinks))},
	{"getAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)($Path*,$String*,$LinkOptionArray*)>(&Files::getAttribute)), "java.io.IOException"},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/nio/file/Path;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$FileAttributeView*(*)($Path*,$Class*,$LinkOptionArray*)>(&Files::getFileAttributeView))},
	{"getFileStore", "(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileStore*(*)($Path*)>(&Files::getFileStore)), "java.io.IOException"},
	{"getLastModifiedTime", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$FileTime*(*)($Path*,$LinkOptionArray*)>(&Files::getLastModifiedTime)), "java.io.IOException"},
	{"getOwner", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$UserPrincipal*(*)($Path*,$LinkOptionArray*)>(&Files::getOwner)), "java.io.IOException"},
	{"getPosixFilePermissions", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/util/Set;", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Set*(*)($Path*,$LinkOptionArray*)>(&Files::getPosixFilePermissions)), "java.io.IOException"},
	{"isAccessible", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)Z", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Path*,$AccessModeArray*)>(&Files::isAccessible))},
	{"isDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Path*,$LinkOptionArray*)>(&Files::isDirectory))},
	{"isExecutable", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::isExecutable))},
	{"isHidden", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::isHidden)), "java.io.IOException"},
	{"isReadable", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::isReadable))},
	{"isRegularFile", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Path*,$LinkOptionArray*)>(&Files::isRegularFile))},
	{"isSameFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*,$Path*)>(&Files::isSameFile)), "java.io.IOException"},
	{"isSymbolicLink", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::isSymbolicLink))},
	{"isWritable", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Path*)>(&Files::isWritable))},
	{"lambda$asUncheckedRunnable$0", "(Ljava/io/Closeable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Closeable*)>(&Files::lambda$asUncheckedRunnable$0))},
	{"lambda$createFileChannelLinesStream$4", "(Ljava/nio/file/FileChannelLinesSpliterator;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($FileChannelLinesSpliterator*)>(&Files::lambda$createFileChannelLinesStream$4))},
	{"lambda$find$2", "(Ljava/util/function/BiPredicate;Ljava/nio/file/FileTreeWalker$Event;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($BiPredicate*,$FileTreeWalker$Event*)>(&Files::lambda$find$2))},
	{"lambda$walk$1", "(Ljava/nio/file/FileTreeWalker$Event;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Path*(*)($FileTreeWalker$Event*)>(&Files::lambda$walk$1))},
	{"lines", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)($Path*,$Charset*)>(&Files::lines)), "java.io.IOException"},
	{"lines", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)($Path*)>(&Files::lines)), "java.io.IOException"},
	{"list", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;)Ljava/util/stream/Stream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)($Path*)>(&Files::list)), "java.io.IOException"},
	{"mismatch", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Path*,$Path*)>(&Files::mismatch)), "java.io.IOException"},
	{"move", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$Path*,$CopyOptionArray*)>(&Files::move)), "java.io.IOException"},
	{"newBufferedReader", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedReader*(*)($Path*,$Charset*)>(&Files::newBufferedReader)), "java.io.IOException"},
	{"newBufferedReader", "(Ljava/nio/file/Path;)Ljava/io/BufferedReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BufferedReader*(*)($Path*)>(&Files::newBufferedReader)), "java.io.IOException"},
	{"newBufferedWriter", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$BufferedWriter*(*)($Path*,$Charset*,$OpenOptionArray*)>(&Files::newBufferedWriter)), "java.io.IOException"},
	{"newBufferedWriter", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$BufferedWriter*(*)($Path*,$OpenOptionArray*)>(&Files::newBufferedWriter)), "java.io.IOException"},
	{"newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$SeekableByteChannel*(*)($Path*,$Set*,$FileAttributeArray*)>(&Files::newByteChannel)), "java.io.IOException"},
	{"newByteChannel", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$SeekableByteChannel*(*)($Path*,$OpenOptionArray*)>(&Files::newByteChannel)), "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC, $method(static_cast<$DirectoryStream*(*)($Path*)>(&Files::newDirectoryStream)), "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC, $method(static_cast<$DirectoryStream*(*)($Path*,$String*)>(&Files::newDirectoryStream)), "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC, $method(static_cast<$DirectoryStream*(*)($Path*,$DirectoryStream$Filter*)>(&Files::newDirectoryStream)), "java.io.IOException"},
	{"newInputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$InputStream*(*)($Path*,$OpenOptionArray*)>(&Files::newInputStream)), "java.io.IOException"},
	{"newOutputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$OutputStream*(*)($Path*,$OpenOptionArray*)>(&Files::newOutputStream)), "java.io.IOException"},
	{"notExists", "(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Path*,$LinkOptionArray*)>(&Files::notExists))},
	{"probeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Path*)>(&Files::probeContentType)), "java.io.IOException"},
	{"provider", "(Ljava/nio/file/Path;)Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileSystemProvider*(*)($Path*)>(&Files::provider))},
	{"read", "(Ljava/io/InputStream;I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($InputStream*,int32_t)>(&Files::read)), "java.io.IOException"},
	{"readAllBytes", "(Ljava/nio/file/Path;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($Path*)>(&Files::readAllBytes)), "java.io.IOException"},
	{"readAllLines", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/List;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Path*,$Charset*)>(&Files::readAllLines)), "java.io.IOException"},
	{"readAllLines", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Path*)>(&Files::readAllLines)), "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;", "<A::Ljava/nio/file/attribute/BasicFileAttributes;>(Ljava/nio/file/Path;Ljava/lang/Class<TA;>;[Ljava/nio/file/LinkOption;)TA;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$BasicFileAttributes*(*)($Path*,$Class*,$LinkOptionArray*)>(&Files::readAttributes)), "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Map*(*)($Path*,$String*,$LinkOptionArray*)>(&Files::readAttributes)), "java.io.IOException"},
	{"readString", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Path*)>(&Files::readString)), "java.io.IOException"},
	{"readString", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Path*,$Charset*)>(&Files::readString)), "java.io.IOException"},
	{"readSymbolicLink", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*)>(&Files::readSymbolicLink)), "java.io.IOException"},
	{"setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$String*,Object$*,$LinkOptionArray*)>(&Files::setAttribute)), "java.io.IOException"},
	{"setLastModifiedTime", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/FileTime;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$FileTime*)>(&Files::setLastModifiedTime)), "java.io.IOException"},
	{"setOwner", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$UserPrincipal*)>(&Files::setOwner)), "java.io.IOException"},
	{"setPosixFilePermissions", "(Ljava/nio/file/Path;Ljava/util/Set;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$Set*)>(&Files::setPosixFilePermissions)), "java.io.IOException"},
	{"size", "(Ljava/nio/file/Path;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Path*)>(&Files::size)), "java.io.IOException"},
	{"walk", "(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Stream*(*)($Path*,int32_t,$FileVisitOptionArray*)>(&Files::walk)), "java.io.IOException"},
	{"walk", "(Ljava/nio/file/Path;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;", "(Ljava/nio/file/Path;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Stream*(*)($Path*,$FileVisitOptionArray*)>(&Files::walk)), "java.io.IOException"},
	{"walkFileTree", "(Ljava/nio/file/Path;Ljava/util/Set;ILjava/nio/file/FileVisitor;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/util/Set<Ljava/nio/file/FileVisitOption;>;ILjava/nio/file/FileVisitor<-Ljava/nio/file/Path;>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$Set*,int32_t,$FileVisitor*)>(&Files::walkFileTree)), "java.io.IOException"},
	{"walkFileTree", "(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor<-Ljava/nio/file/Path;>;)Ljava/nio/file/Path;", $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$FileVisitor*)>(&Files::walkFileTree)), "java.io.IOException"},
	{"write", "(Ljava/nio/file/Path;[B[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$bytes*,$OpenOptionArray*)>(&Files::write)), "java.io.IOException"},
	{"write", "(Ljava/nio/file/Path;Ljava/lang/Iterable;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/Iterable<+Ljava/lang/CharSequence;>;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$Iterable*,$Charset*,$OpenOptionArray*)>(&Files::write)), "java.io.IOException"},
	{"write", "(Ljava/nio/file/Path;Ljava/lang/Iterable;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Ljava/lang/Iterable<+Ljava/lang/CharSequence;>;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$Iterable*,$OpenOptionArray*)>(&Files::write)), "java.io.IOException"},
	{"writeString", "(Ljava/nio/file/Path;Ljava/lang/CharSequence;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$CharSequence*,$OpenOptionArray*)>(&Files::writeString)), "java.io.IOException"},
	{"writeString", "(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Path*(*)($Path*,$CharSequence*,$Charset*,$OpenOptionArray*)>(&Files::writeString)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Files_InnerClassesInfo_[] = {
	{"java.nio.file.Files$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
	{"java.nio.file.Files$AcceptAllFilter", "java.nio.file.Files", "AcceptAllFilter", $PRIVATE | $STATIC},
	{"java.nio.file.Files$2", nullptr, nullptr, 0},
	{"java.nio.file.Files$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Files_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.Files",
	"java.lang.Object",
	nullptr,
	_Files_FieldInfo_,
	_Files_MethodInfo_,
	nullptr,
	nullptr,
	_Files_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.Files$3,java.nio.file.Files$FileTypeDetectors,java.nio.file.Files$FileTypeDetectors$2,java.nio.file.Files$FileTypeDetectors$1,java.nio.file.Files$AcceptAllFilter,java.nio.file.Files$2,java.nio.file.Files$1"
};

$Object* allocate$Files($Class* clazz) {
	return $of($alloc(Files));
}

bool Files::$assertionsDisabled = false;
$Set* Files::DEFAULT_CREATE_OPTIONS = nullptr;
$JavaLangAccess* Files::JLA = nullptr;

void Files::init$() {
}

$FileSystemProvider* Files::provider($Path* path) {
	$init(Files);
	return $nc($($nc(path)->getFileSystem()))->provider();
}

$Runnable* Files::asUncheckedRunnable($Closeable* c) {
	$init(Files);
	return static_cast<$Runnable*>($new(Files$$Lambda$lambda$asUncheckedRunnable$0, c));
}

$InputStream* Files::newInputStream($Path* path, $OpenOptionArray* options) {
	$init(Files);
	return $nc($(provider(path)))->newInputStream(path, options);
}

$OutputStream* Files::newOutputStream($Path* path, $OpenOptionArray* options) {
	$init(Files);
	return $nc($(provider(path)))->newOutputStream(path, options);
}

$SeekableByteChannel* Files::newByteChannel($Path* path, $Set* options, $FileAttributeArray* attrs) {
	$init(Files);
	return $nc($(provider(path)))->newByteChannel(path, options, attrs);
}

$SeekableByteChannel* Files::newByteChannel($Path* path, $OpenOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($Set, set, nullptr);
	if ($nc(options)->length == 0) {
		$assign(set, $Collections::emptySet());
	} else {
		$assign(set, $new($HashSet));
		$Collections::addAll(set, options);
	}
	return newByteChannel(path, set, $$new($FileAttributeArray, 0));
}

$DirectoryStream* Files::newDirectoryStream($Path* dir) {
	$init(Files);
	$init($Files$AcceptAllFilter);
	return $nc($(provider(dir)))->newDirectoryStream(dir, $Files$AcceptAllFilter::FILTER);
}

$DirectoryStream* Files::newDirectoryStream($Path* dir, $String* glob) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	if ($nc(glob)->equals("*"_s)) {
		return newDirectoryStream(dir);
	}
	$var($FileSystem, fs, $nc(dir)->getFileSystem());
	$var($PathMatcher, matcher, $nc(fs)->getPathMatcher($$str({"glob:"_s, glob})));
	$var($DirectoryStream$Filter, filter, $new($Files$1, matcher));
	return $nc($(fs->provider()))->newDirectoryStream(dir, filter);
}

$DirectoryStream* Files::newDirectoryStream($Path* dir, $DirectoryStream$Filter* filter) {
	$init(Files);
	return $nc($(provider(dir)))->newDirectoryStream(dir, filter);
}

$Path* Files::createFile($Path* path, $FileAttributeArray* attrs) {
	$init(Files);
	$nc($(newByteChannel(path, Files::DEFAULT_CREATE_OPTIONS, attrs)))->close();
	return path;
}

$Path* Files::createDirectory($Path* dir, $FileAttributeArray* attrs) {
	$init(Files);
	$nc($(provider(dir)))->createDirectory(dir, attrs);
	return dir;
}

$Path* Files::createDirectories($Path* dir$renamed, $FileAttributeArray* attrs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($Path, dir, dir$renamed);
	try {
		createAndCheckIsDirectory(dir, attrs);
		return dir;
	} catch ($FileAlreadyExistsException&) {
		$var($FileAlreadyExistsException, x, $catch());
		$throw(x);
	} catch ($IOException&) {
		$catch();
	}
	$var($SecurityException, se, nullptr);
	try {
		$assign(dir, $nc(dir)->toAbsolutePath());
	} catch ($SecurityException&) {
		$var($SecurityException, x, $catch());
		$assign(se, x);
	}
	$var($Path, parent, $nc(dir)->getParent());
	while (parent != nullptr) {
		try {
			$nc($(provider(parent)))->checkAccess(parent, $$new($AccessModeArray, 0));
			break;
		} catch ($NoSuchFileException&) {
			$catch();
		}
		$assign(parent, parent->getParent());
	}
	if (parent == nullptr) {
		if (se == nullptr) {
			$throwNew($FileSystemException, $(dir->toString()), nullptr, "Unable to determine if root directory exists"_s);
		} else {
			$throw(se);
		}
	}
	$var($Path, child, parent);
	{
		$var($Iterator, i$, $nc($($nc(parent)->relativize(dir)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, name, $cast($Path, i$->next()));
			{
				$assign(child, $nc(child)->resolve(name));
				createAndCheckIsDirectory(child, attrs);
			}
		}
	}
	return dir;
}

void Files::createAndCheckIsDirectory($Path* dir, $FileAttributeArray* attrs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		createDirectory(dir, attrs);
	} catch ($FileAlreadyExistsException&) {
		$var($FileAlreadyExistsException, x, $catch());
		$init($LinkOption);
		if (!isDirectory(dir, $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))) {
			$throw(x);
		}
	}
}

$Path* Files::createTempFile($Path* dir, $String* prefix, $String* suffix, $FileAttributeArray* attrs) {
	$init(Files);
	return $TempFileHelper::createTempFile($cast($Path, $Objects::requireNonNull(dir)), prefix, suffix, attrs);
}

$Path* Files::createTempFile($String* prefix, $String* suffix, $FileAttributeArray* attrs) {
	$init(Files);
	return $TempFileHelper::createTempFile(nullptr, prefix, suffix, attrs);
}

$Path* Files::createTempDirectory($Path* dir, $String* prefix, $FileAttributeArray* attrs) {
	$init(Files);
	return $TempFileHelper::createTempDirectory($cast($Path, $Objects::requireNonNull(dir)), prefix, attrs);
}

$Path* Files::createTempDirectory($String* prefix, $FileAttributeArray* attrs) {
	$init(Files);
	return $TempFileHelper::createTempDirectory(nullptr, prefix, attrs);
}

$Path* Files::createSymbolicLink($Path* link, $Path* target, $FileAttributeArray* attrs) {
	$init(Files);
	$nc($(provider(link)))->createSymbolicLink(link, target, attrs);
	return link;
}

$Path* Files::createLink($Path* link, $Path* existing) {
	$init(Files);
	$nc($(provider(link)))->createLink(link, existing);
	return link;
}

void Files::delete$($Path* path) {
	$init(Files);
	$nc($(provider(path)))->delete$(path);
}

bool Files::deleteIfExists($Path* path) {
	$init(Files);
	return $nc($(provider(path)))->deleteIfExists(path);
}

$Path* Files::copy($Path* source, $Path* target, $CopyOptionArray* options) {
	$init(Files);
	$var($FileSystemProvider, provider, Files::provider(source));
	if (Files::provider(target) == provider) {
		$nc(provider)->copy(source, target, options);
	} else {
		$CopyMoveHelper::copyToForeignTarget(source, target, options);
	}
	return target;
}

$Path* Files::move($Path* source, $Path* target, $CopyOptionArray* options) {
	$init(Files);
	$var($FileSystemProvider, provider, Files::provider(source));
	if (Files::provider(target) == provider) {
		$nc(provider)->move(source, target, options);
	} else {
		$CopyMoveHelper::moveToForeignTarget(source, target, options);
	}
	return target;
}

$Path* Files::readSymbolicLink($Path* link) {
	$init(Files);
	return $nc($(provider(link)))->readSymbolicLink(link);
}

$FileStore* Files::getFileStore($Path* path) {
	$init(Files);
	return $nc($(provider(path)))->getFileStore(path);
}

bool Files::isSameFile($Path* path, $Path* path2) {
	$init(Files);
	return $nc($(provider(path)))->isSameFile(path, path2);
}

int64_t Files::mismatch($Path* path, $Path* path2) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	if (isSameFile(path, path2)) {
		return -1;
	}
	$var($bytes, buffer1, $new($bytes, Files::BUFFER_SIZE));
	$var($bytes, buffer2, $new($bytes, Files::BUFFER_SIZE));
	{
		$var($InputStream, in1, Files::newInputStream(path, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					$var($InputStream, in2, Files::newInputStream(path2, $$new($OpenOptionArray, 0)));
					{
						$var($Throwable, var$3, nullptr);
						int64_t var$5 = 0;
						bool return$4 = false;
						try {
							try {
								int64_t totalRead = 0;
								while (true) {
									int32_t nRead1 = $nc(in1)->readNBytes(buffer1, 0, Files::BUFFER_SIZE);
									int32_t nRead2 = $nc(in2)->readNBytes(buffer2, 0, Files::BUFFER_SIZE);
									int32_t i = $Arrays::mismatch(buffer1, 0, nRead1, buffer2, 0, nRead2);
									if (i > -1) {
										var$5 = totalRead + i;
										return$4 = true;
										goto $finally1;
									}
									if (nRead1 < Files::BUFFER_SIZE) {
										var$5 = -1;
										return$4 = true;
										goto $finally1;
									}
									totalRead += nRead1;
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								if (in2 != nullptr) {
									try {
										in2->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$3, $catch());
						} $finally1: {
							if (in2 != nullptr) {
								in2->close();
							}
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							var$2 = var$5;
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (in1 != nullptr) {
						try {
							in1->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (in1 != nullptr) {
					in1->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

bool Files::isHidden($Path* path) {
	$init(Files);
	return $nc($(provider(path)))->isHidden(path);
}

$String* Files::probeContentType($Path* path) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	{
		$init($Files$FileTypeDetectors);
		$var($Iterator, i$, $nc($Files$FileTypeDetectors::installedDetectors)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileTypeDetector, detector, $cast($FileTypeDetector, i$->next()));
			{
				$var($String, result, $nc(detector)->probeContentType(path));
				if (result != nullptr) {
					return result;
				}
			}
		}
	}
	$init($Files$FileTypeDetectors);
	return $nc($Files$FileTypeDetectors::defaultFileTypeDetector)->probeContentType(path);
}

$FileAttributeView* Files::getFileAttributeView($Path* path, $Class* type, $LinkOptionArray* options) {
	$init(Files);
	return $nc($(provider(path)))->getFileAttributeView(path, type, options);
}

$BasicFileAttributes* Files::readAttributes($Path* path, $Class* type, $LinkOptionArray* options) {
	$init(Files);
	return $nc($(provider(path)))->readAttributes(path, type, options);
}

$Path* Files::setAttribute($Path* path, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$init(Files);
	$nc($(provider(path)))->setAttribute(path, attribute, value, options);
	return path;
}

$Object* Files::getAttribute($Path* path, $String* attribute, $LinkOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(attribute)->indexOf((int32_t)u'*') >= 0;
	if (var$0 || $nc(attribute)->indexOf((int32_t)u',') >= 0) {
		$throwNew($IllegalArgumentException, attribute);
	}
	$var($Map, map, readAttributes(path, attribute, options));
	if (!Files::$assertionsDisabled && !($nc(map)->size() == 1)) {
		$throwNew($AssertionError);
	}
	$var($String, name, nullptr);
	int32_t pos = $nc(attribute)->indexOf((int32_t)u':');
	if (pos == -1) {
		$assign(name, attribute);
	} else {
		$assign(name, (pos == attribute->length()) ? ""_s : attribute->substring(pos + 1));
	}
	return $of($nc(map)->get(name));
}

$Map* Files::readAttributes($Path* path, $String* attributes, $LinkOptionArray* options) {
	$init(Files);
	return $nc($(provider(path)))->readAttributes(path, attributes, options);
}

$Set* Files::getPosixFilePermissions($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$load($PosixFileAttributes);
	return $nc(($cast($PosixFileAttributes, $(readAttributes(path, $PosixFileAttributes::class$, options)))))->permissions();
}

$Path* Files::setPosixFilePermissions($Path* path, $Set* perms) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$load($PosixFileAttributeView);
	$var($PosixFileAttributeView, view, $cast($PosixFileAttributeView, getFileAttributeView(path, $PosixFileAttributeView::class$, $$new($LinkOptionArray, 0))));
	if (view == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	$nc(view)->setPermissions(perms);
	return path;
}

$UserPrincipal* Files::getOwner($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$load($FileOwnerAttributeView);
	$var($FileOwnerAttributeView, view, $cast($FileOwnerAttributeView, getFileAttributeView(path, $FileOwnerAttributeView::class$, options)));
	if (view == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return $nc(view)->getOwner();
}

$Path* Files::setOwner($Path* path, $UserPrincipal* owner) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$load($FileOwnerAttributeView);
	$var($FileOwnerAttributeView, view, $cast($FileOwnerAttributeView, getFileAttributeView(path, $FileOwnerAttributeView::class$, $$new($LinkOptionArray, 0))));
	if (view == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	$nc(view)->setOwner(owner);
	return path;
}

bool Files::isSymbolicLink($Path* path) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		$load($BasicFileAttributes);
		$init($LinkOption);
		return $nc($(readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}))))->isSymbolicLink();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Files::isDirectory($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	if ($nc(options)->length == 0) {
		$var($FileSystemProvider, provider, Files::provider(path));
		if ($instanceOf($AbstractFileSystemProvider, provider)) {
			return $nc(($cast($AbstractFileSystemProvider, provider)))->isDirectory(path);
		}
	}
	try {
		$load($BasicFileAttributes);
		return $nc($(readAttributes(path, $BasicFileAttributes::class$, options)))->isDirectory();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Files::isRegularFile($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	if ($nc(options)->length == 0) {
		$var($FileSystemProvider, provider, Files::provider(path));
		if ($instanceOf($AbstractFileSystemProvider, provider)) {
			return $nc(($cast($AbstractFileSystemProvider, provider)))->isRegularFile(path);
		}
	}
	try {
		$load($BasicFileAttributes);
		return $nc($(readAttributes(path, $BasicFileAttributes::class$, options)))->isRegularFile();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$FileTime* Files::getLastModifiedTime($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$load($BasicFileAttributes);
	return $nc($(readAttributes(path, $BasicFileAttributes::class$, options)))->lastModifiedTime();
}

$Path* Files::setLastModifiedTime($Path* path, $FileTime* time) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$load($BasicFileAttributeView);
	$nc(($cast($BasicFileAttributeView, $(getFileAttributeView(path, $BasicFileAttributeView::class$, $$new($LinkOptionArray, 0))))))->setTimes($cast($FileTime, $Objects::requireNonNull(time)), nullptr, nullptr);
	return path;
}

int64_t Files::size($Path* path) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$load($BasicFileAttributes);
	return $nc($(readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0))))->size();
}

bool Files::followLinks($LinkOptionArray* options) {
	$init(Files);
	bool followLinks = true;
	{
		$var($LinkOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$LinkOption* opt = arr$->get(i$);
			{
				$init($LinkOption);
				if (opt == $LinkOption::NOFOLLOW_LINKS) {
					followLinks = false;
					continue;
				}
				if (opt == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($AssertionError, $of("Should not get here"_s));
			}
		}
	}
	return followLinks;
}

bool Files::exists($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	if ($nc(options)->length == 0) {
		$var($FileSystemProvider, provider, Files::provider(path));
		if ($instanceOf($AbstractFileSystemProvider, provider)) {
			return $nc(($cast($AbstractFileSystemProvider, provider)))->exists(path);
		}
	}
	try {
		if (followLinks(options)) {
			$nc($(Files::provider(path)))->checkAccess(path, $$new($AccessModeArray, 0));
		} else {
			$load($BasicFileAttributes);
			$init($LinkOption);
			readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}));
		}
		return true;
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Files::notExists($Path* path, $LinkOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		if (followLinks(options)) {
			$nc($(provider(path)))->checkAccess(path, $$new($AccessModeArray, 0));
		} else {
			$load($BasicFileAttributes);
			$init($LinkOption);
			readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, {$LinkOption::NOFOLLOW_LINKS}));
		}
		return false;
	} catch ($NoSuchFileException&) {
		$var($NoSuchFileException, x, $catch());
		return true;
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Files::isAccessible($Path* path, $AccessModeArray* modes) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		$nc($(provider(path)))->checkAccess(path, modes);
		return true;
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool Files::isReadable($Path* path) {
	$init(Files);
	$init($AccessMode);
	return isAccessible(path, $$new($AccessModeArray, {$AccessMode::READ}));
}

bool Files::isWritable($Path* path) {
	$init(Files);
	$init($AccessMode);
	return isAccessible(path, $$new($AccessModeArray, {$AccessMode::WRITE}));
}

bool Files::isExecutable($Path* path) {
	$init(Files);
	$init($AccessMode);
	return isAccessible(path, $$new($AccessModeArray, {$AccessMode::EXECUTE}));
}

$Path* Files::walkFileTree($Path* start, $Set* options, int32_t maxDepth, $FileVisitor* visitor) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	{
		$var($FileTreeWalker, walker, $new($FileTreeWalker, options, maxDepth));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($FileTreeWalker$Event, ev, walker->walk(start));
					do {
						$init($Files$3);

						$var($FileVisitResult, var$1, nullptr)
						switch ($nc($Files$3::$SwitchMap$java$nio$file$FileTreeWalker$EventType)->get($nc(($($nc(ev)->type())))->ordinal())) {
						case 1:
							{
								{
									$var($IOException, ioe, ev->ioeException());
									if (ioe == nullptr) {
										if (!Files::$assertionsDisabled && !(ev->attributes() != nullptr)) {
											$throwNew($AssertionError);
										}
										$var($Object, var$2, $of(ev->file()));
										$assign(var$1, $nc(visitor)->visitFile(var$2, $(ev->attributes())));
										break;
									} else {
										$assign(var$1, $nc(visitor)->visitFileFailed($(ev->file()), ioe));
										break;
									}
								}
							}
						case 2:
							{
								{
									$var($Object, var$3, $of(ev->file()));
									$FileVisitResult* res = $nc(visitor)->preVisitDirectory(var$3, $(ev->attributes()));
									$init($FileVisitResult);
									if (res == $FileVisitResult::SKIP_SUBTREE || res == $FileVisitResult::SKIP_SIBLINGS) {
										walker->pop();
									}
									$assign(var$1, res);
									break;
								}
							}
						case 3:
							{
								{
									$var($Object, var$4, $of(ev->file()));
									$FileVisitResult* res = $nc(visitor)->postVisitDirectory(var$4, $(ev->ioeException()));
									$init($FileVisitResult);
									if (res == $FileVisitResult::SKIP_SIBLINGS) {
										res = $FileVisitResult::CONTINUE;
									}
									$assign(var$1, res);
									break;
								}
							}
						default:
							{
								$throwNew($AssertionError, $of("Should not get here"_s));
							}
						}
						$FileVisitResult* result = var$1;
						$init($FileVisitResult);
						if (!$equals($Objects::requireNonNull(result), $FileVisitResult::CONTINUE)) {
							if (result == $FileVisitResult::TERMINATE) {
								break;
							} else {
								if (result == $FileVisitResult::SKIP_SIBLINGS) {
									walker->skipRemainingSiblings();
								}
							}
						}
						$assign(ev, walker->next());
					} while (ev != nullptr);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						walker->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				walker->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return start;
}

$Path* Files::walkFileTree($Path* start, $FileVisitor* visitor) {
	$init(Files);
	$load($FileVisitOption);
	return walkFileTree(start, $($EnumSet::noneOf($FileVisitOption::class$)), $Integer::MAX_VALUE, visitor);
}

$BufferedReader* Files::newBufferedReader($Path* path, $Charset* cs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($CharsetDecoder, decoder, $nc(cs)->newDecoder());
	$var($Reader, reader, $new($InputStreamReader, $(newInputStream(path, $$new($OpenOptionArray, 0))), decoder));
	return $new($BufferedReader, reader);
}

$BufferedReader* Files::newBufferedReader($Path* path) {
	$init(Files);
	$init($UTF_8);
	return newBufferedReader(path, $UTF_8::INSTANCE);
}

$BufferedWriter* Files::newBufferedWriter($Path* path, $Charset* cs, $OpenOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($CharsetEncoder, encoder, $nc(cs)->newEncoder());
	$var($Writer, writer, $new($OutputStreamWriter, $(newOutputStream(path, options)), encoder));
	return $new($BufferedWriter, writer);
}

$BufferedWriter* Files::newBufferedWriter($Path* path, $OpenOptionArray* options) {
	$init(Files);
	$init($UTF_8);
	return newBufferedWriter(path, $UTF_8::INSTANCE, options);
}

int64_t Files::copy($InputStream* in, $Path* target, $CopyOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(in);
	bool replaceExisting = false;
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CopyOption, opt, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(opt, $StandardCopyOption::REPLACE_EXISTING)) {
					replaceExisting = true;
				} else if (opt == nullptr) {
					$throwNew($NullPointerException, "options contains \'null\'"_s);
				} else {
					$throwNew($UnsupportedOperationException, $$str({opt, " not supported"_s}));
				}
			}
		}
	}
	$var($SecurityException, se, nullptr);
	if (replaceExisting) {
		try {
			deleteIfExists(target);
		} catch ($SecurityException&) {
			$var($SecurityException, x, $catch());
			$assign(se, x);
		}
	}
	$var($OutputStream, ostream, nullptr);
	try {
			$init($StandardOpenOption);
		$assign(ostream, newOutputStream(target, $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::CREATE_NEW),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		})));
	} catch ($FileAlreadyExistsException&) {
		$var($FileAlreadyExistsException, x, $catch());
		if (se != nullptr) {
			$throw(se);
		}
		$throw(x);
	}
	{
		$var($OutputStream, out, ostream);
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					var$2 = in->transferTo(out);
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (out != nullptr) {
						try {
							out->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (out != nullptr) {
					out->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

int64_t Files::copy($Path* source, $OutputStream* out) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(out);
	{
		$var($InputStream, in, newInputStream(source, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					var$2 = $nc(in)->transferTo(out);
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$bytes* Files::read($InputStream* source, int32_t initialSize) {
	$init(Files);
	int32_t capacity = initialSize;
	$var($bytes, buf, $new($bytes, capacity));
	int32_t nread = 0;
	int32_t n = 0;
	for (;;) {
		while ((n = $nc(source)->read(buf, nread, capacity - nread)) > 0) {
			nread += n;
		}
		if (n < 0 || (n = $nc(source)->read()) < 0) {
			break;
		}
		capacity = $Math::max($ArraysSupport::newLength(capacity, 1, capacity), Files::BUFFER_SIZE);
		$assign(buf, $Arrays::copyOf(buf, capacity));
		buf->set(nread++, (int8_t)n);
	}
	return (capacity == nread) ? buf : $Arrays::copyOf(buf, nread);
}

$bytes* Files::readAllBytes($Path* path) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	{
		$var($SeekableByteChannel, sbc, Files::newByteChannel(path, $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($InputStream, in, $Channels::newInputStream(static_cast<$ReadableByteChannel*>(sbc)));
					{
						$var($Throwable, var$3, nullptr);
						$var($bytes, var$5, nullptr);
						bool return$4 = false;
						try {
							try {
								if ($instanceOf($FileChannelImpl, sbc)) {
									$nc(($cast($FileChannelImpl, sbc)))->setUninterruptible();
								}
								int64_t size = $nc(sbc)->size();
								if (size > (int64_t)$Integer::MAX_VALUE) {
									$throwNew($OutOfMemoryError, "Required array size too large"_s);
								}
								$assign(var$5, read(in, (int32_t)size));
								return$4 = true;
								goto $finally1;
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								if (in != nullptr) {
									try {
										in->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$3, $catch());
						} $finally1: {
							if (in != nullptr) {
								in->close();
							}
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							$assign(var$2, var$5);
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (sbc != nullptr) {
						try {
							sbc->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (sbc != nullptr) {
					sbc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$String* Files::readString($Path* path) {
	$init(Files);
	$init($UTF_8);
	return readString(path, $UTF_8::INSTANCE);
}

$String* Files::readString($Path* path, $Charset* cs) {
	$init(Files);
	$Objects::requireNonNull(path);
	$Objects::requireNonNull(cs);
	$var($bytes, ba, readAllBytes(path));
	$load($Object);
	if ($of(path)->getClass()->getModule() != $Object::class$->getModule()) {
		$assign(ba, $cast($bytes, $nc(ba)->clone()));
	}
	return $nc(Files::JLA)->newStringNoRepl(ba, cs);
}

$List* Files::readAllLines($Path* path, $Charset* cs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	{
		$var($BufferedReader, reader, newBufferedReader(path, cs));
		{
			$var($Throwable, var$0, nullptr);
			$var($List, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($List, result, $new($ArrayList));
					for (;;) {
						$var($String, line, $nc(reader)->readLine());
						if (line == nullptr) {
							break;
						}
						result->add(line);
					}
					$assign(var$2, result);
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (reader != nullptr) {
						try {
							reader->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (reader != nullptr) {
					reader->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$List* Files::readAllLines($Path* path) {
	$init(Files);
	$init($UTF_8);
	return readAllLines(path, $UTF_8::INSTANCE);
}

$Path* Files::write($Path* path, $bytes* bytes, $OpenOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(bytes);
	{
		$var($OutputStream, out, Files::newOutputStream(path, options));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int32_t len = bytes->length;
					int32_t rem = len;
					while (rem > 0) {
						int32_t n = $Math::min(rem, Files::BUFFER_SIZE);
						$nc(out)->write(bytes, (len - rem), n);
						rem -= n;
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (out != nullptr) {
						try {
							out->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (out != nullptr) {
					out->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return path;
}

$Path* Files::write($Path* path, $Iterable* lines, $Charset* cs, $OpenOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(lines);
	$var($CharsetEncoder, encoder, $nc(cs)->newEncoder());
	{
		$var($OutputStream, out, newOutputStream(path, options));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($BufferedWriter, writer, $new($BufferedWriter, $$new($OutputStreamWriter, out, encoder)));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								{
									$var($Iterator, i$, lines->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($CharSequence, line, $cast($CharSequence, i$->next()));
										{
											writer->append(line);
											writer->newLine();
										}
									}
								}
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									writer->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							writer->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (out != nullptr) {
						try {
							out->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (out != nullptr) {
					out->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return path;
}

$Path* Files::write($Path* path, $Iterable* lines, $OpenOptionArray* options) {
	$init(Files);
	$init($UTF_8);
	return write(path, lines, $UTF_8::INSTANCE, options);
}

$Path* Files::writeString($Path* path, $CharSequence* csq, $OpenOptionArray* options) {
	$init(Files);
	$init($UTF_8);
	return writeString(path, csq, $UTF_8::INSTANCE, options);
}

$Path* Files::writeString($Path* path, $CharSequence* csq, $Charset* cs, $OpenOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(path);
	$Objects::requireNonNull(csq);
	$Objects::requireNonNull(cs);
	$var($bytes, bytes, $nc(Files::JLA)->getBytesNoRepl($($String::valueOf($of(csq))), cs));
	$load($Object);
	if ($of(path)->getClass()->getModule() != $Object::class$->getModule()) {
		$assign(bytes, $cast($bytes, $nc(bytes)->clone()));
	}
	write(path, bytes, options);
	return path;
}

$Stream* Files::list($Path* dir) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($DirectoryStream, ds, Files::newDirectoryStream(dir));
	try {
		$var($Iterator, delegate, $nc(ds)->iterator());
		$var($Iterator, iterator, $new($Files$2, delegate));
		$var($Spliterator, spliterator, $Spliterators::spliteratorUnknownSize(iterator, $Spliterator::DISTINCT));
		return $cast($Stream, $nc($($StreamSupport::stream(spliterator, false)))->onClose($(asUncheckedRunnable(ds))));
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		try {
			$nc(ds)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		try {
			$nc(ds)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

$Stream* Files::walk($Path* start, int32_t maxDepth, $FileVisitOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($FileTreeIterator, iterator, $new($FileTreeIterator, start, maxDepth, options));
	try {
		$var($Spliterator, spliterator, $Spliterators::spliteratorUnknownSize(static_cast<$Iterator*>(iterator), $Spliterator::DISTINCT));
		return $nc(($cast($Stream, $($nc($($StreamSupport::stream(spliterator, false)))->onClose(static_cast<$Runnable*>($$new(Files$$Lambda$close$1, static_cast<$FileTreeIterator*>(iterator))))))))->map(static_cast<$Function*>($$new(Files$$Lambda$lambda$walk$1$2)));
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		iterator->close();
		$throw(e);
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		iterator->close();
		$throw(e);
	}
	$shouldNotReachHere();
}

$Stream* Files::walk($Path* start, $FileVisitOptionArray* options) {
	$init(Files);
	return walk(start, $Integer::MAX_VALUE, options);
}

$Stream* Files::find($Path* start, int32_t maxDepth, $BiPredicate* matcher, $FileVisitOptionArray* options) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($FileTreeIterator, iterator, $new($FileTreeIterator, start, maxDepth, options));
	try {
		$var($Spliterator, spliterator, $Spliterators::spliteratorUnknownSize(static_cast<$Iterator*>(iterator), $Spliterator::DISTINCT));
		return $nc($($nc(($cast($Stream, $($nc($($StreamSupport::stream(spliterator, false)))->onClose(static_cast<$Runnable*>($$new(Files$$Lambda$close$1, static_cast<$FileTreeIterator*>(iterator))))))))->filter(static_cast<$Predicate*>($$new(Files$$Lambda$lambda$find$2$3, matcher)))))->map(static_cast<$Function*>($$new(Files$$Lambda$lambda$walk$1$2)));
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		iterator->close();
		$throw(e);
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		iterator->close();
		$throw(e);
	}
	$shouldNotReachHere();
}

$Stream* Files::lines($Path* path, $Charset* cs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(path)->getFileSystem() == $FileSystems::getDefault();
	$init($FileChannelLinesSpliterator);
	if (var$0 && $nc($FileChannelLinesSpliterator::SUPPORTED_CHARSET_NAMES)->contains($($nc(cs)->name()))) {
		$init($StandardOpenOption);
		$var($FileChannel, fc, $FileChannel::open(path, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
		$var($Stream, fcls, createFileChannelLinesStream(fc, cs));
		if (fcls != nullptr) {
			return fcls;
		}
		$nc(fc)->close();
	}
	return createBufferedReaderLinesStream($(Files::newBufferedReader(path, cs)));
}

$Stream* Files::createFileChannelLinesStream($FileChannel* fc, $Charset* cs) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		int64_t length = $nc(fc)->size();
		if (length > 0 && length <= $Integer::MAX_VALUE) {
			$var($FileChannelLinesSpliterator, fcls, $new($FileChannelLinesSpliterator, fc, cs, 0, (int32_t)length));
			return $cast($Stream, $nc(($cast($Stream, $($nc($($StreamSupport::stream(fcls, false)))->onClose($(Files::asUncheckedRunnable(static_cast<$Closeable*>(static_cast<$Channel*>(static_cast<$InterruptibleChannel*>(static_cast<$AbstractInterruptibleChannel*>(fc)))))))))))->onClose(static_cast<$Runnable*>($$new(Files$$Lambda$lambda$createFileChannelLinesStream$4$4, fcls))));
		}
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		try {
			$nc(fc)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		try {
			$nc(fc)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	} catch ($IOException&) {
		$var($Throwable, e, $catch());
		try {
			$nc(fc)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	}
	return nullptr;
}

$Stream* Files::createBufferedReaderLinesStream($BufferedReader* br) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	try {
		return $cast($Stream, $nc($($nc(br)->lines()))->onClose($(asUncheckedRunnable(br))));
	} catch ($Error&) {
		$var($Throwable, e, $catch());
		try {
			$nc(br)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	} catch ($RuntimeException&) {
		$var($Throwable, e, $catch());
		try {
			$nc(br)->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			try {
				e->addSuppressed(ex);
			} catch ($Throwable&) {
				$catch();
			}
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

$Stream* Files::lines($Path* path) {
	$init(Files);
	$init($UTF_8);
	return lines(path, $UTF_8::INSTANCE);
}

void Files::lambda$createFileChannelLinesStream$4($FileChannelLinesSpliterator* fcls) {
	$init(Files);
	$nc(fcls)->close();
}

bool Files::lambda$find$2($BiPredicate* matcher, $FileTreeWalker$Event* entry) {
	$init(Files);
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($nc(entry)->file()));
	return $nc(matcher)->test(var$0, $(entry->attributes()));
}

$Path* Files::lambda$walk$1($FileTreeWalker$Event* entry) {
	$init(Files);
	return $nc(entry)->file();
}

void Files::lambda$asUncheckedRunnable$0($Closeable* c) {
	$init(Files);
	try {
		$nc(c)->close();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UncheckedIOException, e);
	}
}

void clinit$Files($Class* class$) {
	Files::$assertionsDisabled = !Files::class$->desiredAssertionStatus();
	$init($StandardOpenOption);
	$assignStatic(Files::DEFAULT_CREATE_OPTIONS, $Set::of($StandardOpenOption::CREATE_NEW, $StandardOpenOption::WRITE));
	$assignStatic(Files::JLA, $SharedSecrets::getJavaLangAccess());
}

Files::Files() {
}

$Class* Files::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Files$$Lambda$lambda$asUncheckedRunnable$0::classInfo$.name)) {
			return Files$$Lambda$lambda$asUncheckedRunnable$0::load$(name, initialize);
		}
		if (name->equals(Files$$Lambda$close$1::classInfo$.name)) {
			return Files$$Lambda$close$1::load$(name, initialize);
		}
		if (name->equals(Files$$Lambda$lambda$walk$1$2::classInfo$.name)) {
			return Files$$Lambda$lambda$walk$1$2::load$(name, initialize);
		}
		if (name->equals(Files$$Lambda$lambda$find$2$3::classInfo$.name)) {
			return Files$$Lambda$lambda$find$2$3::load$(name, initialize);
		}
		if (name->equals(Files$$Lambda$lambda$createFileChannelLinesStream$4$4::classInfo$.name)) {
			return Files$$Lambda$lambda$createFileChannelLinesStream$4$4::load$(name, initialize);
		}
	}
	$loadClass(Files, name, initialize, &_Files_ClassInfo_, clinit$Files, allocate$Files);
	return class$;
}

$Class* Files::class$ = nullptr;

		} // file
	} // nio
} // java