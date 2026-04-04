#include <java/lang/Class$1.h>
#include <java/lang/reflect/Constructor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;

namespace java {
	namespace lang {

void Class$1::init$($Class* this$0, $Constructor* val$c) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
}

$Object* Class$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$c)->setAccessible(true);
	return nullptr;
}

Class$1::Class$1() {
}

$Class* Class$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Class$1, this$0)},
		{"val$c", "Ljava/lang/reflect/Constructor;", nullptr, $FINAL | $SYNTHETIC, $field(Class$1, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)V", nullptr, 0, $method(Class$1, init$, void, $Class*, $Constructor*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Class$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Class",
		"newInstance",
		"()Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Class$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Class$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Class"
	};
	$loadClass(Class$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class$1);
	});
	return class$;
}

$Class* Class$1::class$ = nullptr;

	} // lang
} // java