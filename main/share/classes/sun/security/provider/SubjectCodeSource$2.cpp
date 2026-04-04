#include <sun/security/provider/SubjectCodeSource$2.h>
#include <javax/security/auth/Subject.h>
#include <sun/security/provider/SubjectCodeSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;
using $SubjectCodeSource = ::sun::security::provider::SubjectCodeSource;

namespace sun {
	namespace security {
		namespace provider {

void SubjectCodeSource$2::init$($SubjectCodeSource* this$0, $Subject* val$finalSubject) {
	$set(this, this$0, this$0);
	$set(this, val$finalSubject, val$finalSubject);
}

$Object* SubjectCodeSource$2::run() {
	return $of($nc(this->val$finalSubject)->toString());
}

SubjectCodeSource$2::SubjectCodeSource$2() {
}

$Class* SubjectCodeSource$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/SubjectCodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$2, this$0)},
		{"val$finalSubject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$2, val$finalSubject)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/SubjectCodeSource;Ljavax/security/auth/Subject;)V", "()V", 0, $method(SubjectCodeSource$2, init$, void, $SubjectCodeSource*, $Subject*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.SubjectCodeSource",
		"toString",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SubjectCodeSource$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SubjectCodeSource$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SubjectCodeSource"
	};
	$loadClass(SubjectCodeSource$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectCodeSource$2);
	});
	return class$;
}

$Class* SubjectCodeSource$2::class$ = nullptr;

		} // provider
	} // security
} // sun