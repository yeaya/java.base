#include <Fleeting.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute Fleeting_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Fleeting_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Fleeting_Attribute_var$0},
	{}
};

$MethodInfo _Fleeting_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Fleeting_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Fleeting",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Fleeting_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Fleeting_Annotations_
};

$Object* allocate$Fleeting($Class* clazz) {
	return $of($alloc(Fleeting));
}

$Class* Fleeting::load$($String* name, bool initialize) {
	$loadClass(Fleeting, name, initialize, &_Fleeting_ClassInfo_, allocate$Fleeting);
	return class$;
}

$Class* Fleeting::class$ = nullptr;