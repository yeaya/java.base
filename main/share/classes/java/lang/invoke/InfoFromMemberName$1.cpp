#include <java/lang/invoke/InfoFromMemberName$1.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/InfoFromMemberName.h>
#include <java/lang/reflect/Member.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InfoFromMemberName = ::java::lang::invoke::InfoFromMemberName;

namespace java {
	namespace lang {
		namespace invoke {

void InfoFromMemberName$1::init$($InfoFromMemberName* this$0) {
	$set(this, this$0, this$0);
}

$Object* InfoFromMemberName$1::run() {
	try {
		return this->this$0->reflectUnchecked();
	} catch ($ReflectiveOperationException& ex) {
		$throwNew($IllegalArgumentException, ex);
	}
	$shouldNotReachHere();
}

InfoFromMemberName$1::InfoFromMemberName$1() {
}

$Class* InfoFromMemberName$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/InfoFromMemberName;", nullptr, $FINAL | $SYNTHETIC, $field(InfoFromMemberName$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/InfoFromMemberName;)V", nullptr, 0, $method(InfoFromMemberName$1, init$, void, $InfoFromMemberName*)},
		{"run", "()Ljava/lang/reflect/Member;", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.InfoFromMemberName",
		"reflectAs",
		"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/reflect/Member;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.InfoFromMemberName$1", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.InfoFromMemberName$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Member;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.InfoFromMemberName"
	};
	$loadClass(InfoFromMemberName$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InfoFromMemberName$1);
	});
	return class$;
}

$Class* InfoFromMemberName$1::class$ = nullptr;

		} // invoke
	} // lang
} // java