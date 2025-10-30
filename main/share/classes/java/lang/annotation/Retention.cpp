#include <java/lang/annotation/Retention.h>

#include <java/lang/annotation/RetentionPolicy.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;

namespace java {
	namespace lang {
		namespace annotation {

$NamedAttribute Retention_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Retention_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
	{'-'}
};

$NamedAttribute Retention_Attribute_var$1[] = {
	{"value", '[', Retention_Attribute_var$2},
	{}
};

$CompoundAttribute _Retention_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Retention_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Retention_Attribute_var$1},
	{}
};

$MethodInfo _Retention_MethodInfo_[] = {
	{"value", "()Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Retention_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Retention",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Retention_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Retention_Annotations_
};

$Object* allocate$Retention($Class* clazz) {
	return $of($alloc(Retention));
}

$Class* Retention::load$($String* name, bool initialize) {
	$loadClass(Retention, name, initialize, &_Retention_ClassInfo_, allocate$Retention);
	return class$;
}

$Class* Retention::class$ = nullptr;

		} // annotation
	} // lang
} // java