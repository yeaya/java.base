#include <java/nio/file/SecureDirectoryStream.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {

$Class* SecureDirectoryStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"deleteDirectory", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(SecureDirectoryStream, deleteDirectory, void, Object$*), "java.io.IOException"},
		{"deleteFile", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(SecureDirectoryStream, deleteFile, void, Object$*), "java.io.IOException"},
		{"getFileAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(SecureDirectoryStream, getFileAttributeView, $FileAttributeView*, $Class*)},
		{"getFileAttributeView", "(Ljava/lang/Object;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(TT;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(SecureDirectoryStream, getFileAttributeView, $FileAttributeView*, Object$*, $Class*, $LinkOptionArray*)},
		{"move", "(Ljava/lang/Object;Ljava/nio/file/SecureDirectoryStream;Ljava/lang/Object;)V", "(TT;Ljava/nio/file/SecureDirectoryStream<TT;>;TT;)V", $PUBLIC | $ABSTRACT, $virtualMethod(SecureDirectoryStream, move, void, Object$*, SecureDirectoryStream*, Object$*), "java.io.IOException"},
		{"newByteChannel", "(Ljava/lang/Object;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(TT;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(SecureDirectoryStream, newByteChannel, $SeekableByteChannel*, Object$*, $Set*, $FileAttributeArray*), "java.io.IOException"},
		{"newDirectoryStream", "(Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream;", "(TT;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream<TT;>;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(SecureDirectoryStream, newDirectoryStream, SecureDirectoryStream*, Object$*, $LinkOptionArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.SecureDirectoryStream",
		nullptr,
		"java.nio.file.DirectoryStream",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/nio/file/DirectoryStream<TT;>;"
	};
	$loadClass(SecureDirectoryStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SecureDirectoryStream));
	});
	return class$;
}

$Class* SecureDirectoryStream::class$ = nullptr;

		} // file
	} // nio
} // java