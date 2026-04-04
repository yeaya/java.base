#include <sun/security/provider/SubjectCodeSource$1.h>
#include <java/lang/ClassLoader.h>
#include <sun/security/provider/SubjectCodeSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SubjectCodeSource = ::sun::security::provider::SubjectCodeSource;

namespace sun {
	namespace security {
		namespace provider {

void SubjectCodeSource$1::init$($SubjectCodeSource* this$0) {
	$set(this, this$0, this$0);
}

$Object* SubjectCodeSource$1::run() {
	$beforeCallerSensitive();
	return $ClassLoader::getSystemClassLoader();
}

SubjectCodeSource$1::SubjectCodeSource$1() {
}

$Class* SubjectCodeSource$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/SubjectCodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/SubjectCodeSource;)V", nullptr, 0, $method(SubjectCodeSource$1, init$, void, $SubjectCodeSource*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.SubjectCodeSource",
		"<init>",
		"(Ljavax/security/auth/Subject;Ljava/util/LinkedList;Ljava/net/URL;[Ljava/security/cert/Certificate;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SubjectCodeSource$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SubjectCodeSource$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.SubjectCodeSource"
	};
	$loadClass(SubjectCodeSource$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectCodeSource$1);
	});
	return class$;
}

$Class* SubjectCodeSource$1::class$ = nullptr;

		} // provider
	} // security
} // sun