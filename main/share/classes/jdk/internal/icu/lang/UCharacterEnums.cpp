#include <jdk/internal/icu/lang/UCharacterEnums.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$CompoundAttribute _UCharacterEnums_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _UCharacterEnums_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UCharacterEnums::*)()>(&UCharacterEnums::init$))},
	{}
};

$InnerClassInfo _UCharacterEnums_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterDirection", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterCategory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacterEnums_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.lang.UCharacterEnums",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UCharacterEnums_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterEnums_InnerClassesInfo_,
	_UCharacterEnums_Annotations_,
	nullptr,
	"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection,jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory"
};

$Object* allocate$UCharacterEnums($Class* clazz) {
	return $of($alloc(UCharacterEnums));
}

void UCharacterEnums::init$() {
}

UCharacterEnums::UCharacterEnums() {
}

$Class* UCharacterEnums::load$($String* name, bool initialize) {
	$loadClass(UCharacterEnums, name, initialize, &_UCharacterEnums_ClassInfo_, allocate$UCharacterEnums);
	return class$;
}

$Class* UCharacterEnums::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk