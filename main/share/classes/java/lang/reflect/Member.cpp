#include <java/lang/reflect/Member.h>
#include <jcpp.h>

#undef DECLARED
#undef PUBLIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$Class* Member::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Member, PUBLIC)},
		{"DECLARED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Member, DECLARED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Member, getDeclaringClass, $Class*)},
		{"getModifiers", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, getModifiers, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, getName, $String*)},
		{"isSynthetic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, isSynthetic, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.Member",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Member);
	});
	return class$;
}

$Class* Member::class$ = nullptr;

		} // reflect
	} // lang
} // java