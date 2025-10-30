#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _UserDefinedFileAttributeView_MethodInfo_[] = {
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"size", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UserDefinedFileAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.UserDefinedFileAttributeView",
	nullptr,
	"java.nio.file.attribute.FileAttributeView",
	nullptr,
	_UserDefinedFileAttributeView_MethodInfo_
};

$Object* allocate$UserDefinedFileAttributeView($Class* clazz) {
	return $of($alloc(UserDefinedFileAttributeView));
}

$Class* UserDefinedFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(UserDefinedFileAttributeView, name, initialize, &_UserDefinedFileAttributeView_ClassInfo_, allocate$UserDefinedFileAttributeView);
	return class$;
}

$Class* UserDefinedFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java