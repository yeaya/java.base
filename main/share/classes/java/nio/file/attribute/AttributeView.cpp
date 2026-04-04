#include <java/nio/file/attribute/AttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* AttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeView, name, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.AttributeView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeView);
	});
	return class$;
}

$Class* AttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java