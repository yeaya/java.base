#include <Missing.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute Missing_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Missing_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Missing_Attribute_var$0},
	{}
};

$MethodInfo _Missing_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Missing_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Missing",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Missing_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Missing_Annotations_
};

$Object* allocate$Missing($Class* clazz) {
	return $of($alloc(Missing));
}

$Class* Missing::load$($String* name, bool initialize) {
	$loadClass(Missing, name, initialize, &_Missing_ClassInfo_, allocate$Missing);
	return class$;
}

$Class* Missing::class$ = nullptr;