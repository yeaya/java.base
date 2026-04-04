#include <java/lang/invoke/ClassSpecializer$Factory$1.h>
#include <java/lang/invoke/ClassSpecializer$Factory.h>
#include <java/lang/invoke/ClassSpecializer.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassSpecializer$Factory = ::java::lang::invoke::ClassSpecializer$Factory;

namespace java {
	namespace lang {
		namespace invoke {

void ClassSpecializer$Factory$1::init$($ClassSpecializer$Factory* this$1) {
	$set(this, this$1, this$1);
}

$Object* ClassSpecializer$Factory$1::run() {
	return $nc($nc(this->this$1->this$0)->topClass())->getProtectionDomain();
}

ClassSpecializer$Factory$1::ClassSpecializer$Factory$1() {
}

$Class* ClassSpecializer$Factory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/lang/invoke/ClassSpecializer$Factory;", nullptr, $FINAL | $SYNTHETIC, $field(ClassSpecializer$Factory$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/ClassSpecializer$Factory;)V", nullptr, 0, $method(ClassSpecializer$Factory$1, init$, void, $ClassSpecializer$Factory*)},
		{"run", "()Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $virtualMethod(ClassSpecializer$Factory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.ClassSpecializer$Factory",
		"generateConcreteSpeciesCode",
		"(Ljava/lang/String;Ljava/lang/invoke/ClassSpecializer$SpeciesData;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.ClassSpecializer$Factory", "java.lang.invoke.ClassSpecializer", "Factory", $PUBLIC},
		{"java.lang.invoke.ClassSpecializer$Factory$1", nullptr, nullptr, 0},
		{"java.lang.invoke.ClassSpecializer$SpeciesData", "java.lang.invoke.ClassSpecializer", "SpeciesData", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.ClassSpecializer$Factory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/ProtectionDomain;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.ClassSpecializer"
	};
	$loadClass(ClassSpecializer$Factory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassSpecializer$Factory$1);
	});
	return class$;
}

$Class* ClassSpecializer$Factory$1::class$ = nullptr;

		} // invoke
	} // lang
} // java