#include <UniTest/Point.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$Attribute Point_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute Point_Attribute_var$0[] = {
	{"value", '[', Point_Attribute_var$1},
	{}
};

$CompoundAttribute _Point_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Point_Attribute_var$0},
	{}
};

$MethodInfo _Point_MethodInfo_[] = {
	{"x", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"y", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Point_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.Point",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Point_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Point_Annotations_
};

$Object* allocate$Point($Class* clazz) {
	return $of($alloc(Point));
}

$Class* Point::load$($String* name, bool initialize) {
	$loadClass(Point, name, initialize, &_Point_ClassInfo_, allocate$Point);
	return class$;
}

$Class* Point::class$ = nullptr;

} // UniTest