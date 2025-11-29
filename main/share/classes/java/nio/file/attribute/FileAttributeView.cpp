#include <java/nio/file/attribute/FileAttributeView.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$ClassInfo _FileAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.FileAttributeView",
	nullptr,
	"java.nio.file.attribute.AttributeView"
};

$Object* allocate$FileAttributeView($Class* clazz) {
	return $of($alloc(FileAttributeView));
}

$Class* FileAttributeView::load$($String* name, bool initialize) {
	$loadClass(FileAttributeView, name, initialize, &_FileAttributeView_ClassInfo_, allocate$FileAttributeView);
	return class$;
}

$Class* FileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java