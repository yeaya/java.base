#include <java/lang/SafeVarargs.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {

$NamedAttribute SafeVarargs_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute SafeVarargs_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute SafeVarargs_Attribute_var$1[] = {
	{"value", '[', SafeVarargs_Attribute_var$2},
	{}
};

$CompoundAttribute _SafeVarargs_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", SafeVarargs_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", SafeVarargs_Attribute_var$1},
	{}
};

$ClassInfo _SafeVarargs_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.SafeVarargs",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_SafeVarargs_Annotations_
};

$Object* allocate$SafeVarargs($Class* clazz) {
	return $of($alloc(SafeVarargs));
}

$Class* SafeVarargs::load$($String* name, bool initialize) {
	$loadClass(SafeVarargs, name, initialize, &_SafeVarargs_ClassInfo_, allocate$SafeVarargs);
	return class$;
}

$Class* SafeVarargs::class$ = nullptr;

	} // lang
} // java