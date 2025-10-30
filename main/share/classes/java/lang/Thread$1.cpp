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
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {

$FieldInfo _Thread$1_FieldInfo_[] = {
	{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Thread$1, val$subcl)},
	{}
};

$MethodInfo _Thread$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(Thread$1::*)($Class*)>(&Thread$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Thread$1_EnclosingMethodInfo_ = {
	"java.lang.Thread",
	"auditSubclass",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _Thread$1_InnerClassesInfo_[] = {
	{"java.lang.Thread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Thread$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Thread$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Thread$1_FieldInfo_,
	_Thread$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_Thread$1_EnclosingMethodInfo_,
	_Thread$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Thread"
};

$Object* allocate$Thread$1($Class* clazz) {
	return $of($alloc(Thread$1));
}

void Thread$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* Thread$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$Class* cl = this->val$subcl;
		for (; cl != $Thread::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				cl->getDeclaredMethod("getContextClassLoader"_s, $$new($ClassArray, 0));
				$init($Boolean);
				return $of($Boolean::TRUE);
			} catch ($NoSuchMethodException& ex) {
			}
			try {
				$load($ClassLoader);
				$var($ClassArray, params, $new($ClassArray, {$ClassLoader::class$}));
				cl->getDeclaredMethod("setContextClassLoader"_s, params);
				$init($Boolean);
				return $of($Boolean::TRUE);
			} catch ($NoSuchMethodException& ex) {
			}
		}
	}
	$init($Boolean);
	return $of($Boolean::FALSE);
}

Thread$1::Thread$1() {
}

$Class* Thread$1::load$($String* name, bool initialize) {
	$loadClass(Thread$1, name, initialize, &_Thread$1_ClassInfo_, allocate$Thread$1);
	return class$;
}

$Class* Thread$1::class$ = nullptr;

	} // lang
} // java