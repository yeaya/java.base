#include <java/io/ObjectInputStream$1.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;

namespace java {
	namespace io {

void ObjectInputStream$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* ObjectInputStream$1::run() {
	$beforeCallerSensitive();
	{
		$load($ObjectInputStream);
		$Class* cl = this->val$subcl;
		for (; cl != $ObjectInputStream::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				$nc(cl)->getDeclaredMethod("readUnshared"_s, ($ClassArray*)nullptr);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
			try {
				$nc(cl)->getDeclaredMethod("readFields"_s, ($ClassArray*)nullptr);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
		}
	}
	return $of($Boolean::TRUE);
}

ObjectInputStream$1::ObjectInputStream$1() {
}

$Class* ObjectInputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$1, val$subcl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(ObjectInputStream$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectInputStream",
		"auditSubclass",
		"(Ljava/lang/Class;)Ljava/lang/Boolean;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$1",
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
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$1);
	});
	return class$;
}

$Class* ObjectInputStream$1::class$ = nullptr;

	} // io
} // java