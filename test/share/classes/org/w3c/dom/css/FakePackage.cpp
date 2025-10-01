#include <org/w3c/dom/css/FakePackage.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace org {
	namespace w3c {
		namespace dom {
			namespace css {

$NamedAttribute FakePackage_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute FakePackage_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'-'}
};

$NamedAttribute FakePackage_Attribute_var$1[] = {
	{"value", '[', FakePackage_Attribute_var$2},
	{}
};
$CompoundAttribute _FakePackage_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", FakePackage_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", FakePackage_Attribute_var$1},
	{}
};


$ClassInfo _FakePackage_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"org.w3c.dom.css.FakePackage",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_FakePackage_Annotations_
};

$Object* allocate$FakePackage($Class* clazz) {
	return $of($alloc(FakePackage));
}

$Class* FakePackage::load$($String* name, bool initialize) {
	$loadClass(FakePackage, name, initialize, &_FakePackage_ClassInfo_, allocate$FakePackage);
	return class$;
}

$Class* FakePackage::class$ = nullptr;

			} // css
		} // dom
	} // w3c
} // org