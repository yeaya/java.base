#include <java/lang/Thread$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;

namespace java {
	namespace lang {

void Thread$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* Thread$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$Class* cl = this->val$subcl;
		for (; cl != $Thread::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				$nc(cl)->getDeclaredMethod("getContextClassLoader"_s, $$new($ClassArray, 0));
				return $of($Boolean::TRUE);
			} catch ($NoSuchMethodException& ex) {
			}
			try {
				$load($ClassLoader);
				$var($ClassArray, params, $new($ClassArray, {$ClassLoader::class$}));
				$nc(cl)->getDeclaredMethod("setContextClassLoader"_s, params);
				return $of($Boolean::TRUE);
			} catch ($NoSuchMethodException& ex) {
			}
		}
	}
	return $of($Boolean::FALSE);
}

Thread$1::Thread$1() {
}

$Class* Thread$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Thread$1, val$subcl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(Thread$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Thread$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Thread",
		"auditSubclass",
		"(Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Thread$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Thread$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Thread"
	};
	$loadClass(Thread$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Thread$1);
	});
	return class$;
}

$Class* Thread$1::class$ = nullptr;

	} // lang
} // java