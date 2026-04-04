#include <java/io/ObjectOutputStream$1.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;

namespace java {
	namespace io {

void ObjectOutputStream$1::init$($Class* val$subcl) {
	$set(this, val$subcl, val$subcl);
}

$Object* ObjectOutputStream$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$load($ObjectOutputStream);
		$Class* cl = this->val$subcl;
		for (; cl != $ObjectOutputStream::class$; cl = $nc(cl)->getSuperclass()) {
			try {
				$nc(cl)->getDeclaredMethod("writeUnshared"_s, $$new($ClassArray, {$Object::class$}));
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
			try {
				$nc(cl)->getDeclaredMethod("putFields"_s, ($ClassArray*)nullptr);
				return $of($Boolean::FALSE);
			} catch ($NoSuchMethodException& ex) {
			}
		}
	}
	return $of($Boolean::TRUE);
}

ObjectOutputStream$1::ObjectOutputStream$1() {
}

$Class* ObjectOutputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$subcl", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectOutputStream$1, val$subcl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(ObjectOutputStream$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectOutputStream",
		"auditSubclass",
		"(Ljava/lang/Class;)Ljava/lang/Boolean;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectOutputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectOutputStream$1",
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
		"java.io.ObjectOutputStream"
	};
	$loadClass(ObjectOutputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectOutputStream$1);
	});
	return class$;
}

$Class* ObjectOutputStream$1::class$ = nullptr;

	} // io
} // java