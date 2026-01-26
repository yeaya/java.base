#include <Classy.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Classy_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Classy_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Classy_Attribute_var$0},
	{}
};

$MethodInfo _Classy_MethodInfo_[] = {
	{"value", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Classy, value, $Class*)},
	{}
};

$ClassInfo _Classy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Classy",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Classy_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Classy_Annotations_
};

$Object* allocate$Classy($Class* clazz) {
	return $of($alloc(Classy));
}

$Class* Classy::load$($String* name, bool initialize) {
	$loadClass(Classy, name, initialize, &_Classy_ClassInfo_, allocate$Classy);
	return class$;
}

$Class* Classy::class$ = nullptr;