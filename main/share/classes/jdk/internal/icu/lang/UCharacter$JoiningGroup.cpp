#include <jdk/internal/icu/lang/UCharacter$JoiningGroup.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jcpp.h>

#undef NO_JOINING_GROUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$FieldInfo _UCharacter$JoiningGroup_FieldInfo_[] = {
	{"NO_JOINING_GROUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$JoiningGroup, NO_JOINING_GROUP)},
	{}
};

$InnerClassInfo _UCharacter$JoiningGroup_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacter$JoiningGroup", "jdk.internal.icu.lang.UCharacter", "JoiningGroup", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacter$JoiningGroup_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.lang.UCharacter$JoiningGroup",
	nullptr,
	nullptr,
	_UCharacter$JoiningGroup_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_UCharacter$JoiningGroup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.lang.UCharacter"
};

$Object* allocate$UCharacter$JoiningGroup($Class* clazz) {
	return $of($alloc(UCharacter$JoiningGroup));
}

$Class* UCharacter$JoiningGroup::load$($String* name, bool initialize) {
	$loadClass(UCharacter$JoiningGroup, name, initialize, &_UCharacter$JoiningGroup_ClassInfo_, allocate$UCharacter$JoiningGroup);
	return class$;
}

$Class* UCharacter$JoiningGroup::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk