#include <Rat.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute Rat_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Rat_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Rat_Attribute_var$0},
	{"LRat;", nullptr},
	{}
};

$ClassInfo _Rat_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Rat",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Rat_Annotations_
};

$Object* allocate$Rat($Class* clazz) {
	return $of($alloc(Rat));
}

$Class* Rat::load$($String* name, bool initialize) {
	$loadClass(Rat, name, initialize, &_Rat_ClassInfo_, allocate$Rat);
	return class$;
}

$Class* Rat::class$ = nullptr;