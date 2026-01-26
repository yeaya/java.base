#include <EnclosingConstructorWithSecurityManager$Inner.h>

#include <EnclosingConstructorWithSecurityManager$Inner$1.h>
#include <EnclosingConstructorWithSecurityManager.h>
#include <jcpp.h>

using $EnclosingConstructorWithSecurityManager$Inner$1 = ::EnclosingConstructorWithSecurityManager$Inner$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _EnclosingConstructorWithSecurityManager$Inner_FieldInfo_[] = {
	{"theInner", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticField(EnclosingConstructorWithSecurityManager$Inner, theInner)},
	{}
};

$MethodInfo _EnclosingConstructorWithSecurityManager$Inner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EnclosingConstructorWithSecurityManager$Inner, init$, void)},
	{}
};

$InnerClassInfo _EnclosingConstructorWithSecurityManager$Inner_InnerClassesInfo_[] = {
	{"EnclosingConstructorWithSecurityManager$Inner", "EnclosingConstructorWithSecurityManager", "Inner", $PUBLIC | $STATIC},
	{"EnclosingConstructorWithSecurityManager$Inner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingConstructorWithSecurityManager$Inner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnclosingConstructorWithSecurityManager$Inner",
	"java.lang.Object",
	nullptr,
	_EnclosingConstructorWithSecurityManager$Inner_FieldInfo_,
	_EnclosingConstructorWithSecurityManager$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_EnclosingConstructorWithSecurityManager$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorWithSecurityManager"
};

$Object* allocate$EnclosingConstructorWithSecurityManager$Inner($Class* clazz) {
	return $of($alloc(EnclosingConstructorWithSecurityManager$Inner));
}

$Class* EnclosingConstructorWithSecurityManager$Inner::theInner = nullptr;

void EnclosingConstructorWithSecurityManager$Inner::init$() {
	$var($Object, o, $new($EnclosingConstructorWithSecurityManager$Inner$1, this));
	$assignStatic(EnclosingConstructorWithSecurityManager$Inner::theInner, $of(o)->getClass());
}

EnclosingConstructorWithSecurityManager$Inner::EnclosingConstructorWithSecurityManager$Inner() {
}

$Class* EnclosingConstructorWithSecurityManager$Inner::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorWithSecurityManager$Inner, name, initialize, &_EnclosingConstructorWithSecurityManager$Inner_ClassInfo_, allocate$EnclosingConstructorWithSecurityManager$Inner);
	return class$;
}

$Class* EnclosingConstructorWithSecurityManager$Inner::class$ = nullptr;