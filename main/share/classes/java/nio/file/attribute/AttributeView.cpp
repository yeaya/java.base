#include <java/nio/file/attribute/AttributeView.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _AttributeView_MethodInfo_[] = {
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeView, name, $String*)},
	{}
};

$ClassInfo _AttributeView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.AttributeView",
	nullptr,
	nullptr,
	nullptr,
	_AttributeView_MethodInfo_
};

$Object* allocate$AttributeView($Class* clazz) {
	return $of($alloc(AttributeView));
}

$Class* AttributeView::load$($String* name, bool initialize) {
	$loadClass(AttributeView, name, initialize, &_AttributeView_ClassInfo_, allocate$AttributeView);
	return class$;
}

$Class* AttributeView::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java