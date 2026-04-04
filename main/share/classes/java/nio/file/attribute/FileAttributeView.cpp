#include <java/nio/file/attribute/FileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* FileAttributeView::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.FileAttributeView",
		nullptr,
		"java.nio.file.attribute.AttributeView"
	};
	$loadClass(FileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileAttributeView);
	});
	return class$;
}

$Class* FileAttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java