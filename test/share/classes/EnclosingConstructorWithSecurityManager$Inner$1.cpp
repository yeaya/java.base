#include <EnclosingConstructorWithSecurityManager$Inner$1.h>

#include <EnclosingConstructorWithSecurityManager$Inner.h>
#include <jcpp.h>

using $EnclosingConstructorWithSecurityManager$Inner = ::EnclosingConstructorWithSecurityManager$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _EnclosingConstructorWithSecurityManager$Inner$1_FieldInfo_[] = {
	{"this$0", "LEnclosingConstructorWithSecurityManager$Inner;", nullptr, $FINAL | $SYNTHETIC, $field(EnclosingConstructorWithSecurityManager$Inner$1, this$0)},
	{}
};

$MethodInfo _EnclosingConstructorWithSecurityManager$Inner$1_MethodInfo_[] = {
	{"<init>", "(LEnclosingConstructorWithSecurityManager$Inner;)V", nullptr, 0, $method(static_cast<void(EnclosingConstructorWithSecurityManager$Inner$1::*)($EnclosingConstructorWithSecurityManager$Inner*)>(&EnclosingConstructorWithSecurityManager$Inner$1::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingConstructorWithSecurityManager$Inner$1_EnclosingMethodInfo_ = {
	"EnclosingConstructorWithSecurityManager$Inner",
	"<init>",
	"()V"
};

$InnerClassInfo _EnclosingConstructorWithSecurityManager$Inner$1_InnerClassesInfo_[] = {
	{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
	{"EnclosingConstructorWithSecurityManager$Inner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingConstructorWithSecurityManager$Inner$1_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingConstructorWithSecurityManager$Inner$1",
	"java.lang.Object",
	nullptr,
	_EnclosingConstructorWithSecurityManager$Inner$1_FieldInfo_,
	_EnclosingConstructorWithSecurityManager$Inner$1_MethodInfo_,
	nullptr,
	&_EnclosingConstructorWithSecurityManager$Inner$1_EnclosingMethodInfo_,
	_EnclosingConstructorWithSecurityManager$Inner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorWithSecurityManager"
};

$Object* allocate$EnclosingConstructorWithSecurityManager$Inner$1($Class* clazz) {
	return $of($alloc(EnclosingConstructorWithSecurityManager$Inner$1));
}

void EnclosingConstructorWithSecurityManager$Inner$1::init$($EnclosingConstructorWithSecurityManager$Inner* this$0) {
	$set(this, this$0, this$0);
}

EnclosingConstructorWithSecurityManager$Inner$1::EnclosingConstructorWithSecurityManager$Inner$1() {
}

$Class* EnclosingConstructorWithSecurityManager$Inner$1::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorWithSecurityManager$Inner$1, name, initialize, &_EnclosingConstructorWithSecurityManager$Inner$1_ClassInfo_, allocate$EnclosingConstructorWithSecurityManager$Inner$1);
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager$Inner$1::class$ = nullptr;