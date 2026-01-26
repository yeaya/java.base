#include <UniTest/ArrayTypes.h>

#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $PointArray = $Array<::UniTest::Point>;
using $StoogeArray = $Array<::UniTest::Stooge>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

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
	{"a", "()[LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, a, $PointArray*)},
	{"b", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, b, $bytes*)},
	{"bool", "()[Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, bool$, $booleans*)},
	{"c", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, c, $chars*)},
	{"cls", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, cls, $ClassArray*)},
	{"d", "()[D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, d, $doubles*)},
	{"e", "()[LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, e, $StoogeArray*)},
	{"f", "()[F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, f, $floats*)},
	{"i", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, i, $ints*)},
	{"l", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, l, $longs*)},
	{"s", "()[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, s, $shorts*)},
	{"str", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayTypes, str, $StringArray*)},
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