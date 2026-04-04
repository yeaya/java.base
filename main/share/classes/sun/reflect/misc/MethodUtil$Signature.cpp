#include <sun/reflect/misc/MethodUtil$Signature.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace reflect {
		namespace misc {

void MethodUtil$Signature::init$($Method* m) {
	$set(this, methodName, $nc(m)->getName());
	$set(this, argClasses, m->getParameterTypes());
	int32_t var$0 = $nc(this->methodName)->hashCode();
	this->hashCode$ = var$0 + $Arrays::hashCode(this->argClasses);
}

int32_t MethodUtil$Signature::hashCode() {
	return this->hashCode$;
}

bool MethodUtil$Signature::equals(Object$* o2) {
	if ($equals(this, o2)) {
		return true;
	}
	$var(MethodUtil$Signature, that, $cast(MethodUtil$Signature, o2));
	if (!($nc(this->methodName)->equals($nc(that)->methodName))) {
		return false;
	}
	if ($nc(this->argClasses)->length != $nc(that->argClasses)->length) {
		return false;
	}
	for (int32_t i = 0; i < this->argClasses->length; ++i) {
		if (!(this->argClasses->get(i) == that->argClasses->get(i))) {
			return false;
		}
	}
	return true;
}

MethodUtil$Signature::MethodUtil$Signature() {
}

$Class* MethodUtil$Signature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodUtil$Signature, methodName)},
		{"argClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MethodUtil$Signature, argClasses)},
		{"hashCode", "I", nullptr, $PRIVATE | $FINAL, $field(MethodUtil$Signature, hashCode$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(MethodUtil$Signature, init$, void, $Method*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodUtil$Signature, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MethodUtil$Signature, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.misc.MethodUtil$Signature", "sun.reflect.misc.MethodUtil", "Signature", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.misc.MethodUtil$Signature",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.reflect.misc.MethodUtil"
	};
	$loadClass(MethodUtil$Signature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodUtil$Signature);
	});
	return class$;
}

$Class* MethodUtil$Signature::class$ = nullptr;

		} // misc
	} // reflect
} // sun