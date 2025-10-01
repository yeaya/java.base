#include <java/nio/file/SecureDirectoryStream.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _SecureDirectoryStream_MethodInfo_[] = {
	{"deleteDirectory", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"deleteFile", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getFileAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC | $ABSTRACT},
	{"getFileAttributeView", "(Ljava/lang/Object;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(TT;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"move", "(Ljava/lang/Object;Ljava/nio/file/SecureDirectoryStream;Ljava/lang/Object;)V", "(TT;Ljava/nio/file/SecureDirectoryStream<TT;>;TT;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"newByteChannel", "(Ljava/lang/Object;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(TT;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT | $ABSTRACT, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream;", "(TT;[Ljava/nio/file/LinkOption;)Ljava/nio/file/SecureDirectoryStream<TT;>;", $PUBLIC | $TRANSIENT | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SecureDirectoryStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.SecureDirectoryStream",
	nullptr,
	"java.nio.file.DirectoryStream",
	nullptr,
	_SecureDirectoryStream_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/nio/file/DirectoryStream<TT;>;"
};

$Object* allocate$SecureDirectoryStream($Class* clazz) {
	return $of($alloc(SecureDirectoryStream));
}

$Class* SecureDirectoryStream::load$($String* name, bool initialize) {
	$loadClass(SecureDirectoryStream, name, initialize, &_SecureDirectoryStream_ClassInfo_, allocate$SecureDirectoryStream);
	return class$;
}

$Class* SecureDirectoryStream::class$ = nullptr;

		} // file
	} // nio
} // java