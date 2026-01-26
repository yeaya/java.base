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
	{"a", "()LUniTest/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, a, $Point*)},
	{"b", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, b, int8_t)},
	{"bool", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, bool$, bool)},
	{"c", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, c, char16_t)},
	{"cls", "()Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, cls, $Class*)},
	{"d", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, d, double)},
	{"e", "()LUniTest/Stooge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, e, $Stooge*)},
	{"f", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, f, float)},
	{"i", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, i, int32_t)},
	{"l", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, l, int64_t)},
	{"s", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, s, int16_t)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScalarTypes, str, $String*)},
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