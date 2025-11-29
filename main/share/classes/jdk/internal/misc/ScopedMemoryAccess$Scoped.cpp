#include <jdk/internal/misc/ScopedMemoryAccess$Scoped.h>

#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace misc {

$Attribute ScopedMemoryAccess$Scoped_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute ScopedMemoryAccess$Scoped_Attribute_var$0[] = {
	{"value", '[', ScopedMemoryAccess$Scoped_Attribute_var$1},
	{}
};

$NamedAttribute ScopedMemoryAccess$Scoped_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ScopedMemoryAccess$Scoped_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", ScopedMemoryAccess$Scoped_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ScopedMemoryAccess$Scoped_Attribute_var$2},
	{}
};

$InnerClassInfo _ScopedMemoryAccess$Scoped_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$Scoped", "jdk.internal.misc.ScopedMemoryAccess", "Scoped", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _ScopedMemoryAccess$Scoped_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.misc.ScopedMemoryAccess$Scoped",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scoped_InnerClassesInfo_,
	_ScopedMemoryAccess$Scoped_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess"
};

$Object* allocate$ScopedMemoryAccess$Scoped($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess$Scoped));
}

$Class* ScopedMemoryAccess$Scoped::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess$Scoped, name, initialize, &_ScopedMemoryAccess$Scoped_ClassInfo_, allocate$ScopedMemoryAccess$Scoped);
	return class$;
}

$Class* ScopedMemoryAccess$Scoped::class$ = nullptr;

		} // misc
	} // internal
} // jdk