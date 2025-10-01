#include <UniTest/ArrayTypes.h>

#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PointArray = $Array<::UniTest::Point>;
using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute ArrayTypes_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _ArrayTypes_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ArrayTypes_Attribute_var$0},
	{}
};


$MethodInfo _ArrayTypes_MethodInfo_[] = {
	{"a", "()[LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"b", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"bool", "()[Z", nullptr, $PUBLIC | $ABSTRACT},
	{"c", "()[C", nullptr, $PUBLIC | $ABSTRACT},
	{"cls", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT},
	{"d", "()[D", nullptr, $PUBLIC | $ABSTRACT},
	{"e", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT},
	{"f", "()[F", nullptr, $PUBLIC | $ABSTRACT},
	{"i", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"l", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"s", "()[S", nullptr, $PUBLIC | $ABSTRACT},
	{"str", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ArrayTypes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.ArrayTypes",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ArrayTypes_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ArrayTypes_Annotations_
};

$Object* allocate$ArrayTypes($Class* clazz) {
	return $of($alloc(ArrayTypes));
}

$Class* ArrayTypes::load$($String* name, bool initialize) {
	$loadClass(ArrayTypes, name, initialize, &_ArrayTypes_ClassInfo_, allocate$ArrayTypes);
	return class$;
}

$Class* ArrayTypes::class$ = nullptr;

} // UniTest