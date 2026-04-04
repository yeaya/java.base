#include <PrivilegedThreadFactory$1.h>
#include <PrivilegedThreadFactory.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $PrivilegedThreadFactory = ::PrivilegedThreadFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void PrivilegedThreadFactory$1::init$($PrivilegedThreadFactory* this$0, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

$Object* PrivilegedThreadFactory$1::run() {
	$var($Thread, t, $new($Thread, this->val$r));
	t->setDaemon(true);
	return t;
}

PrivilegedThreadFactory$1::PrivilegedThreadFactory$1() {
}

$Class* PrivilegedThreadFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPrivilegedThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(PrivilegedThreadFactory$1, this$0)},
		{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(PrivilegedThreadFactory$1, val$r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPrivilegedThreadFactory;Ljava/lang/Runnable;)V", "()V", 0, $method(PrivilegedThreadFactory$1, init$, void, $PrivilegedThreadFactory*, $Runnable*)},
		{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(PrivilegedThreadFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PrivilegedThreadFactory",
		"newThread",
		"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivilegedThreadFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivilegedThreadFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PrivilegedThreadFactory"
	};
	$loadClass(PrivilegedThreadFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedThreadFactory$1);
	});
	return class$;
}

$Class* PrivilegedThreadFactory$1::class$ = nullptr;