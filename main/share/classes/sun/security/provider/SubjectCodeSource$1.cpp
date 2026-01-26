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

$FieldInfo _SubjectCodeSource$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/SubjectCodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$1, this$0)},
	{}
};

$MethodInfo _SubjectCodeSource$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/SubjectCodeSource;)V", nullptr, 0, $method(SubjectCodeSource$1, init$, void, $SubjectCodeSource*)},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _SubjectCodeSource$1_EnclosingMethodInfo_ = {
	"sun.security.provider.SubjectCodeSource",
	"<init>",
	"(Ljavax/security/auth/Subject;Ljava/util/LinkedList;Ljava/net/URL;[Ljava/security/cert/Certificate;)V"
};

$InnerClassInfo _SubjectCodeSource$1_InnerClassesInfo_[] = {
	{"sun.security.provider.SubjectCodeSource$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectCodeSource$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SubjectCodeSource$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SubjectCodeSource$1_FieldInfo_,
	_SubjectCodeSource$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_SubjectCodeSource$1_EnclosingMethodInfo_,
	_SubjectCodeSource$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SubjectCodeSource"
};

$Object* allocate$SubjectCodeSource$1($Class* clazz) {
	return $of($alloc(SubjectCodeSource$1));
}

void SubjectCodeSource$1::init$($SubjectCodeSource* this$0) {
	$set(this, this$0, this$0);
}

$Object* SubjectCodeSource$1::run() {
	$beforeCallerSensitive();
	return $of($ClassLoader::getSystemClassLoader());
}

SubjectCodeSource$1::SubjectCodeSource$1() {
}

$Class* SubjectCodeSource$1::load$($String* name, bool initialize) {
	$loadClass(SubjectCodeSource$1, name, initialize, &_SubjectCodeSource$1_ClassInfo_, allocate$SubjectCodeSource$1);
	return class$;
}

$Class* SubjectCodeSource$1::class$ = nullptr;

		} // provider
	} // security
} // sun