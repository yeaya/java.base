#include <UniTest/Marker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace UniTest {

$NamedAttribute Marker_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _Marker_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Marker_Attribute_var$0},
	{}
};


$ClassInfo _Marker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.Marker",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Marker_Annotations_
};

$Object* allocate$Marker($Class* clazz) {
	return $of($alloc(Marker));
}

$Class* Marker::load$($String* name, bool initialize) {
	$loadClass(Marker, name, initialize, &_Marker_ClassInfo_, allocate$Marker);
	return class$;
}

$Class* Marker::class$ = nullptr;

} // UniTest