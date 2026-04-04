#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* FileStoreAttributeView::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.FileStoreAttributeView",
		nullptr,
		"java.nio.file.attribute.AttributeView"
	};
	$loadClass(FileStoreAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileStoreAttributeView);
	});
	return class$;
}

$Class* FileStoreAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java