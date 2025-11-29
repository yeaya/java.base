#include <UniTest/Foo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute Foo_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Foo_Annotations_[] = {
	{"Ljava/lang/annotation/Inherited;", nullptr},
	{"Ljava/lang/annotation/Retention;", Foo_Attribute_var$0},
	{}
};

$ClassInfo _Foo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"UniTest.Foo",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Foo_Annotations_
};

$Object* allocate$Foo($Class* clazz) {
	return $of($alloc(Foo));
}

$Class* Foo::load$($String* name, bool initialize) {
	$loadClass(Foo, name, initialize, &_Foo_ClassInfo_, allocate$Foo);
	return class$;
}

$Class* Foo::class$ = nullptr;

} // UniTest