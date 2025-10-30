#include <UniTest/ScalarTypes.h>

#include <UniTest/Point.h>
#include <UniTest/Stooge.h>
#include <jcpp.h>

using $Point = ::UniTest::Point;
using $Stooge = ::UniTest::Stooge;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute ScalarTypes_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ScalarTypes_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ScalarTypes_Attribute_var$0},
	{}
};

$MethodInfo _ScalarTypes_MethodInfo_[] = {
	{"a", "()LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"b", "()B", nullptr, $PUBLIC | $ABSTRACT},
	{"bool", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"c", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"cls", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT},
	{"d", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"e", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT},
	{"f", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"i", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"l", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"s", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ScalarTypes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.ScalarTypes",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ScalarTypes_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ScalarTypes_Annotations_
};

$Object* allocate$ScalarTypes($Class* clazz) {
	return $of($alloc(ScalarTypes));
}

$Class* ScalarTypes::load$($String* name, bool initialize) {
	$loadClass(ScalarTypes, name, initialize, &_ScalarTypes_ClassInfo_, allocate$ScalarTypes);
	return class$;
}

$Class* ScalarTypes::class$ = nullptr;

} // UniTest