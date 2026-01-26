#include <MostlyPrimitive.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute MostlyPrimitive_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _MostlyPrimitive_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MostlyPrimitive_Attribute_var$0},
	{}
};

$MethodInfo _MostlyPrimitive_MethodInfo_[] = {
	{"b0", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, b0, int8_t)},
	{"c0", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, c0, char16_t)},
	{"c1", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, c1, char16_t)},
	{"class0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, class0, $Class*)},
	{"classArray", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, classArray, $ClassArray*)},
	{"d0", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, d0, double)},
	{"d1", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, d1, double)},
	{"f0", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, f0, float)},
	{"f1", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, f1, float)},
	{"i0", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, i0, int32_t)},
	{"i1", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, i1, int32_t)},
	{"l0", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, l0, int64_t)},
	{"l1", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, l1, int64_t)},
	{"l2", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, l2, int64_t)},
	{"l3", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, l3, int64_t)},
	{"s0", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, s0, $String*)},
	{"s1", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MostlyPrimitive, s1, $String*)},
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