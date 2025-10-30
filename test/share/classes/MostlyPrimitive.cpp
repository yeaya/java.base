#include <MostlyPrimitive.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute MostlyPrimitive_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _MostlyPrimitive_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MostlyPrimitive_Attribute_var$0},
	{}
};

$MethodInfo _MostlyPrimitive_MethodInfo_[] = {
	{"b0", "()B", nullptr, $PUBLIC | $ABSTRACT},
	{"c0", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"c1", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"class0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"classArray", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"d0", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"d1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"f0", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"f1", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"i0", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"i1", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"l0", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"l1", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"l2", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"l3", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"s0", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"s1", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MostlyPrimitive_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"MostlyPrimitive",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_MostlyPrimitive_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_MostlyPrimitive_Annotations_
};

$Object* allocate$MostlyPrimitive($Class* clazz) {
	return $of($alloc(MostlyPrimitive));
}

$Class* MostlyPrimitive::load$($String* name, bool initialize) {
	$loadClass(MostlyPrimitive, name, initialize, &_MostlyPrimitive_ClassInfo_, allocate$MostlyPrimitive);
	return class$;
}

$Class* MostlyPrimitive::class$ = nullptr;