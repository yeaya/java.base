#include <UniTest/Bar.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute Bar_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Bar_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Bar_Attribute_var$0},
	{}
};

$ClassInfo _Bar_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.Bar",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Bar_Annotations_
};

$Object* allocate$Bar($Class* clazz) {
	return $of($alloc(Bar));
}

$Class* Bar::load$($String* name, bool initialize) {
	$loadClass(Bar, name, initialize, &_Bar_ClassInfo_, allocate$Bar);
	return class$;
}

$Class* Bar::class$ = nullptr;

} // UniTest