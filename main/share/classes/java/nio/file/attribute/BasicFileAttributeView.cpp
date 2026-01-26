#include <java/nio/file/attribute/BasicFileAttributeView.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _BasicFileAttributeView_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributeView, readAttributes, $BasicFileAttributes*), "java.io.IOException"},
	{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributeView, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
	{}
};

$ClassInfo _BasicFileAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.BasicFileAttributeView",
	nullptr,
	"java.nio.file.attribute.FileAttributeView",
	nullptr,
	_BasicFileAttributeView_MethodInfo_
};

$Object* allocate$BasicFileAttributeView($Class* clazz) {
	return $of($alloc(BasicFileAttributeView));
}

$Class* BasicFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(BasicFileAttributeView, name, initialize, &_BasicFileAttributeView_ClassInfo_, allocate$BasicFileAttributeView);
	return class$;
}

$Class* BasicFileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java