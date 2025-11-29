#include <java/nio/file/attribute/FileStoreAttributeView.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$ClassInfo _FileStoreAttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.FileStoreAttributeView",
	nullptr,
	"java.nio.file.attribute.AttributeView"
};

$Object* allocate$FileStoreAttributeView($Class* clazz) {
	return $of($alloc(FileStoreAttributeView));
}

$Class* FileStoreAttributeView::load$($String* name, bool initialize) {
	$loadClass(FileStoreAttributeView, name, initialize, &_FileStoreAttributeView_ClassInfo_, allocate$FileStoreAttributeView);
	return class$;
}

$Class* FileStoreAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java