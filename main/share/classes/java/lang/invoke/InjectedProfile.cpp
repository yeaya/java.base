#include <java/lang/invoke/InjectedProfile.h>

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

namespace java {
	namespace lang {
		namespace invoke {

$Attribute InjectedProfile_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute InjectedProfile_Attribute_var$0[] = {
	{"value", '[', InjectedProfile_Attribute_var$1},
	{}
};

$NamedAttribute InjectedProfile_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _InjectedProfile_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", InjectedProfile_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", InjectedProfile_Attribute_var$2},
	{}
};


$ClassInfo _InjectedProfile_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.invoke.InjectedProfile",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_InjectedProfile_Annotations_
};

$Object* allocate$InjectedProfile($Class* clazz) {
	return $of($alloc(InjectedProfile));
}

$Class* InjectedProfile::load$($String* name, bool initialize) {
	$loadClass(InjectedProfile, name, initialize, &_InjectedProfile_ClassInfo_, allocate$InjectedProfile);
	return class$;
}

$Class* InjectedProfile::class$ = nullptr;

		} // invoke
	} // lang
} // java