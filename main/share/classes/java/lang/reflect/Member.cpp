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

$FieldInfo _Member_FieldInfo_[] = {
	{"PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Member, PUBLIC)},
	{"DECLARED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Member, DECLARED)},
	{}
};

$MethodInfo _Member_MethodInfo_[] = {
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Member, getDeclaringClass, $Class*)},
	{"getModifiers", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, getModifiers, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, getName, $String*)},
	{"isSynthetic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Member, isSynthetic, bool)},
	{}
};

$ClassInfo _Member_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.Member",
	nullptr,
	nullptr,
	_Member_FieldInfo_,
	_Member_MethodInfo_
};

$Object* allocate$Member($Class* clazz) {
	return $of($alloc(Member));
}

$Class* Member::load$($String* name, bool initialize) {
	$loadClass(Member, name, initialize, &_Member_ClassInfo_, allocate$Member);
	return class$;
}

$Class* Member::class$ = nullptr;

		} // reflect
	} // lang
} // java