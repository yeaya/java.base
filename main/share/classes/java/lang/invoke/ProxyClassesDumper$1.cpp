#include <java/lang/invoke/ProxyClassesDumper$1.h>

#include <java/lang/invoke/ProxyClassesDumper.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxyClassesDumper = ::java::lang::invoke::ProxyClassesDumper;
using $Path = ::java::nio::file::Path;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _ProxyClassesDumper$1_FieldInfo_[] = {
	{"val$dir", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyClassesDumper$1, val$dir)},
	{}
};

$MethodInfo _ProxyClassesDumper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(ProxyClassesDumper$1::*)($Path*)>(&ProxyClassesDumper$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProxyClassesDumper$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.ProxyClassesDumper",
	"getInstance",
	"(Ljava/lang/String;)Ljava/lang/invoke/ProxyClassesDumper;"
};

$InnerClassInfo _ProxyClassesDumper$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.ProxyClassesDumper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProxyClassesDumper$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.ProxyClassesDumper$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProxyClassesDumper$1_FieldInfo_,
	_ProxyClassesDumper$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ProxyClassesDumper$1_EnclosingMethodInfo_,
	_ProxyClassesDumper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.ProxyClassesDumper"
};

$Object* allocate$ProxyClassesDumper$1($Class* clazz) {
	return $of($alloc(ProxyClassesDumper$1));
}

void ProxyClassesDumper$1::init$($Path* val$dir) {
	$set(this, val$dir, val$dir);
}

$Object* ProxyClassesDumper$1::run() {
	$ProxyClassesDumper::validateDumpDir(this->val$dir);
	return $of(nullptr);
}

ProxyClassesDumper$1::ProxyClassesDumper$1() {
}

$Class* ProxyClassesDumper$1::load$($String* name, bool initialize) {
	$loadClass(ProxyClassesDumper$1, name, initialize, &_ProxyClassesDumper$1_ClassInfo_, allocate$ProxyClassesDumper$1);
	return class$;
}

$Class* ProxyClassesDumper$1::class$ = nullptr;

		} // invoke
	} // lang
} // java