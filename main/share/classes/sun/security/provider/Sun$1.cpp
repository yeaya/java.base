#include <sun/security/provider/Sun$1.h>

#include <java/util/Iterator.h>
#include <sun/security/provider/Sun.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Sun = ::sun::security::provider::Sun;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _Sun$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/Sun;", nullptr, $FINAL | $SYNTHETIC, $field(Sun$1, this$0)},
	{"val$serviceIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sun$1, val$serviceIter)},
	{}
};

$MethodInfo _Sun$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/Sun;Ljava/util/Iterator;)V", "()V", 0, $method(Sun$1, init$, void, $Sun*, $Iterator*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Sun$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _Sun$1_EnclosingMethodInfo_ = {
	"sun.security.provider.Sun",
	"<init>",
	"()V"
};

$InnerClassInfo _Sun$1_InnerClassesInfo_[] = {
	{"sun.security.provider.Sun$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sun$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.Sun$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Sun$1_FieldInfo_,
	_Sun$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Sun$1_EnclosingMethodInfo_,
	_Sun$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.Sun"
};

$Object* allocate$Sun$1($Class* clazz) {
	return $of($alloc(Sun$1));
}

void Sun$1::init$($Sun* this$0, $Iterator* val$serviceIter) {
	$set(this, this$0, this$0);
	$set(this, val$serviceIter, val$serviceIter);
}

$Object* Sun$1::run() {
	this->this$0->putEntries(this->val$serviceIter);
	return $of(nullptr);
}

Sun$1::Sun$1() {
}

$Class* Sun$1::load$($String* name, bool initialize) {
	$loadClass(Sun$1, name, initialize, &_Sun$1_ClassInfo_, allocate$Sun$1);
	return class$;
}

$Class* Sun$1::class$ = nullptr;

		} // provider
	} // security
} // sun